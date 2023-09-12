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

#include "google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_public_delegated_prefixes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PublicDelegatedPrefixesClient::PublicDelegatedPrefixesClient(
    ExperimentalTag,
    std::shared_ptr<PublicDelegatedPrefixesConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
PublicDelegatedPrefixesClient::~PublicDelegatedPrefixesClient() = default;

StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefixAggregatedList>
PublicDelegatedPrefixesClient::AggregatedListPublicDelegatedPrefixes(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_delegated_prefixes::v1::
      AggregatedListPublicDelegatedPrefixesRequest request;
  request.set_project(project);
  return connection_->AggregatedListPublicDelegatedPrefixes(request);
}

StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefixAggregatedList>
PublicDelegatedPrefixesClient::AggregatedListPublicDelegatedPrefixes(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        AggregatedListPublicDelegatedPrefixesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListPublicDelegatedPrefixes(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicDelegatedPrefixesClient::DeletePublicDelegatedPrefix(
    std::string const& project, std::string const& region,
    std::string const& public_delegated_prefix, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_delegated_prefixes::v1::
      DeletePublicDelegatedPrefixRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_public_delegated_prefix(public_delegated_prefix);
  return connection_->DeletePublicDelegatedPrefix(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicDelegatedPrefixesClient::DeletePublicDelegatedPrefix(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        DeletePublicDelegatedPrefixRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePublicDelegatedPrefix(request);
}

StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
PublicDelegatedPrefixesClient::GetPublicDelegatedPrefix(
    std::string const& project, std::string const& region,
    std::string const& public_delegated_prefix, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_delegated_prefixes::v1::
      GetPublicDelegatedPrefixRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_public_delegated_prefix(public_delegated_prefix);
  return connection_->GetPublicDelegatedPrefix(request);
}

StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
PublicDelegatedPrefixesClient::GetPublicDelegatedPrefix(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        GetPublicDelegatedPrefixRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetPublicDelegatedPrefix(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicDelegatedPrefixesClient::InsertPublicDelegatedPrefix(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::PublicDelegatedPrefix const&
        public_delegated_prefix_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_delegated_prefixes::v1::
      InsertPublicDelegatedPrefixRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_public_delegated_prefix_resource() =
      public_delegated_prefix_resource;
  return connection_->InsertPublicDelegatedPrefix(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicDelegatedPrefixesClient::InsertPublicDelegatedPrefix(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        InsertPublicDelegatedPrefixRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertPublicDelegatedPrefix(request);
}

StreamRange<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
PublicDelegatedPrefixesClient::ListPublicDelegatedPrefixes(
    std::string const& project, std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_delegated_prefixes::v1::
      ListPublicDelegatedPrefixesRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListPublicDelegatedPrefixes(request);
}

StreamRange<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
PublicDelegatedPrefixesClient::ListPublicDelegatedPrefixes(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        ListPublicDelegatedPrefixesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListPublicDelegatedPrefixes(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicDelegatedPrefixesClient::PatchPublicDelegatedPrefix(
    std::string const& project, std::string const& region,
    std::string const& public_delegated_prefix,
    google::cloud::cpp::compute::v1::PublicDelegatedPrefix const&
        public_delegated_prefix_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_delegated_prefixes::v1::
      PatchPublicDelegatedPrefixRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_public_delegated_prefix(public_delegated_prefix);
  *request.mutable_public_delegated_prefix_resource() =
      public_delegated_prefix_resource;
  return connection_->PatchPublicDelegatedPrefix(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicDelegatedPrefixesClient::PatchPublicDelegatedPrefix(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        PatchPublicDelegatedPrefixRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchPublicDelegatedPrefix(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_delegated_prefixes_v1
}  // namespace cloud
}  // namespace google
