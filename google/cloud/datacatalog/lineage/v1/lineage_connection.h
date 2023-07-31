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
// source: google/cloud/datacatalog/lineage/v1/lineage.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_LINEAGE_V1_LINEAGE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_LINEAGE_V1_LINEAGE_CONNECTION_H

#include "google/cloud/datacatalog/lineage/v1/internal/lineage_retry_traits.h"
#include "google/cloud/datacatalog/lineage/v1/lineage_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/datacatalog/lineage/v1/lineage.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_lineage_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `LineageConnection`.
class LineageRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<LineageRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `LineageConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class LineageLimitedErrorCountRetryPolicy : public LineageRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit LineageLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  LineageLimitedErrorCountRetryPolicy(
      LineageLimitedErrorCountRetryPolicy&& rhs) noexcept
      : LineageLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  LineageLimitedErrorCountRetryPolicy(
      LineageLimitedErrorCountRetryPolicy const& rhs) noexcept
      : LineageLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<LineageRetryPolicy> clone() const override {
    return std::make_unique<LineageLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = LineageRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      datacatalog_lineage_v1_internal::LineageRetryTraits>
      impl_;
};

/**
 * A retry policy for `LineageConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class LineageLimitedTimeRetryPolicy : public LineageRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit LineageLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  LineageLimitedTimeRetryPolicy(LineageLimitedTimeRetryPolicy&& rhs) noexcept
      : LineageLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  LineageLimitedTimeRetryPolicy(
      LineageLimitedTimeRetryPolicy const& rhs) noexcept
      : LineageLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<LineageRetryPolicy> clone() const override {
    return std::make_unique<LineageLimitedTimeRetryPolicy>(maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = LineageRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      datacatalog_lineage_v1_internal::LineageRetryTraits>
      impl_;
};

/**
 * The `LineageConnection` object for `LineageClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `LineageClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `LineageClient`.
 *
 * To create a concrete instance, see `MakeLineageConnection()`.
 *
 * For mocking, see `datacatalog_lineage_v1_mocks::MockLineageConnection`.
 */
class LineageConnection {
 public:
  virtual ~LineageConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::datacatalog::lineage::v1::Process>
  CreateProcess(
      google::cloud::datacatalog::lineage::v1::CreateProcessRequest const&
          request);

  virtual StatusOr<google::cloud::datacatalog::lineage::v1::Process>
  UpdateProcess(
      google::cloud::datacatalog::lineage::v1::UpdateProcessRequest const&
          request);

  virtual StatusOr<google::cloud::datacatalog::lineage::v1::Process> GetProcess(
      google::cloud::datacatalog::lineage::v1::GetProcessRequest const&
          request);

  virtual StreamRange<google::cloud::datacatalog::lineage::v1::Process>
  ListProcesses(
      google::cloud::datacatalog::lineage::v1::ListProcessesRequest request);

  virtual future<
      StatusOr<google::cloud::datacatalog::lineage::v1::OperationMetadata>>
  DeleteProcess(
      google::cloud::datacatalog::lineage::v1::DeleteProcessRequest const&
          request);

  virtual StatusOr<google::cloud::datacatalog::lineage::v1::Run> CreateRun(
      google::cloud::datacatalog::lineage::v1::CreateRunRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::lineage::v1::Run> UpdateRun(
      google::cloud::datacatalog::lineage::v1::UpdateRunRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::lineage::v1::Run> GetRun(
      google::cloud::datacatalog::lineage::v1::GetRunRequest const& request);

  virtual StreamRange<google::cloud::datacatalog::lineage::v1::Run> ListRuns(
      google::cloud::datacatalog::lineage::v1::ListRunsRequest request);

  virtual future<
      StatusOr<google::cloud::datacatalog::lineage::v1::OperationMetadata>>
  DeleteRun(
      google::cloud::datacatalog::lineage::v1::DeleteRunRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
  CreateLineageEvent(
      google::cloud::datacatalog::lineage::v1::CreateLineageEventRequest const&
          request);

  virtual StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
  GetLineageEvent(
      google::cloud::datacatalog::lineage::v1::GetLineageEventRequest const&
          request);

  virtual StreamRange<google::cloud::datacatalog::lineage::v1::LineageEvent>
  ListLineageEvents(
      google::cloud::datacatalog::lineage::v1::ListLineageEventsRequest
          request);

  virtual Status DeleteLineageEvent(
      google::cloud::datacatalog::lineage::v1::DeleteLineageEventRequest const&
          request);

  virtual StreamRange<google::cloud::datacatalog::lineage::v1::Link>
  SearchLinks(
      google::cloud::datacatalog::lineage::v1::SearchLinksRequest request);

  virtual StreamRange<google::cloud::datacatalog::lineage::v1::ProcessLinks>
  BatchSearchLinkProcesses(
      google::cloud::datacatalog::lineage::v1::BatchSearchLinkProcessesRequest
          request);
};

/**
 * A factory function to construct an object of type `LineageConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of LineageClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `LineageConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::datacatalog_lineage_v1::LineagePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `LineageConnection` created by
 * this function.
 */
std::shared_ptr<LineageConnection> MakeLineageConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_lineage_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_LINEAGE_V1_LINEAGE_CONNECTION_H
