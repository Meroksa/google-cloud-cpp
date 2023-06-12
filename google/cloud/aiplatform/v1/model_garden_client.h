// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/aiplatform/v1/model_garden_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MODEL_GARDEN_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MODEL_GARDEN_CLIENT_H

#include "google/cloud/aiplatform/v1/model_garden_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The interface of Model Garden Service.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class ModelGardenServiceClient {
 public:
  explicit ModelGardenServiceClient(
      std::shared_ptr<ModelGardenServiceConnection> connection,
      Options opts = {});
  ~ModelGardenServiceClient();

  ///@{
  /// @name Copy and move support
  ModelGardenServiceClient(ModelGardenServiceClient const&) = default;
  ModelGardenServiceClient& operator=(ModelGardenServiceClient const&) =
      default;
  ModelGardenServiceClient(ModelGardenServiceClient&&) = default;
  ModelGardenServiceClient& operator=(ModelGardenServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ModelGardenServiceClient const& a,
                         ModelGardenServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ModelGardenServiceClient const& a,
                         ModelGardenServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Gets a Model Garden publisher model.
  ///
  /// @param name  Required. The name of the PublisherModel resource.
  ///  Format:
  ///  `publishers/{publisher}/models/{publisher_model}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.PublisherModel])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.GetPublisherModelRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/model_garden_service.proto#L66}
  /// [google.cloud.aiplatform.v1.PublisherModel]: @googleapis_reference_link{google/cloud/aiplatform/v1/publisher_model.proto#L33}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::PublisherModel> GetPublisherModel(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets a Model Garden publisher model.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.GetPublisherModelRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.PublisherModel])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.GetPublisherModelRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/model_garden_service.proto#L66}
  /// [google.cloud.aiplatform.v1.PublisherModel]: @googleapis_reference_link{google/cloud/aiplatform/v1/publisher_model.proto#L33}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::PublisherModel> GetPublisherModel(
      google::cloud::aiplatform::v1::GetPublisherModelRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ModelGardenServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MODEL_GARDEN_CLIENT_H
