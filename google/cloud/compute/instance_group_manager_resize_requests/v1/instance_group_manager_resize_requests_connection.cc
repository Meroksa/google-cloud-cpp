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

#include "google/cloud/compute/instance_group_manager_resize_requests/v1/instance_group_manager_resize_requests_connection.h"
#include "google/cloud/compute/instance_group_manager_resize_requests/v1/instance_group_manager_resize_requests_options.h"
#include "google/cloud/compute/instance_group_manager_resize_requests/v1/internal/instance_group_manager_resize_requests_option_defaults.h"
#include "google/cloud/compute/instance_group_manager_resize_requests/v1/internal/instance_group_manager_resize_requests_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_instance_group_manager_resize_requests_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstanceGroupManagerResizeRequestsConnection::
    ~InstanceGroupManagerResizeRequestsConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagerResizeRequestsConnection::Cancel(
    google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
        CancelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagerResizeRequestsConnection::
    DeleteInstanceGroupManagerResizeRequest(
        google::cloud::cpp::compute::instance_group_manager_resize_requests::
            v1::DeleteInstanceGroupManagerResizeRequestRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManagerResizeRequest>
InstanceGroupManagerResizeRequestsConnection::
    GetInstanceGroupManagerResizeRequest(
        google::cloud::cpp::compute::instance_group_manager_resize_requests::
            v1::GetInstanceGroupManagerResizeRequestRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagerResizeRequestsConnection::
    InsertInstanceGroupManagerResizeRequest(
        google::cloud::cpp::compute::instance_group_manager_resize_requests::
            v1::InsertInstanceGroupManagerResizeRequestRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::InstanceGroupManagerResizeRequest>
InstanceGroupManagerResizeRequestsConnection::
    ListInstanceGroupManagerResizeRequests(
        google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
            ListInstanceGroupManagerResizeRequestsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::cpp::compute::v1::InstanceGroupManagerResizeRequest>>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_group_manager_resize_requests_v1
}  // namespace cloud
}  // namespace google
