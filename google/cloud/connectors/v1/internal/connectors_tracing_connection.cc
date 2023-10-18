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
// source: google/cloud/connectors/v1/connectors_service.proto

#include "google/cloud/connectors/v1/internal/connectors_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace connectors_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ConnectorsTracingConnection::ConnectorsTracingConnection(
    std::shared_ptr<connectors_v1::ConnectorsConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::connectors::v1::Connection>
ConnectorsTracingConnection::ListConnections(
    google::cloud::connectors::v1::ListConnectionsRequest request) {
  auto span = internal::MakeSpan(
      "connectors_v1::ConnectorsConnection::ListConnections");
  internal::OTelScope scope(span);
  auto sr = child_->ListConnections(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::connectors::v1::Connection>(std::move(span),
                                                 std::move(sr));
}

StatusOr<google::cloud::connectors::v1::Connection>
ConnectorsTracingConnection::GetConnection(
    google::cloud::connectors::v1::GetConnectionRequest const& request) {
  auto span =
      internal::MakeSpan("connectors_v1::ConnectorsConnection::GetConnection");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetConnection(request));
}

future<StatusOr<google::cloud::connectors::v1::Connection>>
ConnectorsTracingConnection::CreateConnection(
    google::cloud::connectors::v1::CreateConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "connectors_v1::ConnectorsConnection::CreateConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateConnection(request));
}

future<StatusOr<google::cloud::connectors::v1::Connection>>
ConnectorsTracingConnection::UpdateConnection(
    google::cloud::connectors::v1::UpdateConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "connectors_v1::ConnectorsConnection::UpdateConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateConnection(request));
}

future<StatusOr<google::cloud::connectors::v1::OperationMetadata>>
ConnectorsTracingConnection::DeleteConnection(
    google::cloud::connectors::v1::DeleteConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "connectors_v1::ConnectorsConnection::DeleteConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteConnection(request));
}

StreamRange<google::cloud::connectors::v1::Provider>
ConnectorsTracingConnection::ListProviders(
    google::cloud::connectors::v1::ListProvidersRequest request) {
  auto span =
      internal::MakeSpan("connectors_v1::ConnectorsConnection::ListProviders");
  internal::OTelScope scope(span);
  auto sr = child_->ListProviders(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::connectors::v1::Provider>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::connectors::v1::Provider>
ConnectorsTracingConnection::GetProvider(
    google::cloud::connectors::v1::GetProviderRequest const& request) {
  auto span =
      internal::MakeSpan("connectors_v1::ConnectorsConnection::GetProvider");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetProvider(request));
}

StreamRange<google::cloud::connectors::v1::Connector>
ConnectorsTracingConnection::ListConnectors(
    google::cloud::connectors::v1::ListConnectorsRequest request) {
  auto span =
      internal::MakeSpan("connectors_v1::ConnectorsConnection::ListConnectors");
  internal::OTelScope scope(span);
  auto sr = child_->ListConnectors(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::connectors::v1::Connector>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::connectors::v1::Connector>
ConnectorsTracingConnection::GetConnector(
    google::cloud::connectors::v1::GetConnectorRequest const& request) {
  auto span =
      internal::MakeSpan("connectors_v1::ConnectorsConnection::GetConnector");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetConnector(request));
}

StreamRange<google::cloud::connectors::v1::ConnectorVersion>
ConnectorsTracingConnection::ListConnectorVersions(
    google::cloud::connectors::v1::ListConnectorVersionsRequest request) {
  auto span = internal::MakeSpan(
      "connectors_v1::ConnectorsConnection::ListConnectorVersions");
  internal::OTelScope scope(span);
  auto sr = child_->ListConnectorVersions(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::connectors::v1::ConnectorVersion>(std::move(span),
                                                       std::move(sr));
}

StatusOr<google::cloud::connectors::v1::ConnectorVersion>
ConnectorsTracingConnection::GetConnectorVersion(
    google::cloud::connectors::v1::GetConnectorVersionRequest const& request) {
  auto span = internal::MakeSpan(
      "connectors_v1::ConnectorsConnection::GetConnectorVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetConnectorVersion(request));
}

StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>
ConnectorsTracingConnection::GetConnectionSchemaMetadata(
    google::cloud::connectors::v1::GetConnectionSchemaMetadataRequest const&
        request) {
  auto span = internal::MakeSpan(
      "connectors_v1::ConnectorsConnection::GetConnectionSchemaMetadata");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetConnectionSchemaMetadata(request));
}

future<StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>>
ConnectorsTracingConnection::RefreshConnectionSchemaMetadata(
    google::cloud::connectors::v1::RefreshConnectionSchemaMetadataRequest const&
        request) {
  auto span = internal::MakeSpan(
      "connectors_v1::ConnectorsConnection::RefreshConnectionSchemaMetadata");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->RefreshConnectionSchemaMetadata(request));
}

StreamRange<google::cloud::connectors::v1::RuntimeEntitySchema>
ConnectorsTracingConnection::ListRuntimeEntitySchemas(
    google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest request) {
  auto span = internal::MakeSpan(
      "connectors_v1::ConnectorsConnection::ListRuntimeEntitySchemas");
  internal::OTelScope scope(span);
  auto sr = child_->ListRuntimeEntitySchemas(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::connectors::v1::RuntimeEntitySchema>(std::move(span),
                                                          std::move(sr));
}

StreamRange<google::cloud::connectors::v1::RuntimeActionSchema>
ConnectorsTracingConnection::ListRuntimeActionSchemas(
    google::cloud::connectors::v1::ListRuntimeActionSchemasRequest request) {
  auto span = internal::MakeSpan(
      "connectors_v1::ConnectorsConnection::ListRuntimeActionSchemas");
  internal::OTelScope scope(span);
  auto sr = child_->ListRuntimeActionSchemas(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::connectors::v1::RuntimeActionSchema>(std::move(span),
                                                          std::move(sr));
}

StatusOr<google::cloud::connectors::v1::RuntimeConfig>
ConnectorsTracingConnection::GetRuntimeConfig(
    google::cloud::connectors::v1::GetRuntimeConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "connectors_v1::ConnectorsConnection::GetRuntimeConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRuntimeConfig(request));
}

StatusOr<google::cloud::connectors::v1::Settings>
ConnectorsTracingConnection::GetGlobalSettings(
    google::cloud::connectors::v1::GetGlobalSettingsRequest const& request) {
  auto span = internal::MakeSpan(
      "connectors_v1::ConnectorsConnection::GetGlobalSettings");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetGlobalSettings(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<connectors_v1::ConnectorsConnection>
MakeConnectorsTracingConnection(
    std::shared_ptr<connectors_v1::ConnectorsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ConnectorsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace connectors_v1_internal
}  // namespace cloud
}  // namespace google
