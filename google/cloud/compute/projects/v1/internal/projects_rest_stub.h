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
// source: google/cloud/compute/projects/v1/projects.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PROJECTS_V1_INTERNAL_PROJECTS_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PROJECTS_V1_INTERNAL_PROJECTS_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <google/cloud/compute/projects/v1/projects.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_projects_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ProjectsRestStub {
 public:
  virtual ~ProjectsRestStub() = default;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDisableXpnHost(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::DisableXpnHostRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDisableXpnResource(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::
          DisableXpnResourceRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncEnableXpnHost(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::EnableXpnHostRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncEnableXpnResource(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::EnableXpnResourceRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Project> GetProject(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::projects::v1::GetProjectRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Project> GetXpnHost(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::projects::v1::GetXpnHostRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::ProjectsGetXpnResources>
  GetXpnResources(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::projects::v1::GetXpnResourcesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::XpnHostList> ListXpnHosts(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::projects::v1::ListXpnHostsRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncMoveDisk(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::MoveDiskRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncMoveInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::MoveInstanceRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetCommonInstanceMetadata(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::
          SetCommonInstanceMetadataRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetDefaultNetworkTier(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::
          SetDefaultNetworkTierRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetUsageExportBucket(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::
          SetUsageExportBucketRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest const& request) = 0;
};

class DefaultProjectsRestStub : public ProjectsRestStub {
 public:
  ~DefaultProjectsRestStub() override = default;

  explicit DefaultProjectsRestStub(Options options);
  DefaultProjectsRestStub(std::shared_ptr<rest_internal::RestClient> service,
                          std::shared_ptr<rest_internal::RestClient> operations,
                          Options options);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDisableXpnHost(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::DisableXpnHostRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDisableXpnResource(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::
          DisableXpnResourceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncEnableXpnHost(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::EnableXpnHostRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncEnableXpnResource(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::EnableXpnResourceRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Project> GetProject(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::projects::v1::GetProjectRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Project> GetXpnHost(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::projects::v1::GetXpnHostRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::ProjectsGetXpnResources>
  GetXpnResources(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::projects::v1::GetXpnResourcesRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::XpnHostList> ListXpnHosts(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::projects::v1::ListXpnHostsRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncMoveDisk(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::MoveDiskRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncMoveInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::MoveInstanceRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetCommonInstanceMetadata(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::
          SetCommonInstanceMetadataRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetDefaultNetworkTier(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::
          SetDefaultNetworkTierRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetUsageExportBucket(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::projects::v1::
          SetUsageExportBucketRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_projects_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PROJECTS_V1_INTERNAL_PROJECTS_REST_STUB_H
