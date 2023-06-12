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
// source: google/cloud/aiplatform/v1/specialist_pool_service.proto

#include "google/cloud/aiplatform/v1/specialist_pool_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SpecialistPoolServiceClient::SpecialistPoolServiceClient(
    std::shared_ptr<SpecialistPoolServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
SpecialistPoolServiceClient::~SpecialistPoolServiceClient() = default;

future<StatusOr<google::cloud::aiplatform::v1::SpecialistPool>>
SpecialistPoolServiceClient::CreateSpecialistPool(
    std::string const& parent,
    google::cloud::aiplatform::v1::SpecialistPool const& specialist_pool,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateSpecialistPoolRequest request;
  request.set_parent(parent);
  *request.mutable_specialist_pool() = specialist_pool;
  return connection_->CreateSpecialistPool(request);
}

future<StatusOr<google::cloud::aiplatform::v1::SpecialistPool>>
SpecialistPoolServiceClient::CreateSpecialistPool(
    google::cloud::aiplatform::v1::CreateSpecialistPoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSpecialistPool(request);
}

StatusOr<google::cloud::aiplatform::v1::SpecialistPool>
SpecialistPoolServiceClient::GetSpecialistPool(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetSpecialistPoolRequest request;
  request.set_name(name);
  return connection_->GetSpecialistPool(request);
}

StatusOr<google::cloud::aiplatform::v1::SpecialistPool>
SpecialistPoolServiceClient::GetSpecialistPool(
    google::cloud::aiplatform::v1::GetSpecialistPoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSpecialistPool(request);
}

StreamRange<google::cloud::aiplatform::v1::SpecialistPool>
SpecialistPoolServiceClient::ListSpecialistPools(std::string const& parent,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListSpecialistPoolsRequest request;
  request.set_parent(parent);
  return connection_->ListSpecialistPools(request);
}

StreamRange<google::cloud::aiplatform::v1::SpecialistPool>
SpecialistPoolServiceClient::ListSpecialistPools(
    google::cloud::aiplatform::v1::ListSpecialistPoolsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSpecialistPools(std::move(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
SpecialistPoolServiceClient::DeleteSpecialistPool(std::string const& name,
                                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteSpecialistPoolRequest request;
  request.set_name(name);
  return connection_->DeleteSpecialistPool(request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
SpecialistPoolServiceClient::DeleteSpecialistPool(
    google::cloud::aiplatform::v1::DeleteSpecialistPoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSpecialistPool(request);
}

future<StatusOr<google::cloud::aiplatform::v1::SpecialistPool>>
SpecialistPoolServiceClient::UpdateSpecialistPool(
    google::cloud::aiplatform::v1::SpecialistPool const& specialist_pool,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdateSpecialistPoolRequest request;
  *request.mutable_specialist_pool() = specialist_pool;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateSpecialistPool(request);
}

future<StatusOr<google::cloud::aiplatform::v1::SpecialistPool>>
SpecialistPoolServiceClient::UpdateSpecialistPool(
    google::cloud::aiplatform::v1::UpdateSpecialistPoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSpecialistPool(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
