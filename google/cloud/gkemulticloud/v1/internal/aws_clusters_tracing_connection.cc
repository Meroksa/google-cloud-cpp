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
// source: google/cloud/gkemulticloud/v1/aws_service.proto

#include "google/cloud/gkemulticloud/v1/internal/aws_clusters_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AwsClustersTracingConnection::AwsClustersTracingConnection(
    std::shared_ptr<gkemulticloud_v1::AwsClustersConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
AwsClustersTracingConnection::CreateAwsCluster(
    google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AwsClustersConnection::CreateAwsCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateAwsCluster(request));
}

future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
AwsClustersTracingConnection::UpdateAwsCluster(
    google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AwsClustersConnection::UpdateAwsCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateAwsCluster(request));
}

StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>
AwsClustersTracingConnection::GetAwsCluster(
    google::cloud::gkemulticloud::v1::GetAwsClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AwsClustersConnection::GetAwsCluster");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAwsCluster(request));
}

StreamRange<google::cloud::gkemulticloud::v1::AwsCluster>
AwsClustersTracingConnection::ListAwsClusters(
    google::cloud::gkemulticloud::v1::ListAwsClustersRequest request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AwsClustersConnection::ListAwsClusters");
  internal::OTelScope scope(span);
  auto sr = child_->ListAwsClusters(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::gkemulticloud::v1::AwsCluster>(std::move(span),
                                                    std::move(sr));
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AwsClustersTracingConnection::DeleteAwsCluster(
    google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AwsClustersConnection::DeleteAwsCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteAwsCluster(request));
}

StatusOr<google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenResponse>
AwsClustersTracingConnection::GenerateAwsAccessToken(
    google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&
        request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AwsClustersConnection::GenerateAwsAccessToken");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateAwsAccessToken(request));
}

future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
AwsClustersTracingConnection::CreateAwsNodePool(
    google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const& request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AwsClustersConnection::CreateAwsNodePool");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateAwsNodePool(request));
}

future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
AwsClustersTracingConnection::UpdateAwsNodePool(
    google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const& request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AwsClustersConnection::UpdateAwsNodePool");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateAwsNodePool(request));
}

StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>
AwsClustersTracingConnection::GetAwsNodePool(
    google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const& request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AwsClustersConnection::GetAwsNodePool");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAwsNodePool(request));
}

StreamRange<google::cloud::gkemulticloud::v1::AwsNodePool>
AwsClustersTracingConnection::ListAwsNodePools(
    google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AwsClustersConnection::ListAwsNodePools");
  internal::OTelScope scope(span);
  auto sr = child_->ListAwsNodePools(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::gkemulticloud::v1::AwsNodePool>(std::move(span),
                                                     std::move(sr));
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AwsClustersTracingConnection::DeleteAwsNodePool(
    google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const& request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AwsClustersConnection::DeleteAwsNodePool");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteAwsNodePool(request));
}

StatusOr<google::cloud::gkemulticloud::v1::AwsServerConfig>
AwsClustersTracingConnection::GetAwsServerConfig(
    google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AwsClustersConnection::GetAwsServerConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAwsServerConfig(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<gkemulticloud_v1::AwsClustersConnection>
MakeAwsClustersTracingConnection(
    std::shared_ptr<gkemulticloud_v1::AwsClustersConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<AwsClustersTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google
