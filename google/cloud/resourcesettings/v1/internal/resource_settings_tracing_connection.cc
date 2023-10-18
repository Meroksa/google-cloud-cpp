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
// source: google/cloud/resourcesettings/v1/resource_settings.proto

#include "google/cloud/resourcesettings/v1/internal/resource_settings_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcesettings_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ResourceSettingsServiceTracingConnection::
    ResourceSettingsServiceTracingConnection(
        std::shared_ptr<resourcesettings_v1::ResourceSettingsServiceConnection>
            child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceTracingConnection::ListSettings(
    google::cloud::resourcesettings::v1::ListSettingsRequest request) {
  auto span = internal::MakeSpan(
      "resourcesettings_v1::ResourceSettingsServiceConnection::ListSettings");
  internal::OTelScope scope(span);
  auto sr = child_->ListSettings(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::resourcesettings::v1::Setting>(std::move(span),
                                                    std::move(sr));
}

StatusOr<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceTracingConnection::GetSetting(
    google::cloud::resourcesettings::v1::GetSettingRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcesettings_v1::ResourceSettingsServiceConnection::GetSetting");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSetting(request));
}

StatusOr<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceTracingConnection::UpdateSetting(
    google::cloud::resourcesettings::v1::UpdateSettingRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcesettings_v1::ResourceSettingsServiceConnection::UpdateSetting");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateSetting(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<resourcesettings_v1::ResourceSettingsServiceConnection>
MakeResourceSettingsServiceTracingConnection(
    std::shared_ptr<resourcesettings_v1::ResourceSettingsServiceConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ResourceSettingsServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcesettings_v1_internal
}  // namespace cloud
}  // namespace google
