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
// source: google/cloud/notebooks/v1/managed_service.proto

#include "google/cloud/notebooks/v1/internal/managed_notebook_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace notebooks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ManagedNotebookServiceTracingStub::ManagedNotebookServiceTracingStub(
    std::shared_ptr<ManagedNotebookServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::notebooks::v1::ListRuntimesResponse>
ManagedNotebookServiceTracingStub::ListRuntimes(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::ListRuntimesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.ManagedNotebookService", "ListRuntimes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListRuntimes(context, request));
}

StatusOr<google::cloud::notebooks::v1::Runtime>
ManagedNotebookServiceTracingStub::GetRuntime(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::GetRuntimeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.ManagedNotebookService", "GetRuntime");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetRuntime(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceTracingStub::AsyncCreateRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::CreateRuntimeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.ManagedNotebookService", "CreateRuntime");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateRuntime(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceTracingStub::AsyncUpdateRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::UpdateRuntimeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.ManagedNotebookService", "UpdateRuntime");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateRuntime(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceTracingStub::AsyncDeleteRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DeleteRuntimeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.ManagedNotebookService", "DeleteRuntime");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteRuntime(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceTracingStub::AsyncStartRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::StartRuntimeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.ManagedNotebookService", "StartRuntime");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncStartRuntime(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceTracingStub::AsyncStopRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::StopRuntimeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.ManagedNotebookService", "StopRuntime");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncStopRuntime(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceTracingStub::AsyncSwitchRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::SwitchRuntimeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.ManagedNotebookService", "SwitchRuntime");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncSwitchRuntime(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceTracingStub::AsyncResetRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::ResetRuntimeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.ManagedNotebookService", "ResetRuntime");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncResetRuntime(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceTracingStub::AsyncUpgradeRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::UpgradeRuntimeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.ManagedNotebookService", "UpgradeRuntime");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpgradeRuntime(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceTracingStub::AsyncReportRuntimeEvent(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::ReportRuntimeEventRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.ManagedNotebookService", "ReportRuntimeEvent");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncReportRuntimeEvent(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::notebooks::v1::RefreshRuntimeTokenInternalResponse>
ManagedNotebookServiceTracingStub::RefreshRuntimeTokenInternal(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::RefreshRuntimeTokenInternalRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.notebooks.v1.ManagedNotebookService",
                             "RefreshRuntimeTokenInternal");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->RefreshRuntimeTokenInternal(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceTracingStub::AsyncDiagnoseRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DiagnoseRuntimeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.ManagedNotebookService", "DiagnoseRuntime");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDiagnoseRuntime(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> ManagedNotebookServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCancelOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ManagedNotebookServiceStub>
MakeManagedNotebookServiceTracingStub(
    std::shared_ptr<ManagedNotebookServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ManagedNotebookServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v1_internal
}  // namespace cloud
}  // namespace google
