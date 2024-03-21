// Copyright 2024 Google LLC
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
// google/cloud/compute/instance_group_manager_resize_requests/v1/instance_group_manager_resize_requests.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_V1_INTERNAL_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_REST_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_V1_INTERNAL_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_REST_LOGGING_DECORATOR_H

#include "google/cloud/compute/instance_group_manager_resize_requests/v1/internal/instance_group_manager_resize_requests_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/instance_group_manager_resize_requests/v1/instance_group_manager_resize_requests.pb.h>
#include <google/cloud/compute/zone_operations/v1/zone_operations.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace compute_instance_group_manager_resize_requests_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InstanceGroupManagerResizeRequestsRestLogging
    : public InstanceGroupManagerResizeRequestsRestStub {
 public:
  ~InstanceGroupManagerResizeRequestsRestLogging() override = default;
  InstanceGroupManagerResizeRequestsRestLogging(
      std::shared_ptr<InstanceGroupManagerResizeRequestsRestStub> child,
      TracingOptions tracing_options, std::set<std::string> components);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncCancel(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          CancelRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteInstanceGroupManagerResizeRequest(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          DeleteInstanceGroupManagerResizeRequestRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManagerResizeRequest>
  GetInstanceGroupManagerResizeRequest(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          GetInstanceGroupManagerResizeRequestRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertInstanceGroupManagerResizeRequest(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          InsertInstanceGroupManagerResizeRequestRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::
               InstanceGroupManagerResizeRequestsListResponse>
  ListInstanceGroupManagerResizeRequests(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          ListInstanceGroupManagerResizeRequestsRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::zone_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<InstanceGroupManagerResizeRequestsRestStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_group_manager_resize_requests_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_V1_INTERNAL_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_REST_LOGGING_DECORATOR_H
