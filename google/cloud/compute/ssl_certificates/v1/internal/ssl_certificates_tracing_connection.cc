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
// source: google/cloud/compute/ssl_certificates/v1/ssl_certificates.proto

#include "google/cloud/compute/ssl_certificates/v1/internal/ssl_certificates_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_ssl_certificates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SslCertificatesTracingConnection::SslCertificatesTracingConnection(
    std::shared_ptr<compute_ssl_certificates_v1::SslCertificatesConnection>
        child)
    : child_(std::move(child)) {}

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::SslCertificatesScopedList>>
SslCertificatesTracingConnection::AggregatedListSslCertificates(
    google::cloud::cpp::compute::ssl_certificates::v1::
        AggregatedListSslCertificatesRequest request) {
  auto span = internal::MakeSpan(
      "compute_ssl_certificates_v1::SslCertificatesConnection::"
      "AggregatedListSslCertificates");
  internal::OTelScope scope(span);
  auto sr = child_->AggregatedListSslCertificates(std::move(request));
  return internal::MakeTracedStreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::SslCertificatesScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SslCertificatesTracingConnection::DeleteSslCertificate(
    google::cloud::cpp::compute::ssl_certificates::v1::
        DeleteSslCertificateRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_ssl_certificates_v1::SslCertificatesConnection::"
      "DeleteSslCertificate");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteSslCertificate(request));
}

StatusOr<google::cloud::cpp::compute::v1::SslCertificate>
SslCertificatesTracingConnection::GetSslCertificate(
    google::cloud::cpp::compute::ssl_certificates::v1::
        GetSslCertificateRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_ssl_certificates_v1::SslCertificatesConnection::"
      "GetSslCertificate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSslCertificate(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SslCertificatesTracingConnection::InsertSslCertificate(
    google::cloud::cpp::compute::ssl_certificates::v1::
        InsertSslCertificateRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_ssl_certificates_v1::SslCertificatesConnection::"
      "InsertSslCertificate");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertSslCertificate(request));
}

StreamRange<google::cloud::cpp::compute::v1::SslCertificate>
SslCertificatesTracingConnection::ListSslCertificates(
    google::cloud::cpp::compute::ssl_certificates::v1::
        ListSslCertificatesRequest request) {
  auto span = internal::MakeSpan(
      "compute_ssl_certificates_v1::SslCertificatesConnection::"
      "ListSslCertificates");
  internal::OTelScope scope(span);
  auto sr = child_->ListSslCertificates(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::SslCertificate>(std::move(span),
                                                       std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_ssl_certificates_v1::SslCertificatesConnection>
MakeSslCertificatesTracingConnection(
    std::shared_ptr<compute_ssl_certificates_v1::SslCertificatesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<SslCertificatesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_ssl_certificates_v1_internal
}  // namespace cloud
}  // namespace google
