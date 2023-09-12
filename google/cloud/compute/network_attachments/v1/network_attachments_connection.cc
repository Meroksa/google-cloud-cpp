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
// source: google/cloud/compute/network_attachments/v1/network_attachments.proto

#include "google/cloud/compute/network_attachments/v1/network_attachments_connection.h"
#include "google/cloud/compute/network_attachments/v1/internal/network_attachments_option_defaults.h"
#include "google/cloud/compute/network_attachments/v1/internal/network_attachments_tracing_connection.h"
#include "google/cloud/compute/network_attachments/v1/network_attachments_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_attachments_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetworkAttachmentsConnection::~NetworkAttachmentsConnection() = default;

StatusOr<google::cloud::cpp::compute::v1::NetworkAttachmentAggregatedList>
NetworkAttachmentsConnection::AggregatedListNetworkAttachments(
    google::cloud::cpp::compute::network_attachments::v1::
        AggregatedListNetworkAttachmentsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkAttachmentsConnection::DeleteNetworkAttachment(
    google::cloud::cpp::compute::network_attachments::v1::
        DeleteNetworkAttachmentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::NetworkAttachment>
NetworkAttachmentsConnection::GetNetworkAttachment(
    google::cloud::cpp::compute::network_attachments::v1::
        GetNetworkAttachmentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NetworkAttachmentsConnection::GetIamPolicy(
    google::cloud::cpp::compute::network_attachments::v1::
        GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkAttachmentsConnection::InsertNetworkAttachment(
    google::cloud::cpp::compute::network_attachments::v1::
        InsertNetworkAttachmentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::NetworkAttachment>
NetworkAttachmentsConnection::ListNetworkAttachments(
    google::cloud::cpp::compute::network_attachments::v1::
        ListNetworkAttachmentsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::NetworkAttachment>>();
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NetworkAttachmentsConnection::SetIamPolicy(
    google::cloud::cpp::compute::network_attachments::v1::
        SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NetworkAttachmentsConnection::TestIamPermissions(
    google::cloud::cpp::compute::network_attachments::v1::
        TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_attachments_v1
}  // namespace cloud
}  // namespace google
