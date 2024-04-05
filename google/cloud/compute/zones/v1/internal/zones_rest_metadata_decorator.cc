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
// source: google/cloud/compute/zones/v1/zones.proto

#include "google/cloud/compute/zones/v1/internal/zones_rest_metadata_decorator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/rest_set_metadata.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_zones_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ZonesRestMetadata::ZonesRestMetadata(std::shared_ptr<ZonesRestStub> child,
                                     std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::cpp::compute::v1::Zone> ZonesRestMetadata::GetZone(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::zones::v1::GetZoneRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetZone(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::ZoneList>
ZonesRestMetadata::ListZones(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::zones::v1::ListZonesRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListZones(rest_context, options, request);
}

void ZonesRestMetadata::SetMetadata(rest_internal::RestContext& rest_context,
                                    Options const& options,
                                    std::vector<std::string> const& params) {
  google::cloud::rest_internal::SetMetadata(rest_context, options, params,
                                            api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_zones_v1_internal
}  // namespace cloud
}  // namespace google
