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
// source: google/cloud/compute/reservations/v1/reservations.proto

#include "google/cloud/compute/reservations/v1/internal/reservations_rest_connection_impl.h"
#include "google/cloud/compute/reservations/v1/internal/reservations_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_reservations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ReservationsRestConnectionImpl::ReservationsRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_reservations_v1_internal::ReservationsRestStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ReservationsConnection::options())) {}

StatusOr<google::cloud::cpp::compute::v1::ReservationAggregatedList>
ReservationsRestConnectionImpl::AggregatedListReservations(
    google::cloud::cpp::compute::reservations::v1::
        AggregatedListReservationsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AggregatedListReservations(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::reservations::v1::
                 AggregatedListReservationsRequest const& request) {
        return stub_->AggregatedListReservations(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsRestConnectionImpl::DeleteReservation(
    google::cloud::cpp::compute::reservations::v1::
        DeleteReservationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::zone_operations::v1::DeleteOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::reservations::v1::
                         DeleteReservationRequest const& request) {
        return stub->AsyncDeleteReservation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteReservation(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](
          std::string const& op,
          google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest&
              r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::Reservation>
ReservationsRestConnectionImpl::GetReservation(
    google::cloud::cpp::compute::reservations::v1::GetReservationRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetReservation(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::reservations::v1::
                 GetReservationRequest const& request) {
        return stub_->GetReservation(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ReservationsRestConnectionImpl::GetIamPolicy(
    google::cloud::cpp::compute::reservations::v1::GetIamPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::reservations::v1::
                 GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsRestConnectionImpl::InsertReservation(
    google::cloud::cpp::compute::reservations::v1::
        InsertReservationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::zone_operations::v1::DeleteOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::reservations::v1::
                         InsertReservationRequest const& request) {
        return stub->AsyncInsertReservation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->InsertReservation(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](
          std::string const& op,
          google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest&
              r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

StreamRange<google::cloud::cpp::compute::v1::Reservation>
ReservationsRestConnectionImpl::ListReservations(
    google::cloud::cpp::compute::reservations::v1::ListReservationsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListReservations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::Reservation>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<compute_reservations_v1::ReservationsRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::cpp::compute::reservations::v1::
              ListReservationsRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::cloud::cpp::compute::reservations::v1::
                       ListReservationsRequest const& request) {
              return stub->ListReservations(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::ReservationList r) {
        std::vector<google::cloud::cpp::compute::v1::Reservation> result(
            r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsRestConnectionImpl::Resize(
    google::cloud::cpp::compute::reservations::v1::ResizeRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::zone_operations::v1::DeleteOperationRequest>(
      background_->cq(), request,
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::reservations::v1::ResizeRequest const&
              request) {
        return stub->AsyncResize(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->Resize(request), polling_policy(*current),
      __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](
          std::string const& op,
          google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest&
              r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ReservationsRestConnectionImpl::SetIamPolicy(
    google::cloud::cpp::compute::reservations::v1::SetIamPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::reservations::v1::
                 SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ReservationsRestConnectionImpl::TestIamPermissions(
    google::cloud::cpp::compute::reservations::v1::
        TestIamPermissionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->TestIamPermissions(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::reservations::v1::
                 TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsRestConnectionImpl::UpdateReservation(
    google::cloud::cpp::compute::reservations::v1::
        UpdateReservationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::zone_operations::v1::DeleteOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::reservations::v1::
                         UpdateReservationRequest const& request) {
        return stub->AsyncUpdateReservation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateReservation(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](
          std::string const& op,
          google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest&
              r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_reservations_v1_internal
}  // namespace cloud
}  // namespace google
