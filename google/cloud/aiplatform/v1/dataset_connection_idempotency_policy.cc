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

#include "google/cloud/aiplatform/v1/dataset_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

DatasetServiceConnectionIdempotencyPolicy::
    ~DatasetServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<DatasetServiceConnectionIdempotencyPolicy>
DatasetServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<DatasetServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency DatasetServiceConnectionIdempotencyPolicy::CreateDataset(
    google::cloud::aiplatform::v1::CreateDatasetRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DatasetServiceConnectionIdempotencyPolicy::GetDataset(
    google::cloud::aiplatform::v1::GetDatasetRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DatasetServiceConnectionIdempotencyPolicy::UpdateDataset(
    google::cloud::aiplatform::v1::UpdateDatasetRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DatasetServiceConnectionIdempotencyPolicy::ListDatasets(
    google::cloud::aiplatform::v1::ListDatasetsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DatasetServiceConnectionIdempotencyPolicy::DeleteDataset(
    google::cloud::aiplatform::v1::DeleteDatasetRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DatasetServiceConnectionIdempotencyPolicy::ImportData(
    google::cloud::aiplatform::v1::ImportDataRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DatasetServiceConnectionIdempotencyPolicy::ExportData(
    google::cloud::aiplatform::v1::ExportDataRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DatasetServiceConnectionIdempotencyPolicy::ListDataItems(
    google::cloud::aiplatform::v1::ListDataItemsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DatasetServiceConnectionIdempotencyPolicy::SearchDataItems(
    google::cloud::aiplatform::v1::SearchDataItemsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DatasetServiceConnectionIdempotencyPolicy::ListSavedQueries(
    google::cloud::aiplatform::v1::ListSavedQueriesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DatasetServiceConnectionIdempotencyPolicy::GetAnnotationSpec(
    google::cloud::aiplatform::v1::GetAnnotationSpecRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DatasetServiceConnectionIdempotencyPolicy::ListAnnotations(
    google::cloud::aiplatform::v1::ListAnnotationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<DatasetServiceConnectionIdempotencyPolicy>
MakeDefaultDatasetServiceConnectionIdempotencyPolicy() {
  return std::make_unique<DatasetServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
