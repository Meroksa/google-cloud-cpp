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
// source: google/cloud/aiplatform/v1/index_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INDEX_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INDEX_CONNECTION_H

#include "google/cloud/aiplatform/v1/index_connection_idempotency_policy.h"
#include "google/cloud/aiplatform/v1/internal/index_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/aiplatform/v1/index_service.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using IndexServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        aiplatform_v1_internal::IndexServiceRetryTraits>;

using IndexServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        aiplatform_v1_internal::IndexServiceRetryTraits>;

using IndexServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        aiplatform_v1_internal::IndexServiceRetryTraits>;

/**
 * The `IndexServiceConnection` object for `IndexServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `IndexServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `IndexServiceClient`.
 *
 * To create a concrete instance, see `MakeIndexServiceConnection()`.
 *
 * For mocking, see `aiplatform_v1_mocks::MockIndexServiceConnection`.
 */
class IndexServiceConnection {
 public:
  virtual ~IndexServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::aiplatform::v1::Index>> CreateIndex(
      google::cloud::aiplatform::v1::CreateIndexRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::Index> GetIndex(
      google::cloud::aiplatform::v1::GetIndexRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::Index> ListIndexes(
      google::cloud::aiplatform::v1::ListIndexesRequest request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::Index>> UpdateIndex(
      google::cloud::aiplatform::v1::UpdateIndexRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteIndex(google::cloud::aiplatform::v1::DeleteIndexRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::UpsertDatapointsResponse>
  UpsertDatapoints(
      google::cloud::aiplatform::v1::UpsertDatapointsRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::RemoveDatapointsResponse>
  RemoveDatapoints(
      google::cloud::aiplatform::v1::RemoveDatapointsRequest const& request);
};

/**
 * A factory function to construct an object of type `IndexServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of IndexServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `IndexServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::aiplatform_v1::IndexServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `IndexServiceConnection` created by
 * this function.
 */
std::shared_ptr<IndexServiceConnection> MakeIndexServiceConnection(
    std::string const& location, Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INDEX_CONNECTION_H
