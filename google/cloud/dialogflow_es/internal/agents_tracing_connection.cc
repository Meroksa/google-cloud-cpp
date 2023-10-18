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
// source: google/cloud/dialogflow/v2/agent.proto

#include "google/cloud/dialogflow_es/internal/agents_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AgentsTracingConnection::AgentsTracingConnection(
    std::shared_ptr<dialogflow_es::AgentsConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::v2::Agent>
AgentsTracingConnection::GetAgent(
    google::cloud::dialogflow::v2::GetAgentRequest const& request) {
  auto span = internal::MakeSpan("dialogflow_es::AgentsConnection::GetAgent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAgent(request));
}

StatusOr<google::cloud::dialogflow::v2::Agent>
AgentsTracingConnection::SetAgent(
    google::cloud::dialogflow::v2::SetAgentRequest const& request) {
  auto span = internal::MakeSpan("dialogflow_es::AgentsConnection::SetAgent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetAgent(request));
}

Status AgentsTracingConnection::DeleteAgent(
    google::cloud::dialogflow::v2::DeleteAgentRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::AgentsConnection::DeleteAgent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteAgent(request));
}

StreamRange<google::cloud::dialogflow::v2::Agent>
AgentsTracingConnection::SearchAgents(
    google::cloud::dialogflow::v2::SearchAgentsRequest request) {
  auto span =
      internal::MakeSpan("dialogflow_es::AgentsConnection::SearchAgents");
  internal::OTelScope scope(span);
  auto sr = child_->SearchAgents(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::dialogflow::v2::Agent>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::protobuf::Struct>> AgentsTracingConnection::TrainAgent(
    google::cloud::dialogflow::v2::TrainAgentRequest const& request) {
  auto span = internal::MakeSpan("dialogflow_es::AgentsConnection::TrainAgent");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->TrainAgent(request));
}

future<StatusOr<google::cloud::dialogflow::v2::ExportAgentResponse>>
AgentsTracingConnection::ExportAgent(
    google::cloud::dialogflow::v2::ExportAgentRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::AgentsConnection::ExportAgent");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ExportAgent(request));
}

future<StatusOr<google::protobuf::Struct>> AgentsTracingConnection::ImportAgent(
    google::cloud::dialogflow::v2::ImportAgentRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::AgentsConnection::ImportAgent");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ImportAgent(request));
}

future<StatusOr<google::protobuf::Struct>>
AgentsTracingConnection::RestoreAgent(
    google::cloud::dialogflow::v2::RestoreAgentRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::AgentsConnection::RestoreAgent");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RestoreAgent(request));
}

StatusOr<google::cloud::dialogflow::v2::ValidationResult>
AgentsTracingConnection::GetValidationResult(
    google::cloud::dialogflow::v2::GetValidationResultRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::AgentsConnection::GetValidationResult");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetValidationResult(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dialogflow_es::AgentsConnection> MakeAgentsTracingConnection(
    std::shared_ptr<dialogflow_es::AgentsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<AgentsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
