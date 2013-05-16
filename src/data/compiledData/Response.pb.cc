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
  static const int HTTPResponse_offsets_[14] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, success_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, msg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, server_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, login_response_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, detail_response_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, exist_response_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, room_list_response_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, room_people_list_response_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, room_info_response_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, follow_list_response_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, followed_list_response_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, user_room_list_response_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HTTPResponse, user_message_list_response_),
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
  ::UserListResponse::protobuf_AddDesc_UserListResponse_2eproto();
  ::RoomResponse::protobuf_AddDesc_RoomResponse_2eproto();
  ::Data::protobuf_AddDesc_data_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016Response.proto\022\010Response\032\022UserResponse"
    ".proto\032\026UserListResponse.proto\032\022RoomResp"
    "onse.proto\032\ndata.proto\"\276\005\n\014HTTPResponse\022"
    "\014\n\004code\030\001 \001(\005\022\017\n\007success\030\002 \001(\010\022\013\n\003msg\030\003 "
    "\001(\t\022\023\n\013server_time\030\004 \001(\t\0223\n\016login_respon"
    "se\030\005 \001(\0132\033.UserResponse.LoginResponse\0225\n"
    "\017detail_response\030\006 \001(\0132\034.UserResponse.De"
    "tailResponse\022;\n\016exist_response\030\007 \001(\0132#.U"
    "serResponse.UsernameExistResponse\022>\n\022roo"
    "m_list_response\030\010 \001(\0132\".RoomResponse.Sho"
    "wRoomListResponse\022G\n\031room_people_list_re"
    "sponse\030\t \001(\0132$.RoomResponse.RoomPeopleLi"
    "stResponse\022:\n\022room_info_response\030\n \001(\0132\036"
    ".RoomResponse.RoomInfoResponse\022B\n\024follow"
    "_list_response\030\013 \001(\0132$.UserListResponse."
    "FollowListResponse\022F\n\026followed_list_resp"
    "onse\030\014 \001(\0132&.UserListResponse.FollowedLi"
    "stResponse\022C\n\027user_room_list_response\030\r "
    "\001(\0132\".RoomResponse.UserRoomListResponse\022"
    ".\n\032user_message_list_response\030\016 \001(\0132\n.Da"
    "ta.List", 807);
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
const int HTTPResponse::kServerTimeFieldNumber;
const int HTTPResponse::kLoginResponseFieldNumber;
const int HTTPResponse::kDetailResponseFieldNumber;
const int HTTPResponse::kExistResponseFieldNumber;
const int HTTPResponse::kRoomListResponseFieldNumber;
const int HTTPResponse::kRoomPeopleListResponseFieldNumber;
const int HTTPResponse::kRoomInfoResponseFieldNumber;
const int HTTPResponse::kFollowListResponseFieldNumber;
const int HTTPResponse::kFollowedListResponseFieldNumber;
const int HTTPResponse::kUserRoomListResponseFieldNumber;
const int HTTPResponse::kUserMessageListResponseFieldNumber;
#endif  // !_MSC_VER

