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
// source: google/cloud/aiplatform/v1/endpoint_service.proto

#include "google/cloud/aiplatform/v1/internal/endpoint_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EndpointServiceTracingConnection::EndpointServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::EndpointServiceConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::aiplatform::v1::Endpoint>>
EndpointServiceTracingConnection::CreateEndpoint(
    google::cloud::aiplatform::v1::CreateEndpointRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::EndpointServiceConnection::CreateEndpoint");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateEndpoint(request));
}

StatusOr<google::cloud::aiplatform::v1::Endpoint>
EndpointServiceTracingConnection::GetEndpoint(
    google::cloud::aiplatform::v1::GetEndpointRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::EndpointServiceConnection::GetEndpoint");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEndpoint(request));
}

StreamRange<google::cloud::aiplatform::v1::Endpoint>
EndpointServiceTracingConnection::ListEndpoints(
    google::cloud::aiplatform::v1::ListEndpointsRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::EndpointServiceConnection::ListEndpoints");
  internal::OTelScope scope(span);
  auto sr = child_->ListEndpoints(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::Endpoint>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::aiplatform::v1::Endpoint>
EndpointServiceTracingConnection::UpdateEndpoint(
    google::cloud::aiplatform::v1::UpdateEndpointRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::EndpointServiceConnection::UpdateEndpoint");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateEndpoint(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
EndpointServiceTracingConnection::DeleteEndpoint(
    google::cloud::aiplatform::v1::DeleteEndpointRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::EndpointServiceConnection::DeleteEndpoint");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteEndpoint(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeployModelResponse>>
EndpointServiceTracingConnection::DeployModel(
    google::cloud::aiplatform::v1::DeployModelRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::EndpointServiceConnection::DeployModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeployModel(request));
}

future<StatusOr<google::cloud::aiplatform::v1::UndeployModelResponse>>
EndpointServiceTracingConnection::UndeployModel(
    google::cloud::aiplatform::v1::UndeployModelRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::EndpointServiceConnection::UndeployModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UndeployModel(request));
}

future<StatusOr<google::cloud::aiplatform::v1::MutateDeployedModelResponse>>
EndpointServiceTracingConnection::MutateDeployedModel(
    google::cloud::aiplatform::v1::MutateDeployedModelRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::EndpointServiceConnection::MutateDeployedModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->MutateDeployedModel(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<aiplatform_v1::EndpointServiceConnection>
MakeEndpointServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::EndpointServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<EndpointServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
