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
// source: google/cloud/compute/licenses/v1/licenses.proto

#include "google/cloud/compute/licenses/v1/internal/licenses_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_licenses_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

LicensesTracingConnection::LicensesTracingConnection(
    std::shared_ptr<compute_licenses_v1::LicensesConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesTracingConnection::DeleteLicense(
    google::cloud::cpp::compute::licenses::v1::DeleteLicenseRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_licenses_v1::LicensesConnection::DeleteLicense");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteLicense(request));
}

StatusOr<google::cloud::cpp::compute::v1::License>
LicensesTracingConnection::GetLicense(
    google::cloud::cpp::compute::licenses::v1::GetLicenseRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_licenses_v1::LicensesConnection::GetLicense");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLicense(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
LicensesTracingConnection::GetIamPolicy(
    google::cloud::cpp::compute::licenses::v1::GetIamPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_licenses_v1::LicensesConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesTracingConnection::InsertLicense(
    google::cloud::cpp::compute::licenses::v1::InsertLicenseRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_licenses_v1::LicensesConnection::InsertLicense");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->InsertLicense(request));
}

StreamRange<google::cloud::cpp::compute::v1::License>
LicensesTracingConnection::ListLicenses(
    google::cloud::cpp::compute::licenses::v1::ListLicensesRequest request) {
  auto span = internal::MakeSpan(
      "compute_licenses_v1::LicensesConnection::ListLicenses");
  internal::OTelScope scope(span);
  auto sr = child_->ListLicenses(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::License>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
LicensesTracingConnection::SetIamPolicy(
    google::cloud::cpp::compute::licenses::v1::SetIamPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_licenses_v1::LicensesConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
LicensesTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::licenses::v1::TestIamPermissionsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_licenses_v1::LicensesConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_licenses_v1::LicensesConnection>
MakeLicensesTracingConnection(
    std::shared_ptr<compute_licenses_v1::LicensesConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<LicensesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_licenses_v1_internal
}  // namespace cloud
}  // namespace google
