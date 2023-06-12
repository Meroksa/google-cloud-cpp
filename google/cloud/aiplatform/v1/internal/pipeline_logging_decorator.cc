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
// source: google/cloud/aiplatform/v1/pipeline_service.proto

#include "google/cloud/aiplatform/v1/internal/pipeline_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/pipeline_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PipelineServiceLogging::PipelineServiceLogging(
    std::shared_ptr<PipelineServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>
PipelineServiceLogging::CreateTrainingPipeline(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateTrainingPipelineRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::CreateTrainingPipelineRequest const&
                 request) {
        return child_->CreateTrainingPipeline(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>
PipelineServiceLogging::GetTrainingPipeline(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetTrainingPipelineRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetTrainingPipelineRequest const&
                 request) {
        return child_->GetTrainingPipeline(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListTrainingPipelinesResponse>
PipelineServiceLogging::ListTrainingPipelines(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListTrainingPipelinesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::ListTrainingPipelinesRequest const&
                 request) {
        return child_->ListTrainingPipelines(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceLogging::AsyncDeleteTrainingPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteTrainingPipelineRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::DeleteTrainingPipelineRequest const&
                 request) {
        return child_->AsyncDeleteTrainingPipeline(cq, std::move(context),
                                                   request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

Status PipelineServiceLogging::CancelTrainingPipeline(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CancelTrainingPipelineRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::CancelTrainingPipelineRequest const&
                 request) {
        return child_->CancelTrainingPipeline(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::PipelineJob>
PipelineServiceLogging::CreatePipelineJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreatePipelineJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::CreatePipelineJobRequest const&
                 request) {
        return child_->CreatePipelineJob(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::PipelineJob>
PipelineServiceLogging::GetPipelineJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetPipelineJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::GetPipelineJobRequest const& request) {
        return child_->GetPipelineJob(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListPipelineJobsResponse>
PipelineServiceLogging::ListPipelineJobs(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListPipelineJobsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::ListPipelineJobsRequest const&
                 request) {
        return child_->ListPipelineJobs(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceLogging::AsyncDeletePipelineJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeletePipelineJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::DeletePipelineJobRequest const&
                 request) {
        return child_->AsyncDeletePipelineJob(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

Status PipelineServiceLogging::CancelPipelineJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CancelPipelineJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::CancelPipelineJobRequest const&
                 request) {
        return child_->CancelPipelineJob(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> PipelineServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
