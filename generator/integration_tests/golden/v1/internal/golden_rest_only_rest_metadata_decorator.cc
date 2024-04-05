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
// source: generator/integration_tests/test2.proto

#include "generator/integration_tests/golden/v1/internal/golden_rest_only_rest_metadata_decorator.h"
#include "absl/strings/str_format.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/rest_set_metadata.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GoldenRestOnlyRestMetadata::GoldenRestOnlyRestMetadata(
    std::shared_ptr<GoldenRestOnlyRestStub> child,
    std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

Status
GoldenRestOnlyRestMetadata::Noop(
    rest_internal::RestContext& rest_context,
    Options const& options, google::protobuf::Empty const& request) {
  SetMetadata(rest_context, options);
  return child_->Noop(rest_context, options, request);
}

void GoldenRestOnlyRestMetadata::SetMetadata(
      rest_internal::RestContext& rest_context,
      Options const& options, std::vector<std::string> const& params) {
  google::cloud::rest_internal::SetMetadata(
      rest_context, options, params, api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google
