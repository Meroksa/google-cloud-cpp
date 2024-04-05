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
// google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto

#include "google/cloud/compute/interconnect_attachments/v1/internal/interconnect_attachments_rest_metadata_decorator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/rest_set_metadata.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_interconnect_attachments_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InterconnectAttachmentsRestMetadata::InterconnectAttachmentsRestMetadata(
    std::shared_ptr<InterconnectAttachmentsRestStub> child,
    std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachmentAggregatedList>
InterconnectAttachmentsRestMetadata::AggregatedListInterconnectAttachments(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::interconnect_attachments::v1::
        AggregatedListInterconnectAttachmentsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->AggregatedListInterconnectAttachments(rest_context, options,
                                                       request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsRestMetadata::AsyncDeleteInterconnectAttachment(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::interconnect_attachments::v1::
        DeleteInterconnectAttachmentRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteInterconnectAttachment(cq, std::move(rest_context),
                                                   std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachment>
InterconnectAttachmentsRestMetadata::GetInterconnectAttachment(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::interconnect_attachments::v1::
        GetInterconnectAttachmentRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetInterconnectAttachment(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsRestMetadata::AsyncInsertInterconnectAttachment(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::interconnect_attachments::v1::
        InsertInterconnectAttachmentRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncInsertInterconnectAttachment(cq, std::move(rest_context),
                                                   std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachmentList>
InterconnectAttachmentsRestMetadata::ListInterconnectAttachments(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::interconnect_attachments::v1::
        ListInterconnectAttachmentsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListInterconnectAttachments(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsRestMetadata::AsyncPatchInterconnectAttachment(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::interconnect_attachments::v1::
        PatchInterconnectAttachmentRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncPatchInterconnectAttachment(cq, std::move(rest_context),
                                                  std::move(options), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsRestMetadata::AsyncSetLabels(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::interconnect_attachments::v1::
        SetLabelsRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncSetLabels(cq, std::move(rest_context), std::move(options),
                                request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> InterconnectAttachmentsRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void InterconnectAttachmentsRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  google::cloud::rest_internal::SetMetadata(rest_context, options, params,
                                            api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnect_attachments_v1_internal
}  // namespace cloud
}  // namespace google
