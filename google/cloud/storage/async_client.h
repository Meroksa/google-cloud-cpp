// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_ASYNC_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_ASYNC_CLIENT_H

#include "google/cloud/storage/internal/async/connection.h"
#include "google/cloud/storage/internal/async/write_payload_impl.h"
#include "google/cloud/storage/internal/object_requests.h"
#include "google/cloud/storage/version.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/internal/group_options.h"
#include "google/cloud/status_or.h"

namespace google {
namespace cloud {
namespace storage_experimental {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A client for Google Cloud Storage offering asynchronous operations.
 *
 * @note This class is experimental, it is subject to change without notice.
 *
 * @par Optional Request Options
 * Most of the member functions in this class can receive optional request
 * options. For example, the default when deleting an object is to delete the
 * latest version:
 *
 * @code
 * auto pending = gcs.DeleteObject("my-bucket", "my-object");
 * @endcode
 *
 * Some applications may want to delete a specific version. In this case just
 * provide the `Generation` request option:
 *
 * @code
 * auto pending = gcs.DeleteObject(
 *     "my-bucket", "my-object", gcs::Generation(generation));
 * @endcode
 *
 * Each function documents the types accepted as optional request options. These
 * parameters can be specified in any order. Specifying a request option that is
 * not applicable to a member function results in a compile-time error.
 *
 * All operations support the following common request options:
 *
 * - `Fields`: return a [partial response], which includes only the desired
 *   fields.
 * - `QuotaUser`: attribute the request to this specific label for quota
 *   purposes.
 * - `UserProject`: change the request costs (if applicable) to this GCP
 *   project.
 * - `CustomHeader`: include a custom header with the request. These are
 *   typically used for testing, though they are sometimes helpful if
 *   environments where HTTPS traffic is mediated by a proxy.
 * - `UserIp`: attribute the request to this specific IP address for quota
 *   purpose. Not recommended, prefer `QuotaUser` instead.
 *
 * [partial response]:
 * https://cloud.google.com/storage/docs/json_api#partial-response
 *
 * @par Per-operation Overrides
 *
 * In addition to the request options, which are passed on to the service to
 * modify the request, you can specify options that override the local behavior
 * of the library.  For example, you can override the local retry policy:
 *
 * @code
 * auto pending = gcs.DeleteObject(
 *     "my-bucket", "my-object",
 *      google::cloud::Options{}
 *          .set<gcs::RetryPolicyOption>(
 *              gcs::LimitedErrorCountRetryPolicy(5).clone()));
 * @endcode
 *
 * @par Retry, Backoff, and Idempotency Policies
 *
 * The library automatically retries requests that fail with transient errors,
 * and follows the [recommended practice][exponential-backoff] to backoff
 * between retries.
 *
 * The default policies are to continue retrying for up to 15 minutes, and to
 * use truncated (at 5 minutes) exponential backoff, doubling the maximum
 * backoff period between retries. Likewise, the idempotency policy is
 * configured to retry all operations.
 *
 * The application can override these policies when constructing objects of this
 * class. The documentation for the constructors shows examples of this in
 * action.
 *
 * [exponential-backoff]:
 * https://cloud.google.com/storage/docs/exponential-backoff
 */
class AsyncClient {
 public:
  ~AsyncClient() = default;

  /**
   * Creates an object given its name and contents.
   *
   * @param bucket_name the name of the bucket that will contain the object.
   * @param object_name the name of the object to be created.
   * @param contents the contents (media) for the new object.
   * @param args a list of optional query parameters and/or request headers.
   *     Valid types for this operation include `ContentEncoding`,
   *     `ContentType`, `Crc32cChecksumValue`, `DisableCrc32cChecksum`,
   *     `DisableMD5Hash`, `EncryptionKey`, `IfGenerationMatch`,
   *     `IfGenerationNotMatch`, `IfMetagenerationMatch`,
   *     `IfMetagenerationNotMatch`, `KmsKeyName`, `MD5HashValue`,
   *     `PredefinedAcl`, `Projection`, `UserProject`, and `WithObjectMetadata`.
   * @tparam Collection the type for the payload. This must be convertible to
   *   `std::string`, `std::vector<CharType>`, `std::vector<std::string>`, or
   *   `std::vector<std::vector<ChartType>>`. Where `ChartType` is a `char`,
   *   `signed char`, `unsigned char`, or `std::uint8_t`.
   * @tparam Args the types of any optional arguments.
   *
   * @par Idempotency
   * This operation is only idempotent if restricted by pre-conditions, in this
   * case, `IfGenerationMatch`.
   *
   * @par Example
   * @snippet storage_async_samples.cc insert-object
   */
  template <typename Collection, typename... Args>
  future<StatusOr<storage::ObjectMetadata>> InsertObject(
      std::string bucket_name, std::string object_name, Collection&& contents,
      Args&&... args) {
    auto options = SpanOptions(std::forward<Args>(args)...);
    return connection_->AsyncInsertObject(
        {/*.request=*/InsertObjectRequest(std::move(bucket_name),
                                          std::move(object_name))
             .set_multiple_options(std::forward<Args>(args)...),
         /*.payload=*/
         storage_internal::MakeWritePayload(std::forward<Collection>(contents)),
         /*.options=*/std::move(options)});
  }

