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
// source: google/logging/v2/logging_config.proto

#include "google/cloud/logging/v2/internal/config_service_v2_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace logging_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ConfigServiceV2TracingStub::ConfigServiceV2TracingStub(
    std::shared_ptr<ConfigServiceV2Stub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::logging::v2::ListBucketsResponse>
ConfigServiceV2TracingStub::ListBuckets(
    grpc::ClientContext& context,
    google::logging::v2::ListBucketsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2",
                                     "ListBuckets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListBuckets(context, request));
}

StatusOr<google::logging::v2::LogBucket> ConfigServiceV2TracingStub::GetBucket(
    grpc::ClientContext& context,
    google::logging::v2::GetBucketRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2", "GetBucket");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetBucket(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2TracingStub::AsyncCreateBucketAsync(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::logging::v2::CreateBucketRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2",
                                     "CreateBucketAsync");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateBucketAsync(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2TracingStub::AsyncUpdateBucketAsync(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::logging::v2::UpdateBucketRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2",
                                     "UpdateBucketAsync");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateBucketAsync(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::logging::v2::LogBucket>
ConfigServiceV2TracingStub::CreateBucket(
    grpc::ClientContext& context,
    google::logging::v2::CreateBucketRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2",
                                     "CreateBucket");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateBucket(context, request));
}

StatusOr<google::logging::v2::LogBucket>
ConfigServiceV2TracingStub::UpdateBucket(
    grpc::ClientContext& context,
    google::logging::v2::UpdateBucketRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2",
                                     "UpdateBucket");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateBucket(context, request));
}

Status ConfigServiceV2TracingStub::DeleteBucket(
    grpc::ClientContext& context,
    google::logging::v2::DeleteBucketRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2",
                                     "DeleteBucket");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteBucket(context, request));
}

Status ConfigServiceV2TracingStub::UndeleteBucket(
    grpc::ClientContext& context,
    google::logging::v2::UndeleteBucketRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2",
                                     "UndeleteBucket");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UndeleteBucket(context, request));
}

StatusOr<google::logging::v2::ListViewsResponse>
ConfigServiceV2TracingStub::ListViews(
    grpc::ClientContext& context,
    google::logging::v2::ListViewsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2", "ListViews");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->ListViews(context, request));
}

StatusOr<google::logging::v2::LogView> ConfigServiceV2TracingStub::GetView(
    grpc::ClientContext& context,
    google::logging::v2::GetViewRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2", "GetView");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetView(context, request));
}

StatusOr<google::logging::v2::LogView> ConfigServiceV2TracingStub::CreateView(
    grpc::ClientContext& context,
    google::logging::v2::CreateViewRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2", "CreateView");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateView(context, request));
}

StatusOr<google::logging::v2::LogView> ConfigServiceV2TracingStub::UpdateView(
    grpc::ClientContext& context,
    google::logging::v2::UpdateViewRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2", "UpdateView");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateView(context, request));
}

Status ConfigServiceV2TracingStub::DeleteView(
    grpc::ClientContext& context,
    google::logging::v2::DeleteViewRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2", "DeleteView");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteView(context, request));
}

StatusOr<google::logging::v2::ListSinksResponse>
ConfigServiceV2TracingStub::ListSinks(
    grpc::ClientContext& context,
    google::logging::v2::ListSinksRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2", "ListSinks");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->ListSinks(context, request));
}

StatusOr<google::logging::v2::LogSink> ConfigServiceV2TracingStub::GetSink(
    grpc::ClientContext& context,
    google::logging::v2::GetSinkRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2", "GetSink");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetSink(context, request));
}

StatusOr<google::logging::v2::LogSink> ConfigServiceV2TracingStub::CreateSink(
    grpc::ClientContext& context,
    google::logging::v2::CreateSinkRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2", "CreateSink");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateSink(context, request));
}

