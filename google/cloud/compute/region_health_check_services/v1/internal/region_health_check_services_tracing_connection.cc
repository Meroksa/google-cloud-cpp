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
// google/cloud/compute/region_health_check_services/v1/region_health_check_services.proto

#include "google/cloud/compute/region_health_check_services/v1/internal/region_health_check_services_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_health_check_services_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RegionHealthCheckServicesTracingConnection::
    RegionHealthCheckServicesTracingConnection(
        std::shared_ptr<compute_region_health_check_services_v1::
                            RegionHealthCheckServicesConnection>
            child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesTracingConnection::DeleteHealthCheckService(
    google::cloud::cpp::compute::region_health_check_services::v1::
        DeleteHealthCheckServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_health_check_services_v1::"
      "RegionHealthCheckServicesConnection::DeleteHealthCheckService");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteHealthCheckService(request));
}

StatusOr<google::cloud::cpp::compute::v1::HealthCheckService>
RegionHealthCheckServicesTracingConnection::GetHealthCheckService(
    google::cloud::cpp::compute::region_health_check_services::v1::
        GetHealthCheckServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_health_check_services_v1::"
      "RegionHealthCheckServicesConnection::GetHealthCheckService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetHealthCheckService(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesTracingConnection::InsertHealthCheckService(
    google::cloud::cpp::compute::region_health_check_services::v1::
        InsertHealthCheckServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_health_check_services_v1::"
      "RegionHealthCheckServicesConnection::InsertHealthCheckService");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertHealthCheckService(request));
}

StreamRange<google::cloud::cpp::compute::v1::HealthCheckService>
RegionHealthCheckServicesTracingConnection::ListRegionHealthCheckServices(
    google::cloud::cpp::compute::region_health_check_services::v1::
        ListRegionHealthCheckServicesRequest request) {
  auto span = internal::MakeSpan(
      "compute_region_health_check_services_v1::"
      "RegionHealthCheckServicesConnection::ListRegionHealthCheckServices");
  internal::OTelScope scope(span);
  auto sr = child_->ListRegionHealthCheckServices(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::HealthCheckService>(std::move(span),
                                                           std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesTracingConnection::PatchHealthCheckService(
    google::cloud::cpp::compute::region_health_check_services::v1::
        PatchHealthCheckServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_health_check_services_v1::"
      "RegionHealthCheckServicesConnection::PatchHealthCheckService");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchHealthCheckService(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_region_health_check_services_v1::
                    RegionHealthCheckServicesConnection>
MakeRegionHealthCheckServicesTracingConnection(
    std::shared_ptr<compute_region_health_check_services_v1::
                        RegionHealthCheckServicesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<RegionHealthCheckServicesTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_health_check_services_v1_internal
}  // namespace cloud
}  // namespace google
