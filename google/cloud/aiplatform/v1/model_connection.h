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
// source: google/cloud/aiplatform/v1/model_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MODEL_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MODEL_CONNECTION_H

#include "google/cloud/aiplatform/v1/internal/model_retry_traits.h"
#include "google/cloud/aiplatform/v1/model_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/aiplatform/v1/model_service.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ModelServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        aiplatform_v1_internal::ModelServiceRetryTraits>;

using ModelServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        aiplatform_v1_internal::ModelServiceRetryTraits>;

using ModelServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        aiplatform_v1_internal::ModelServiceRetryTraits>;

/**
 * The `ModelServiceConnection` object for `ModelServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ModelServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `ModelServiceClient`.
 *
 * To create a concrete instance, see `MakeModelServiceConnection()`.
 *
 * For mocking, see `aiplatform_v1_mocks::MockModelServiceConnection`.
 */
class ModelServiceConnection {
 public:
  virtual ~ModelServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::aiplatform::v1::UploadModelResponse>>
  UploadModel(google::cloud::aiplatform::v1::UploadModelRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::Model> GetModel(
      google::cloud::aiplatform::v1::GetModelRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::Model> ListModels(
      google::cloud::aiplatform::v1::ListModelsRequest request);

  virtual StreamRange<google::cloud::aiplatform::v1::Model> ListModelVersions(
      google::cloud::aiplatform::v1::ListModelVersionsRequest request);

  virtual StatusOr<google::cloud::aiplatform::v1::Model> UpdateModel(
      google::cloud::aiplatform::v1::UpdateModelRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteModel(google::cloud::aiplatform::v1::DeleteModelRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteModelVersion(
      google::cloud::aiplatform::v1::DeleteModelVersionRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::Model> MergeVersionAliases(
      google::cloud::aiplatform::v1::MergeVersionAliasesRequest const& request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::ExportModelResponse>>
  ExportModel(google::cloud::aiplatform::v1::ExportModelRequest const& request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::CopyModelResponse>>
  CopyModel(google::cloud::aiplatform::v1::CopyModelRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::ModelEvaluation>
  ImportModelEvaluation(
      google::cloud::aiplatform::v1::ImportModelEvaluationRequest const&
          request);

  virtual StatusOr<
      google::cloud::aiplatform::v1::BatchImportModelEvaluationSlicesResponse>
  BatchImportModelEvaluationSlices(
      google::cloud::aiplatform::v1::
          BatchImportModelEvaluationSlicesRequest const& request);

  virtual StatusOr<
      google::cloud::aiplatform::v1::BatchImportEvaluatedAnnotationsResponse>
  BatchImportEvaluatedAnnotations(
      google::cloud::aiplatform::v1::
          BatchImportEvaluatedAnnotationsRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::ModelEvaluation>
  GetModelEvaluation(
      google::cloud::aiplatform::v1::GetModelEvaluationRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::ModelEvaluation>
  ListModelEvaluations(
      google::cloud::aiplatform::v1::ListModelEvaluationsRequest request);

  virtual StatusOr<google::cloud::aiplatform::v1::ModelEvaluationSlice>
  GetModelEvaluationSlice(
      google::cloud::aiplatform::v1::GetModelEvaluationSliceRequest const&
          request);

  virtual StreamRange<google::cloud::aiplatform::v1::ModelEvaluationSlice>
  ListModelEvaluationSlices(
      google::cloud::aiplatform::v1::ListModelEvaluationSlicesRequest request);
};

/**
 * A factory function to construct an object of type `ModelServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of ModelServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `ModelServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::aiplatform_v1::ModelServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `ModelServiceConnection` created by
 * this function.
 */
std::shared_ptr<ModelServiceConnection> MakeModelServiceConnection(
    std::string const& location, Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MODEL_CONNECTION_H
