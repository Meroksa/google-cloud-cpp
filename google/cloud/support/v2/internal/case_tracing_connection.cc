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
// source: google/cloud/support/v2/case_service.proto

#include "google/cloud/support/v2/internal/case_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace support_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CaseServiceTracingConnection::CaseServiceTracingConnection(
    std::shared_ptr<support_v2::CaseServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::support::v2::Case>
CaseServiceTracingConnection::GetCase(
    google::cloud::support::v2::GetCaseRequest const& request) {
  auto span = internal::MakeSpan("support_v2::CaseServiceConnection::GetCase");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetCase(request));
}

StreamRange<google::cloud::support::v2::Case>
CaseServiceTracingConnection::ListCases(
    google::cloud::support::v2::ListCasesRequest request) {
  auto span =
      internal::MakeSpan("support_v2::CaseServiceConnection::ListCases");
  internal::OTelScope scope(span);
  auto sr = child_->ListCases(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::support::v2::Case>(
      std::move(span), std::move(sr));
}

StreamRange<google::cloud::support::v2::Case>
CaseServiceTracingConnection::SearchCases(
    google::cloud::support::v2::SearchCasesRequest request) {
  auto span =
      internal::MakeSpan("support_v2::CaseServiceConnection::SearchCases");
  internal::OTelScope scope(span);
  auto sr = child_->SearchCases(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::support::v2::Case>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::support::v2::Case>
CaseServiceTracingConnection::CreateCase(
    google::cloud::support::v2::CreateCaseRequest const& request) {
  auto span =
      internal::MakeSpan("support_v2::CaseServiceConnection::CreateCase");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateCase(request));
}

StatusOr<google::cloud::support::v2::Case>
CaseServiceTracingConnection::UpdateCase(
    google::cloud::support::v2::UpdateCaseRequest const& request) {
  auto span =
      internal::MakeSpan("support_v2::CaseServiceConnection::UpdateCase");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateCase(request));
}

StatusOr<google::cloud::support::v2::Case>
CaseServiceTracingConnection::EscalateCase(
    google::cloud::support::v2::EscalateCaseRequest const& request) {
  auto span =
      internal::MakeSpan("support_v2::CaseServiceConnection::EscalateCase");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->EscalateCase(request));
}

StatusOr<google::cloud::support::v2::Case>
CaseServiceTracingConnection::CloseCase(
    google::cloud::support::v2::CloseCaseRequest const& request) {
  auto span =
      internal::MakeSpan("support_v2::CaseServiceConnection::CloseCase");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CloseCase(request));
}

StreamRange<google::cloud::support::v2::CaseClassification>
CaseServiceTracingConnection::SearchCaseClassifications(
    google::cloud::support::v2::SearchCaseClassificationsRequest request) {
  auto span = internal::MakeSpan(
      "support_v2::CaseServiceConnection::SearchCaseClassifications");
  internal::OTelScope scope(span);
  auto sr = child_->SearchCaseClassifications(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::support::v2::CaseClassification>(std::move(span),
                                                      std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<support_v2::CaseServiceConnection>
MakeCaseServiceTracingConnection(
    std::shared_ptr<support_v2::CaseServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<CaseServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace support_v2_internal
}  // namespace cloud
}  // namespace google
