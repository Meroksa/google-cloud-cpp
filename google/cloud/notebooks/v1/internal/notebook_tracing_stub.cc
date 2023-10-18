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
// source: google/cloud/notebooks/v1/service.proto

#include "google/cloud/notebooks/v1/internal/notebook_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace notebooks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NotebookServiceTracingStub::NotebookServiceTracingStub(
    std::shared_ptr<NotebookServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::notebooks::v1::ListInstancesResponse>
NotebookServiceTracingStub::ListInstances(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::ListInstancesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "ListInstances");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListInstances(context, request));
}

StatusOr<google::cloud::notebooks::v1::Instance>
NotebookServiceTracingStub::GetInstance(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::GetInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetInstance(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::CreateInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "CreateInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateInstance(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncRegisterInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::RegisterInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "RegisterInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRegisterInstance(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncSetInstanceAccelerator(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "SetInstanceAccelerator");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncSetInstanceAccelerator(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncSetInstanceMachineType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "SetInstanceMachineType");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncSetInstanceMachineType(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncUpdateInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::UpdateInstanceConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "UpdateInstanceConfig");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateInstanceConfig(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncUpdateShieldedInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.notebooks.v1.NotebookService",
                             "UpdateShieldedInstanceConfig");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateShieldedInstanceConfig(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncSetInstanceLabels(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::SetInstanceLabelsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "SetInstanceLabels");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncSetInstanceLabels(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::notebooks::v1::UpdateInstanceMetadataItemsResponse>
NotebookServiceTracingStub::UpdateInstanceMetadataItems(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::UpdateInstanceMetadataItemsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.notebooks.v1.NotebookService",
                             "UpdateInstanceMetadataItems");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateInstanceMetadataItems(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DeleteInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "DeleteInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteInstance(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncStartInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::StartInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "StartInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncStartInstance(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncStopInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::StopInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "StopInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncStopInstance(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncResetInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::ResetInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "ResetInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncResetInstance(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncReportInstanceInfo(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::ReportInstanceInfoRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "ReportInstanceInfo");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncReportInstanceInfo(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::notebooks::v1::IsInstanceUpgradeableResponse>
NotebookServiceTracingStub::IsInstanceUpgradeable(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::IsInstanceUpgradeableRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "IsInstanceUpgradeable");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->IsInstanceUpgradeable(context, request));
}

StatusOr<google::cloud::notebooks::v1::GetInstanceHealthResponse>
NotebookServiceTracingStub::GetInstanceHealth(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::GetInstanceHealthRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "GetInstanceHealth");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetInstanceHealth(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncUpgradeInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::UpgradeInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "UpgradeInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpgradeInstance(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncRollbackInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::RollbackInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "RollbackInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRollbackInstance(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncDiagnoseInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DiagnoseInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "DiagnoseInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDiagnoseInstance(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncUpgradeInstanceInternal(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "UpgradeInstanceInternal");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpgradeInstanceInternal(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::notebooks::v1::ListEnvironmentsResponse>
NotebookServiceTracingStub::ListEnvironments(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::ListEnvironmentsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "ListEnvironments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListEnvironments(context, request));
}

StatusOr<google::cloud::notebooks::v1::Environment>
NotebookServiceTracingStub::GetEnvironment(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::GetEnvironmentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "GetEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetEnvironment(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::CreateEnvironmentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "CreateEnvironment");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateEnvironment(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncDeleteEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DeleteEnvironmentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "DeleteEnvironment");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteEnvironment(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::notebooks::v1::ListSchedulesResponse>
NotebookServiceTracingStub::ListSchedules(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::ListSchedulesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "ListSchedules");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListSchedules(context, request));
}

StatusOr<google::cloud::notebooks::v1::Schedule>
NotebookServiceTracingStub::GetSchedule(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::GetScheduleRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "GetSchedule");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSchedule(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncDeleteSchedule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DeleteScheduleRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "DeleteSchedule");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteSchedule(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncCreateSchedule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::CreateScheduleRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "CreateSchedule");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateSchedule(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncTriggerSchedule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::TriggerScheduleRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "TriggerSchedule");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncTriggerSchedule(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::notebooks::v1::ListExecutionsResponse>
NotebookServiceTracingStub::ListExecutions(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::ListExecutionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "ListExecutions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListExecutions(context, request));
}

StatusOr<google::cloud::notebooks::v1::Execution>
NotebookServiceTracingStub::GetExecution(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::GetExecutionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "GetExecution");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetExecution(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncDeleteExecution(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DeleteExecutionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "DeleteExecution");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteExecution(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncCreateExecution(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::CreateExecutionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.notebooks.v1.NotebookService", "CreateExecution");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateExecution(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncGetOperation(
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

future<Status> NotebookServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<NotebookServiceStub> MakeNotebookServiceTracingStub(
    std::shared_ptr<NotebookServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<NotebookServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v1_internal
}  // namespace cloud
}  // namespace google
