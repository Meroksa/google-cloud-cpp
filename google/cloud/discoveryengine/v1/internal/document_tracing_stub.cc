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
// source: google/cloud/discoveryengine/v1/document_service.proto

#include "google/cloud/discoveryengine/v1/internal/document_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DocumentServiceTracingStub::DocumentServiceTracingStub(
    std::shared_ptr<DocumentServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::discoveryengine::v1::Document>
DocumentServiceTracingStub::GetDocument(
    grpc::ClientContext& context,
    google::cloud::discoveryengine::v1::GetDocumentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.DocumentService", "GetDocument");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDocument(context, request));
}

StatusOr<google::cloud::discoveryengine::v1::ListDocumentsResponse>
DocumentServiceTracingStub::ListDocuments(
    grpc::ClientContext& context,
    google::cloud::discoveryengine::v1::ListDocumentsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.DocumentService", "ListDocuments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDocuments(context, request));
}

StatusOr<google::cloud::discoveryengine::v1::Document>
DocumentServiceTracingStub::CreateDocument(
    grpc::ClientContext& context,
    google::cloud::discoveryengine::v1::CreateDocumentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.DocumentService", "CreateDocument");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateDocument(context, request));
}

StatusOr<google::cloud::discoveryengine::v1::Document>
DocumentServiceTracingStub::UpdateDocument(
    grpc::ClientContext& context,
    google::cloud::discoveryengine::v1::UpdateDocumentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.DocumentService", "UpdateDocument");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateDocument(context, request));
}

Status DocumentServiceTracingStub::DeleteDocument(
    grpc::ClientContext& context,
    google::cloud::discoveryengine::v1::DeleteDocumentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.DocumentService", "DeleteDocument");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteDocument(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DocumentServiceTracingStub::AsyncImportDocuments(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::discoveryengine::v1::ImportDocumentsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.DocumentService", "ImportDocuments");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncImportDocuments(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DocumentServiceTracingStub::AsyncPurgeDocuments(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::discoveryengine::v1::PurgeDocumentsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.DocumentService", "PurgeDocuments");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncPurgeDocuments(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DocumentServiceTracingStub::AsyncGetOperation(
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

future<Status> DocumentServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<DocumentServiceStub> MakeDocumentServiceTracingStub(
    std::shared_ptr<DocumentServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DocumentServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
