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
// source:
// google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_HTTPS_PROXIES_V1_INTERNAL_REGION_TARGET_HTTPS_PROXIES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_HTTPS_PROXIES_V1_INTERNAL_REGION_TARGET_HTTPS_PROXIES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/region_target_https_proxies/v1/internal/region_target_https_proxies_rest_stub.h"
#include "google/cloud/compute/region_target_https_proxies/v1/internal/region_target_https_proxies_retry_traits.h"
#include "google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies_connection.h"
#include "google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies_connection_idempotency_policy.h"
#include "google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_target_https_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionTargetHttpsProxiesRestConnectionImpl
    : public compute_region_target_https_proxies_v1::
          RegionTargetHttpsProxiesConnection {
 public:
  ~RegionTargetHttpsProxiesRestConnectionImpl() override = default;

  RegionTargetHttpsProxiesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_region_target_https_proxies_v1_internal::
                          RegionTargetHttpsProxiesRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetHttpsProxy(
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          DeleteTargetHttpsProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxy>
  GetTargetHttpsProxy(
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          GetTargetHttpsProxyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetHttpsProxy(
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          InsertTargetHttpsProxyRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::TargetHttpsProxy>
  ListRegionTargetHttpsProxies(
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          ListRegionTargetHttpsProxiesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchTargetHttpsProxy(
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          PatchTargetHttpsProxyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSslCertificates(google::cloud::cpp::compute::region_target_https_proxies::
                         v1::SetSslCertificatesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetUrlMap(
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          SetUrlMapRequest const& request) override;

 private:
  static std::unique_ptr<compute_region_target_https_proxies_v1::
                             RegionTargetHttpsProxiesRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_region_target_https_proxies_v1::
                 RegionTargetHttpsProxiesRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_region_target_https_proxies_v1::
                 RegionTargetHttpsProxiesBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_region_target_https_proxies_v1::
          RegionTargetHttpsProxiesConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_region_target_https_proxies_v1::
                 RegionTargetHttpsProxiesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_region_target_https_proxies_v1::
                 RegionTargetHttpsProxiesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_region_target_https_proxies_v1_internal::
                      RegionTargetHttpsProxiesRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_target_https_proxies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_HTTPS_PROXIES_V1_INTERNAL_REGION_TARGET_HTTPS_PROXIES_REST_CONNECTION_IMPL_H
