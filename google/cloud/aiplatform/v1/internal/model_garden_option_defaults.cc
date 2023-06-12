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
// source: google/cloud/aiplatform/v1/model_garden_service.proto

#include "google/cloud/aiplatform/v1/internal/model_garden_option_defaults.h"
#include "google/cloud/aiplatform/v1/model_garden_connection.h"
#include "google/cloud/aiplatform/v1/model_garden_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ModelGardenServiceDefaultOptions(std::string const& location,
                                         Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_MODEL_GARDEN_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_MODEL_GARDEN_SERVICE_AUTHORITY",
      absl::StrCat(location, "-", "aiplatform.googleapis.com"));
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<aiplatform_v1::ModelGardenServiceRetryPolicyOption>()) {
    options.set<aiplatform_v1::ModelGardenServiceRetryPolicyOption>(
        aiplatform_v1::ModelGardenServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<aiplatform_v1::ModelGardenServiceBackoffPolicyOption>()) {
    options.set<aiplatform_v1::ModelGardenServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<aiplatform_v1::
                       ModelGardenServiceConnectionIdempotencyPolicyOption>()) {
    options.set<
        aiplatform_v1::ModelGardenServiceConnectionIdempotencyPolicyOption>(
        aiplatform_v1::
            MakeDefaultModelGardenServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
