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
// source: google/cloud/tpu/v1/cloud_tpu.proto

#include "google/cloud/tpu/v1/internal/tpu_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace tpu_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TpuTracingStub::TpuTracingStub(std::shared_ptr<TpuStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::tpu::v1::ListNodesResponse> TpuTracingStub::ListNodes(
    grpc::ClientContext& context,
    google::cloud::tpu::v1::ListNodesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tpu.v1.Tpu", "ListNodes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->ListNodes(context, request));
}

StatusOr<google::cloud::tpu::v1::Node> TpuTracingStub::GetNode(
    grpc::ClientContext& context,
    google::cloud::tpu::v1::GetNodeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tpu.v1.Tpu", "GetNode");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetNode(context, request));
}

future<StatusOr<google::longrunning::Operation>>
TpuTracingStub::AsyncCreateNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v1::CreateNodeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tpu.v1.Tpu", "CreateNode");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateNode(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
TpuTracingStub::AsyncDeleteNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v1::DeleteNodeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tpu.v1.Tpu", "DeleteNode");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteNode(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
TpuTracingStub::AsyncReimageNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v1::ReimageNodeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tpu.v1.Tpu", "ReimageNode");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncReimageNode(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>> TpuTracingStub::AsyncStopNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v1::StopNodeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tpu.v1.Tpu", "StopNode");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncStopNode(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>> TpuTracingStub::AsyncStartNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v1::StartNodeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tpu.v1.Tpu", "StartNode");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncStartNode(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::tpu::v1::ListTensorFlowVersionsResponse>
TpuTracingStub::ListTensorFlowVersions(
    grpc::ClientContext& context,
    google::cloud::tpu::v1::ListTensorFlowVersionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tpu.v1.Tpu",
                                     "ListTensorFlowVersions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListTensorFlowVersions(context, request));
}

StatusOr<google::cloud::tpu::v1::TensorFlowVersion>
TpuTracingStub::GetTensorFlowVersion(
    grpc::ClientContext& context,
    google::cloud::tpu::v1::GetTensorFlowVersionRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tpu.v1.Tpu", "GetTensorFlowVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetTensorFlowVersion(context, request));
}

StatusOr<google::cloud::tpu::v1::ListAcceleratorTypesResponse>
TpuTracingStub::ListAcceleratorTypes(
    grpc::ClientContext& context,
    google::cloud::tpu::v1::ListAcceleratorTypesRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tpu.v1.Tpu", "ListAcceleratorTypes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAcceleratorTypes(context, request));
}

StatusOr<google::cloud::tpu::v1::AcceleratorType>
TpuTracingStub::GetAcceleratorType(
    grpc::ClientContext& context,
    google::cloud::tpu::v1::GetAcceleratorTypeRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tpu.v1.Tpu", "GetAcceleratorType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetAcceleratorType(context, request));
}

future<StatusOr<google::longrunning::Operation>>
TpuTracingStub::AsyncGetOperation(
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

future<Status> TpuTracingStub::AsyncCancelOperation(
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

std::shared_ptr<TpuStub> MakeTpuTracingStub(std::shared_ptr<TpuStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<TpuTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v1_internal
}  // namespace cloud
}  // namespace google
