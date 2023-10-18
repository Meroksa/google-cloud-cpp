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
// source: google/cloud/run/v2/task.proto

#include "google/cloud/run/v2/internal/tasks_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace run_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TasksTracingConnection::TasksTracingConnection(
    std::shared_ptr<run_v2::TasksConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::run::v2::Task> TasksTracingConnection::GetTask(
    google::cloud::run::v2::GetTaskRequest const& request) {
  auto span = internal::MakeSpan("run_v2::TasksConnection::GetTask");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTask(request));
}

StreamRange<google::cloud::run::v2::Task> TasksTracingConnection::ListTasks(
    google::cloud::run::v2::ListTasksRequest request) {
  auto span = internal::MakeSpan("run_v2::TasksConnection::ListTasks");
  internal::OTelScope scope(span);
  auto sr = child_->ListTasks(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::run::v2::Task>(
      std::move(span), std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<run_v2::TasksConnection> MakeTasksTracingConnection(
    std::shared_ptr<run_v2::TasksConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<TasksTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2_internal
}  // namespace cloud
}  // namespace google
