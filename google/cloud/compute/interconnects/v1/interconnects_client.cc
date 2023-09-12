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
// source: google/cloud/compute/interconnects/v1/interconnects.proto

#include "google/cloud/compute/interconnects/v1/interconnects_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_interconnects_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InterconnectsClient::InterconnectsClient(
    ExperimentalTag, std::shared_ptr<InterconnectsConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
InterconnectsClient::~InterconnectsClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectsClient::DeleteInterconnect(std::string const& project,
                                        std::string const& interconnect,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnects::v1::DeleteInterconnectRequest
      request;
  request.set_project(project);
  request.set_interconnect(interconnect);
  return connection_->DeleteInterconnect(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectsClient::DeleteInterconnect(
    google::cloud::cpp::compute::interconnects::v1::
        DeleteInterconnectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInterconnect(request);
}

StatusOr<google::cloud::cpp::compute::v1::Interconnect>
InterconnectsClient::GetInterconnect(std::string const& project,
                                     std::string const& interconnect,
                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnects::v1::GetInterconnectRequest
      request;
  request.set_project(project);
  request.set_interconnect(interconnect);
  return connection_->GetInterconnect(request);
}

StatusOr<google::cloud::cpp::compute::v1::Interconnect>
InterconnectsClient::GetInterconnect(
    google::cloud::cpp::compute::interconnects::v1::
        GetInterconnectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInterconnect(request);
}

StatusOr<google::cloud::cpp::compute::v1::InterconnectsGetDiagnosticsResponse>
InterconnectsClient::GetDiagnostics(std::string const& project,
                                    std::string const& interconnect,
                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnects::v1::GetDiagnosticsRequest request;
  request.set_project(project);
  request.set_interconnect(interconnect);
  return connection_->GetDiagnostics(request);
}

StatusOr<google::cloud::cpp::compute::v1::InterconnectsGetDiagnosticsResponse>
InterconnectsClient::GetDiagnostics(
    google::cloud::cpp::compute::interconnects::v1::GetDiagnosticsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDiagnostics(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectsClient::InsertInterconnect(
    std::string const& project,
    google::cloud::cpp::compute::v1::Interconnect const& interconnect_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnects::v1::InsertInterconnectRequest
      request;
  request.set_project(project);
  *request.mutable_interconnect_resource() = interconnect_resource;
  return connection_->InsertInterconnect(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectsClient::InsertInterconnect(
    google::cloud::cpp::compute::interconnects::v1::
        InsertInterconnectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertInterconnect(request);
}

StreamRange<google::cloud::cpp::compute::v1::Interconnect>
InterconnectsClient::ListInterconnects(std::string const& project,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnects::v1::ListInterconnectsRequest
      request;
  request.set_project(project);
  return connection_->ListInterconnects(request);
}

StreamRange<google::cloud::cpp::compute::v1::Interconnect>
InterconnectsClient::ListInterconnects(
    google::cloud::cpp::compute::interconnects::v1::ListInterconnectsRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInterconnects(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectsClient::PatchInterconnect(
    std::string const& project, std::string const& interconnect,
    google::cloud::cpp::compute::v1::Interconnect const& interconnect_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnects::v1::PatchInterconnectRequest
      request;
  request.set_project(project);
  request.set_interconnect(interconnect);
  *request.mutable_interconnect_resource() = interconnect_resource;
  return connection_->PatchInterconnect(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectsClient::PatchInterconnect(
    google::cloud::cpp::compute::interconnects::v1::
        PatchInterconnectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchInterconnect(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectsClient::SetLabels(
    std::string const& project, std::string const& resource,
    google::cloud::cpp::compute::v1::GlobalSetLabelsRequest const&
        global_set_labels_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnects::v1::SetLabelsRequest request;
  request.set_project(project);
  request.set_resource(resource);
  *request.mutable_global_set_labels_request_resource() =
      global_set_labels_request_resource;
  return connection_->SetLabels(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectsClient::SetLabels(
    google::cloud::cpp::compute::interconnects::v1::SetLabelsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetLabels(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnects_v1
}  // namespace cloud
}  // namespace google
