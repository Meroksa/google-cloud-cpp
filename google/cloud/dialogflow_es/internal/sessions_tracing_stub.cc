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
// source: google/cloud/dialogflow/v2/session.proto

#include "google/cloud/dialogflow_es/internal/sessions_tracing_stub.h"
#include "google/cloud/internal/async_read_write_stream_tracing.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SessionsTracingStub::SessionsTracingStub(std::shared_ptr<SessionsStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dialogflow::v2::DetectIntentResponse>
SessionsTracingStub::DetectIntent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::DetectIntentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Sessions",
                                     "DetectIntent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DetectIntent(context, request));
}

std::unique_ptr<AsyncStreamingReadWriteRpc<
    google::cloud::dialogflow::v2::StreamingDetectIntentRequest,
    google::cloud::dialogflow::v2::StreamingDetectIntentResponse>>
SessionsTracingStub::AsyncStreamingDetectIntent(
    CompletionQueue const& cq, std::shared_ptr<grpc::ClientContext> context) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Sessions",
                                     "StreamingDetectIntent");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto stream = child_->AsyncStreamingDetectIntent(cq, context);
  return std::make_unique<internal::AsyncStreamingReadWriteRpcTracing<
      google::cloud::dialogflow::v2::StreamingDetectIntentRequest,
      google::cloud::dialogflow::v2::StreamingDetectIntentResponse>>(
      std::move(context), std::move(stream), std::move(span));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<SessionsStub> MakeSessionsTracingStub(
    std::shared_ptr<SessionsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<SessionsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
