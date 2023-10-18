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
// source: google/cloud/discoveryengine/v1/user_event_service.proto

#include "google/cloud/discoveryengine/v1/internal/user_event_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

UserEventServiceTracingConnection::UserEventServiceTracingConnection(
    std::shared_ptr<discoveryengine_v1::UserEventServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::discoveryengine::v1::UserEvent>
UserEventServiceTracingConnection::WriteUserEvent(
    google::cloud::discoveryengine::v1::WriteUserEventRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::UserEventServiceConnection::WriteUserEvent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->WriteUserEvent(request));
}

StatusOr<google::api::HttpBody>
UserEventServiceTracingConnection::CollectUserEvent(
    google::cloud::discoveryengine::v1::CollectUserEventRequest const&
        request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::UserEventServiceConnection::CollectUserEvent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CollectUserEvent(request));
}

future<StatusOr<google::cloud::discoveryengine::v1::ImportUserEventsResponse>>
UserEventServiceTracingConnection::ImportUserEvents(
    google::cloud::discoveryengine::v1::ImportUserEventsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::UserEventServiceConnection::ImportUserEvents");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ImportUserEvents(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<discoveryengine_v1::UserEventServiceConnection>
MakeUserEventServiceTracingConnection(
    std::shared_ptr<discoveryengine_v1::UserEventServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<UserEventServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
