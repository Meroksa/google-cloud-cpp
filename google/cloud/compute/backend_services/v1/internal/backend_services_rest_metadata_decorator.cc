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
// source: google/cloud/compute/backend_services/v1/backend_services.proto

#include "google/cloud/compute/backend_services/v1/internal/backend_services_rest_metadata_decorator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/rest_set_metadata.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_backend_services_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BackendServicesRestMetadata::BackendServicesRestMetadata(
    std::shared_ptr<BackendServicesRestStub> child,
    std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncAddSignedUrlKey(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::backend_services::v1::
        AddSignedUrlKeyRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncAddSignedUrlKey(cq, std::move(rest_context),
                                      std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::BackendServiceAggregatedList>
BackendServicesRestMetadata::AggregatedListBackendServices(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::backend_services::v1::
        AggregatedListBackendServicesRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->AggregatedListBackendServices(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncDeleteBackendService(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::backend_services::v1::
        DeleteBackendServiceRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteBackendService(cq, std::move(rest_context),
                                           std::move(options), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncDeleteSignedUrlKey(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::backend_services::v1::
        DeleteSignedUrlKeyRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteSignedUrlKey(cq, std::move(rest_context),
                                         std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::BackendService>
BackendServicesRestMetadata::GetBackendService(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::backend_services::v1::
        GetBackendServiceRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetBackendService(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::BackendServiceGroupHealth>
BackendServicesRestMetadata::GetHealth(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::backend_services::v1::GetHealthRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetHealth(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
BackendServicesRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::backend_services::v1::
        GetIamPolicyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetIamPolicy(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncInsertBackendService(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::backend_services::v1::
        InsertBackendServiceRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncInsertBackendService(cq, std::move(rest_context),
                                           std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::BackendServiceList>
BackendServicesRestMetadata::ListBackendServices(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::backend_services::v1::
        ListBackendServicesRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListBackendServices(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::BackendServiceListUsable>
BackendServicesRestMetadata::ListUsable(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::backend_services::v1::ListUsableRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->ListUsable(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncPatchBackendService(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::backend_services::v1::
        PatchBackendServiceRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncPatchBackendService(cq, std::move(rest_context),
                                          std::move(options), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncSetEdgeSecurityPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::backend_services::v1::
        SetEdgeSecurityPolicyRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncSetEdgeSecurityPolicy(cq, std::move(rest_context),
                                            std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
BackendServicesRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::backend_services::v1::
        SetIamPolicyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->SetIamPolicy(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncSetSecurityPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::backend_services::v1::
        SetSecurityPolicyRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncSetSecurityPolicy(cq, std::move(rest_context),
                                        std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
BackendServicesRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::backend_services::v1::
        TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->TestIamPermissions(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncUpdateBackendService(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::backend_services::v1::
        UpdateBackendServiceRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncUpdateBackendService(cq, std::move(rest_context),
                                           std::move(options), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> BackendServicesRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void BackendServicesRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  google::cloud::rest_internal::SetMetadata(rest_context, options, params,
                                            api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_backend_services_v1_internal
}  // namespace cloud
}  // namespace google
