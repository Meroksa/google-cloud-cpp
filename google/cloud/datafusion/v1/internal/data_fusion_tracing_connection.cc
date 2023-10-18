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
// source: google/cloud/datafusion/v1/datafusion.proto

#include "google/cloud/datafusion/v1/internal/data_fusion_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace datafusion_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataFusionTracingConnection::DataFusionTracingConnection(
    std::shared_ptr<datafusion_v1::DataFusionConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::datafusion::v1::Version>
DataFusionTracingConnection::ListAvailableVersions(
    google::cloud::datafusion::v1::ListAvailableVersionsRequest request) {
  auto span = internal::MakeSpan(
      "datafusion_v1::DataFusionConnection::ListAvailableVersions");
  internal::OTelScope scope(span);
  auto sr = child_->ListAvailableVersions(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::datafusion::v1::Version>(std::move(span), std::move(sr));
}

StreamRange<google::cloud::datafusion::v1::Instance>
DataFusionTracingConnection::ListInstances(
    google::cloud::datafusion::v1::ListInstancesRequest request) {
  auto span =
      internal::MakeSpan("datafusion_v1::DataFusionConnection::ListInstances");
  internal::OTelScope scope(span);
  auto sr = child_->ListInstances(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::datafusion::v1::Instance>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::datafusion::v1::Instance>
DataFusionTracingConnection::GetInstance(
    google::cloud::datafusion::v1::GetInstanceRequest const& request) {
  auto span =
      internal::MakeSpan("datafusion_v1::DataFusionConnection::GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstance(request));
}

future<StatusOr<google::cloud::datafusion::v1::Instance>>
DataFusionTracingConnection::CreateInstance(
    google::cloud::datafusion::v1::CreateInstanceRequest const& request) {
  auto span =
      internal::MakeSpan("datafusion_v1::DataFusionConnection::CreateInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateInstance(request));
}

future<StatusOr<google::cloud::datafusion::v1::OperationMetadata>>
DataFusionTracingConnection::DeleteInstance(
    google::cloud::datafusion::v1::DeleteInstanceRequest const& request) {
  auto span =
      internal::MakeSpan("datafusion_v1::DataFusionConnection::DeleteInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteInstance(request));
}

future<StatusOr<google::cloud::datafusion::v1::Instance>>
DataFusionTracingConnection::UpdateInstance(
    google::cloud::datafusion::v1::UpdateInstanceRequest const& request) {
  auto span =
      internal::MakeSpan("datafusion_v1::DataFusionConnection::UpdateInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateInstance(request));
}

future<StatusOr<google::cloud::datafusion::v1::Instance>>
DataFusionTracingConnection::RestartInstance(
    google::cloud::datafusion::v1::RestartInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "datafusion_v1::DataFusionConnection::RestartInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RestartInstance(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<datafusion_v1::DataFusionConnection>
MakeDataFusionTracingConnection(
    std::shared_ptr<datafusion_v1::DataFusionConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<DataFusionTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datafusion_v1_internal
}  // namespace cloud
}  // namespace google
