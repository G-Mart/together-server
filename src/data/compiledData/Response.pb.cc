// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Response.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Response.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Response {

namespace {

const ::google::protobuf::Descriptor* HTTPResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HTTPResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Response_2eproto() {
  protobuf_AddDesc_Response_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Response.proto");
  GOOGLE_CHECK(file != NULL);
  HTTPResponse_descriptor_ = file->message_type(0);
  static const int HTTPResponse_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, success_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, msg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, login_response_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, detail_response_),
  };
  HTTPResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      HTTPResponse_descriptor_,
      HTTPResponse::default_instance_,
      HTTPResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(HTTPResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Response_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    HTTPResponse_descriptor_, &HTTPResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Response_2eproto() {
  delete HTTPResponse::default_instance_;
  delete HTTPResponse_reflection_;
}

void protobuf_AddDesc_Response_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::UserResponse::protobuf_AddDesc_UserResponse_2eproto();
  ::RoomResponse::protobuf_AddDesc_RoomResponse_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016Response.proto\022\010Response\032\022UserResponse"
    ".proto\032\022RoomResponse.proto\"\246\001\n\014HTTPRespo"
    "nse\022\014\n\004code\030\001 \001(\005\022\017\n\007success\030\002 \001(\010\022\013\n\003ms"
    "g\030\003 \001(\t\0223\n\016login_response\030\004 \001(\0132\033.UserRe"
    "sponse.LoginResponse\0225\n\017detail_response\030"
    "\005 \001(\0132\034.UserResponse.DetailResponse", 235);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Response.proto", &protobuf_RegisterTypes);
  HTTPResponse::default_instance_ = new HTTPResponse();
  HTTPResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Response_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Response_2eproto {
  StaticDescriptorInitializer_Response_2eproto() {
    protobuf_AddDesc_Response_2eproto();
  }
} static_descriptor_initializer_Response_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int HTTPResponse::kCodeFieldNumber;
const int HTTPResponse::kSuccessFieldNumber;
const int HTTPResponse::kMsgFieldNumber;
const int HTTPResponse::kLoginResponseFieldNumber;
const int HTTPResponse::kDetailResponseFieldNumber;
#endif  // !_MSC_VER

HTTPResponse::HTTPResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void HTTPResponse::InitAsDefaultInstance() {
  login_response_ = const_cast< ::UserResponse::LoginResponse*>(&::UserResponse::LoginResponse::default_instance());
  detail_response_ = const_cast< ::UserResponse::DetailResponse*>(&::UserResponse::DetailResponse::default_instance());
}

HTTPResponse::HTTPResponse(const HTTPResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void HTTPResponse::SharedCtor() {
  _cached_size_ = 0;
  code_ = 0;
  success_ = false;
  msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  login_response_ = NULL;
  detail_response_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HTTPResponse::~HTTPResponse() {
  SharedDtor();
}

void HTTPResponse::SharedDtor() {
  if (msg_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_;
  }
  if (this != default_instance_) {
    delete login_response_;
    delete detail_response_;
  }
}

void HTTPResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HTTPResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HTTPResponse_descriptor_;
}

const HTTPResponse& HTTPResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Response_2eproto();
  return *default_instance_;
}

HTTPResponse* HTTPResponse::default_instance_ = NULL;

HTTPResponse* HTTPResponse::New() const {
  return new HTTPResponse;
}

void HTTPResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    code_ = 0;
    success_ = false;
    if (has_msg()) {
      if (msg_ != &::google::protobuf::internal::kEmptyString) {
        msg_->clear();
      }
    }
    if (has_login_response()) {
      if (login_response_ != NULL) login_response_->::UserResponse::LoginResponse::Clear();
    }
    if (has_detail_response()) {
      if (detail_response_ != NULL) detail_response_->::UserResponse::DetailResponse::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool HTTPResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 code = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &code_)));
          set_has_code();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_success;
        break;
      }

      // optional bool success = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_success:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &success_)));
          set_has_success();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_msg;
        break;
      }

      // optional string msg = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_msg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->msg().data(), this->msg().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_login_response;
        break;
      }

      // optional .UserResponse.LoginResponse login_response = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_login_response:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_login_response()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_detail_response;
        break;
      }

      // optional .UserResponse.DetailResponse detail_response = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_detail_response:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_detail_response()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void HTTPResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 code = 1;
  if (has_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->code(), output);
  }

  // optional bool success = 2;
  if (has_success()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->success(), output);
  }

  // optional string msg = 3;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->msg(), output);
  }

  // optional .UserResponse.LoginResponse login_response = 4;
  if (has_login_response()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->login_response(), output);
  }

  // optional .UserResponse.DetailResponse detail_response = 5;
  if (has_detail_response()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->detail_response(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* HTTPResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 code = 1;
  if (has_code()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->code(), target);
  }

  // optional bool success = 2;
  if (has_success()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->success(), target);
  }

  // optional string msg = 3;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->msg(), target);
  }

  // optional .UserResponse.LoginResponse login_response = 4;
  if (has_login_response()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->login_response(), target);
  }

  // optional .UserResponse.DetailResponse detail_response = 5;
  if (has_detail_response()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->detail_response(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int HTTPResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 code = 1;
    if (has_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->code());
    }

    // optional bool success = 2;
    if (has_success()) {
      total_size += 1 + 1;
    }

    // optional string msg = 3;
    if (has_msg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->msg());
    }

    // optional .UserResponse.LoginResponse login_response = 4;
    if (has_login_response()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->login_response());
    }

    // optional .UserResponse.DetailResponse detail_response = 5;
    if (has_detail_response()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->detail_response());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HTTPResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const HTTPResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const HTTPResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void HTTPResponse::MergeFrom(const HTTPResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_code()) {
      set_code(from.code());
    }
    if (from.has_success()) {
      set_success(from.success());
    }
    if (from.has_msg()) {
      set_msg(from.msg());
    }
    if (from.has_login_response()) {
      mutable_login_response()->::UserResponse::LoginResponse::MergeFrom(from.login_response());
    }
    if (from.has_detail_response()) {
      mutable_detail_response()->::UserResponse::DetailResponse::MergeFrom(from.detail_response());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void HTTPResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HTTPResponse::CopyFrom(const HTTPResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HTTPResponse::IsInitialized() const {

  return true;
}

void HTTPResponse::Swap(HTTPResponse* other) {
  if (other != this) {
    std::swap(code_, other->code_);
    std::swap(success_, other->success_);
    std::swap(msg_, other->msg_);
    std::swap(login_response_, other->login_response_);
    std::swap(detail_response_, other->detail_response_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata HTTPResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HTTPResponse_descriptor_;
  metadata.reflection = HTTPResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Response

// @@protoc_insertion_point(global_scope)
