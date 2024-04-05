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
// source: google/cloud/compute/node_groups/v1/node_groups.proto

#include "google/cloud/compute/node_groups/v1/internal/node_groups_rest_metadata_decorator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/rest_set_metadata.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_node_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NodeGroupsRestMetadata::NodeGroupsRestMetadata(
    std::shared_ptr<NodeGroupsRestStub> child, std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestMetadata::AsyncAddNodes(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncAddNodes(cq, std::move(rest_context), std::move(options),
                               request);
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroupAggregatedList>
NodeGroupsRestMetadata::AggregatedListNodeGroups(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::node_groups::v1::
        AggregatedListNodeGroupsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->AggregatedListNodeGroups(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestMetadata::AsyncDeleteNodeGroup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::node_groups::v1::DeleteNodeGroupRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteNodeGroup(cq, std::move(rest_context),
                                      std::move(options), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestMetadata::AsyncDeleteNodes(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteNodes(cq, std::move(rest_context),
                                  std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroup>
NodeGroupsRestMetadata::GetNodeGroup(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::node_groups::v1::GetNodeGroupRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetNodeGroup(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeGroupsRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::node_groups::v1::GetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetIamPolicy(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestMetadata::AsyncInsertNodeGroup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::node_groups::v1::InsertNodeGroupRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncInsertNodeGroup(cq, std::move(rest_context),
                                      std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroupList>
NodeGroupsRestMetadata::ListNodeGroups(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::node_groups::v1::ListNodeGroupsRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->ListNodeGroups(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroupsListNodes>
NodeGroupsRestMetadata::ListNodes(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::node_groups::v1::ListNodesRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->ListNodes(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestMetadata::AsyncPatchNodeGroup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::node_groups::v1::PatchNodeGroupRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncPatchNodeGroup(cq, std::move(rest_context),
                                     std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeGroupsRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::node_groups::v1::SetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->SetIamPolicy(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestMetadata::AsyncSetNodeTemplate(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::node_groups::v1::SetNodeTemplateRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncSetNodeTemplate(cq, std::move(rest_context),
                                      std::move(options), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestMetadata::AsyncSimulateMaintenanceEvent(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::node_groups::v1::
        SimulateMaintenanceEventRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncSimulateMaintenanceEvent(cq, std::move(rest_context),
                                               std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NodeGroupsRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::node_groups::v1::
        TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->TestIamPermissions(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> NodeGroupsRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void NodeGroupsRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  google::cloud::rest_internal::SetMetadata(rest_context, options, params,
                                            api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_groups_v1_internal
}  // namespace cloud
}  // namespace google
