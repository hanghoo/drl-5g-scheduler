// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: scalar_report.proto

#ifndef PROTOBUF_scalar_5freport_2eproto__INCLUDED
#define PROTOBUF_scalar_5freport_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)

namespace ddrl {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_scalar_5freport_2eproto();
void protobuf_AssignDesc_scalar_5freport_2eproto();
void protobuf_ShutdownFile_scalar_5freport_2eproto();

class scalar;

// ===================================================================

class scalar : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ddrl.scalar) */ {
 public:
  scalar();
  virtual ~scalar();

  scalar(const scalar& from);

  inline scalar& operator=(const scalar& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const scalar& default_instance();

  void Swap(scalar* other);

  // implements Message ----------------------------------------------

  inline scalar* New() const { return New(NULL); }

  scalar* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const scalar& from);
  void MergeFrom(const scalar& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(scalar* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 tti = 1;
  void clear_tti();
  static const int kTtiFieldNumber = 1;
  ::google::protobuf::int64 tti() const;
  void set_tti(::google::protobuf::int64 value);

  // optional .google.protobuf.Timestamp timestamp = 2;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 2;
  const ::google::protobuf::Timestamp& timestamp() const;
  ::google::protobuf::Timestamp* mutable_timestamp();
  ::google::protobuf::Timestamp* release_timestamp();
  void set_allocated_timestamp(::google::protobuf::Timestamp* timestamp);

  // optional string name = 3;
  void clear_name();
  static const int kNameFieldNumber = 3;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional float value = 4;
  void clear_value();
  static const int kValueFieldNumber = 4;
  float value() const;
  void set_value(float value);

  // @@protoc_insertion_point(class_scope:ddrl.scalar)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int64 tti_;
  ::google::protobuf::Timestamp* timestamp_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  float value_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_scalar_5freport_2eproto();
  friend void protobuf_AssignDesc_scalar_5freport_2eproto();
  friend void protobuf_ShutdownFile_scalar_5freport_2eproto();

  void InitAsDefaultInstance();
  static scalar* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// scalar

// optional int64 tti = 1;
inline void scalar::clear_tti() {
  tti_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 scalar::tti() const {
  // @@protoc_insertion_point(field_get:ddrl.scalar.tti)
  return tti_;
}
inline void scalar::set_tti(::google::protobuf::int64 value) {
  
  tti_ = value;
  // @@protoc_insertion_point(field_set:ddrl.scalar.tti)
}

// optional .google.protobuf.Timestamp timestamp = 2;
inline bool scalar::has_timestamp() const {
  return !_is_default_instance_ && timestamp_ != NULL;
}
inline void scalar::clear_timestamp() {
  if (GetArenaNoVirtual() == NULL && timestamp_ != NULL) delete timestamp_;
  timestamp_ = NULL;
}
inline const ::google::protobuf::Timestamp& scalar::timestamp() const {
  // @@protoc_insertion_point(field_get:ddrl.scalar.timestamp)
  return timestamp_ != NULL ? *timestamp_ : *default_instance_->timestamp_;
}
inline ::google::protobuf::Timestamp* scalar::mutable_timestamp() {
  
  if (timestamp_ == NULL) {
    timestamp_ = new ::google::protobuf::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:ddrl.scalar.timestamp)
  return timestamp_;
}
inline ::google::protobuf::Timestamp* scalar::release_timestamp() {
  // @@protoc_insertion_point(field_release:ddrl.scalar.timestamp)
  
  ::google::protobuf::Timestamp* temp = timestamp_;
  timestamp_ = NULL;
  return temp;
}
inline void scalar::set_allocated_timestamp(::google::protobuf::Timestamp* timestamp) {
  delete timestamp_;
  if (timestamp != NULL && timestamp->GetArena() != NULL) {
    ::google::protobuf::Timestamp* new_timestamp = new ::google::protobuf::Timestamp;
    new_timestamp->CopyFrom(*timestamp);
    timestamp = new_timestamp;
  }
  timestamp_ = timestamp;
  if (timestamp) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:ddrl.scalar.timestamp)
}

// optional string name = 3;
inline void scalar::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& scalar::name() const {
  // @@protoc_insertion_point(field_get:ddrl.scalar.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void scalar::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ddrl.scalar.name)
}
inline void scalar::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ddrl.scalar.name)
}
inline void scalar::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ddrl.scalar.name)
}
inline ::std::string* scalar::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:ddrl.scalar.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* scalar::release_name() {
  // @@protoc_insertion_point(field_release:ddrl.scalar.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void scalar::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ddrl.scalar.name)
}

// optional float value = 4;
inline void scalar::clear_value() {
  value_ = 0;
}
inline float scalar::value() const {
  // @@protoc_insertion_point(field_get:ddrl.scalar.value)
  return value_;
}
inline void scalar::set_value(float value) {
  
  value_ = value;
  // @@protoc_insertion_point(field_set:ddrl.scalar.value)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace ddrl

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_scalar_5freport_2eproto__INCLUDED
