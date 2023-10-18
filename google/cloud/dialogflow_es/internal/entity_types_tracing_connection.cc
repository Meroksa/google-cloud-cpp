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
// source: google/cloud/dialogflow/v2/entity_type.proto

#include "google/cloud/dialogflow_es/internal/entity_types_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EntityTypesTracingConnection::EntityTypesTracingConnection(
    std::shared_ptr<dialogflow_es::EntityTypesConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::dialogflow::v2::EntityType>
EntityTypesTracingConnection::ListEntityTypes(
    google::cloud::dialogflow::v2::ListEntityTypesRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EntityTypesConnection::ListEntityTypes");
  internal::OTelScope scope(span);
  auto sr = child_->ListEntityTypes(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::v2::EntityType>(std::move(span),
                                                 std::move(sr));
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesTracingConnection::GetEntityType(
    google::cloud::dialogflow::v2::GetEntityTypeRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::EntityTypesConnection::GetEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEntityType(request));
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesTracingConnection::CreateEntityType(
    google::cloud::dialogflow::v2::CreateEntityTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EntityTypesConnection::CreateEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateEntityType(request));
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesTracingConnection::UpdateEntityType(
    google::cloud::dialogflow::v2::UpdateEntityTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EntityTypesConnection::UpdateEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateEntityType(request));
}

Status EntityTypesTracingConnection::DeleteEntityType(
    google::cloud::dialogflow::v2::DeleteEntityTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EntityTypesConnection::DeleteEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteEntityType(request));
}

future<StatusOr<google::cloud::dialogflow::v2::BatchUpdateEntityTypesResponse>>
EntityTypesTracingConnection::BatchUpdateEntityTypes(
    google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EntityTypesConnection::BatchUpdateEntityTypes");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->BatchUpdateEntityTypes(request));
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesTracingConnection::BatchDeleteEntityTypes(
    google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EntityTypesConnection::BatchDeleteEntityTypes");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->BatchDeleteEntityTypes(request));
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesTracingConnection::BatchCreateEntities(
    google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EntityTypesConnection::BatchCreateEntities");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->BatchCreateEntities(request));
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesTracingConnection::BatchUpdateEntities(
    google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EntityTypesConnection::BatchUpdateEntities");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->BatchUpdateEntities(request));
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesTracingConnection::BatchDeleteEntities(
    google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EntityTypesConnection::BatchDeleteEntities");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->BatchDeleteEntities(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dialogflow_es::EntityTypesConnection>
MakeEntityTypesTracingConnection(
    std::shared_ptr<dialogflow_es::EntityTypesConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<EntityTypesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
