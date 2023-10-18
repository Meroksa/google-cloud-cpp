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
// source: google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto

#include "google/cloud/compute/vpn_tunnels/v1/internal/vpn_tunnels_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_vpn_tunnels_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

VpnTunnelsTracingConnection::VpnTunnelsTracingConnection(
    std::shared_ptr<compute_vpn_tunnels_v1::VpnTunnelsConnection> child)
    : child_(std::move(child)) {}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::VpnTunnelsScopedList>>
VpnTunnelsTracingConnection::AggregatedListVpnTunnels(
    google::cloud::cpp::compute::vpn_tunnels::v1::
        AggregatedListVpnTunnelsRequest request) {
  auto span = internal::MakeSpan(
      "compute_vpn_tunnels_v1::VpnTunnelsConnection::AggregatedListVpnTunnels");
  internal::OTelScope scope(span);
  auto sr = child_->AggregatedListVpnTunnels(std::move(request));
  return internal::MakeTracedStreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::VpnTunnelsScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnTunnelsTracingConnection::DeleteVpnTunnel(
    google::cloud::cpp::compute::vpn_tunnels::v1::DeleteVpnTunnelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_vpn_tunnels_v1::VpnTunnelsConnection::DeleteVpnTunnel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteVpnTunnel(request));
}

StatusOr<google::cloud::cpp::compute::v1::VpnTunnel>
VpnTunnelsTracingConnection::GetVpnTunnel(
    google::cloud::cpp::compute::vpn_tunnels::v1::GetVpnTunnelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_vpn_tunnels_v1::VpnTunnelsConnection::GetVpnTunnel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetVpnTunnel(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnTunnelsTracingConnection::InsertVpnTunnel(
    google::cloud::cpp::compute::vpn_tunnels::v1::InsertVpnTunnelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_vpn_tunnels_v1::VpnTunnelsConnection::InsertVpnTunnel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->InsertVpnTunnel(request));
}

StreamRange<google::cloud::cpp::compute::v1::VpnTunnel>
VpnTunnelsTracingConnection::ListVpnTunnels(
    google::cloud::cpp::compute::vpn_tunnels::v1::ListVpnTunnelsRequest
        request) {
  auto span = internal::MakeSpan(
      "compute_vpn_tunnels_v1::VpnTunnelsConnection::ListVpnTunnels");
  internal::OTelScope scope(span);
  auto sr = child_->ListVpnTunnels(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::VpnTunnel>(std::move(span),
                                                  std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnTunnelsTracingConnection::SetLabels(
    google::cloud::cpp::compute::vpn_tunnels::v1::SetLabelsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_vpn_tunnels_v1::VpnTunnelsConnection::SetLabels");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetLabels(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_vpn_tunnels_v1::VpnTunnelsConnection>
MakeVpnTunnelsTracingConnection(
    std::shared_ptr<compute_vpn_tunnels_v1::VpnTunnelsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<VpnTunnelsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_vpn_tunnels_v1_internal
}  // namespace cloud
}  // namespace google
