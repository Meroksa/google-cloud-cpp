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
// source: google/cloud/aiplatform/v1/featurestore_online_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_FEATURESTORE_ONLINE_SERVING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_FEATURESTORE_ONLINE_SERVING_CONNECTION_H

#include "google/cloud/aiplatform/v1/featurestore_online_serving_connection_idempotency_policy.h"
#include "google/cloud/aiplatform/v1/internal/featurestore_online_serving_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/aiplatform/v1/featurestore_online_service.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using FeaturestoreOnlineServingServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        aiplatform_v1_internal::FeaturestoreOnlineServingServiceRetryTraits>;

using FeaturestoreOnlineServingServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        aiplatform_v1_internal::FeaturestoreOnlineServingServiceRetryTraits>;

using FeaturestoreOnlineServingServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        aiplatform_v1_internal::FeaturestoreOnlineServingServiceRetryTraits>;

/**
 * The `FeaturestoreOnlineServingServiceConnection` object for
 * `FeaturestoreOnlineServingServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `FeaturestoreOnlineServingServiceClient`. This allows users to inject
 * custom behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `FeaturestoreOnlineServingServiceClient`.
 *
 * To create a concrete instance, see
 * `MakeFeaturestoreOnlineServingServiceConnection()`.
 *
 * For mocking, see
 * `aiplatform_v1_mocks::MockFeaturestoreOnlineServingServiceConnection`.
 */
class FeaturestoreOnlineServingServiceConnection {
 public:
  virtual ~FeaturestoreOnlineServingServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::aiplatform::v1::ReadFeatureValuesResponse>
  ReadFeatureValues(
      google::cloud::aiplatform::v1::ReadFeatureValuesRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::ReadFeatureValuesResponse>
  StreamingReadFeatureValues(
      google::cloud::aiplatform::v1::StreamingReadFeatureValuesRequest const&
          request);

  virtual StatusOr<google::cloud::aiplatform::v1::WriteFeatureValuesResponse>
  WriteFeatureValues(
      google::cloud::aiplatform::v1::WriteFeatureValuesRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `FeaturestoreOnlineServingServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * FeaturestoreOnlineServingServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `FeaturestoreOnlineServingServiceConnection`. Expected options are
 * any of the types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * -
 * `google::cloud::aiplatform_v1::FeaturestoreOnlineServingServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the
 * `FeaturestoreOnlineServingServiceConnection` created by this function.
 */
std::shared_ptr<FeaturestoreOnlineServingServiceConnection>
MakeFeaturestoreOnlineServingServiceConnection(std::string const& location,
                                               Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_FEATURESTORE_ONLINE_SERVING_CONNECTION_H
