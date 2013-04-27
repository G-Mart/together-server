// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserResponse.proto

#ifndef PROTOBUF_UserResponse_2eproto__INCLUDED
#define PROTOBUF_UserResponse_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "UserData.pb.h"
// @@protoc_insertion_point(includes)

namespace UserResponse {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_UserResponse_2eproto();
void protobuf_AssignDesc_UserResponse_2eproto();
void protobuf_ShutdownFile_UserResponse_2eproto();

class LoginResponse;
class DetailResponse;

// ===================================================================

class LoginResponse : public ::google::protobuf::Message {
 public:
  LoginResponse();
  virtual ~LoginResponse();

  LoginResponse(const LoginResponse& from);

  inline LoginResponse& operator=(const LoginResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LoginResponse& default_instance();

  void Swap(LoginResponse* other);

  // implements Message ----------------------------------------------

  LoginResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginResponse& from);
  void MergeFrom(const LoginResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string sid = 1;
  inline bool has_sid() const;
  inline void clear_sid();
  static const int kSidFieldNumber = 1;
  inline const ::std::string& sid() const;
  inline void set_sid(const ::std::string& value);
  inline void set_sid(const char* value);
  inline void set_sid(const char* value, size_t size);
  inline ::std::string* mutable_sid();
  inline ::std::string* release_sid();
  inline void set_allocated_sid(::std::string* sid);

  // optional .UserData.User_Info User_Info = 2;
  inline bool has_user_info() const;
  inline void clear_user_info();
  static const int kUserInfoFieldNumber = 2;
  inline const ::UserData::User_Info& user_info() const;
  inline ::UserData::User_Info* mutable_user_info();
  inline ::UserData::User_Info* release_user_info();
  inline void set_allocated_user_info(::UserData::User_Info* user_info);

  // @@protoc_insertion_point(class_scope:UserResponse.LoginResponse)
 private:
  inline void set_has_sid();
  inline void clear_has_sid();
  inline void set_has_user_info();
  inline void clear_has_user_info();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* sid_;
  ::UserData::User_Info* user_info_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_UserResponse_2eproto();
  friend void protobuf_AssignDesc_UserResponse_2eproto();
  friend void protobuf_ShutdownFile_UserResponse_2eproto();

  void InitAsDefaultInstance();
  static LoginResponse* default_instance_;
};
// -------------------------------------------------------------------

class DetailResponse : public ::google::protobuf::Message {
 public:
  DetailResponse();
  virtual ~DetailResponse();

  DetailResponse(const DetailResponse& from);

  inline DetailResponse& operator=(const DetailResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DetailResponse& default_instance();

  void Swap(DetailResponse* other);

  // implements Message ----------------------------------------------

  DetailResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DetailResponse& from);
  void MergeFrom(const DetailResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .UserData.User_Info User_Info = 1;
  inline bool has_user_info() const;
  inline void clear_user_info();
  static const int kUserInfoFieldNumber = 1;
  inline const ::UserData::User_Info& user_info() const;
  inline ::UserData::User_Info* mutable_user_info();
  inline ::UserData::User_Info* release_user_info();
  inline void set_allocated_user_info(::UserData::User_Info* user_info);

  // @@protoc_insertion_point(class_scope:UserResponse.DetailResponse)
 private:
  inline void set_has_user_info();
  inline void clear_has_user_info();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::UserData::User_Info* user_info_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_UserResponse_2eproto();
  friend void protobuf_AssignDesc_UserResponse_2eproto();
  friend void protobuf_ShutdownFile_UserResponse_2eproto();

  void InitAsDefaultInstance();
  static DetailResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// LoginResponse

// optional string sid = 1;
inline bool LoginResponse::has_sid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LoginResponse::set_has_sid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LoginResponse::clear_has_sid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LoginResponse::clear_sid() {
  if (sid_ != &::google::protobuf::internal::kEmptyString) {
    sid_->clear();
  }
  clear_has_sid();
}
inline const ::std::string& LoginResponse::sid() const {
  return *sid_;
}
inline void LoginResponse::set_sid(const ::std::string& value) {
  set_has_sid();
  if (sid_ == &::google::protobuf::internal::kEmptyString) {
    sid_ = new ::std::string;
  }
  sid_->assign(value);
}
inline void LoginResponse::set_sid(const char* value) {
  set_has_sid();
  if (sid_ == &::google::protobuf::internal::kEmptyString) {
    sid_ = new ::std::string;
  }
  sid_->assign(value);
}
inline void LoginResponse::set_sid(const char* value, size_t size) {
  set_has_sid();
  if (sid_ == &::google::protobuf::internal::kEmptyString) {
    sid_ = new ::std::string;
  }
  sid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginResponse::mutable_sid() {
  set_has_sid();
  if (sid_ == &::google::protobuf::internal::kEmptyString) {
    sid_ = new ::std::string;
  }
  return sid_;
}
inline ::std::string* LoginResponse::release_sid() {
  clear_has_sid();
  if (sid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = sid_;
    sid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginResponse::set_allocated_sid(::std::string* sid) {
  if (sid_ != &::google::protobuf::internal::kEmptyString) {
    delete sid_;
  }
  if (sid) {
    set_has_sid();
    sid_ = sid;
  } else {
    clear_has_sid();
    sid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional .UserData.User_Info User_Info = 2;
inline bool LoginResponse::has_user_info() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LoginResponse::set_has_user_info() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LoginResponse::clear_has_user_info() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LoginResponse::clear_user_info() {
  if (user_info_ != NULL) user_info_->::UserData::User_Info::Clear();
  clear_has_user_info();
}
inline const ::UserData::User_Info& LoginResponse::user_info() const {
  return user_info_ != NULL ? *user_info_ : *default_instance_->user_info_;
}
inline ::UserData::User_Info* LoginResponse::mutable_user_info() {
  set_has_user_info();
  if (user_info_ == NULL) user_info_ = new ::UserData::User_Info;
  return user_info_;
}
inline ::UserData::User_Info* LoginResponse::release_user_info() {
  clear_has_user_info();
  ::UserData::User_Info* temp = user_info_;
  user_info_ = NULL;
  return temp;
}
inline void LoginResponse::set_allocated_user_info(::UserData::User_Info* user_info) {
  delete user_info_;
  user_info_ = user_info;
  if (user_info) {
    set_has_user_info();
  } else {
    clear_has_user_info();
  }
}

// -------------------------------------------------------------------

// DetailResponse

// optional .UserData.User_Info User_Info = 1;
inline bool DetailResponse::has_user_info() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DetailResponse::set_has_user_info() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DetailResponse::clear_has_user_info() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DetailResponse::clear_user_info() {
  if (user_info_ != NULL) user_info_->::UserData::User_Info::Clear();
  clear_has_user_info();
}
inline const ::UserData::User_Info& DetailResponse::user_info() const {
  return user_info_ != NULL ? *user_info_ : *default_instance_->user_info_;
}
inline ::UserData::User_Info* DetailResponse::mutable_user_info() {
  set_has_user_info();
  if (user_info_ == NULL) user_info_ = new ::UserData::User_Info;
  return user_info_;
}
inline ::UserData::User_Info* DetailResponse::release_user_info() {
  clear_has_user_info();
  ::UserData::User_Info* temp = user_info_;
  user_info_ = NULL;
  return temp;
}
inline void DetailResponse::set_allocated_user_info(::UserData::User_Info* user_info) {
  delete user_info_;
  user_info_ = user_info;
  if (user_info) {
    set_has_user_info();
  } else {
    clear_has_user_info();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace UserResponse

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_UserResponse_2eproto__INCLUDED
