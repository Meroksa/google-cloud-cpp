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
// source: google/cloud/compute/routes/v1/routes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTES_V1_INTERNAL_ROUTES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTES_V1_INTERNAL_ROUTES_TRACING_CONNECTION_H

#include "google/cloud/compute/routes/v1/routes_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_routes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class RoutesTracingConnection : public compute_routes_v1::RoutesConnection {
 public:
  ~RoutesTracingConnection() override = default;

  explicit RoutesTracingConnection(
      std::shared_ptr<compute_routes_v1::RoutesConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteRoute(
      google::cloud::cpp::compute::routes::v1::DeleteRouteRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Route> GetRoute(
      google::cloud::cpp::compute::routes::v1::GetRouteRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertRoute(
      google::cloud::cpp::compute::routes::v1::InsertRouteRequest const&
          request) override;

  StreamRange<google::cloud::cpp::compute::v1::Route> ListRoutes(
      google::cloud::cpp::compute::routes::v1::ListRoutesRequest request)
      override;

 private:
  std::shared_ptr<compute_routes_v1::RoutesConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_routes_v1::RoutesConnection>
MakeRoutesTracingConnection(
    std::shared_ptr<compute_routes_v1::RoutesConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_routes_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTES_V1_INTERNAL_ROUTES_TRACING_CONNECTION_H
