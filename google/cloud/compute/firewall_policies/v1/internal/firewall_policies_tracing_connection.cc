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
// source: google/cloud/compute/firewall_policies/v1/firewall_policies.proto

#include "google/cloud/compute/firewall_policies/v1/internal/firewall_policies_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_firewall_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

FirewallPoliciesTracingConnection::FirewallPoliciesTracingConnection(
    std::shared_ptr<compute_firewall_policies_v1::FirewallPoliciesConnection>
        child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesTracingConnection::AddAssociation(
    google::cloud::cpp::compute::firewall_policies::v1::
        AddAssociationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::"
      "AddAssociation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->AddAssociation(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesTracingConnection::AddRule(
    google::cloud::cpp::compute::firewall_policies::v1::AddRuleRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::AddRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->AddRule(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesTracingConnection::CloneRules(
    google::cloud::cpp::compute::firewall_policies::v1::CloneRulesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::CloneRules");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CloneRules(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesTracingConnection::DeleteFirewallPolicy(
    google::cloud::cpp::compute::firewall_policies::v1::
        DeleteFirewallPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::"
      "DeleteFirewallPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteFirewallPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
FirewallPoliciesTracingConnection::GetFirewallPolicy(
    google::cloud::cpp::compute::firewall_policies::v1::
        GetFirewallPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::"
      "GetFirewallPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFirewallPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
FirewallPoliciesTracingConnection::GetAssociation(
    google::cloud::cpp::compute::firewall_policies::v1::
        GetAssociationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::"
      "GetAssociation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAssociation(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
FirewallPoliciesTracingConnection::GetIamPolicy(
    google::cloud::cpp::compute::firewall_policies::v1::
        GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>
FirewallPoliciesTracingConnection::GetRule(
    google::cloud::cpp::compute::firewall_policies::v1::GetRuleRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::GetRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRule(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesTracingConnection::InsertFirewallPolicy(
    google::cloud::cpp::compute::firewall_policies::v1::
        InsertFirewallPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::"
      "InsertFirewallPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertFirewallPolicy(request));
}

StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>
FirewallPoliciesTracingConnection::ListFirewallPolicies(
    google::cloud::cpp::compute::firewall_policies::v1::
        ListFirewallPoliciesRequest request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::"
      "ListFirewallPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListFirewallPolicies(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::FirewallPolicy>(std::move(span),
                                                       std::move(sr));
}

StatusOr<
    google::cloud::cpp::compute::v1::FirewallPoliciesListAssociationsResponse>
FirewallPoliciesTracingConnection::ListAssociations(
    google::cloud::cpp::compute::firewall_policies::v1::
        ListAssociationsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::"
      "ListAssociations");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ListAssociations(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesTracingConnection::Move(
    google::cloud::cpp::compute::firewall_policies::v1::MoveRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::Move");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->Move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesTracingConnection::PatchFirewallPolicy(
    google::cloud::cpp::compute::firewall_policies::v1::
        PatchFirewallPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::"
      "PatchFirewallPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchFirewallPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesTracingConnection::PatchRule(
    google::cloud::cpp::compute::firewall_policies::v1::PatchRuleRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::PatchRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->PatchRule(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesTracingConnection::RemoveAssociation(
    google::cloud::cpp::compute::firewall_policies::v1::
        RemoveAssociationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::"
      "RemoveAssociation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RemoveAssociation(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesTracingConnection::RemoveRule(
    google::cloud::cpp::compute::firewall_policies::v1::RemoveRuleRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::RemoveRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RemoveRule(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
FirewallPoliciesTracingConnection::SetIamPolicy(
    google::cloud::cpp::compute::firewall_policies::v1::
        SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
FirewallPoliciesTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::firewall_policies::v1::
        TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_firewall_policies_v1::FirewallPoliciesConnection::"
      "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_firewall_policies_v1::FirewallPoliciesConnection>
MakeFirewallPoliciesTracingConnection(
    std::shared_ptr<compute_firewall_policies_v1::FirewallPoliciesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<FirewallPoliciesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_firewall_policies_v1_internal
}  // namespace cloud
}  // namespace google
