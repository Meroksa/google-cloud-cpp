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

#include "google/cloud/compute/packet_mirrorings/v1/internal/packet_mirrorings_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_packet_mirrorings_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

PacketMirroringsTracingConnection::PacketMirroringsTracingConnection(
    std::shared_ptr<compute_packet_mirrorings_v1::PacketMirroringsConnection>
        child)
    : child_(std::move(child)) {}

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::PacketMirroringsScopedList>>
PacketMirroringsTracingConnection::AggregatedListPacketMirrorings(
    google::cloud::cpp::compute::packet_mirrorings::v1::
        AggregatedListPacketMirroringsRequest request) {
  auto span = internal::MakeSpan(
      "compute_packet_mirrorings_v1::PacketMirroringsConnection::"
      "AggregatedListPacketMirrorings");
  internal::OTelScope scope(span);
  auto sr = child_->AggregatedListPacketMirrorings(std::move(request));
  return internal::MakeTracedStreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::PacketMirroringsScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PacketMirroringsTracingConnection::DeletePacketMirroring(
    google::cloud::cpp::compute::packet_mirrorings::v1::
        DeletePacketMirroringRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_packet_mirrorings_v1::PacketMirroringsConnection::"
      "DeletePacketMirroring");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeletePacketMirroring(request));
}

StatusOr<google::cloud::cpp::compute::v1::PacketMirroring>
PacketMirroringsTracingConnection::GetPacketMirroring(
    google::cloud::cpp::compute::packet_mirrorings::v1::
        GetPacketMirroringRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_packet_mirrorings_v1::PacketMirroringsConnection::"
      "GetPacketMirroring");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetPacketMirroring(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PacketMirroringsTracingConnection::InsertPacketMirroring(
    google::cloud::cpp::compute::packet_mirrorings::v1::
        InsertPacketMirroringRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_packet_mirrorings_v1::PacketMirroringsConnection::"
      "InsertPacketMirroring");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertPacketMirroring(request));
}

StreamRange<google::cloud::cpp::compute::v1::PacketMirroring>
PacketMirroringsTracingConnection::ListPacketMirrorings(
    google::cloud::cpp::compute::packet_mirrorings::v1::
        ListPacketMirroringsRequest request) {
  auto span = internal::MakeSpan(
      "compute_packet_mirrorings_v1::PacketMirroringsConnection::"
      "ListPacketMirrorings");
  internal::OTelScope scope(span);
  auto sr = child_->ListPacketMirrorings(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::PacketMirroring>(std::move(span),
                                                        std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PacketMirroringsTracingConnection::PatchPacketMirroring(
    google::cloud::cpp::compute::packet_mirrorings::v1::
        PatchPacketMirroringRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_packet_mirrorings_v1::PacketMirroringsConnection::"
      "PatchPacketMirroring");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchPacketMirroring(request));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
PacketMirroringsTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::packet_mirrorings::v1::
        TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_packet_mirrorings_v1::PacketMirroringsConnection::"
      "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_packet_mirrorings_v1::PacketMirroringsConnection>
MakePacketMirroringsTracingConnection(
    std::shared_ptr<compute_packet_mirrorings_v1::PacketMirroringsConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<PacketMirroringsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_packet_mirrorings_v1_internal
}  // namespace cloud
}  // namespace google
