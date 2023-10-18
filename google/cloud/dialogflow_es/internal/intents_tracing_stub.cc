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
// source: google/cloud/dialogflow/v2/intent.proto

#include "google/cloud/dialogflow_es/internal/intents_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

IntentsTracingStub::IntentsTracingStub(std::shared_ptr<IntentsStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dialogflow::v2::ListIntentsResponse>
IntentsTracingStub::ListIntents(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListIntentsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Intents",
                                     "ListIntents");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListIntents(context, request));
}

StatusOr<google::cloud::dialogflow::v2::Intent> IntentsTracingStub::GetIntent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetIntentRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Intents", "GetIntent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetIntent(context, request));
}

StatusOr<google::cloud::dialogflow::v2::Intent>
IntentsTracingStub::CreateIntent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateIntentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Intents",
                                     "CreateIntent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateIntent(context, request));
}

StatusOr<google::cloud::dialogflow::v2::Intent>
IntentsTracingStub::UpdateIntent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::UpdateIntentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Intents",
                                     "UpdateIntent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateIntent(context, request));
}

Status IntentsTracingStub::DeleteIntent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::DeleteIntentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Intents",
                                     "DeleteIntent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteIntent(context, request));
}

future<StatusOr<google::longrunning::Operation>>
IntentsTracingStub::AsyncBatchUpdateIntents(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchUpdateIntentsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Intents",
                                     "BatchUpdateIntents");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncBatchUpdateIntents(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
IntentsTracingStub::AsyncBatchDeleteIntents(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchDeleteIntentsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Intents",
                                     "BatchDeleteIntents");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncBatchDeleteIntents(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
IntentsTracingStub::AsyncGetOperation(
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

future<Status> IntentsTracingStub::AsyncCancelOperation(
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

std::shared_ptr<IntentsStub> MakeIntentsTracingStub(
    std::shared_ptr<IntentsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<IntentsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