  /**
   * Reads the contents of an object.
   *
   * When satisfied, the returned future has the contents of the given object
   * between @p offset and @p offset + @p limit (exclusive).
   *
   * Be aware that this will accumulate all the bytes in memory, you need to
   * consider whether @p limit is too large for your deployment environment.
   *
   * @param bucket_name the name of the bucket that contains the object.
   * @param object_name the name of the object to be read.
   * @param offset where to begin reading from the object, results in an error
   *     if the offset is larger than the object
   * @param limit how much data to read starting at @p offset
   * @param options a list of optional query parameters and/or request headers.
   *     Valid types for this operation include `DisableCrc32cChecksum`,
   *     `DisableMD5Hash`, `EncryptionKey`, `Generation`, `IfGenerationMatch`,
   *     `IfGenerationNotMatch`, `IfMetagenerationMatch`,
   *     `IfMetagenerationNotMatch`, `UserProject`, and `AcceptEncoding`.
   *
   * @par Idempotency
   * This is a read-only operation and is always idempotent.
   */
  template <typename... RequestOptions>
  future<AsyncReadObjectRangeResponse> ReadObject(
      std::string const& bucket_name, std::string const& object_name,
      std::int64_t offset, std::int64_t limit, RequestOptions&&... options) {
    struct HasReadRange
        : public absl::disjunction<
              std::is_same<storage::ReadRange, RequestOptions>...> {};
    struct HasReadFromOffset
        : public absl::disjunction<
              std::is_same<storage::ReadFromOffset, RequestOptions>...> {};
    struct HasReadLast
        : public absl::disjunction<
              std::is_same<storage::ReadLast, RequestOptions>...> {};

    static_assert(!HasReadRange::value,
                  "Cannot use `ReadRange()` as a request option in "
                  "`AsyncClient::ReadObject()`, use the `offset` and `limit` "
                  "parameters instead.");
    static_assert(!HasReadFromOffset::value,
                  "Cannot use `ReadFromOffset()` as a request option in "
                  "`AsyncClient::ReadObject()`, use the `offset` and `limit` "
                  "parameters instead.");
    static_assert(!HasReadLast::value,
                  "Cannot use `ReadLast()` as a request option in "
                  "`AsyncClient::ReadObject()`, use the `offset` and `limit` "
                  "parameters instead.");

    google::cloud::internal::OptionsSpan const span(
        SpanOptions(std::forward<Options>(options)...));
    storage::internal::ReadObjectRangeRequest request(bucket_name, object_name);
    request.set_multiple_options(std::forward<Options>(options)...,
                                 storage::ReadRange(offset, offset + limit));
    return connection_->AsyncReadObjectRange(std::move(request));
  }

  /**
   * Composes existing objects into a new object in the same bucket.
   *
   * @param bucket_name the name of the bucket used for source object and
   *     destination object.
   * @param source_objects objects used to compose `destination_object_name`.
   * @param destination_object_name the composed object name.
   * @param options a list of optional query parameters and/or request headers.
   *     Valid types for this operation include
   *      `DestinationPredefinedAcl`, `EncryptionKey`, `IfGenerationMatch`,
   *      `IfMetagenerationMatch`, `KmsKeyName`, `UserProject`, and
   *      `WithObjectMetadata`.
   *
   * @par Idempotency
   * This operation is only idempotent if restricted by pre-conditions, in this
   * case, `IfGenerationMatch`.
   */
  template <typename... Options>
  future<StatusOr<storage::ObjectMetadata>> ComposeObject(
      std::string bucket_name,
      std::vector<storage::ComposeSourceObject> source_objects,
      std::string destination_object_name, Options&&... options) {
    google::cloud::internal::OptionsSpan const span(
        SpanOptions(std::forward<Options>(options)...));
    storage::internal::ComposeObjectRequest request(
        std::move(bucket_name), std::move(source_objects),
        std::move(destination_object_name));
    request.set_multiple_options(std::forward<Options>(options)...);
    return connection_->AsyncComposeObject(request);
  }

