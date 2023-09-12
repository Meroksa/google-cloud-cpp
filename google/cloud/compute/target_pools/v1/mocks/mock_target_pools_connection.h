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
// source: google/cloud/compute/target_pools/v1/target_pools.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_POOLS_V1_MOCKS_MOCK_TARGET_POOLS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_POOLS_V1_MOCKS_MOCK_TARGET_POOLS_CONNECTION_H

#include "google/cloud/compute/target_pools/v1/target_pools_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_target_pools_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `TargetPoolsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `TargetPoolsClient`. To do so,
 * construct an object of type `TargetPoolsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockTargetPoolsConnection
    : public compute_target_pools_v1::TargetPoolsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddHealthCheck,
              (google::cloud::cpp::compute::target_pools::v1::
                   AddHealthCheckRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, AddInstance,
      (google::cloud::cpp::compute::target_pools::v1::AddInstanceRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TargetPoolAggregatedList>,
      AggregatedListTargetPools,
      (google::cloud::cpp::compute::target_pools::v1::
           AggregatedListTargetPoolsRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteTargetPool,
              (google::cloud::cpp::compute::target_pools::v1::
                   DeleteTargetPoolRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::TargetPool>,
              GetTargetPool,
              (google::cloud::cpp::compute::target_pools::v1::
                   GetTargetPoolRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TargetPoolInstanceHealth>,
      GetHealth,
      (google::cloud::cpp::compute::target_pools::v1::GetHealthRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertTargetPool,
              (google::cloud::cpp::compute::target_pools::v1::
                   InsertTargetPoolRequest const& request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::cpp::compute::v1::TargetPool>, ListTargetPools,
      (google::cloud::cpp::compute::target_pools::v1::ListTargetPoolsRequest
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemoveHealthCheck,
              (google::cloud::cpp::compute::target_pools::v1::
                   RemoveHealthCheckRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemoveInstance,
              (google::cloud::cpp::compute::target_pools::v1::
                   RemoveInstanceRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, SetBackup,
      (google::cloud::cpp::compute::target_pools::v1::SetBackupRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_pools_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_POOLS_V1_MOCKS_MOCK_TARGET_POOLS_CONNECTION_H
