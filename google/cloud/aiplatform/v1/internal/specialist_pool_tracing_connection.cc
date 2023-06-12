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
// source: google/cloud/aiplatform/v1/specialist_pool_service.proto

#include "google/cloud/aiplatform/v1/internal/specialist_pool_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SpecialistPoolServiceTracingConnection::SpecialistPoolServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::SpecialistPoolServiceConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::aiplatform::v1::SpecialistPool>>
SpecialistPoolServiceTracingConnection::CreateSpecialistPool(
    google::cloud::aiplatform::v1::CreateSpecialistPoolRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::SpecialistPoolServiceConnection::CreateSpecialistPool");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateSpecialistPool(request));
}

StatusOr<google::cloud::aiplatform::v1::SpecialistPool>
SpecialistPoolServiceTracingConnection::GetSpecialistPool(
    google::cloud::aiplatform::v1::GetSpecialistPoolRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::SpecialistPoolServiceConnection::GetSpecialistPool");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSpecialistPool(request));
}

StreamRange<google::cloud::aiplatform::v1::SpecialistPool>
SpecialistPoolServiceTracingConnection::ListSpecialistPools(
    google::cloud::aiplatform::v1::ListSpecialistPoolsRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::SpecialistPoolServiceConnection::ListSpecialistPools");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListSpecialistPools(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::SpecialistPool>(std::move(span),
                                                     std::move(sr));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
SpecialistPoolServiceTracingConnection::DeleteSpecialistPool(
    google::cloud::aiplatform::v1::DeleteSpecialistPoolRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::SpecialistPoolServiceConnection::DeleteSpecialistPool");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteSpecialistPool(request));
}

future<StatusOr<google::cloud::aiplatform::v1::SpecialistPool>>
SpecialistPoolServiceTracingConnection::UpdateSpecialistPool(
    google::cloud::aiplatform::v1::UpdateSpecialistPoolRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::SpecialistPoolServiceConnection::UpdateSpecialistPool");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateSpecialistPool(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<aiplatform_v1::SpecialistPoolServiceConnection>
MakeSpecialistPoolServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::SpecialistPoolServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<SpecialistPoolServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