StatusOr<google::logging::v2::LogSink> ConfigServiceV2TracingStub::UpdateSink(
    grpc::ClientContext& context,
    google::logging::v2::UpdateSinkRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2", "UpdateSink");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateSink(context, request));
}

Status ConfigServiceV2TracingStub::DeleteSink(
    grpc::ClientContext& context,
    google::logging::v2::DeleteSinkRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2", "DeleteSink");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteSink(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2TracingStub::AsyncCreateLink(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::logging::v2::CreateLinkRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2", "CreateLink");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateLink(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2TracingStub::AsyncDeleteLink(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::logging::v2::DeleteLinkRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2", "DeleteLink");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteLink(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::logging::v2::ListLinksResponse>
ConfigServiceV2TracingStub::ListLinks(
    grpc::ClientContext& context,
    google::logging::v2::ListLinksRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2", "ListLinks");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->ListLinks(context, request));
}

StatusOr<google::logging::v2::Link> ConfigServiceV2TracingStub::GetLink(
    grpc::ClientContext& context,
    google::logging::v2::GetLinkRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2", "GetLink");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetLink(context, request));
}

StatusOr<google::logging::v2::ListExclusionsResponse>
ConfigServiceV2TracingStub::ListExclusions(
    grpc::ClientContext& context,
    google::logging::v2::ListExclusionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2",
                                     "ListExclusions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListExclusions(context, request));
}

StatusOr<google::logging::v2::LogExclusion>
ConfigServiceV2TracingStub::GetExclusion(
    grpc::ClientContext& context,
    google::logging::v2::GetExclusionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2",
                                     "GetExclusion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetExclusion(context, request));
}

StatusOr<google::logging::v2::LogExclusion>
ConfigServiceV2TracingStub::CreateExclusion(
    grpc::ClientContext& context,
    google::logging::v2::CreateExclusionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2",
                                     "CreateExclusion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateExclusion(context, request));
}

StatusOr<google::logging::v2::LogExclusion>
ConfigServiceV2TracingStub::UpdateExclusion(
    grpc::ClientContext& context,
    google::logging::v2::UpdateExclusionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2",
                                     "UpdateExclusion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateExclusion(context, request));
}

Status ConfigServiceV2TracingStub::DeleteExclusion(
    grpc::ClientContext& context,
    google::logging::v2::DeleteExclusionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2",
                                     "DeleteExclusion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteExclusion(context, request));
}

StatusOr<google::logging::v2::CmekSettings>
ConfigServiceV2TracingStub::GetCmekSettings(
    grpc::ClientContext& context,
    google::logging::v2::GetCmekSettingsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2",
                                     "GetCmekSettings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetCmekSettings(context, request));
}

StatusOr<google::logging::v2::CmekSettings>
ConfigServiceV2TracingStub::UpdateCmekSettings(
    grpc::ClientContext& context,
    google::logging::v2::UpdateCmekSettingsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2",
                                     "UpdateCmekSettings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateCmekSettings(context, request));
}

StatusOr<google::logging::v2::Settings> ConfigServiceV2TracingStub::GetSettings(
    grpc::ClientContext& context,
    google::logging::v2::GetSettingsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2",
                                     "GetSettings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSettings(context, request));
}

StatusOr<google::logging::v2::Settings>
ConfigServiceV2TracingStub::UpdateSettings(
    grpc::ClientContext& context,
    google::logging::v2::UpdateSettingsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2",
                                     "UpdateSettings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateSettings(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2TracingStub::AsyncCopyLogEntries(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::logging::v2::CopyLogEntriesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.ConfigServiceV2",
                                     "CopyLogEntries");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCopyLogEntries(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2TracingStub::AsyncGetOperation(
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

future<Status> ConfigServiceV2TracingStub::AsyncCancelOperation(
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

std::shared_ptr<ConfigServiceV2Stub> MakeConfigServiceV2TracingStub(
    std::shared_ptr<ConfigServiceV2Stub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ConfigServiceV2TracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2_internal
}  // namespace cloud
}  // namespace google
