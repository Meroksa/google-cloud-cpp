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
// source:
// google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto

#include "google/cloud/beyondcorp/appconnections/v1/internal/app_connections_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_appconnections_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AppConnectionsServiceTracingConnection::AppConnectionsServiceTracingConnection(
    std::shared_ptr<
        beyondcorp_appconnections_v1::AppConnectionsServiceConnection>
        child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::beyondcorp::appconnections::v1::AppConnection>
AppConnectionsServiceTracingConnection::ListAppConnections(
    google::cloud::beyondcorp::appconnections::v1::ListAppConnectionsRequest
        request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "ListAppConnections");
  internal::OTelScope scope(span);
  auto sr = child_->ListAppConnections(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::beyondcorp::appconnections::v1::AppConnection>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>
AppConnectionsServiceTracingConnection::GetAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        GetAppConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "GetAppConnection");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAppConnection(request));
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceTracingConnection::CreateAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        CreateAppConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "CreateAppConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateAppConnection(request));
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceTracingConnection::UpdateAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        UpdateAppConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "UpdateAppConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateAppConnection(request));
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::
                    AppConnectionOperationMetadata>>
AppConnectionsServiceTracingConnection::DeleteAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        DeleteAppConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "DeleteAppConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteAppConnection(request));
}

StreamRange<google::cloud::beyondcorp::appconnections::v1::
                ResolveAppConnectionsResponse::AppConnectionDetails>
AppConnectionsServiceTracingConnection::ResolveAppConnections(
    google::cloud::beyondcorp::appconnections::v1::ResolveAppConnectionsRequest
        request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "ResolveAppConnections");
  internal::OTelScope scope(span);
  auto sr = child_->ResolveAppConnections(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::beyondcorp::appconnections::v1::
          ResolveAppConnectionsResponse::AppConnectionDetails>(std::move(span),
                                                               std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<beyondcorp_appconnections_v1::AppConnectionsServiceConnection>
MakeAppConnectionsServiceTracingConnection(
    std::shared_ptr<
        beyondcorp_appconnections_v1::AppConnectionsServiceConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<AppConnectionsServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appconnections_v1_internal
}  // namespace cloud
}  // namespace google
