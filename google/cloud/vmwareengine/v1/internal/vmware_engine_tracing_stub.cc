// Copyright 2022 Google LLC
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
// source: google/cloud/vmwareengine/v1/vmwareengine.proto

#include "google/cloud/vmwareengine/v1/internal/vmware_engine_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace vmwareengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

VmwareEngineTracingStub::VmwareEngineTracingStub(
    std::shared_ptr<VmwareEngineStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::vmwareengine::v1::ListPrivateCloudsResponse>
VmwareEngineTracingStub::ListPrivateClouds(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::ListPrivateCloudsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "ListPrivateClouds");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListPrivateClouds(context, request));
}

StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>
VmwareEngineTracingStub::GetPrivateCloud(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::GetPrivateCloudRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "GetPrivateCloud");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetPrivateCloud(context, request));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncCreatePrivateCloud(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::CreatePrivateCloudRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "CreatePrivateCloud");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreatePrivateCloud(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncUpdatePrivateCloud(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::UpdatePrivateCloudRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "UpdatePrivateCloud");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdatePrivateCloud(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncDeletePrivateCloud(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::DeletePrivateCloudRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "DeletePrivateCloud");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeletePrivateCloud(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncUndeletePrivateCloud(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::UndeletePrivateCloudRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "UndeletePrivateCloud");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUndeletePrivateCloud(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::vmwareengine::v1::ListClustersResponse>
VmwareEngineTracingStub::ListClusters(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::ListClustersRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "ListClusters");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListClusters(context, request));
}

StatusOr<google::cloud::vmwareengine::v1::Cluster>
VmwareEngineTracingStub::GetCluster(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::GetClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "GetCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetCluster(context, request));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::CreateClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "CreateCluster");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateCluster(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::UpdateClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "UpdateCluster");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateCluster(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::DeleteClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "DeleteCluster");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteCluster(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::vmwareengine::v1::ListSubnetsResponse>
VmwareEngineTracingStub::ListSubnets(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::ListSubnetsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "ListSubnets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListSubnets(context, request));
}

StatusOr<google::cloud::vmwareengine::v1::Subnet>
VmwareEngineTracingStub::GetSubnet(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::GetSubnetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "GetSubnet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetSubnet(context, request));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncUpdateSubnet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::UpdateSubnetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "UpdateSubnet");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateSubnet(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::vmwareengine::v1::ListNodeTypesResponse>
VmwareEngineTracingStub::ListNodeTypes(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::ListNodeTypesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "ListNodeTypes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListNodeTypes(context, request));
}

StatusOr<google::cloud::vmwareengine::v1::NodeType>
VmwareEngineTracingStub::GetNodeType(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::GetNodeTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "GetNodeType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetNodeType(context, request));
}

StatusOr<google::cloud::vmwareengine::v1::Credentials>
VmwareEngineTracingStub::ShowNsxCredentials(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::ShowNsxCredentialsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "ShowNsxCredentials");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ShowNsxCredentials(context, request));
}

StatusOr<google::cloud::vmwareengine::v1::Credentials>
VmwareEngineTracingStub::ShowVcenterCredentials(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::ShowVcenterCredentialsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "ShowVcenterCredentials");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ShowVcenterCredentials(context, request));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncResetNsxCredentials(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::ResetNsxCredentialsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "ResetNsxCredentials");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncResetNsxCredentials(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncResetVcenterCredentials(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::ResetVcenterCredentialsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "ResetVcenterCredentials");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncResetVcenterCredentials(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncCreateHcxActivationKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::CreateHcxActivationKeyRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "CreateHcxActivationKey");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateHcxActivationKey(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::vmwareengine::v1::ListHcxActivationKeysResponse>
VmwareEngineTracingStub::ListHcxActivationKeys(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::ListHcxActivationKeysRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "ListHcxActivationKeys");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListHcxActivationKeys(context, request));
}

StatusOr<google::cloud::vmwareengine::v1::HcxActivationKey>
VmwareEngineTracingStub::GetHcxActivationKey(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::GetHcxActivationKeyRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "GetHcxActivationKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetHcxActivationKey(context, request));
}

StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>
VmwareEngineTracingStub::GetNetworkPolicy(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::GetNetworkPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "GetNetworkPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetNetworkPolicy(context, request));
}

StatusOr<google::cloud::vmwareengine::v1::ListNetworkPoliciesResponse>
VmwareEngineTracingStub::ListNetworkPolicies(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::ListNetworkPoliciesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "ListNetworkPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListNetworkPolicies(context, request));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncCreateNetworkPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::CreateNetworkPolicyRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "CreateNetworkPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateNetworkPolicy(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncUpdateNetworkPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::UpdateNetworkPolicyRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "UpdateNetworkPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateNetworkPolicy(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncDeleteNetworkPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::DeleteNetworkPolicyRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "DeleteNetworkPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteNetworkPolicy(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncCreateVmwareEngineNetwork(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::CreateVmwareEngineNetworkRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "CreateVmwareEngineNetwork");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateVmwareEngineNetwork(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncUpdateVmwareEngineNetwork(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::UpdateVmwareEngineNetworkRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "UpdateVmwareEngineNetwork");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateVmwareEngineNetwork(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncDeleteVmwareEngineNetwork(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::DeleteVmwareEngineNetworkRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "DeleteVmwareEngineNetwork");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteVmwareEngineNetwork(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>
VmwareEngineTracingStub::GetVmwareEngineNetwork(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::GetVmwareEngineNetworkRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "GetVmwareEngineNetwork");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetVmwareEngineNetwork(context, request));
}

StatusOr<google::cloud::vmwareengine::v1::ListVmwareEngineNetworksResponse>
VmwareEngineTracingStub::ListVmwareEngineNetworks(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::ListVmwareEngineNetworksRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "ListVmwareEngineNetworks");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListVmwareEngineNetworks(context, request));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncCreatePrivateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::CreatePrivateConnectionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "CreatePrivateConnection");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreatePrivateConnection(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>
VmwareEngineTracingStub::GetPrivateConnection(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::GetPrivateConnectionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "GetPrivateConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetPrivateConnection(context, request));
}

StatusOr<google::cloud::vmwareengine::v1::ListPrivateConnectionsResponse>
VmwareEngineTracingStub::ListPrivateConnections(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::ListPrivateConnectionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "ListPrivateConnections");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListPrivateConnections(context, request));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncUpdatePrivateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::UpdatePrivateConnectionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "UpdatePrivateConnection");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdatePrivateConnection(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncDeletePrivateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmwareengine::v1::DeletePrivateConnectionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vmwareengine.v1.VmwareEngine", "DeletePrivateConnection");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeletePrivateConnection(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<
    google::cloud::vmwareengine::v1::ListPrivateConnectionPeeringRoutesResponse>
VmwareEngineTracingStub::ListPrivateConnectionPeeringRoutes(
    grpc::ClientContext& context,
    google::cloud::vmwareengine::v1::
        ListPrivateConnectionPeeringRoutesRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.vmwareengine.v1.VmwareEngine",
                             "ListPrivateConnectionPeeringRoutes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListPrivateConnectionPeeringRoutes(context, request));
}

future<StatusOr<google::longrunning::Operation>>
VmwareEngineTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> VmwareEngineTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCancelOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<VmwareEngineStub> MakeVmwareEngineTracingStub(
    std::shared_ptr<VmwareEngineStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<VmwareEngineTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmwareengine_v1_internal
}  // namespace cloud
}  // namespace google
