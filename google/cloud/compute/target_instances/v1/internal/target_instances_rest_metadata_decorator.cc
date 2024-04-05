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
// source: google/cloud/compute/target_instances/v1/target_instances.proto

#include "google/cloud/compute/target_instances/v1/internal/target_instances_rest_metadata_decorator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/rest_set_metadata.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_target_instances_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetInstancesRestMetadata::TargetInstancesRestMetadata(
    std::shared_ptr<TargetInstancesRestStub> child,
    std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::cpp::compute::v1::TargetInstanceAggregatedList>
TargetInstancesRestMetadata::AggregatedListTargetInstances(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_instances::v1::
        AggregatedListTargetInstancesRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->AggregatedListTargetInstances(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesRestMetadata::AsyncDeleteTargetInstance(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::target_instances::v1::
        DeleteTargetInstanceRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteTargetInstance(cq, std::move(rest_context),
                                           std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetInstance>
TargetInstancesRestMetadata::GetTargetInstance(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_instances::v1::
        GetTargetInstanceRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetTargetInstance(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesRestMetadata::AsyncInsertTargetInstance(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::target_instances::v1::
        InsertTargetInstanceRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncInsertTargetInstance(cq, std::move(rest_context),
                                           std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetInstanceList>
TargetInstancesRestMetadata::ListTargetInstances(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_instances::v1::
        ListTargetInstancesRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListTargetInstances(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesRestMetadata::AsyncSetSecurityPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::target_instances::v1::
        SetSecurityPolicyRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncSetSecurityPolicy(cq, std::move(rest_context),
                                        std::move(options), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> TargetInstancesRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void TargetInstancesRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  google::cloud::rest_internal::SetMetadata(rest_context, options, params,
                                            api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_instances_v1_internal
}  // namespace cloud
}  // namespace google
