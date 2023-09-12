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
// source: google/cloud/compute/regions/v1/regions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGIONS_V1_INTERNAL_REGIONS_REST_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGIONS_V1_INTERNAL_REGIONS_REST_LOGGING_DECORATOR_H

#include "google/cloud/compute/regions/v1/internal/regions_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/regions/v1/regions.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace compute_regions_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionsRestLogging : public RegionsRestStub {
 public:
  ~RegionsRestLogging() override = default;
  RegionsRestLogging(std::shared_ptr<RegionsRestStub> child,
                     TracingOptions tracing_options,
                     std::set<std::string> components);

  StatusOr<google::cloud::cpp::compute::v1::Region> GetRegion(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::regions::v1::GetRegionRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::RegionList> ListRegions(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::regions::v1::ListRegionsRequest const&
          request) override;

 private:
  std::shared_ptr<RegionsRestStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_regions_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGIONS_V1_INTERNAL_REGIONS_REST_LOGGING_DECORATOR_H
