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

#include "google/cloud/compute/region_target_https_proxies/v1/internal/region_target_https_proxies_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_target_https_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RegionTargetHttpsProxiesTracingConnection::
    RegionTargetHttpsProxiesTracingConnection(
        std::shared_ptr<compute_region_target_https_proxies_v1::
                            RegionTargetHttpsProxiesConnection>
            child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpsProxiesTracingConnection::DeleteTargetHttpsProxy(
    google::cloud::cpp::compute::region_target_https_proxies::v1::
        DeleteTargetHttpsProxyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_target_https_proxies_v1::"
      "RegionTargetHttpsProxiesConnection::DeleteTargetHttpsProxy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteTargetHttpsProxy(request));
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxy>
RegionTargetHttpsProxiesTracingConnection::GetTargetHttpsProxy(
    google::cloud::cpp::compute::region_target_https_proxies::v1::
        GetTargetHttpsProxyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_target_https_proxies_v1::"
      "RegionTargetHttpsProxiesConnection::GetTargetHttpsProxy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTargetHttpsProxy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpsProxiesTracingConnection::InsertTargetHttpsProxy(
    google::cloud::cpp::compute::region_target_https_proxies::v1::
        InsertTargetHttpsProxyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_target_https_proxies_v1::"
      "RegionTargetHttpsProxiesConnection::InsertTargetHttpsProxy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertTargetHttpsProxy(request));
}

StreamRange<google::cloud::cpp::compute::v1::TargetHttpsProxy>
RegionTargetHttpsProxiesTracingConnection::ListRegionTargetHttpsProxies(
    google::cloud::cpp::compute::region_target_https_proxies::v1::
        ListRegionTargetHttpsProxiesRequest request) {
  auto span = internal::MakeSpan(
      "compute_region_target_https_proxies_v1::"
      "RegionTargetHttpsProxiesConnection::ListRegionTargetHttpsProxies");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListRegionTargetHttpsProxies(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::TargetHttpsProxy>(std::move(span),
                                                         std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpsProxiesTracingConnection::PatchTargetHttpsProxy(
    google::cloud::cpp::compute::region_target_https_proxies::v1::
        PatchTargetHttpsProxyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_target_https_proxies_v1::"
      "RegionTargetHttpsProxiesConnection::PatchTargetHttpsProxy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchTargetHttpsProxy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpsProxiesTracingConnection::SetSslCertificates(
    google::cloud::cpp::compute::region_target_https_proxies::v1::
        SetSslCertificatesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_target_https_proxies_v1::"
      "RegionTargetHttpsProxiesConnection::SetSslCertificates");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetSslCertificates(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpsProxiesTracingConnection::SetUrlMap(
    google::cloud::cpp::compute::region_target_https_proxies::v1::
        SetUrlMapRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_target_https_proxies_v1::"
      "RegionTargetHttpsProxiesConnection::SetUrlMap");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetUrlMap(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<
    compute_region_target_https_proxies_v1::RegionTargetHttpsProxiesConnection>
MakeRegionTargetHttpsProxiesTracingConnection(
    std::shared_ptr<compute_region_target_https_proxies_v1::
                        RegionTargetHttpsProxiesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<RegionTargetHttpsProxiesTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_target_https_proxies_v1_internal
}  // namespace cloud
}  // namespace google
