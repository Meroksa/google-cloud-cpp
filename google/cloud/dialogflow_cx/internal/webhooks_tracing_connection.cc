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
// source: google/cloud/dialogflow/cx/v3/webhook.proto

#include "google/cloud/dialogflow_cx/internal/webhooks_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

WebhooksTracingConnection::WebhooksTracingConnection(
    std::shared_ptr<dialogflow_cx::WebhooksConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::dialogflow::cx::v3::Webhook>
WebhooksTracingConnection::ListWebhooks(
    google::cloud::dialogflow::cx::v3::ListWebhooksRequest request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::WebhooksConnection::ListWebhooks");
  internal::OTelScope scope(span);
  auto sr = child_->ListWebhooks(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::cx::v3::Webhook>(std::move(span),
                                                  std::move(sr));
}

StatusOr<google::cloud::dialogflow::cx::v3::Webhook>
WebhooksTracingConnection::GetWebhook(
    google::cloud::dialogflow::cx::v3::GetWebhookRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::WebhooksConnection::GetWebhook");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetWebhook(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Webhook>
WebhooksTracingConnection::CreateWebhook(
    google::cloud::dialogflow::cx::v3::CreateWebhookRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::WebhooksConnection::CreateWebhook");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateWebhook(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Webhook>
WebhooksTracingConnection::UpdateWebhook(
    google::cloud::dialogflow::cx::v3::UpdateWebhookRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::WebhooksConnection::UpdateWebhook");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateWebhook(request));
}

Status WebhooksTracingConnection::DeleteWebhook(
    google::cloud::dialogflow::cx::v3::DeleteWebhookRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::WebhooksConnection::DeleteWebhook");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteWebhook(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dialogflow_cx::WebhooksConnection>
MakeWebhooksTracingConnection(
    std::shared_ptr<dialogflow_cx::WebhooksConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<WebhooksTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