HTTPResponse::HTTPResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void HTTPResponse::InitAsDefaultInstance() {
  login_response_ = const_cast< ::UserResponse::LoginResponse*>(&::UserResponse::LoginResponse::default_instance());
  detail_response_ = const_cast< ::UserResponse::DetailResponse*>(&::UserResponse::DetailResponse::default_instance());
  exist_response_ = const_cast< ::UserResponse::UsernameExistResponse*>(&::UserResponse::UsernameExistResponse::default_instance());
  room_list_response_ = const_cast< ::RoomResponse::ShowRoomListResponse*>(&::RoomResponse::ShowRoomListResponse::default_instance());
  room_people_list_response_ = const_cast< ::RoomResponse::RoomPeopleListResponse*>(&::RoomResponse::RoomPeopleListResponse::default_instance());
  room_info_response_ = const_cast< ::RoomResponse::RoomInfoResponse*>(&::RoomResponse::RoomInfoResponse::default_instance());
  follow_list_response_ = const_cast< ::UserListResponse::FollowListResponse*>(&::UserListResponse::FollowListResponse::default_instance());
  followed_list_response_ = const_cast< ::UserListResponse::FollowedListResponse*>(&::UserListResponse::FollowedListResponse::default_instance());
  user_room_list_response_ = const_cast< ::RoomResponse::UserRoomListResponse*>(&::RoomResponse::UserRoomListResponse::default_instance());
  user_message_list_response_ = const_cast< ::Data::List*>(&::Data::List::default_instance());
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
  server_time_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  login_response_ = NULL;
  detail_response_ = NULL;
  exist_response_ = NULL;
  room_list_response_ = NULL;
  room_people_list_response_ = NULL;
  room_info_response_ = NULL;
  follow_list_response_ = NULL;
  followed_list_response_ = NULL;
  user_room_list_response_ = NULL;
  user_message_list_response_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HTTPResponse::~HTTPResponse() {
  SharedDtor();
}

void HTTPResponse::SharedDtor() {
  if (msg_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_;
  }
  if (server_time_ != &::google::protobuf::internal::kEmptyString) {
    delete server_time_;
  }
  if (this != default_instance_) {
    delete login_response_;
    delete detail_response_;
    delete exist_response_;
    delete room_list_response_;
    delete room_people_list_response_;
    delete room_info_response_;
    delete follow_list_response_;
    delete followed_list_response_;
    delete user_room_list_response_;
    delete user_message_list_response_;
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
    if (has_server_time()) {
      if (server_time_ != &::google::protobuf::internal::kEmptyString) {
        server_time_->clear();
      }
    }
    if (has_login_response()) {
      if (login_response_ != NULL) login_response_->::UserResponse::LoginResponse::Clear();
    }
    if (has_detail_response()) {
      if (detail_response_ != NULL) detail_response_->::UserResponse::DetailResponse::Clear();
    }
    if (has_exist_response()) {
      if (exist_response_ != NULL) exist_response_->::UserResponse::UsernameExistResponse::Clear();
    }
    if (has_room_list_response()) {
      if (room_list_response_ != NULL) room_list_response_->::RoomResponse::ShowRoomListResponse::Clear();
    }
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (has_room_people_list_response()) {
      if (room_people_list_response_ != NULL) room_people_list_response_->::RoomResponse::RoomPeopleListResponse::Clear();
    }
    if (has_room_info_response()) {
      if (room_info_response_ != NULL) room_info_response_->::RoomResponse::RoomInfoResponse::Clear();
    }
    if (has_follow_list_response()) {
      if (follow_list_response_ != NULL) follow_list_response_->::UserListResponse::FollowListResponse::Clear();
    }
    if (has_followed_list_response()) {
      if (followed_list_response_ != NULL) followed_list_response_->::UserListResponse::FollowedListResponse::Clear();
    }
    if (has_user_room_list_response()) {
      if (user_room_list_response_ != NULL) user_room_list_response_->::RoomResponse::UserRoomListResponse::Clear();
    }
    if (has_user_message_list_response()) {
      if (user_message_list_response_ != NULL) user_message_list_response_->::Data::List::Clear();
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
        if (input->ExpectTag(34)) goto parse_server_time;
        break;
      }

      // optional string server_time = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_server_time:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_server_time()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->server_time().data(), this->server_time().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_login_response;
        break;
      }

      // optional .UserResponse.LoginResponse login_response = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_login_response:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_login_response()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_detail_response;
        break;
      }

      // optional .UserResponse.DetailResponse detail_response = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_detail_response:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_detail_response()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_exist_response;
        break;
      }

      // optional .UserResponse.UsernameExistResponse exist_response = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_exist_response:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_exist_response()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(66)) goto parse_room_list_response;
        break;
      }

      // optional .RoomResponse.ShowRoomListResponse room_list_response = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_room_list_response:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_room_list_response()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(74)) goto parse_room_people_list_response;
        break;
      }

      // optional .RoomResponse.RoomPeopleListResponse room_people_list_response = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_room_people_list_response:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_room_people_list_response()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(82)) goto parse_room_info_response;
        break;
      }

      // optional .RoomResponse.RoomInfoResponse room_info_response = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_room_info_response:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_room_info_response()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(90)) goto parse_follow_list_response;
        break;
      }

      // optional .UserListResponse.FollowListResponse follow_list_response = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_follow_list_response:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_follow_list_response()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(98)) goto parse_followed_list_response;
        break;
      }

      // optional .UserListResponse.FollowedListResponse followed_list_response = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_followed_list_response:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_followed_list_response()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(106)) goto parse_user_room_list_response;
        break;
      }

      // optional .RoomResponse.UserRoomListResponse user_room_list_response = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_user_room_list_response:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_user_room_list_response()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(114)) goto parse_user_message_list_response;
        break;
      }

      // optional .Data.List user_message_list_response = 14;
      case 14: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_user_message_list_response:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_user_message_list_response()));
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

  // optional string server_time = 4;
  if (has_server_time()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->server_time().data(), this->server_time().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->server_time(), output);
  }

  // optional .UserResponse.LoginResponse login_response = 5;
  if (has_login_response()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->login_response(), output);
  }

  // optional .UserResponse.DetailResponse detail_response = 6;
  if (has_detail_response()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->detail_response(), output);
  }

  // optional .UserResponse.UsernameExistResponse exist_response = 7;
  if (has_exist_response()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->exist_response(), output);
  }

  // optional .RoomResponse.ShowRoomListResponse room_list_response = 8;
  if (has_room_list_response()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->room_list_response(), output);
  }

  // optional .RoomResponse.RoomPeopleListResponse room_people_list_response = 9;
  if (has_room_people_list_response()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->room_people_list_response(), output);
  }

  // optional .RoomResponse.RoomInfoResponse room_info_response = 10;
  if (has_room_info_response()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, this->room_info_response(), output);
  }

  // optional .UserListResponse.FollowListResponse follow_list_response = 11;
  if (has_follow_list_response()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      11, this->follow_list_response(), output);
  }

  // optional .UserListResponse.FollowedListResponse followed_list_response = 12;
  if (has_followed_list_response()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      12, this->followed_list_response(), output);
  }

  // optional .RoomResponse.UserRoomListResponse user_room_list_response = 13;
  if (has_user_room_list_response()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      13, this->user_room_list_response(), output);
  }

  // optional .Data.List user_message_list_response = 14;
  if (has_user_message_list_response()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      14, this->user_message_list_response(), output);
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

  // optional string server_time = 4;
  if (has_server_time()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->server_time().data(), this->server_time().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->server_time(), target);
  }

  // optional .UserResponse.LoginResponse login_response = 5;
  if (has_login_response()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->login_response(), target);
  }

  // optional .UserResponse.DetailResponse detail_response = 6;
  if (has_detail_response()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        6, this->detail_response(), target);
  }

  // optional .UserResponse.UsernameExistResponse exist_response = 7;
  if (has_exist_response()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        7, this->exist_response(), target);
  }

  // optional .RoomResponse.ShowRoomListResponse room_list_response = 8;
  if (has_room_list_response()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        8, this->room_list_response(), target);
  }

  // optional .RoomResponse.RoomPeopleListResponse room_people_list_response = 9;
  if (has_room_people_list_response()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        9, this->room_people_list_response(), target);
  }

  // optional .RoomResponse.RoomInfoResponse room_info_response = 10;
  if (has_room_info_response()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        10, this->room_info_response(), target);
  }

  // optional .UserListResponse.FollowListResponse follow_list_response = 11;
  if (has_follow_list_response()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        11, this->follow_list_response(), target);
  }

  // optional .UserListResponse.FollowedListResponse followed_list_response = 12;
  if (has_followed_list_response()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        12, this->followed_list_response(), target);
  }

  // optional .RoomResponse.UserRoomListResponse user_room_list_response = 13;
  if (has_user_room_list_response()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        13, this->user_room_list_response(), target);
  }

  // optional .Data.List user_message_list_response = 14;
  if (has_user_message_list_response()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        14, this->user_message_list_response(), target);
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

    // optional string server_time = 4;
    if (has_server_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->server_time());
    }

    // optional .UserResponse.LoginResponse login_response = 5;
    if (has_login_response()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->login_response());
    }

    // optional .UserResponse.DetailResponse detail_response = 6;
    if (has_detail_response()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->detail_response());
    }

    // optional .UserResponse.UsernameExistResponse exist_response = 7;
    if (has_exist_response()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->exist_response());
    }

    // optional .RoomResponse.ShowRoomListResponse room_list_response = 8;
    if (has_room_list_response()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->room_list_response());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional .RoomResponse.RoomPeopleListResponse room_people_list_response = 9;
    if (has_room_people_list_response()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->room_people_list_response());
    }

    // optional .RoomResponse.RoomInfoResponse room_info_response = 10;
    if (has_room_info_response()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->room_info_response());
    }

    // optional .UserListResponse.FollowListResponse follow_list_response = 11;
    if (has_follow_list_response()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->follow_list_response());
    }

    // optional .UserListResponse.FollowedListResponse followed_list_response = 12;
    if (has_followed_list_response()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->followed_list_response());
    }

    // optional .RoomResponse.UserRoomListResponse user_room_list_response = 13;
    if (has_user_room_list_response()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->user_room_list_response());
    }

    // optional .Data.List user_message_list_response = 14;
    if (has_user_message_list_response()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->user_message_list_response());
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
    if (from.has_server_time()) {
      set_server_time(from.server_time());
    }
    if (from.has_login_response()) {
      mutable_login_response()->::UserResponse::LoginResponse::MergeFrom(from.login_response());
    }
    if (from.has_detail_response()) {
      mutable_detail_response()->::UserResponse::DetailResponse::MergeFrom(from.detail_response());
    }
    if (from.has_exist_response()) {
      mutable_exist_response()->::UserResponse::UsernameExistResponse::MergeFrom(from.exist_response());
    }
    if (from.has_room_list_response()) {
      mutable_room_list_response()->::RoomResponse::ShowRoomListResponse::MergeFrom(from.room_list_response());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_room_people_list_response()) {
      mutable_room_people_list_response()->::RoomResponse::RoomPeopleListResponse::MergeFrom(from.room_people_list_response());
    }
    if (from.has_room_info_response()) {
      mutable_room_info_response()->::RoomResponse::RoomInfoResponse::MergeFrom(from.room_info_response());
    }
    if (from.has_follow_list_response()) {
      mutable_follow_list_response()->::UserListResponse::FollowListResponse::MergeFrom(from.follow_list_response());
    }
    if (from.has_followed_list_response()) {
      mutable_followed_list_response()->::UserListResponse::FollowedListResponse::MergeFrom(from.followed_list_response());
    }
    if (from.has_user_room_list_response()) {
      mutable_user_room_list_response()->::RoomResponse::UserRoomListResponse::MergeFrom(from.user_room_list_response());
    }
    if (from.has_user_message_list_response()) {
      mutable_user_message_list_response()->::Data::List::MergeFrom(from.user_message_list_response());
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
    std::swap(server_time_, other->server_time_);
    std::swap(login_response_, other->login_response_);
    std::swap(detail_response_, other->detail_response_);
    std::swap(exist_response_, other->exist_response_);
    std::swap(room_list_response_, other->room_list_response_);
    std::swap(room_people_list_response_, other->room_people_list_response_);
    std::swap(room_info_response_, other->room_info_response_);
    std::swap(follow_list_response_, other->follow_list_response_);
    std::swap(followed_list_response_, other->followed_list_response_);
    std::swap(user_room_list_response_, other->user_room_list_response_);
    std::swap(user_message_list_response_, other->user_message_list_response_);
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
