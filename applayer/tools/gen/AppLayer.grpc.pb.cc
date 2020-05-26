// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: AppLayer.proto

#include "AppLayer.pb.h"
#include "AppLayer.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* AppLayer_method_names[] = {
  "/AppLayer/AuthUser",
  "/AppLayer/RegUser",
  "/AppLayer/StoreCode",
  "/AppLayer/GetCode",
  "/AppLayer/DeleteCode",
  "/AppLayer/GetAllHashes",
  "/AppLayer/CheckToken",
};

std::unique_ptr< AppLayer::Stub> AppLayer::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< AppLayer::Stub> stub(new AppLayer::Stub(channel));
  return stub;
}

AppLayer::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_AuthUser_(AppLayer_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RegUser_(AppLayer_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_StoreCode_(AppLayer_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetCode_(AppLayer_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteCode_(AppLayer_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetAllHashes_(AppLayer_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CheckToken_(AppLayer_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status AppLayer::Stub::AuthUser(::grpc::ClientContext* context, const ::User& request, ::Token* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_AuthUser_, context, request, response);
}

void AppLayer::Stub::experimental_async::AuthUser(::grpc::ClientContext* context, const ::User* request, ::Token* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_AuthUser_, context, request, response, std::move(f));
}

void AppLayer::Stub::experimental_async::AuthUser(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Token* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_AuthUser_, context, request, response, std::move(f));
}

void AppLayer::Stub::experimental_async::AuthUser(::grpc::ClientContext* context, const ::User* request, ::Token* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_AuthUser_, context, request, response, reactor);
}

void AppLayer::Stub::experimental_async::AuthUser(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Token* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_AuthUser_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Token>* AppLayer::Stub::AsyncAuthUserRaw(::grpc::ClientContext* context, const ::User& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::Token>::Create(channel_.get(), cq, rpcmethod_AuthUser_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::Token>* AppLayer::Stub::PrepareAsyncAuthUserRaw(::grpc::ClientContext* context, const ::User& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::Token>::Create(channel_.get(), cq, rpcmethod_AuthUser_, context, request, false);
}

::grpc::Status AppLayer::Stub::RegUser(::grpc::ClientContext* context, const ::User& request, ::Token* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RegUser_, context, request, response);
}

void AppLayer::Stub::experimental_async::RegUser(::grpc::ClientContext* context, const ::User* request, ::Token* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RegUser_, context, request, response, std::move(f));
}

void AppLayer::Stub::experimental_async::RegUser(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Token* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RegUser_, context, request, response, std::move(f));
}

void AppLayer::Stub::experimental_async::RegUser(::grpc::ClientContext* context, const ::User* request, ::Token* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_RegUser_, context, request, response, reactor);
}

void AppLayer::Stub::experimental_async::RegUser(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Token* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_RegUser_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Token>* AppLayer::Stub::AsyncRegUserRaw(::grpc::ClientContext* context, const ::User& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::Token>::Create(channel_.get(), cq, rpcmethod_RegUser_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::Token>* AppLayer::Stub::PrepareAsyncRegUserRaw(::grpc::ClientContext* context, const ::User& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::Token>::Create(channel_.get(), cq, rpcmethod_RegUser_, context, request, false);
}

::grpc::Status AppLayer::Stub::StoreCode(::grpc::ClientContext* context, const ::Code& request, ::Hash* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_StoreCode_, context, request, response);
}

void AppLayer::Stub::experimental_async::StoreCode(::grpc::ClientContext* context, const ::Code* request, ::Hash* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_StoreCode_, context, request, response, std::move(f));
}

void AppLayer::Stub::experimental_async::StoreCode(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Hash* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_StoreCode_, context, request, response, std::move(f));
}

void AppLayer::Stub::experimental_async::StoreCode(::grpc::ClientContext* context, const ::Code* request, ::Hash* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_StoreCode_, context, request, response, reactor);
}

void AppLayer::Stub::experimental_async::StoreCode(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Hash* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_StoreCode_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Hash>* AppLayer::Stub::AsyncStoreCodeRaw(::grpc::ClientContext* context, const ::Code& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::Hash>::Create(channel_.get(), cq, rpcmethod_StoreCode_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::Hash>* AppLayer::Stub::PrepareAsyncStoreCodeRaw(::grpc::ClientContext* context, const ::Code& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::Hash>::Create(channel_.get(), cq, rpcmethod_StoreCode_, context, request, false);
}

::grpc::Status AppLayer::Stub::GetCode(::grpc::ClientContext* context, const ::Hash& request, ::Code* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetCode_, context, request, response);
}

void AppLayer::Stub::experimental_async::GetCode(::grpc::ClientContext* context, const ::Hash* request, ::Code* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetCode_, context, request, response, std::move(f));
}

void AppLayer::Stub::experimental_async::GetCode(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Code* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetCode_, context, request, response, std::move(f));
}

void AppLayer::Stub::experimental_async::GetCode(::grpc::ClientContext* context, const ::Hash* request, ::Code* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetCode_, context, request, response, reactor);
}

