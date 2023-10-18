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
// source: google/cloud/gkemulticloud/v1/attached_service.proto

#include "google/cloud/gkemulticloud/v1/internal/attached_clusters_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AttachedClustersTracingConnection::AttachedClustersTracingConnection(
    std::shared_ptr<gkemulticloud_v1::AttachedClustersConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
AttachedClustersTracingConnection::CreateAttachedCluster(
    google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
        request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AttachedClustersConnection::CreateAttachedCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateAttachedCluster(request));
}

future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
AttachedClustersTracingConnection::UpdateAttachedCluster(
    google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
        request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AttachedClustersConnection::UpdateAttachedCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateAttachedCluster(request));
}

future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
AttachedClustersTracingConnection::ImportAttachedCluster(
    google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
        request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AttachedClustersConnection::ImportAttachedCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ImportAttachedCluster(request));
}

StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>
AttachedClustersTracingConnection::GetAttachedCluster(
    google::cloud::gkemulticloud::v1::GetAttachedClusterRequest const&
        request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AttachedClustersConnection::GetAttachedCluster");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAttachedCluster(request));
}

StreamRange<google::cloud::gkemulticloud::v1::AttachedCluster>
AttachedClustersTracingConnection::ListAttachedClusters(
    google::cloud::gkemulticloud::v1::ListAttachedClustersRequest request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AttachedClustersConnection::ListAttachedClusters");
  internal::OTelScope scope(span);
  auto sr = child_->ListAttachedClusters(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::gkemulticloud::v1::AttachedCluster>(std::move(span),
                                                         std::move(sr));
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AttachedClustersTracingConnection::DeleteAttachedCluster(
    google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
        request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AttachedClustersConnection::DeleteAttachedCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteAttachedCluster(request));
}

StatusOr<google::cloud::gkemulticloud::v1::AttachedServerConfig>
AttachedClustersTracingConnection::GetAttachedServerConfig(
    google::cloud::gkemulticloud::v1::GetAttachedServerConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AttachedClustersConnection::GetAttachedServerConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAttachedServerConfig(request));
}

StatusOr<google::cloud::gkemulticloud::v1::
             GenerateAttachedClusterInstallManifestResponse>
AttachedClustersTracingConnection::GenerateAttachedClusterInstallManifest(
    google::cloud::gkemulticloud::v1::
        GenerateAttachedClusterInstallManifestRequest const& request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AttachedClustersConnection::"
      "GenerateAttachedClusterInstallManifest");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(
      *span, child_->GenerateAttachedClusterInstallManifest(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<gkemulticloud_v1::AttachedClustersConnection>
MakeAttachedClustersTracingConnection(
    std::shared_ptr<gkemulticloud_v1::AttachedClustersConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<AttachedClustersTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google
