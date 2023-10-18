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
// source: google/cloud/resourcemanager/v3/tag_holds.proto

#include "google/cloud/resourcemanager/v3/internal/tag_holds_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TagHoldsTracingConnection::TagHoldsTracingConnection(
    std::shared_ptr<resourcemanager_v3::TagHoldsConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::resourcemanager::v3::TagHold>>
TagHoldsTracingConnection::CreateTagHold(
    google::cloud::resourcemanager::v3::CreateTagHoldRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::TagHoldsConnection::CreateTagHold");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateTagHold(request));
}

future<StatusOr<google::cloud::resourcemanager::v3::DeleteTagHoldMetadata>>
TagHoldsTracingConnection::DeleteTagHold(
    google::cloud::resourcemanager::v3::DeleteTagHoldRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::TagHoldsConnection::DeleteTagHold");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteTagHold(request));
}

StreamRange<google::cloud::resourcemanager::v3::TagHold>
TagHoldsTracingConnection::ListTagHolds(
    google::cloud::resourcemanager::v3::ListTagHoldsRequest request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::TagHoldsConnection::ListTagHolds");
  internal::OTelScope scope(span);
  auto sr = child_->ListTagHolds(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::resourcemanager::v3::TagHold>(std::move(span),
                                                   std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<resourcemanager_v3::TagHoldsConnection>
MakeTagHoldsTracingConnection(
    std::shared_ptr<resourcemanager_v3::TagHoldsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<TagHoldsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google
