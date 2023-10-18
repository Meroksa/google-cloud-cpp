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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/internal/instances_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

InstancesTracingConnection::InstancesTracingConnection(
    std::shared_ptr<appengine_v1::InstancesConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::appengine::v1::Instance>
InstancesTracingConnection::ListInstances(
    google::appengine::v1::ListInstancesRequest request) {
  auto span =
      internal::MakeSpan("appengine_v1::InstancesConnection::ListInstances");
  internal::OTelScope scope(span);
  auto sr = child_->ListInstances(std::move(request));
  return internal::MakeTracedStreamRange<google::appengine::v1::Instance>(
      std::move(span), std::move(sr));
}

StatusOr<google::appengine::v1::Instance>
InstancesTracingConnection::GetInstance(
    google::appengine::v1::GetInstanceRequest const& request) {
  auto span =
      internal::MakeSpan("appengine_v1::InstancesConnection::GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstance(request));
}

future<StatusOr<google::appengine::v1::OperationMetadataV1>>
InstancesTracingConnection::DeleteInstance(
    google::appengine::v1::DeleteInstanceRequest const& request) {
  auto span =
      internal::MakeSpan("appengine_v1::InstancesConnection::DeleteInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteInstance(request));
}

future<StatusOr<google::appengine::v1::Instance>>
InstancesTracingConnection::DebugInstance(
    google::appengine::v1::DebugInstanceRequest const& request) {
  auto span =
      internal::MakeSpan("appengine_v1::InstancesConnection::DebugInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DebugInstance(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<appengine_v1::InstancesConnection>
MakeInstancesTracingConnection(
    std::shared_ptr<appengine_v1::InstancesConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<InstancesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google
