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
// source:
// google/cloud/compute/region_health_check_services/v1/region_health_check_services.proto

#include "google/cloud/compute/region_health_check_services/v1/internal/region_health_check_services_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_health_check_services_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionHealthCheckServicesRestLogging::RegionHealthCheckServicesRestLogging(
    std::shared_ptr<RegionHealthCheckServicesRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesRestLogging::AsyncDeleteHealthCheckService(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_health_check_services::v1::
        DeleteHealthCheckServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_health_check_services::v1::
                 DeleteHealthCheckServiceRequest const& request) {
        return child_->AsyncDeleteHealthCheckService(
            cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::HealthCheckService>
RegionHealthCheckServicesRestLogging::GetHealthCheckService(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_health_check_services::v1::
        GetHealthCheckServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_health_check_services::v1::
                 GetHealthCheckServiceRequest const& request) {
        return child_->GetHealthCheckService(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesRestLogging::AsyncInsertHealthCheckService(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_health_check_services::v1::
        InsertHealthCheckServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_health_check_services::v1::
                 InsertHealthCheckServiceRequest const& request) {
        return child_->AsyncInsertHealthCheckService(
            cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::HealthCheckServicesList>
RegionHealthCheckServicesRestLogging::ListRegionHealthCheckServices(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_health_check_services::v1::
        ListRegionHealthCheckServicesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_health_check_services::v1::
                 ListRegionHealthCheckServicesRequest const& request) {
        return child_->ListRegionHealthCheckServices(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesRestLogging::AsyncPatchHealthCheckService(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_health_check_services::v1::
        PatchHealthCheckServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_health_check_services::v1::
                 PatchHealthCheckServiceRequest const& request) {
        return child_->AsyncPatchHealthCheckService(cq, std::move(rest_context),
                                                    request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_operations::v1::
                 GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<Status> RegionHealthCheckServicesRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_operations::v1::
                 DeleteOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_health_check_services_v1_internal
}  // namespace cloud
}  // namespace google
