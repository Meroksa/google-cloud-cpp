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
// source: google/cloud/aiplatform/v1/migration_service.proto

#include "google/cloud/aiplatform/v1/internal/migration_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/migration_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MigrationServiceMetadata::MigrationServiceMetadata(
    std::shared_ptr<MigrationServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::aiplatform::v1::SearchMigratableResourcesResponse>
MigrationServiceMetadata::SearchMigratableResources(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::SearchMigratableResourcesRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->SearchMigratableResources(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationServiceMetadata::AsyncBatchMigrateResources(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::BatchMigrateResourcesRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncBatchMigrateResources(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> MigrationServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void MigrationServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                           std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void MigrationServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
