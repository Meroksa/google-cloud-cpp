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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ZONES_V1_INTERNAL_ZONES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ZONES_V1_INTERNAL_ZONES_TRACING_CONNECTION_H

#include "google/cloud/compute/zones/v1/zones_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_zones_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ZonesTracingConnection : public compute_zones_v1::ZonesConnection {
 public:
  ~ZonesTracingConnection() override = default;

  explicit ZonesTracingConnection(
      std::shared_ptr<compute_zones_v1::ZonesConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::cpp::compute::v1::Zone> GetZone(
      google::cloud::cpp::compute::zones::v1::GetZoneRequest const& request)
      override;

  StreamRange<google::cloud::cpp::compute::v1::Zone> ListZones(
      google::cloud::cpp::compute::zones::v1::ListZonesRequest request)
      override;

 private:
  std::shared_ptr<compute_zones_v1::ZonesConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_zones_v1::ZonesConnection> MakeZonesTracingConnection(
    std::shared_ptr<compute_zones_v1::ZonesConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_zones_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ZONES_V1_INTERNAL_ZONES_TRACING_CONNECTION_H
