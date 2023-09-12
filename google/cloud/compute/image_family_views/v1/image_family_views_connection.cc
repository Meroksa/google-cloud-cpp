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
// source: google/cloud/compute/image_family_views/v1/image_family_views.proto

#include "google/cloud/compute/image_family_views/v1/image_family_views_connection.h"
#include "google/cloud/compute/image_family_views/v1/image_family_views_options.h"
#include "google/cloud/compute/image_family_views/v1/internal/image_family_views_option_defaults.h"
#include "google/cloud/compute/image_family_views/v1/internal/image_family_views_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_image_family_views_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ImageFamilyViewsConnection::~ImageFamilyViewsConnection() = default;

StatusOr<google::cloud::cpp::compute::v1::ImageFamilyView>
ImageFamilyViewsConnection::GetImageFamilyView(
    google::cloud::cpp::compute::image_family_views::v1::
        GetImageFamilyViewRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_image_family_views_v1
}  // namespace cloud
}  // namespace google
