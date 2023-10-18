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
// source: google/logging/v2/logging_metrics.proto

#include "google/cloud/logging/v2/internal/metrics_service_v2_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace logging_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

MetricsServiceV2TracingConnection::MetricsServiceV2TracingConnection(
    std::shared_ptr<logging_v2::MetricsServiceV2Connection> child)
    : child_(std::move(child)) {}

StreamRange<google::logging::v2::LogMetric>
MetricsServiceV2TracingConnection::ListLogMetrics(
    google::logging::v2::ListLogMetricsRequest request) {
  auto span = internal::MakeSpan(
      "logging_v2::MetricsServiceV2Connection::ListLogMetrics");
  internal::OTelScope scope(span);
  auto sr = child_->ListLogMetrics(std::move(request));
  return internal::MakeTracedStreamRange<google::logging::v2::LogMetric>(
      std::move(span), std::move(sr));
}

StatusOr<google::logging::v2::LogMetric>
MetricsServiceV2TracingConnection::GetLogMetric(
    google::logging::v2::GetLogMetricRequest const& request) {
  auto span = internal::MakeSpan(
      "logging_v2::MetricsServiceV2Connection::GetLogMetric");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLogMetric(request));
}

StatusOr<google::logging::v2::LogMetric>
MetricsServiceV2TracingConnection::CreateLogMetric(
    google::logging::v2::CreateLogMetricRequest const& request) {
  auto span = internal::MakeSpan(
      "logging_v2::MetricsServiceV2Connection::CreateLogMetric");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateLogMetric(request));
}

StatusOr<google::logging::v2::LogMetric>
MetricsServiceV2TracingConnection::UpdateLogMetric(
    google::logging::v2::UpdateLogMetricRequest const& request) {
  auto span = internal::MakeSpan(
      "logging_v2::MetricsServiceV2Connection::UpdateLogMetric");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateLogMetric(request));
}

Status MetricsServiceV2TracingConnection::DeleteLogMetric(
    google::logging::v2::DeleteLogMetricRequest const& request) {
  auto span = internal::MakeSpan(
      "logging_v2::MetricsServiceV2Connection::DeleteLogMetric");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteLogMetric(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<logging_v2::MetricsServiceV2Connection>
MakeMetricsServiceV2TracingConnection(
    std::shared_ptr<logging_v2::MetricsServiceV2Connection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<MetricsServiceV2TracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2_internal
}  // namespace cloud
}  // namespace google
