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
// source: google/cloud/compute/security_policies/v1/security_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SECURITY_POLICIES_V1_INTERNAL_SECURITY_POLICIES_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SECURITY_POLICIES_V1_INTERNAL_SECURITY_POLICIES_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <google/cloud/compute/security_policies/v1/security_policies.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_security_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SecurityPoliciesRestStub {
 public:
  virtual ~SecurityPoliciesRestStub() = default;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAddRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::security_policies::v1::AddRuleRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::cpp::compute::v1::SecurityPoliciesAggregatedList>
  AggregatedListSecurityPolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::security_policies::v1::
          AggregatedListSecurityPoliciesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteSecurityPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::security_policies::v1::
          DeleteSecurityPolicyRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::SecurityPolicy>
  GetSecurityPolicy(google::cloud::rest_internal::RestContext& rest_context,
                    google::cloud::cpp::compute::security_policies::v1::
                        GetSecurityPolicyRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyRule> GetRule(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::security_policies::v1::GetRuleRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertSecurityPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::security_policies::v1::
          InsertSecurityPolicyRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyList>
  ListSecurityPolicies(google::cloud::rest_internal::RestContext& rest_context,
                       google::cloud::cpp::compute::security_policies::v1::
                           ListSecurityPoliciesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::
                       SecurityPoliciesListPreconfiguredExpressionSetsResponse>
  ListPreconfiguredExpressionSets(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::security_policies::v1::
          ListPreconfiguredExpressionSetsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchSecurityPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::security_policies::v1::
          PatchSecurityPolicyRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::security_policies::v1::
          PatchRuleRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRemoveRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::security_policies::v1::
          RemoveRuleRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetLabels(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::security_policies::v1::
          SetLabelsRequest const& request) = 0;

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

class DefaultSecurityPoliciesRestStub : public SecurityPoliciesRestStub {
 public:
  ~DefaultSecurityPoliciesRestStub() override = default;

  explicit DefaultSecurityPoliciesRestStub(Options options);
  DefaultSecurityPoliciesRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations, Options options);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncAddRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::security_policies::v1::AddRuleRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::SecurityPoliciesAggregatedList>
  AggregatedListSecurityPolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::security_policies::v1::
          AggregatedListSecurityPoliciesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteSecurityPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::security_policies::v1::
          DeleteSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::SecurityPolicy> GetSecurityPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::security_policies::v1::
          GetSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyRule> GetRule(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::security_policies::v1::GetRuleRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertSecurityPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::security_policies::v1::
          InsertSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyList>
  ListSecurityPolicies(google::cloud::rest_internal::RestContext& rest_context,
                       google::cloud::cpp::compute::security_policies::v1::
                           ListSecurityPoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::
               SecurityPoliciesListPreconfiguredExpressionSetsResponse>
  ListPreconfiguredExpressionSets(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::security_policies::v1::
          ListPreconfiguredExpressionSetsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchSecurityPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::security_policies::v1::
          PatchSecurityPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncPatchRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::security_policies::v1::
          PatchRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncRemoveRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::security_policies::v1::
          RemoveRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSetLabels(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::security_policies::v1::
          SetLabelsRequest const& request) override;

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
}  // namespace compute_security_policies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SECURITY_POLICIES_V1_INTERNAL_SECURITY_POLICIES_REST_STUB_H
