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
// source: google/cloud/notebooks/v2/service.proto

#include "google/cloud/notebooks/v2/internal/notebook_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace notebooks_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NotebookServiceTracingConnection::NotebookServiceTracingConnection(
    std::shared_ptr<notebooks_v2::NotebookServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::notebooks::v2::Instance>
NotebookServiceTracingConnection::ListInstances(
    google::cloud::notebooks::v2::ListInstancesRequest request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::ListInstances");
  internal::OTelScope scope(span);
  auto sr = child_->ListInstances(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::notebooks::v2::Instance>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::notebooks::v2::Instance>
NotebookServiceTracingConnection::GetInstance(
    google::cloud::notebooks::v2::GetInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstance(request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::CreateInstance(
    google::cloud::notebooks::v2::CreateInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::CreateInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateInstance(request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::UpdateInstance(
    google::cloud::notebooks::v2::UpdateInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::UpdateInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateInstance(request));
}

future<StatusOr<google::cloud::notebooks::v2::OperationMetadata>>
NotebookServiceTracingConnection::DeleteInstance(
    google::cloud::notebooks::v2::DeleteInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::DeleteInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteInstance(request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::StartInstance(
    google::cloud::notebooks::v2::StartInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::StartInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StartInstance(request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::StopInstance(
    google::cloud::notebooks::v2::StopInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::StopInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StopInstance(request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::ResetInstance(
    google::cloud::notebooks::v2::ResetInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::ResetInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ResetInstance(request));
}

StatusOr<google::cloud::notebooks::v2::CheckInstanceUpgradabilityResponse>
NotebookServiceTracingConnection::CheckInstanceUpgradability(
    google::cloud::notebooks::v2::CheckInstanceUpgradabilityRequest const&
        request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::CheckInstanceUpgradability");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CheckInstanceUpgradability(request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::UpgradeInstance(
    google::cloud::notebooks::v2::UpgradeInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::UpgradeInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpgradeInstance(request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::RollbackInstance(
    google::cloud::notebooks::v2::RollbackInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::RollbackInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RollbackInstance(request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::DiagnoseInstance(
    google::cloud::notebooks::v2::DiagnoseInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::DiagnoseInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DiagnoseInstance(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<notebooks_v2::NotebookServiceConnection>
MakeNotebookServiceTracingConnection(
    std::shared_ptr<notebooks_v2::NotebookServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<NotebookServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v2_internal
}  // namespace cloud
}  // namespace google
