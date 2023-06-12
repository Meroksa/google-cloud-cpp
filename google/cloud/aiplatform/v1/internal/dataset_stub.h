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
// source: google/cloud/aiplatform/v1/dataset_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_DATASET_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_DATASET_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/aiplatform/v1/dataset_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DatasetServiceStub {
 public:
  virtual ~DatasetServiceStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateDataset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::CreateDatasetRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Dataset> GetDataset(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetDatasetRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Dataset> UpdateDataset(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::UpdateDatasetRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListDatasetsResponse>
  ListDatasets(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListDatasetsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteDataset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::DeleteDatasetRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncImportData(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::ImportDataRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncExportData(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::ExportDataRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListDataItemsResponse>
  ListDataItems(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListDataItemsRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::SearchDataItemsResponse>
  SearchDataItems(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::SearchDataItemsRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListSavedQueriesResponse>
  ListSavedQueries(grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::ListSavedQueriesRequest const&
                       request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::AnnotationSpec>
  GetAnnotationSpec(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetAnnotationSpecRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListAnnotationsResponse>
  ListAnnotations(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListAnnotationsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultDatasetServiceStub : public DatasetServiceStub {
 public:
  DefaultDatasetServiceStub(
      std::unique_ptr<
          google::cloud::aiplatform::v1::DatasetService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  future<StatusOr<google::longrunning::Operation>> AsyncCreateDataset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::CreateDatasetRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Dataset> GetDataset(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::GetDatasetRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::Dataset> UpdateDataset(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::UpdateDatasetRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListDatasetsResponse> ListDatasets(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::ListDatasetsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteDataset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::DeleteDatasetRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportData(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::ImportDataRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportData(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::ExportDataRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ListDataItemsResponse> ListDataItems(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::ListDataItemsRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::SearchDataItemsResponse>
  SearchDataItems(grpc::ClientContext& client_context,
                  google::cloud::aiplatform::v1::SearchDataItemsRequest const&
                      request) override;

  StatusOr<google::cloud::aiplatform::v1::ListSavedQueriesResponse>
  ListSavedQueries(grpc::ClientContext& client_context,
                   google::cloud::aiplatform::v1::ListSavedQueriesRequest const&
                       request) override;

  StatusOr<google::cloud::aiplatform::v1::AnnotationSpec> GetAnnotationSpec(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::GetAnnotationSpecRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListAnnotationsResponse>
  ListAnnotations(grpc::ClientContext& client_context,
                  google::cloud::aiplatform::v1::ListAnnotationsRequest const&
                      request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::aiplatform::v1::DatasetService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_DATASET_STUB_H
