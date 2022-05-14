// Copyright 2022 Google LLC
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
// source: google/bigtable/v2/bigtable.proto

#include "google/cloud/bigtable/internal/bigtable_auth_decorator.h"
#include "google/cloud/internal/async_streaming_read_rpc_auth.h"
#include <google/bigtable/v2/bigtable.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigtable_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigtableAuth::BigtableAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<BigtableStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::ReadRowsResponse>>
BigtableAuth::ReadRows(std::unique_ptr<grpc::ClientContext> context,
                       google::bigtable::v2::ReadRowsRequest const& request) {
  using ErrorStream = ::google::cloud::internal::StreamingReadRpcError<
      google::bigtable::v2::ReadRowsResponse>;
  auto status = auth_->ConfigureContext(*context);
  if (!status.ok()) return absl::make_unique<ErrorStream>(std::move(status));
  return child_->ReadRows(std::move(context), request);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::SampleRowKeysResponse>>
BigtableAuth::SampleRowKeys(
    std::unique_ptr<grpc::ClientContext> context,
    google::bigtable::v2::SampleRowKeysRequest const& request) {
  using ErrorStream = ::google::cloud::internal::StreamingReadRpcError<
      google::bigtable::v2::SampleRowKeysResponse>;
  auto status = auth_->ConfigureContext(*context);
  if (!status.ok()) return absl::make_unique<ErrorStream>(std::move(status));
  return child_->SampleRowKeys(std::move(context), request);
}

StatusOr<google::bigtable::v2::MutateRowResponse> BigtableAuth::MutateRow(
    grpc::ClientContext& context,
    google::bigtable::v2::MutateRowRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->MutateRow(context, request);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::MutateRowsResponse>>
BigtableAuth::MutateRows(
    std::unique_ptr<grpc::ClientContext> context,
    google::bigtable::v2::MutateRowsRequest const& request) {
  using ErrorStream = ::google::cloud::internal::StreamingReadRpcError<
      google::bigtable::v2::MutateRowsResponse>;
  auto status = auth_->ConfigureContext(*context);
  if (!status.ok()) return absl::make_unique<ErrorStream>(std::move(status));
  return child_->MutateRows(std::move(context), request);
}

StatusOr<google::bigtable::v2::CheckAndMutateRowResponse>
BigtableAuth::CheckAndMutateRow(
    grpc::ClientContext& context,
    google::bigtable::v2::CheckAndMutateRowRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CheckAndMutateRow(context, request);
}

StatusOr<google::bigtable::v2::PingAndWarmResponse> BigtableAuth::PingAndWarm(
    grpc::ClientContext& context,
    google::bigtable::v2::PingAndWarmRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->PingAndWarm(context, request);
}

StatusOr<google::bigtable::v2::ReadModifyWriteRowResponse>
BigtableAuth::ReadModifyWriteRow(
    grpc::ClientContext& context,
    google::bigtable::v2::ReadModifyWriteRowRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ReadModifyWriteRow(context, request);
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::ReadRowsResponse>>
BigtableAuth::AsyncReadRows(
    google::cloud::CompletionQueue const& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::bigtable::v2::ReadRowsRequest const& request) {
  using StreamAuth = google::cloud::internal::AsyncStreamingReadRpcAuth<
      google::bigtable::v2::ReadRowsResponse>;

  auto child = child_;
  auto call = [child, cq, request](std::unique_ptr<grpc::ClientContext> ctx) {
    return child->AsyncReadRows(cq, std::move(ctx), request);
  };
  return absl::make_unique<StreamAuth>(
      std::move(context), auth_, StreamAuth::StreamFactory(std::move(call)));
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::SampleRowKeysResponse>>
BigtableAuth::AsyncSampleRowKeys(
    google::cloud::CompletionQueue const& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::bigtable::v2::SampleRowKeysRequest const& request) {
  using StreamAuth = google::cloud::internal::AsyncStreamingReadRpcAuth<
      google::bigtable::v2::SampleRowKeysResponse>;

  auto child = child_;
  auto call = [child, cq, request](std::unique_ptr<grpc::ClientContext> ctx) {
    return child->AsyncSampleRowKeys(cq, std::move(ctx), request);
  };
  return absl::make_unique<StreamAuth>(
      std::move(context), auth_, StreamAuth::StreamFactory(std::move(call)));
}

future<StatusOr<google::bigtable::v2::MutateRowResponse>>
BigtableAuth::AsyncMutateRow(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::bigtable::v2::MutateRowRequest const& request) {
  using ReturnType = StatusOr<google::bigtable::v2::MutateRowResponse>;
  auto child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncMutateRow(cq, *std::move(context), request);
      });
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::MutateRowsResponse>>
BigtableAuth::AsyncMutateRows(
    google::cloud::CompletionQueue const& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::bigtable::v2::MutateRowsRequest const& request) {
  using StreamAuth = google::cloud::internal::AsyncStreamingReadRpcAuth<
      google::bigtable::v2::MutateRowsResponse>;

  auto child = child_;
  auto call = [child, cq, request](std::unique_ptr<grpc::ClientContext> ctx) {
    return child->AsyncMutateRows(cq, std::move(ctx), request);
  };
  return absl::make_unique<StreamAuth>(
      std::move(context), auth_, StreamAuth::StreamFactory(std::move(call)));
}

future<StatusOr<google::bigtable::v2::CheckAndMutateRowResponse>>
BigtableAuth::AsyncCheckAndMutateRow(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::bigtable::v2::CheckAndMutateRowRequest const& request) {
  using ReturnType = StatusOr<google::bigtable::v2::CheckAndMutateRowResponse>;
  auto child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCheckAndMutateRow(cq, *std::move(context), request);
      });
}

future<StatusOr<google::bigtable::v2::ReadModifyWriteRowResponse>>
BigtableAuth::AsyncReadModifyWriteRow(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::bigtable::v2::ReadModifyWriteRowRequest const& request) {
  using ReturnType = StatusOr<google::bigtable::v2::ReadModifyWriteRowResponse>;
  auto child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncReadModifyWriteRow(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_internal
}  // namespace cloud
}  // namespace google
