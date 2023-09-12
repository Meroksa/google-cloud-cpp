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
// source: google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PACKET_MIRRORINGS_V1_INTERNAL_PACKET_MIRRORINGS_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PACKET_MIRRORINGS_V1_INTERNAL_PACKET_MIRRORINGS_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.pb.h>
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_packet_mirrorings_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PacketMirroringsRestStub {
 public:
  virtual ~PacketMirroringsRestStub() = default;

  virtual StatusOr<
      google::cloud::cpp::compute::v1::PacketMirroringAggregatedList>
  AggregatedListPacketMirrorings(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::packet_mirrorings::v1::
          AggregatedListPacketMirroringsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeletePacketMirroring(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::packet_mirrorings::v1::
          DeletePacketMirroringRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::PacketMirroring>
  GetPacketMirroring(google::cloud::rest_internal::RestContext& rest_context,
                     google::cloud::cpp::compute::packet_mirrorings::v1::
                         GetPacketMirroringRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertPacketMirroring(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::packet_mirrorings::v1::
          InsertPacketMirroringRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::PacketMirroringList>
  ListPacketMirrorings(google::cloud::rest_internal::RestContext& rest_context,
                       google::cloud::cpp::compute::packet_mirrorings::v1::
                           ListPacketMirroringsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchPacketMirroring(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::packet_mirrorings::v1::
          PatchPacketMirroringRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     google::cloud::cpp::compute::packet_mirrorings::v1::
                         TestIamPermissionsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) = 0;
};

class DefaultPacketMirroringsRestStub : public PacketMirroringsRestStub {
 public:
  ~DefaultPacketMirroringsRestStub() override = default;

  explicit DefaultPacketMirroringsRestStub(Options options);
  DefaultPacketMirroringsRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations, Options options);

  StatusOr<google::cloud::cpp::compute::v1::PacketMirroringAggregatedList>
  AggregatedListPacketMirrorings(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::packet_mirrorings::v1::
          AggregatedListPacketMirroringsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeletePacketMirroring(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::packet_mirrorings::v1::
          DeletePacketMirroringRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::PacketMirroring> GetPacketMirroring(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::packet_mirrorings::v1::
          GetPacketMirroringRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertPacketMirroring(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::packet_mirrorings::v1::
          InsertPacketMirroringRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::PacketMirroringList>
  ListPacketMirrorings(google::cloud::rest_internal::RestContext& rest_context,
                       google::cloud::cpp::compute::packet_mirrorings::v1::
                           ListPacketMirroringsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchPacketMirroring(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::packet_mirrorings::v1::
          PatchPacketMirroringRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     google::cloud::cpp::compute::packet_mirrorings::v1::
                         TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_packet_mirrorings_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PACKET_MIRRORINGS_V1_INTERNAL_PACKET_MIRRORINGS_REST_STUB_H
