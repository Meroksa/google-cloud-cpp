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
// source: google/cloud/compute/backend_buckets/v1/backend_buckets.proto

#include "google/cloud/compute/backend_buckets/v1/internal/backend_buckets_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_backend_buckets_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

BackendBucketsTracingConnection::BackendBucketsTracingConnection(
    std::shared_ptr<compute_backend_buckets_v1::BackendBucketsConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsTracingConnection::AddSignedUrlKey(
    google::cloud::cpp::compute::backend_buckets::v1::
        AddSignedUrlKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_backend_buckets_v1::BackendBucketsConnection::AddSignedUrlKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->AddSignedUrlKey(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsTracingConnection::DeleteBackendBucket(
    google::cloud::cpp::compute::backend_buckets::v1::
        DeleteBackendBucketRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_backend_buckets_v1::BackendBucketsConnection::"
      "DeleteBackendBucket");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteBackendBucket(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsTracingConnection::DeleteSignedUrlKey(
    google::cloud::cpp::compute::backend_buckets::v1::
        DeleteSignedUrlKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_backend_buckets_v1::BackendBucketsConnection::"
      "DeleteSignedUrlKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteSignedUrlKey(request));
}

StatusOr<google::cloud::cpp::compute::v1::BackendBucket>
BackendBucketsTracingConnection::GetBackendBucket(
    google::cloud::cpp::compute::backend_buckets::v1::
        GetBackendBucketRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_backend_buckets_v1::BackendBucketsConnection::GetBackendBucket");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetBackendBucket(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsTracingConnection::InsertBackendBucket(
    google::cloud::cpp::compute::backend_buckets::v1::
        InsertBackendBucketRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_backend_buckets_v1::BackendBucketsConnection::"
      "InsertBackendBucket");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertBackendBucket(request));
}

StreamRange<google::cloud::cpp::compute::v1::BackendBucket>
BackendBucketsTracingConnection::ListBackendBuckets(
    google::cloud::cpp::compute::backend_buckets::v1::ListBackendBucketsRequest
        request) {
  auto span = internal::MakeSpan(
      "compute_backend_buckets_v1::BackendBucketsConnection::"
      "ListBackendBuckets");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListBackendBuckets(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::BackendBucket>(std::move(span),
                                                      std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsTracingConnection::PatchBackendBucket(
    google::cloud::cpp::compute::backend_buckets::v1::
        PatchBackendBucketRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_backend_buckets_v1::BackendBucketsConnection::"
      "PatchBackendBucket");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchBackendBucket(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsTracingConnection::SetEdgeSecurityPolicy(
    google::cloud::cpp::compute::backend_buckets::v1::
        SetEdgeSecurityPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_backend_buckets_v1::BackendBucketsConnection::"
      "SetEdgeSecurityPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetEdgeSecurityPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsTracingConnection::UpdateBackendBucket(
    google::cloud::cpp::compute::backend_buckets::v1::
        UpdateBackendBucketRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_backend_buckets_v1::BackendBucketsConnection::"
      "UpdateBackendBucket");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateBackendBucket(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_backend_buckets_v1::BackendBucketsConnection>
MakeBackendBucketsTracingConnection(
    std::shared_ptr<compute_backend_buckets_v1::BackendBucketsConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<BackendBucketsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_backend_buckets_v1_internal
}  // namespace cloud
}  // namespace google
