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
// source: google/cloud/datacatalog/lineage/v1/lineage.proto

#include "google/cloud/datacatalog/lineage/v1/internal/lineage_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace datacatalog_lineage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

LineageTracingStub::LineageTracingStub(std::shared_ptr<LineageStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageTracingStub::CreateProcess(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::CreateProcessRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.lineage.v1.Lineage", "CreateProcess");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateProcess(context, request));
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageTracingStub::UpdateProcess(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::UpdateProcessRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.lineage.v1.Lineage", "UpdateProcess");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateProcess(context, request));
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageTracingStub::GetProcess(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::GetProcessRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.lineage.v1.Lineage", "GetProcess");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetProcess(context, request));
}

StatusOr<google::cloud::datacatalog::lineage::v1::ListProcessesResponse>
LineageTracingStub::ListProcesses(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::ListProcessesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.lineage.v1.Lineage", "ListProcesses");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListProcesses(context, request));
}

future<StatusOr<google::longrunning::Operation>>
LineageTracingStub::AsyncDeleteProcess(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datacatalog::lineage::v1::DeleteProcessRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.lineage.v1.Lineage", "DeleteProcess");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteProcess(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run>
LineageTracingStub::CreateRun(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::CreateRunRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.lineage.v1.Lineage", "CreateRun");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->CreateRun(context, request));
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run>
LineageTracingStub::UpdateRun(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::UpdateRunRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.lineage.v1.Lineage", "UpdateRun");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->UpdateRun(context, request));
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run>
LineageTracingStub::GetRun(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::GetRunRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.lineage.v1.Lineage", "GetRun");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetRun(context, request));
}

StatusOr<google::cloud::datacatalog::lineage::v1::ListRunsResponse>
LineageTracingStub::ListRuns(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::ListRunsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.lineage.v1.Lineage", "ListRuns");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->ListRuns(context, request));
}

future<StatusOr<google::longrunning::Operation>>
LineageTracingStub::AsyncDeleteRun(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datacatalog::lineage::v1::DeleteRunRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.lineage.v1.Lineage", "DeleteRun");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteRun(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
LineageTracingStub::CreateLineageEvent(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::CreateLineageEventRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.lineage.v1.Lineage", "CreateLineageEvent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateLineageEvent(context, request));
}

StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
LineageTracingStub::GetLineageEvent(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::GetLineageEventRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.lineage.v1.Lineage", "GetLineageEvent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLineageEvent(context, request));
}

StatusOr<google::cloud::datacatalog::lineage::v1::ListLineageEventsResponse>
LineageTracingStub::ListLineageEvents(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::ListLineageEventsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.lineage.v1.Lineage", "ListLineageEvents");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLineageEvents(context, request));
}

Status LineageTracingStub::DeleteLineageEvent(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::DeleteLineageEventRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.lineage.v1.Lineage", "DeleteLineageEvent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteLineageEvent(context, request));
}

StatusOr<google::cloud::datacatalog::lineage::v1::SearchLinksResponse>
LineageTracingStub::SearchLinks(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::SearchLinksRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.lineage.v1.Lineage", "SearchLinks");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SearchLinks(context, request));
}

StatusOr<
    google::cloud::datacatalog::lineage::v1::BatchSearchLinkProcessesResponse>
LineageTracingStub::BatchSearchLinkProcesses(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::
        BatchSearchLinkProcessesRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.datacatalog.lineage.v1.Lineage",
                             "BatchSearchLinkProcesses");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->BatchSearchLinkProcesses(context, request));
}

future<StatusOr<google::longrunning::Operation>>
LineageTracingStub::AsyncGetOperation(
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

future<Status> LineageTracingStub::AsyncCancelOperation(
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

std::shared_ptr<LineageStub> MakeLineageTracingStub(
    std::shared_ptr<LineageStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<LineageTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_lineage_v1_internal
}  // namespace cloud
}  // namespace google
