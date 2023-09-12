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
// google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways.proto

#include "google/cloud/compute/external_vpn_gateways/v1/internal/external_vpn_gateways_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_external_vpn_gateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ExternalVpnGatewaysRestLogging::ExternalVpnGatewaysRestLogging(
    std::shared_ptr<ExternalVpnGatewaysRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ExternalVpnGatewaysRestLogging::AsyncDeleteExternalVpnGateway(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::external_vpn_gateways::v1::
        DeleteExternalVpnGatewayRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::external_vpn_gateways::v1::
                 DeleteExternalVpnGatewayRequest const& request) {
        return child_->AsyncDeleteExternalVpnGateway(
            cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::ExternalVpnGateway>
ExternalVpnGatewaysRestLogging::GetExternalVpnGateway(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::external_vpn_gateways::v1::
        GetExternalVpnGatewayRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::external_vpn_gateways::v1::
                 GetExternalVpnGatewayRequest const& request) {
        return child_->GetExternalVpnGateway(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ExternalVpnGatewaysRestLogging::AsyncInsertExternalVpnGateway(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::external_vpn_gateways::v1::
        InsertExternalVpnGatewayRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::external_vpn_gateways::v1::
                 InsertExternalVpnGatewayRequest const& request) {
        return child_->AsyncInsertExternalVpnGateway(
            cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::ExternalVpnGatewayList>
ExternalVpnGatewaysRestLogging::ListExternalVpnGateways(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::external_vpn_gateways::v1::
        ListExternalVpnGatewaysRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::external_vpn_gateways::v1::
                 ListExternalVpnGatewaysRequest const& request) {
        return child_->ListExternalVpnGateways(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ExternalVpnGatewaysRestLogging::AsyncSetLabels(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::external_vpn_gateways::v1::
        SetLabelsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::external_vpn_gateways::v1::
                 SetLabelsRequest const& request) {
        return child_->AsyncSetLabels(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ExternalVpnGatewaysRestLogging::TestIamPermissions(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::external_vpn_gateways::v1::
        TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::external_vpn_gateways::v1::
                 TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ExternalVpnGatewaysRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::global_operations::v1::
                 GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<Status> ExternalVpnGatewaysRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_external_vpn_gateways_v1_internal
}  // namespace cloud
}  // namespace google
