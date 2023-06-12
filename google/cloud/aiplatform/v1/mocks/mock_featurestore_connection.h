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
// source: google/cloud/aiplatform/v1/featurestore_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_FEATURESTORE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_FEATURESTORE_CONNECTION_H

#include "google/cloud/aiplatform/v1/featurestore_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace aiplatform_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `FeaturestoreServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `FeaturestoreServiceClient`. To do
 * so, construct an object of type `FeaturestoreServiceClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockFeaturestoreServiceConnection
    : public aiplatform_v1::FeaturestoreServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>,
      CreateFeaturestore,
      (google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Featurestore>, GetFeaturestore,
      (google::cloud::aiplatform::v1::GetFeaturestoreRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::aiplatform::v1::Featurestore>,
              ListFeaturestores,
              (google::cloud::aiplatform::v1::ListFeaturestoresRequest request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>,
      UpdateFeaturestore,
      (google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteFeaturestore,
      (google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::EntityType>>,
      CreateEntityType,
      (google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::EntityType>, GetEntityType,
      (google::cloud::aiplatform::v1::GetEntityTypeRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::aiplatform::v1::EntityType>,
              ListEntityTypes,
              (google::cloud::aiplatform::v1::ListEntityTypesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::EntityType>, UpdateEntityType,
      (google::cloud::aiplatform::v1::UpdateEntityTypeRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteEntityType,
      (google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::Feature>>, CreateFeature,
      (google::cloud::aiplatform::v1::CreateFeatureRequest const& request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::aiplatform::v1::BatchCreateFeaturesResponse>>,
      BatchCreateFeatures,
      (google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::Feature>, GetFeature,
              (google::cloud::aiplatform::v1::GetFeatureRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::aiplatform::v1::Feature>, ListFeatures,
              (google::cloud::aiplatform::v1::ListFeaturesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Feature>, UpdateFeature,
      (google::cloud::aiplatform::v1::UpdateFeatureRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteFeature,
      (google::cloud::aiplatform::v1::DeleteFeatureRequest const& request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::aiplatform::v1::ImportFeatureValuesResponse>>,
      ImportFeatureValues,
      (google::cloud::aiplatform::v1::ImportFeatureValuesRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::aiplatform::v1::BatchReadFeatureValuesResponse>>,
      BatchReadFeatureValues,
      (google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::aiplatform::v1::ExportFeatureValuesResponse>>,
      ExportFeatureValues,
      (google::cloud::aiplatform::v1::ExportFeatureValuesRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::aiplatform::v1::DeleteFeatureValuesResponse>>,
      DeleteFeatureValues,
      (google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const&
           request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::aiplatform::v1::Feature>,
              SearchFeatures,
              (google::cloud::aiplatform::v1::SearchFeaturesRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_FEATURESTORE_CONNECTION_H
