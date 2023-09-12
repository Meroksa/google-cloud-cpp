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
// source: google/cloud/compute/ssl_policies/v1/ssl_policies.proto

#include "google/cloud/compute/ssl_policies/v1/internal/ssl_policies_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_ssl_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SslPoliciesRestLogging::SslPoliciesRestLogging(
    std::shared_ptr<SslPoliciesRestStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::cpp::compute::v1::SslPoliciesAggregatedList>
SslPoliciesRestLogging::AggregatedListSslPolicies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::ssl_policies::v1::
        AggregatedListSslPoliciesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::ssl_policies::v1::
                 AggregatedListSslPoliciesRequest const& request) {
        return child_->AggregatedListSslPolicies(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SslPoliciesRestLogging::AsyncDeleteSslPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::ssl_policies::v1::DeleteSslPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::ssl_policies::v1::
                 DeleteSslPolicyRequest const& request) {
        return child_->AsyncDeleteSslPolicy(cq, std::move(rest_context),
                                            request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::SslPolicy>
SslPoliciesRestLogging::GetSslPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::ssl_policies::v1::GetSslPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::ssl_policies::v1::
                 GetSslPolicyRequest const& request) {
        return child_->GetSslPolicy(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SslPoliciesRestLogging::AsyncInsertSslPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::ssl_policies::v1::InsertSslPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::ssl_policies::v1::
                 InsertSslPolicyRequest const& request) {
        return child_->AsyncInsertSslPolicy(cq, std::move(rest_context),
                                            request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::SslPoliciesList>
SslPoliciesRestLogging::ListSslPolicies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::ssl_policies::v1::ListSslPoliciesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::ssl_policies::v1::
                 ListSslPoliciesRequest const& request) {
        return child_->ListSslPolicies(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::cpp::compute::v1::SslPoliciesListAvailableFeaturesResponse>
SslPoliciesRestLogging::ListAvailableFeatures(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::ssl_policies::v1::
        ListAvailableFeaturesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::ssl_policies::v1::
                 ListAvailableFeaturesRequest const& request) {
        return child_->ListAvailableFeatures(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SslPoliciesRestLogging::AsyncPatchSslPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::ssl_policies::v1::PatchSslPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::ssl_policies::v1::
                 PatchSslPolicyRequest const& request) {
        return child_->AsyncPatchSslPolicy(cq, std::move(rest_context),
                                           request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SslPoliciesRestLogging::AsyncGetOperation(
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

future<Status> SslPoliciesRestLogging::AsyncCancelOperation(
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
}  // namespace compute_ssl_policies_v1_internal
}  // namespace cloud
}  // namespace google
