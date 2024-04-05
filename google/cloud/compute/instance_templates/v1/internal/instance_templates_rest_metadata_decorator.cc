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
// source: google/cloud/compute/instance_templates/v1/instance_templates.proto

#include "google/cloud/compute/instance_templates/v1/internal/instance_templates_rest_metadata_decorator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/rest_set_metadata.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_instance_templates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstanceTemplatesRestMetadata::InstanceTemplatesRestMetadata(
    std::shared_ptr<InstanceTemplatesRestStub> child,
    std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::cpp::compute::v1::InstanceTemplateAggregatedList>
InstanceTemplatesRestMetadata::AggregatedListInstanceTemplates(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_templates::v1::
        AggregatedListInstanceTemplatesRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->AggregatedListInstanceTemplates(rest_context, options,
                                                 request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceTemplatesRestMetadata::AsyncDeleteInstanceTemplate(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_templates::v1::
        DeleteInstanceTemplateRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteInstanceTemplate(cq, std::move(rest_context),
                                             std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceTemplate>
InstanceTemplatesRestMetadata::GetInstanceTemplate(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_templates::v1::
        GetInstanceTemplateRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetInstanceTemplate(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InstanceTemplatesRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_templates::v1::
        GetIamPolicyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetIamPolicy(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceTemplatesRestMetadata::AsyncInsertInstanceTemplate(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_templates::v1::
        InsertInstanceTemplateRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncInsertInstanceTemplate(cq, std::move(rest_context),
                                             std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceTemplateList>
InstanceTemplatesRestMetadata::ListInstanceTemplates(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_templates::v1::
        ListInstanceTemplatesRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListInstanceTemplates(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InstanceTemplatesRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_templates::v1::
        SetIamPolicyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->SetIamPolicy(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
InstanceTemplatesRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_templates::v1::
        TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->TestIamPermissions(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceTemplatesRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> InstanceTemplatesRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void InstanceTemplatesRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  google::cloud::rest_internal::SetMetadata(rest_context, options, params,
                                            api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_templates_v1_internal
}  // namespace cloud
}  // namespace google
