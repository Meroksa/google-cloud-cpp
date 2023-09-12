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
// google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_PUBLIC_DELEGATED_PREFIXES_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_PUBLIC_DELEGATED_PREFIXES_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.pb.h>
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_public_delegated_prefixes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PublicDelegatedPrefixesRestStub {
 public:
  virtual ~PublicDelegatedPrefixesRestStub() = default;

  virtual StatusOr<
      google::cloud::cpp::compute::v1::PublicDelegatedPrefixAggregatedList>
  AggregatedListPublicDelegatedPrefixes(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          AggregatedListPublicDelegatedPrefixesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeletePublicDelegatedPrefix(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          DeletePublicDelegatedPrefixRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  GetPublicDelegatedPrefix(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          GetPublicDelegatedPrefixRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertPublicDelegatedPrefix(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          InsertPublicDelegatedPrefixRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefixList>
  ListPublicDelegatedPrefixes(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          ListPublicDelegatedPrefixesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchPublicDelegatedPrefix(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          PatchPublicDelegatedPrefixRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) = 0;
};

class DefaultPublicDelegatedPrefixesRestStub
    : public PublicDelegatedPrefixesRestStub {
 public:
  ~DefaultPublicDelegatedPrefixesRestStub() override = default;

  explicit DefaultPublicDelegatedPrefixesRestStub(Options options);
  DefaultPublicDelegatedPrefixesRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations, Options options);

  StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefixAggregatedList>
  AggregatedListPublicDelegatedPrefixes(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          AggregatedListPublicDelegatedPrefixesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeletePublicDelegatedPrefix(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          DeletePublicDelegatedPrefixRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  GetPublicDelegatedPrefix(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          GetPublicDelegatedPrefixRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertPublicDelegatedPrefix(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          InsertPublicDelegatedPrefixRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefixList>
  ListPublicDelegatedPrefixes(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          ListPublicDelegatedPrefixesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchPublicDelegatedPrefix(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          PatchPublicDelegatedPrefixRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_delegated_prefixes_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_PUBLIC_DELEGATED_PREFIXES_REST_STUB_H
