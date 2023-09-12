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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_INTERNAL_NODE_GROUPS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_INTERNAL_NODE_GROUPS_TRACING_CONNECTION_H

#include "google/cloud/compute/node_groups/v1/node_groups_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_node_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class NodeGroupsTracingConnection
    : public compute_node_groups_v1::NodeGroupsConnection {
 public:
  ~NodeGroupsTracingConnection() override = default;

  explicit NodeGroupsTracingConnection(
      std::shared_ptr<compute_node_groups_v1::NodeGroupsConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddNodes(
      google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::NodeGroupAggregatedList>
  AggregatedListNodeGroups(
      google::cloud::cpp::compute::node_groups::v1::
          AggregatedListNodeGroupsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteNodeGroup(
      google::cloud::cpp::compute::node_groups::v1::
          DeleteNodeGroupRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteNodes(
      google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::NodeGroup> GetNodeGroup(
      google::cloud::cpp::compute::node_groups::v1::GetNodeGroupRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::node_groups::v1::GetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertNodeGroup(
      google::cloud::cpp::compute::node_groups::v1::
          InsertNodeGroupRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::NodeGroup> ListNodeGroups(
      google::cloud::cpp::compute::node_groups::v1::ListNodeGroupsRequest
          request) override;

  StreamRange<google::cloud::cpp::compute::v1::NodeGroupNode> ListNodes(
      google::cloud::cpp::compute::node_groups::v1::ListNodesRequest request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchNodeGroup(
      google::cloud::cpp::compute::node_groups::v1::PatchNodeGroupRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::node_groups::v1::SetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetNodeTemplate(
      google::cloud::cpp::compute::node_groups::v1::
          SetNodeTemplateRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SimulateMaintenanceEvent(
      google::cloud::cpp::compute::node_groups::v1::
          SimulateMaintenanceEventRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::node_groups::v1::
                         TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<compute_node_groups_v1::NodeGroupsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_node_groups_v1::NodeGroupsConnection>
MakeNodeGroupsTracingConnection(
    std::shared_ptr<compute_node_groups_v1::NodeGroupsConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_groups_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_INTERNAL_NODE_GROUPS_TRACING_CONNECTION_H
