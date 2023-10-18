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
// source: google/cloud/resourcemanager/v3/tag_keys.proto

#include "google/cloud/resourcemanager/v3/internal/tag_keys_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TagKeysTracingConnection::TagKeysTracingConnection(
    std::shared_ptr<resourcemanager_v3::TagKeysConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::resourcemanager::v3::TagKey>
TagKeysTracingConnection::ListTagKeys(
    google::cloud::resourcemanager::v3::ListTagKeysRequest request) {
  auto span =
      internal::MakeSpan("resourcemanager_v3::TagKeysConnection::ListTagKeys");
  internal::OTelScope scope(span);
  auto sr = child_->ListTagKeys(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::resourcemanager::v3::TagKey>(std::move(span),
                                                  std::move(sr));
}

StatusOr<google::cloud::resourcemanager::v3::TagKey>
TagKeysTracingConnection::GetTagKey(
    google::cloud::resourcemanager::v3::GetTagKeyRequest const& request) {
  auto span =
      internal::MakeSpan("resourcemanager_v3::TagKeysConnection::GetTagKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTagKey(request));
}

StatusOr<google::cloud::resourcemanager::v3::TagKey>
TagKeysTracingConnection::GetNamespacedTagKey(
    google::cloud::resourcemanager::v3::GetNamespacedTagKeyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::TagKeysConnection::GetNamespacedTagKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNamespacedTagKey(request));
}

future<StatusOr<google::cloud::resourcemanager::v3::TagKey>>
TagKeysTracingConnection::CreateTagKey(
    google::cloud::resourcemanager::v3::CreateTagKeyRequest const& request) {
  auto span =
      internal::MakeSpan("resourcemanager_v3::TagKeysConnection::CreateTagKey");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateTagKey(request));
}

future<StatusOr<google::cloud::resourcemanager::v3::TagKey>>
TagKeysTracingConnection::UpdateTagKey(
    google::cloud::resourcemanager::v3::UpdateTagKeyRequest const& request) {
  auto span =
      internal::MakeSpan("resourcemanager_v3::TagKeysConnection::UpdateTagKey");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateTagKey(request));
}

future<StatusOr<google::cloud::resourcemanager::v3::TagKey>>
TagKeysTracingConnection::DeleteTagKey(
    google::cloud::resourcemanager::v3::DeleteTagKeyRequest const& request) {
  auto span =
      internal::MakeSpan("resourcemanager_v3::TagKeysConnection::DeleteTagKey");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteTagKey(request));
}

StatusOr<google::iam::v1::Policy> TagKeysTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span =
      internal::MakeSpan("resourcemanager_v3::TagKeysConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy> TagKeysTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span =
      internal::MakeSpan("resourcemanager_v3::TagKeysConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
TagKeysTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::TagKeysConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<resourcemanager_v3::TagKeysConnection>
MakeTagKeysTracingConnection(
    std::shared_ptr<resourcemanager_v3::TagKeysConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<TagKeysTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google