void AppLayer::Stub::experimental_async::GetCode(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Code* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetCode_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Code>* AppLayer::Stub::AsyncGetCodeRaw(::grpc::ClientContext* context, const ::Hash& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::Code>::Create(channel_.get(), cq, rpcmethod_GetCode_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::Code>* AppLayer::Stub::PrepareAsyncGetCodeRaw(::grpc::ClientContext* context, const ::Hash& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::Code>::Create(channel_.get(), cq, rpcmethod_GetCode_, context, request, false);
}

::grpc::Status AppLayer::Stub::DeleteCode(::grpc::ClientContext* context, const ::Hash& request, ::Error* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteCode_, context, request, response);
}

void AppLayer::Stub::experimental_async::DeleteCode(::grpc::ClientContext* context, const ::Hash* request, ::Error* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteCode_, context, request, response, std::move(f));
}

void AppLayer::Stub::experimental_async::DeleteCode(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Error* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteCode_, context, request, response, std::move(f));
}

void AppLayer::Stub::experimental_async::DeleteCode(::grpc::ClientContext* context, const ::Hash* request, ::Error* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteCode_, context, request, response, reactor);
}

void AppLayer::Stub::experimental_async::DeleteCode(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Error* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteCode_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Error>* AppLayer::Stub::AsyncDeleteCodeRaw(::grpc::ClientContext* context, const ::Hash& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::Error>::Create(channel_.get(), cq, rpcmethod_DeleteCode_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::Error>* AppLayer::Stub::PrepareAsyncDeleteCodeRaw(::grpc::ClientContext* context, const ::Hash& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::Error>::Create(channel_.get(), cq, rpcmethod_DeleteCode_, context, request, false);
}

::grpc::Status AppLayer::Stub::GetAllHashes(::grpc::ClientContext* context, const ::User& request, ::Hashes* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetAllHashes_, context, request, response);
}

void AppLayer::Stub::experimental_async::GetAllHashes(::grpc::ClientContext* context, const ::User* request, ::Hashes* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetAllHashes_, context, request, response, std::move(f));
}

void AppLayer::Stub::experimental_async::GetAllHashes(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Hashes* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetAllHashes_, context, request, response, std::move(f));
}

void AppLayer::Stub::experimental_async::GetAllHashes(::grpc::ClientContext* context, const ::User* request, ::Hashes* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetAllHashes_, context, request, response, reactor);
}

void AppLayer::Stub::experimental_async::GetAllHashes(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Hashes* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetAllHashes_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Hashes>* AppLayer::Stub::AsyncGetAllHashesRaw(::grpc::ClientContext* context, const ::User& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::Hashes>::Create(channel_.get(), cq, rpcmethod_GetAllHashes_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::Hashes>* AppLayer::Stub::PrepareAsyncGetAllHashesRaw(::grpc::ClientContext* context, const ::User& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::Hashes>::Create(channel_.get(), cq, rpcmethod_GetAllHashes_, context, request, false);
}

::grpc::Status AppLayer::Stub::CheckToken(::grpc::ClientContext* context, const ::Token& request, ::AccessToken* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CheckToken_, context, request, response);
}

void AppLayer::Stub::experimental_async::CheckToken(::grpc::ClientContext* context, const ::Token* request, ::AccessToken* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CheckToken_, context, request, response, std::move(f));
}

void AppLayer::Stub::experimental_async::CheckToken(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::AccessToken* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CheckToken_, context, request, response, std::move(f));
}

void AppLayer::Stub::experimental_async::CheckToken(::grpc::ClientContext* context, const ::Token* request, ::AccessToken* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CheckToken_, context, request, response, reactor);
}

void AppLayer::Stub::experimental_async::CheckToken(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::AccessToken* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CheckToken_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::AccessToken>* AppLayer::Stub::AsyncCheckTokenRaw(::grpc::ClientContext* context, const ::Token& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::AccessToken>::Create(channel_.get(), cq, rpcmethod_CheckToken_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::AccessToken>* AppLayer::Stub::PrepareAsyncCheckTokenRaw(::grpc::ClientContext* context, const ::Token& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::AccessToken>::Create(channel_.get(), cq, rpcmethod_CheckToken_, context, request, false);
}

AppLayer::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AppLayer_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AppLayer::Service, ::User, ::Token>(
          std::mem_fn(&AppLayer::Service::AuthUser), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AppLayer_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AppLayer::Service, ::User, ::Token>(
          std::mem_fn(&AppLayer::Service::RegUser), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AppLayer_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AppLayer::Service, ::Code, ::Hash>(
          std::mem_fn(&AppLayer::Service::StoreCode), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AppLayer_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AppLayer::Service, ::Hash, ::Code>(
          std::mem_fn(&AppLayer::Service::GetCode), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AppLayer_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AppLayer::Service, ::Hash, ::Error>(
          std::mem_fn(&AppLayer::Service::DeleteCode), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AppLayer_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AppLayer::Service, ::User, ::Hashes>(
          std::mem_fn(&AppLayer::Service::GetAllHashes), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AppLayer_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AppLayer::Service, ::Token, ::AccessToken>(
          std::mem_fn(&AppLayer::Service::CheckToken), this)));
}

AppLayer::Service::~Service() {
}

::grpc::Status AppLayer::Service::AuthUser(::grpc::ServerContext* context, const ::User* request, ::Token* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AppLayer::Service::RegUser(::grpc::ServerContext* context, const ::User* request, ::Token* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AppLayer::Service::StoreCode(::grpc::ServerContext* context, const ::Code* request, ::Hash* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AppLayer::Service::GetCode(::grpc::ServerContext* context, const ::Hash* request, ::Code* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AppLayer::Service::DeleteCode(::grpc::ServerContext* context, const ::Hash* request, ::Error* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AppLayer::Service::GetAllHashes(::grpc::ServerContext* context, const ::User* request, ::Hashes* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AppLayer::Service::CheckToken(::grpc::ServerContext* context, const ::Token* request, ::AccessToken* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