  /**
   * Deletes an object.
   *
   * @param bucket_name the name of the bucket that contains the object.
   * @param object_name the name of the object to be deleted.
   * @param options a list of optional query parameters and/or request headers.
   *     Valid types for this operation include `Generation`,
   *     `IfGenerationMatch`, `IfGenerationNotMatch`, `IfMetagenerationMatch`,
   *     `IfMetagenerationNotMatch`, and `UserProject`.
   *     See the class description for common request options.
   *
   * @par Idempotency
   * This operation is only idempotent if:
   * - restricted by pre-conditions, in this case, `IfGenerationMatch`
   * - or, if it applies to only one object version via `Generation`.
   *
   * @par Example
   * @snippet storage_async_samples.cc delete-object
   */
  template <typename... RequestOptions>
  future<Status> DeleteObject(std::string const& bucket_name,
                              std::string const& object_name,
                              RequestOptions&&... options) {
    google::cloud::internal::OptionsSpan const span(
        SpanOptions(std::forward<RequestOptions>(options)...));
    storage::internal::DeleteObjectRequest request(bucket_name, object_name);
    request.set_multiple_options(std::forward<RequestOptions>(options)...);
    return connection_->AsyncDeleteObject(std::move(request));
  }

  /**
   * Starts a resumable upload.
   *
   * This creates an upload id, which later can be used to upload an object.
   * [Resumable uploads][resumable-link] can continue, even if the program
   * performing the upload needs to restart.
   *
   * @note When resuming uploads it is the application's responsibility to save
   *     the upload id to restart the upload later.
   *
   * For small uploads we recommend using `InsertObject`, consult
   * [the documentation][how-to-upload-link] for details.
   *
   * @param bucket_name the name of the bucket that contains the object.
   * @param object_name the name of the object to be read.
   * @param options a list of optional query parameters and/or request headers.
   *   Valid types for this operation include `ContentEncoding`, `ContentType`,
   *   `Crc32cChecksumValue`, `DisableCrc32cChecksum`, `DisableMD5Hash`,
   *   `EncryptionKey`, `IfGenerationMatch`, `IfGenerationNotMatch`,
   *   `IfMetagenerationMatch`, `IfMetagenerationNotMatch`, `KmsKeyName`,
   *   `MD5HashValue`, `PredefinedAcl`, `Projection`, `UserProject`,
   *   `WithObjectMetadata`, `UploadContentLength`, `AutoFinalize`, and
   *   `UploadBufferSize`.
   *
   * @par Idempotency
   * This operation is always idempotent.  The only side-effect is the creation
   * of a resumable upload id, which are automatically garbage collected after
   * 7 days, and have no additional costs.  Furthermore, this side-effect is
   * not observable, as there is no way to list the current upload ids.
   *
   * @see [Resumable Uploads][resumable-link] for more information about
   *     resumable uploads.
   *
   * [resumable-link]: https://cloud.google.com/storage/docs/resumable-uploads
   * [how-to-upload-link]:
   * https://cloud.google.com/storage/docs/json_api/v1/how-tos/upload
   */
  template <typename... RequestOptions>
  future<StatusOr<std::string>> StartResumableUpload(
      std::string const& bucket_name, std::string const& object_name,
      RequestOptions&&... options) {
    struct HasUseResumableUploadSession
        : public absl::disjunction<std::is_same<
              storage::UseResumableUploadSession, RequestOptions>...> {};
    static_assert(!HasUseResumableUploadSession::value,
                  "Cannot use `UseResumableUploadSession` as a request option "
                  "in `AsyncClient::StartResumableUpload()`. If you want to "
                  "resume the upload, simply use the existing upload id.");

    google::cloud::internal::OptionsSpan const span(
        SpanOptions(std::forward<Options>(options)...));
    storage::internal::ResumableUploadRequest request(bucket_name, object_name);
    request.set_multiple_options(std::forward<Options>(options)...);
    return connection_->AsyncStartResumableWrite(std::move(request));
  }

 private:
  friend AsyncClient MakeAsyncClient(Options opts);
  explicit AsyncClient(
      std::shared_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<storage_internal::AsyncConnection> connection);

  template <typename... RequestOptions>
  google::cloud::Options SpanOptions(RequestOptions&&... o) const {
    return google::cloud::internal::GroupOptions(
        connection_->options(), std::forward<RequestOptions>(o)...);
  }

  std::shared_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<storage_internal::AsyncConnection> connection_;
};

// TODO(#7142) - expose a factory function / constructor consuming
//     std::shared_ptr<AsyncConnection> when we have a plan for mocking
/// Creates a new GCS client exposing asynchronous APIs.
AsyncClient MakeAsyncClient(Options opts = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_experimental
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_ASYNC_CLIENT_H
