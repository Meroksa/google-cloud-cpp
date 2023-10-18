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
// google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups.proto

#include "google/cloud/compute/network_endpoint_groups/v1/internal/network_endpoint_groups_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_endpoint_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NetworkEndpointGroupsTracingConnection::NetworkEndpointGroupsTracingConnection(
    std::shared_ptr<
        compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnection>
        child)
    : child_(std::move(child)) {}

StreamRange<
    std::pair<std::string,
              google::cloud::cpp::compute::v1::NetworkEndpointGroupsScopedList>>
NetworkEndpointGroupsTracingConnection::AggregatedListNetworkEndpointGroups(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        AggregatedListNetworkEndpointGroupsRequest request) {
  auto span = internal::MakeSpan(
      "compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnection::"
      "AggregatedListNetworkEndpointGroups");
  internal::OTelScope scope(span);
  auto sr = child_->AggregatedListNetworkEndpointGroups(std::move(request));
  return internal::MakeTracedStreamRange<std::pair<
      std::string,
      google::cloud::cpp::compute::v1::NetworkEndpointGroupsScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEndpointGroupsTracingConnection::AttachNetworkEndpoints(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        AttachNetworkEndpointsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnection::"
      "AttachNetworkEndpoints");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->AttachNetworkEndpoints(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEndpointGroupsTracingConnection::DeleteNetworkEndpointGroup(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        DeleteNetworkEndpointGroupRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnection::"
      "DeleteNetworkEndpointGroup");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteNetworkEndpointGroup(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEndpointGroupsTracingConnection::DetachNetworkEndpoints(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        DetachNetworkEndpointsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnection::"
      "DetachNetworkEndpoints");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DetachNetworkEndpoints(request));
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
NetworkEndpointGroupsTracingConnection::GetNetworkEndpointGroup(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        GetNetworkEndpointGroupRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnection::"
      "GetNetworkEndpointGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNetworkEndpointGroup(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEndpointGroupsTracingConnection::InsertNetworkEndpointGroup(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        InsertNetworkEndpointGroupRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnection::"
      "InsertNetworkEndpointGroup");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertNetworkEndpointGroup(request));
}

StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
NetworkEndpointGroupsTracingConnection::ListNetworkEndpointGroups(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        ListNetworkEndpointGroupsRequest request) {
  auto span = internal::MakeSpan(
      "compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnection::"
      "ListNetworkEndpointGroups");
  internal::OTelScope scope(span);
  auto sr = child_->ListNetworkEndpointGroups(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::NetworkEndpointGroup>(std::move(span),
                                                             std::move(sr));
}

StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>
NetworkEndpointGroupsTracingConnection::ListNetworkEndpoints(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        ListNetworkEndpointsRequest request) {
  auto span = internal::MakeSpan(
      "compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnection::"
      "ListNetworkEndpoints");
  internal::OTelScope scope(span);
  auto sr = child_->ListNetworkEndpoints(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NetworkEndpointGroupsTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnection::"
      "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<
    compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnection>
MakeNetworkEndpointGroupsTracingConnection(
    std::shared_ptr<
        compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<NetworkEndpointGroupsTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_endpoint_groups_v1_internal
}  // namespace cloud
}  // namespace google
