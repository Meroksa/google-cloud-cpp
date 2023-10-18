// Copyright 2022 Google LLC
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
// source: google/cloud/osconfig/v1/osconfig_service.proto

#include "google/cloud/osconfig/v1/internal/os_config_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace osconfig_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

OsConfigServiceTracingConnection::OsConfigServiceTracingConnection(
    std::shared_ptr<osconfig_v1::OsConfigServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::osconfig::v1::PatchJob>
OsConfigServiceTracingConnection::ExecutePatchJob(
    google::cloud::osconfig::v1::ExecutePatchJobRequest const& request) {
  auto span = internal::MakeSpan(
      "osconfig_v1::OsConfigServiceConnection::ExecutePatchJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ExecutePatchJob(request));
}

StatusOr<google::cloud::osconfig::v1::PatchJob>
OsConfigServiceTracingConnection::GetPatchJob(
    google::cloud::osconfig::v1::GetPatchJobRequest const& request) {
  auto span =
      internal::MakeSpan("osconfig_v1::OsConfigServiceConnection::GetPatchJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetPatchJob(request));
}

StatusOr<google::cloud::osconfig::v1::PatchJob>
OsConfigServiceTracingConnection::CancelPatchJob(
    google::cloud::osconfig::v1::CancelPatchJobRequest const& request) {
  auto span = internal::MakeSpan(
      "osconfig_v1::OsConfigServiceConnection::CancelPatchJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelPatchJob(request));
}

StreamRange<google::cloud::osconfig::v1::PatchJob>
OsConfigServiceTracingConnection::ListPatchJobs(
    google::cloud::osconfig::v1::ListPatchJobsRequest request) {
  auto span = internal::MakeSpan(
      "osconfig_v1::OsConfigServiceConnection::ListPatchJobs");
  internal::OTelScope scope(span);
  auto sr = child_->ListPatchJobs(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::osconfig::v1::PatchJob>(
      std::move(span), std::move(sr));
}

StreamRange<google::cloud::osconfig::v1::PatchJobInstanceDetails>
OsConfigServiceTracingConnection::ListPatchJobInstanceDetails(
    google::cloud::osconfig::v1::ListPatchJobInstanceDetailsRequest request) {
  auto span = internal::MakeSpan(
      "osconfig_v1::OsConfigServiceConnection::ListPatchJobInstanceDetails");
  internal::OTelScope scope(span);
  auto sr = child_->ListPatchJobInstanceDetails(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::osconfig::v1::PatchJobInstanceDetails>(std::move(span),
                                                            std::move(sr));
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceTracingConnection::CreatePatchDeployment(
    google::cloud::osconfig::v1::CreatePatchDeploymentRequest const& request) {
  auto span = internal::MakeSpan(
      "osconfig_v1::OsConfigServiceConnection::CreatePatchDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreatePatchDeployment(request));
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceTracingConnection::GetPatchDeployment(
    google::cloud::osconfig::v1::GetPatchDeploymentRequest const& request) {
  auto span = internal::MakeSpan(
      "osconfig_v1::OsConfigServiceConnection::GetPatchDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetPatchDeployment(request));
}

StreamRange<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceTracingConnection::ListPatchDeployments(
    google::cloud::osconfig::v1::ListPatchDeploymentsRequest request) {
  auto span = internal::MakeSpan(
      "osconfig_v1::OsConfigServiceConnection::ListPatchDeployments");
  internal::OTelScope scope(span);
  auto sr = child_->ListPatchDeployments(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::osconfig::v1::PatchDeployment>(std::move(span),
                                                    std::move(sr));
}

Status OsConfigServiceTracingConnection::DeletePatchDeployment(
    google::cloud::osconfig::v1::DeletePatchDeploymentRequest const& request) {
  auto span = internal::MakeSpan(
      "osconfig_v1::OsConfigServiceConnection::DeletePatchDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeletePatchDeployment(request));
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceTracingConnection::UpdatePatchDeployment(
    google::cloud::osconfig::v1::UpdatePatchDeploymentRequest const& request) {
  auto span = internal::MakeSpan(
      "osconfig_v1::OsConfigServiceConnection::UpdatePatchDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdatePatchDeployment(request));
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceTracingConnection::PausePatchDeployment(
    google::cloud::osconfig::v1::PausePatchDeploymentRequest const& request) {
  auto span = internal::MakeSpan(
      "osconfig_v1::OsConfigServiceConnection::PausePatchDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->PausePatchDeployment(request));
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceTracingConnection::ResumePatchDeployment(
    google::cloud::osconfig::v1::ResumePatchDeploymentRequest const& request) {
  auto span = internal::MakeSpan(
      "osconfig_v1::OsConfigServiceConnection::ResumePatchDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ResumePatchDeployment(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<osconfig_v1::OsConfigServiceConnection>
MakeOsConfigServiceTracingConnection(
    std::shared_ptr<osconfig_v1::OsConfigServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<OsConfigServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_v1_internal
}  // namespace cloud
}  // namespace google
