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
// google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NOTIFICATION_ENDPOINTS_V1_INTERNAL_REGION_NOTIFICATION_ENDPOINTS_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NOTIFICATION_ENDPOINTS_V1_INTERNAL_REGION_NOTIFICATION_ENDPOINTS_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints.pb.h>
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_notification_endpoints_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionNotificationEndpointsRestStub {
 public:
  virtual ~RegionNotificationEndpointsRestStub() = default;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteNotificationEndpoint(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          DeleteNotificationEndpointRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::NotificationEndpoint>
  GetNotificationEndpoint(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          GetNotificationEndpointRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertNotificationEndpoint(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          InsertNotificationEndpointRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::NotificationEndpointList>
  ListRegionNotificationEndpoints(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          ListRegionNotificationEndpointsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) = 0;
};

class DefaultRegionNotificationEndpointsRestStub
    : public RegionNotificationEndpointsRestStub {
 public:
  ~DefaultRegionNotificationEndpointsRestStub() override = default;

  explicit DefaultRegionNotificationEndpointsRestStub(Options options);
  DefaultRegionNotificationEndpointsRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations, Options options);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteNotificationEndpoint(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          DeleteNotificationEndpointRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NotificationEndpoint>
  GetNotificationEndpoint(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          GetNotificationEndpointRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertNotificationEndpoint(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          InsertNotificationEndpointRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NotificationEndpointList>
  ListRegionNotificationEndpoints(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          ListRegionNotificationEndpointsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_notification_endpoints_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NOTIFICATION_ENDPOINTS_V1_INTERNAL_REGION_NOTIFICATION_ENDPOINTS_REST_STUB_H
