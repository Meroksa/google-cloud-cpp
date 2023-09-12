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
// source: google/cloud/compute/https_health_checks/v1/https_health_checks.proto

#include "google/cloud/compute/https_health_checks/v1/https_health_checks_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_https_health_checks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

HttpsHealthChecksConnectionIdempotencyPolicy::
    ~HttpsHealthChecksConnectionIdempotencyPolicy() = default;

std::unique_ptr<HttpsHealthChecksConnectionIdempotencyPolicy>
HttpsHealthChecksConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<HttpsHealthChecksConnectionIdempotencyPolicy>(*this);
}

Idempotency
HttpsHealthChecksConnectionIdempotencyPolicy::DeleteHttpsHealthCheck(
    google::cloud::cpp::compute::https_health_checks::v1::
        DeleteHttpsHealthCheckRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency HttpsHealthChecksConnectionIdempotencyPolicy::GetHttpsHealthCheck(
    google::cloud::cpp::compute::https_health_checks::v1::
        GetHttpsHealthCheckRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
HttpsHealthChecksConnectionIdempotencyPolicy::InsertHttpsHealthCheck(
    google::cloud::cpp::compute::https_health_checks::v1::
        InsertHttpsHealthCheckRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency HttpsHealthChecksConnectionIdempotencyPolicy::ListHttpsHealthChecks(
    google::cloud::cpp::compute::https_health_checks::v1::
        ListHttpsHealthChecksRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency HttpsHealthChecksConnectionIdempotencyPolicy::PatchHttpsHealthCheck(
    google::cloud::cpp::compute::https_health_checks::v1::
        PatchHttpsHealthCheckRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
HttpsHealthChecksConnectionIdempotencyPolicy::UpdateHttpsHealthCheck(
    google::cloud::cpp::compute::https_health_checks::v1::
        UpdateHttpsHealthCheckRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<HttpsHealthChecksConnectionIdempotencyPolicy>
MakeDefaultHttpsHealthChecksConnectionIdempotencyPolicy() {
  return std::make_unique<HttpsHealthChecksConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_https_health_checks_v1
}  // namespace cloud
}  // namespace google
