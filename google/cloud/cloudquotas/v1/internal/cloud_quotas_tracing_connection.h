// Copyright 2024 Google LLC
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
// source: google/api/cloudquotas/v1/cloudquotas.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDQUOTAS_V1_INTERNAL_CLOUD_QUOTAS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDQUOTAS_V1_INTERNAL_CLOUD_QUOTAS_TRACING_CONNECTION_H

#include "google/cloud/cloudquotas/v1/cloud_quotas_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace cloudquotas_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class CloudQuotasTracingConnection
    : public cloudquotas_v1::CloudQuotasConnection {
 public:
  ~CloudQuotasTracingConnection() override = default;

  explicit CloudQuotasTracingConnection(
      std::shared_ptr<cloudquotas_v1::CloudQuotasConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::api::cloudquotas::v1::QuotaInfo> ListQuotaInfos(
      google::api::cloudquotas::v1::ListQuotaInfosRequest request) override;

  StatusOr<google::api::cloudquotas::v1::QuotaInfo> GetQuotaInfo(
      google::api::cloudquotas::v1::GetQuotaInfoRequest const& request)
      override;

  StreamRange<google::api::cloudquotas::v1::QuotaPreference>
  ListQuotaPreferences(google::api::cloudquotas::v1::ListQuotaPreferencesRequest
                           request) override;

  StatusOr<google::api::cloudquotas::v1::QuotaPreference> GetQuotaPreference(
      google::api::cloudquotas::v1::GetQuotaPreferenceRequest const& request)
      override;

  StatusOr<google::api::cloudquotas::v1::QuotaPreference> CreateQuotaPreference(
      google::api::cloudquotas::v1::CreateQuotaPreferenceRequest const& request)
      override;

  StatusOr<google::api::cloudquotas::v1::QuotaPreference> UpdateQuotaPreference(
      google::api::cloudquotas::v1::UpdateQuotaPreferenceRequest const& request)
      override;

 private:
  std::shared_ptr<cloudquotas_v1::CloudQuotasConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<cloudquotas_v1::CloudQuotasConnection>
MakeCloudQuotasTracingConnection(
    std::shared_ptr<cloudquotas_v1::CloudQuotasConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudquotas_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDQUOTAS_V1_INTERNAL_CLOUD_QUOTAS_TRACING_CONNECTION_H
