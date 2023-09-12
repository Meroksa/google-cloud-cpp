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
// source: google/cloud/compute/global_addresses/v1/global_addresses.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ADDRESSES_V1_INTERNAL_GLOBAL_ADDRESSES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ADDRESSES_V1_INTERNAL_GLOBAL_ADDRESSES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/global_addresses/v1/global_addresses_connection.h"
#include "google/cloud/compute/global_addresses/v1/global_addresses_connection_idempotency_policy.h"
#include "google/cloud/compute/global_addresses/v1/global_addresses_options.h"
#include "google/cloud/compute/global_addresses/v1/internal/global_addresses_rest_stub.h"
#include "google/cloud/compute/global_addresses/v1/internal/global_addresses_retry_traits.h"
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
namespace compute_global_addresses_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GlobalAddressesRestConnectionImpl
    : public compute_global_addresses_v1::GlobalAddressesConnection {
 public:
  ~GlobalAddressesRestConnectionImpl() override = default;

  GlobalAddressesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          compute_global_addresses_v1_internal::GlobalAddressesRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteAddress(
      google::cloud::cpp::compute::global_addresses::v1::
          DeleteAddressRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Address> GetAddress(
      google::cloud::cpp::compute::global_addresses::v1::
          GetAddressRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertAddress(
      google::cloud::cpp::compute::global_addresses::v1::
          InsertAddressRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::Address> ListGlobalAddresses(
      google::cloud::cpp::compute::global_addresses::v1::
          ListGlobalAddressesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Move(
      google::cloud::cpp::compute::global_addresses::v1::MoveRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::global_addresses::v1::SetLabelsRequest const&
          request) override;

 private:
  static std::unique_ptr<
      compute_global_addresses_v1::GlobalAddressesRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_global_addresses_v1::GlobalAddressesRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_global_addresses_v1::GlobalAddressesBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_global_addresses_v1::GlobalAddressesConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_global_addresses_v1::
                 GlobalAddressesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_global_addresses_v1::GlobalAddressesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_global_addresses_v1_internal::GlobalAddressesRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_addresses_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ADDRESSES_V1_INTERNAL_GLOBAL_ADDRESSES_REST_CONNECTION_IMPL_H
