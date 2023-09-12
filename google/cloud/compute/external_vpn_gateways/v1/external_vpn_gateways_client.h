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
// source:
// google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_EXTERNAL_VPN_GATEWAYS_V1_EXTERNAL_VPN_GATEWAYS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_EXTERNAL_VPN_GATEWAYS_V1_EXTERNAL_VPN_GATEWAYS_CLIENT_H

#include "google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace compute_external_vpn_gateways_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the externalVpnGateways resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/externalVpnGateways
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class ExternalVpnGatewaysClient {
 public:
  explicit ExternalVpnGatewaysClient(
      ExperimentalTag,
      std::shared_ptr<ExternalVpnGatewaysConnection> connection,
      Options opts = {});
  ~ExternalVpnGatewaysClient();

  ///@{
  /// @name Copy and move support
  ExternalVpnGatewaysClient(ExternalVpnGatewaysClient const&) = default;
  ExternalVpnGatewaysClient& operator=(ExternalVpnGatewaysClient const&) =
      default;
  ExternalVpnGatewaysClient(ExternalVpnGatewaysClient&&) = default;
  ExternalVpnGatewaysClient& operator=(ExternalVpnGatewaysClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ExternalVpnGatewaysClient const& a,
                         ExternalVpnGatewaysClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ExternalVpnGatewaysClient const& a,
                         ExternalVpnGatewaysClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the specified externalVpnGateway.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/externalVpnGateways/delete
  ///
  /// @param project  Project ID for this request.
  /// @param external_vpn_gateway  Name of the externalVpnGateways to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.external_vpn_gateways.v1.DeleteExternalVpnGatewayRequest]: @cloud_cpp_reference_link{google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways.proto#L117}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteExternalVpnGateway(std::string const& project,
                           std::string const& external_vpn_gateway,
                           Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified externalVpnGateway.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/externalVpnGateways/delete
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.external_vpn_gateways.v1.DeleteExternalVpnGatewayRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.external_vpn_gateways.v1.DeleteExternalVpnGatewayRequest]: @cloud_cpp_reference_link{google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways.proto#L117}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteExternalVpnGateway(
      google::cloud::cpp::compute::external_vpn_gateways::v1::
          DeleteExternalVpnGatewayRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified externalVpnGateway. Get a list of available
  /// externalVpnGateways by making a list() request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/externalVpnGateways/get
  ///
  /// @param project  Project ID for this request.
  /// @param external_vpn_gateway  Name of the externalVpnGateway to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.ExternalVpnGateway])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.external_vpn_gateways.v1.GetExternalVpnGatewayRequest]: @cloud_cpp_reference_link{google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways.proto#L141}
  /// [google.cloud.cpp.compute.v1.ExternalVpnGateway]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_032.proto#L31}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::ExternalVpnGateway>
  GetExternalVpnGateway(std::string const& project,
                        std::string const& external_vpn_gateway,
                        Options opts = {});

  // clang-format off
  ///
  /// Returns the specified externalVpnGateway. Get a list of available
  /// externalVpnGateways by making a list() request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/externalVpnGateways/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.external_vpn_gateways.v1.GetExternalVpnGatewayRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.ExternalVpnGateway])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.external_vpn_gateways.v1.GetExternalVpnGatewayRequest]: @cloud_cpp_reference_link{google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways.proto#L141}
  /// [google.cloud.cpp.compute.v1.ExternalVpnGateway]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_032.proto#L31}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::ExternalVpnGateway>
  GetExternalVpnGateway(google::cloud::cpp::compute::external_vpn_gateways::v1::
                            GetExternalVpnGatewayRequest const& request,
                        Options opts = {});

  // clang-format off
  ///
  /// Creates a ExternalVpnGateway in the specified project using the data
  /// included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/externalVpnGateways/insert
  ///
  /// @param project  Project ID for this request.
  /// @param external_vpn_gateway_resource  The ExternalVpnGateway for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.external_vpn_gateways.v1.InsertExternalVpnGatewayRequest]: @cloud_cpp_reference_link{google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways.proto#L150}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertExternalVpnGateway(
      std::string const& project,
      google::cloud::cpp::compute::v1::ExternalVpnGateway const&
          external_vpn_gateway_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a ExternalVpnGateway in the specified project using the data
  /// included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/externalVpnGateways/insert
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.external_vpn_gateways.v1.InsertExternalVpnGatewayRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.external_vpn_gateways.v1.InsertExternalVpnGatewayRequest]: @cloud_cpp_reference_link{google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways.proto#L150}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertExternalVpnGateway(
      google::cloud::cpp::compute::external_vpn_gateways::v1::
          InsertExternalVpnGatewayRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of ExternalVpnGateway available to the specified
  /// project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/externalVpnGateways/list
  ///
  /// @param project  Project ID for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.cpp.compute.v1.ExternalVpnGateway], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.external_vpn_gateways.v1.ListExternalVpnGatewaysRequest]: @cloud_cpp_reference_link{google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways.proto#L175}
  /// [google.cloud.cpp.compute.v1.ExternalVpnGateway]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_032.proto#L31}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::ExternalVpnGateway>
  ListExternalVpnGateways(std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of ExternalVpnGateway available to the specified
  /// project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/externalVpnGateways/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.external_vpn_gateways.v1.ListExternalVpnGatewaysRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.cpp.compute.v1.ExternalVpnGateway], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.external_vpn_gateways.v1.ListExternalVpnGatewaysRequest]: @cloud_cpp_reference_link{google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways.proto#L175}
  /// [google.cloud.cpp.compute.v1.ExternalVpnGateway]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_032.proto#L31}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::ExternalVpnGateway>
  ListExternalVpnGateways(google::cloud::cpp::compute::external_vpn_gateways::
                              v1::ListExternalVpnGatewaysRequest request,
                          Options opts = {});

  // clang-format off
  ///
  /// Sets the labels on an ExternalVpnGateway. To learn more about labels, read
  /// the Labeling Resources documentation.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/externalVpnGateways/setLabels
  ///
  /// @param project  Project ID for this request.
  /// @param resource  Name or id of the resource for this request.
  /// @param global_set_labels_request_resource  The GlobalSetLabelsRequest for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.external_vpn_gateways.v1.SetLabelsRequest]: @cloud_cpp_reference_link{google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways.proto#L240}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      std::string const& project, std::string const& resource,
      google::cloud::cpp::compute::v1::GlobalSetLabelsRequest const&
          global_set_labels_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the labels on an ExternalVpnGateway. To learn more about labels, read
  /// the Labeling Resources documentation.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/externalVpnGateways/setLabels
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.external_vpn_gateways.v1.SetLabelsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.external_vpn_gateways.v1.SetLabelsRequest]: @cloud_cpp_reference_link{google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways.proto#L240}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::external_vpn_gateways::v1::
          SetLabelsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns permissions that a caller has on the specified resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/externalVpnGateways/testIamPermissions
  ///
  /// @param project  Project ID for this request.
  /// @param resource  Name or id of the resource for this request.
  /// @param test_permissions_request_resource  The TestPermissionsRequest for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TestPermissionsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.external_vpn_gateways.v1.TestIamPermissionsRequest]: @cloud_cpp_reference_link{google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways.proto#L257}
  /// [google.cloud.cpp.compute.v1.TestPermissionsResponse]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_130.proto#L30}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(
      std::string const& project, std::string const& resource,
      google::cloud::cpp::compute::v1::TestPermissionsRequest const&
          test_permissions_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Returns permissions that a caller has on the specified resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/externalVpnGateways/testIamPermissions
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.external_vpn_gateways.v1.TestIamPermissionsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TestPermissionsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.external_vpn_gateways.v1.TestIamPermissionsRequest]: @cloud_cpp_reference_link{google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways.proto#L257}
  /// [google.cloud.cpp.compute.v1.TestPermissionsResponse]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_130.proto#L30}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::external_vpn_gateways::v1::
                         TestIamPermissionsRequest const& request,
                     Options opts = {});

 private:
  std::shared_ptr<ExternalVpnGatewaysConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_external_vpn_gateways_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_EXTERNAL_VPN_GATEWAYS_V1_EXTERNAL_VPN_GATEWAYS_CLIENT_H
