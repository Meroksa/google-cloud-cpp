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
// source: google/devtools/cloudprofiler/v2/profiler.proto

#include "google/cloud/profiler/profiler_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace profiler {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ProfilerServiceConnectionIdempotencyPolicy::
    ~ProfilerServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultProfilerServiceConnectionIdempotencyPolicy
    : public ProfilerServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultProfilerServiceConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<ProfilerServiceConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<DefaultProfilerServiceConnectionIdempotencyPolicy>(
        *this);
  }

  Idempotency CreateProfile(
      google::devtools::cloudprofiler::v2::CreateProfileRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateOfflineProfile(
      google::devtools::cloudprofiler::v2::CreateOfflineProfileRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateProfile(
      google::devtools::cloudprofiler::v2::UpdateProfileRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<ProfilerServiceConnectionIdempotencyPolicy>
MakeDefaultProfilerServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultProfilerServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace profiler
}  // namespace cloud
}  // namespace google
