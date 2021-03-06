// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: log_packet.proto

#ifndef PROTOBUF_log_5fpacket_2eproto__INCLUDED
#define PROTOBUF_log_5fpacket_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_log_5fpacket_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultslog_packetImpl();
void InitDefaultslog_packet();
inline void InitDefaults() {
  InitDefaultslog_packet();
}
}  // namespace protobuf_log_5fpacket_2eproto
class log_packet;
class log_packetDefaultTypeInternal;
extern log_packetDefaultTypeInternal _log_packet_default_instance_;

// ===================================================================

class log_packet : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:log_packet) */ {
 public:
  log_packet();
  virtual ~log_packet();

  log_packet(const log_packet& from);

  inline log_packet& operator=(const log_packet& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  log_packet(log_packet&& from) noexcept
    : log_packet() {
    *this = ::std::move(from);
  }

  inline log_packet& operator=(log_packet&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const log_packet& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const log_packet* internal_default_instance() {
    return reinterpret_cast<const log_packet*>(
               &_log_packet_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(log_packet* other);
  friend void swap(log_packet& a, log_packet& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline log_packet* New() const PROTOBUF_FINAL { return New(NULL); }

  log_packet* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const log_packet& from);
  void MergeFrom(const log_packet& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(log_packet* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string packet_rec_ip = 2;
  bool has_packet_rec_ip() const;
  void clear_packet_rec_ip();
  static const int kPacketRecIpFieldNumber = 2;
  const ::std::string& packet_rec_ip() const;
  void set_packet_rec_ip(const ::std::string& value);
  #if LANG_CXX11
  void set_packet_rec_ip(::std::string&& value);
  #endif
  void set_packet_rec_ip(const char* value);
  void set_packet_rec_ip(const char* value, size_t size);
  ::std::string* mutable_packet_rec_ip();
  ::std::string* release_packet_rec_ip();
  void set_allocated_packet_rec_ip(::std::string* packet_rec_ip);

  // required string log_level = 3;
  bool has_log_level() const;
  void clear_log_level();
  static const int kLogLevelFieldNumber = 3;
  const ::std::string& log_level() const;
  void set_log_level(const ::std::string& value);
  #if LANG_CXX11
  void set_log_level(::std::string&& value);
  #endif
  void set_log_level(const char* value);
  void set_log_level(const char* value, size_t size);
  ::std::string* mutable_log_level();
  ::std::string* release_log_level();
  void set_allocated_log_level(::std::string* log_level);

  // required bytes send_user_name = 4;
  bool has_send_user_name() const;
  void clear_send_user_name();
  static const int kSendUserNameFieldNumber = 4;
  const ::std::string& send_user_name() const;
  void set_send_user_name(const ::std::string& value);
  #if LANG_CXX11
  void set_send_user_name(::std::string&& value);
  #endif
  void set_send_user_name(const char* value);
  void set_send_user_name(const void* value, size_t size);
  ::std::string* mutable_send_user_name();
  ::std::string* release_send_user_name();
  void set_allocated_send_user_name(::std::string* send_user_name);

  // required bytes log_msg = 5;
  bool has_log_msg() const;
  void clear_log_msg();
  static const int kLogMsgFieldNumber = 5;
  const ::std::string& log_msg() const;
  void set_log_msg(const ::std::string& value);
  #if LANG_CXX11
  void set_log_msg(::std::string&& value);
  #endif
  void set_log_msg(const char* value);
  void set_log_msg(const void* value, size_t size);
  ::std::string* mutable_log_msg();
  ::std::string* release_log_msg();
  void set_allocated_log_msg(::std::string* log_msg);

  // required fixed64 log_len = 1;
  bool has_log_len() const;
  void clear_log_len();
  static const int kLogLenFieldNumber = 1;
  ::google::protobuf::uint64 log_len() const;
  void set_log_len(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:log_packet)
 private:
  void set_has_log_len();
  void clear_has_log_len();
  void set_has_packet_rec_ip();
  void clear_has_packet_rec_ip();
  void set_has_log_level();
  void clear_has_log_level();
  void set_has_send_user_name();
  void clear_has_send_user_name();
  void set_has_log_msg();
  void clear_has_log_msg();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr packet_rec_ip_;
  ::google::protobuf::internal::ArenaStringPtr log_level_;
  ::google::protobuf::internal::ArenaStringPtr send_user_name_;
  ::google::protobuf::internal::ArenaStringPtr log_msg_;
  ::google::protobuf::uint64 log_len_;
  friend struct ::protobuf_log_5fpacket_2eproto::TableStruct;
  friend void ::protobuf_log_5fpacket_2eproto::InitDefaultslog_packetImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// log_packet

// required fixed64 log_len = 1;
inline bool log_packet::has_log_len() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void log_packet::set_has_log_len() {
  _has_bits_[0] |= 0x00000010u;
}
inline void log_packet::clear_has_log_len() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void log_packet::clear_log_len() {
  log_len_ = GOOGLE_ULONGLONG(0);
  clear_has_log_len();
}
inline ::google::protobuf::uint64 log_packet::log_len() const {
  // @@protoc_insertion_point(field_get:log_packet.log_len)
  return log_len_;
}
inline void log_packet::set_log_len(::google::protobuf::uint64 value) {
  set_has_log_len();
  log_len_ = value;
  // @@protoc_insertion_point(field_set:log_packet.log_len)
}

// required string packet_rec_ip = 2;
inline bool log_packet::has_packet_rec_ip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void log_packet::set_has_packet_rec_ip() {
  _has_bits_[0] |= 0x00000001u;
}
inline void log_packet::clear_has_packet_rec_ip() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void log_packet::clear_packet_rec_ip() {
  packet_rec_ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_packet_rec_ip();
}
inline const ::std::string& log_packet::packet_rec_ip() const {
  // @@protoc_insertion_point(field_get:log_packet.packet_rec_ip)
  return packet_rec_ip_.GetNoArena();
}
inline void log_packet::set_packet_rec_ip(const ::std::string& value) {
  set_has_packet_rec_ip();
  packet_rec_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:log_packet.packet_rec_ip)
}
#if LANG_CXX11
inline void log_packet::set_packet_rec_ip(::std::string&& value) {
  set_has_packet_rec_ip();
  packet_rec_ip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:log_packet.packet_rec_ip)
}
#endif
inline void log_packet::set_packet_rec_ip(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_packet_rec_ip();
  packet_rec_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:log_packet.packet_rec_ip)
}
inline void log_packet::set_packet_rec_ip(const char* value, size_t size) {
  set_has_packet_rec_ip();
  packet_rec_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:log_packet.packet_rec_ip)
}
inline ::std::string* log_packet::mutable_packet_rec_ip() {
  set_has_packet_rec_ip();
  // @@protoc_insertion_point(field_mutable:log_packet.packet_rec_ip)
  return packet_rec_ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* log_packet::release_packet_rec_ip() {
  // @@protoc_insertion_point(field_release:log_packet.packet_rec_ip)
  clear_has_packet_rec_ip();
  return packet_rec_ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void log_packet::set_allocated_packet_rec_ip(::std::string* packet_rec_ip) {
  if (packet_rec_ip != NULL) {
    set_has_packet_rec_ip();
  } else {
    clear_has_packet_rec_ip();
  }
  packet_rec_ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), packet_rec_ip);
  // @@protoc_insertion_point(field_set_allocated:log_packet.packet_rec_ip)
}

// required string log_level = 3;
inline bool log_packet::has_log_level() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void log_packet::set_has_log_level() {
  _has_bits_[0] |= 0x00000002u;
}
inline void log_packet::clear_has_log_level() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void log_packet::clear_log_level() {
  log_level_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_log_level();
}
inline const ::std::string& log_packet::log_level() const {
  // @@protoc_insertion_point(field_get:log_packet.log_level)
  return log_level_.GetNoArena();
}
inline void log_packet::set_log_level(const ::std::string& value) {
  set_has_log_level();
  log_level_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:log_packet.log_level)
}
#if LANG_CXX11
inline void log_packet::set_log_level(::std::string&& value) {
  set_has_log_level();
  log_level_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:log_packet.log_level)
}
#endif
inline void log_packet::set_log_level(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_log_level();
  log_level_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:log_packet.log_level)
}
inline void log_packet::set_log_level(const char* value, size_t size) {
  set_has_log_level();
  log_level_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:log_packet.log_level)
}
inline ::std::string* log_packet::mutable_log_level() {
  set_has_log_level();
  // @@protoc_insertion_point(field_mutable:log_packet.log_level)
  return log_level_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* log_packet::release_log_level() {
  // @@protoc_insertion_point(field_release:log_packet.log_level)
  clear_has_log_level();
  return log_level_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void log_packet::set_allocated_log_level(::std::string* log_level) {
  if (log_level != NULL) {
    set_has_log_level();
  } else {
    clear_has_log_level();
  }
  log_level_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), log_level);
  // @@protoc_insertion_point(field_set_allocated:log_packet.log_level)
}

// required bytes send_user_name = 4;
inline bool log_packet::has_send_user_name() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void log_packet::set_has_send_user_name() {
  _has_bits_[0] |= 0x00000004u;
}
inline void log_packet::clear_has_send_user_name() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void log_packet::clear_send_user_name() {
  send_user_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_send_user_name();
}
inline const ::std::string& log_packet::send_user_name() const {
  // @@protoc_insertion_point(field_get:log_packet.send_user_name)
  return send_user_name_.GetNoArena();
}
inline void log_packet::set_send_user_name(const ::std::string& value) {
  set_has_send_user_name();
  send_user_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:log_packet.send_user_name)
}
#if LANG_CXX11
inline void log_packet::set_send_user_name(::std::string&& value) {
  set_has_send_user_name();
  send_user_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:log_packet.send_user_name)
}
#endif
inline void log_packet::set_send_user_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_send_user_name();
  send_user_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:log_packet.send_user_name)
}
inline void log_packet::set_send_user_name(const void* value, size_t size) {
  set_has_send_user_name();
  send_user_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:log_packet.send_user_name)
}
inline ::std::string* log_packet::mutable_send_user_name() {
  set_has_send_user_name();
  // @@protoc_insertion_point(field_mutable:log_packet.send_user_name)
  return send_user_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* log_packet::release_send_user_name() {
  // @@protoc_insertion_point(field_release:log_packet.send_user_name)
  clear_has_send_user_name();
  return send_user_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void log_packet::set_allocated_send_user_name(::std::string* send_user_name) {
  if (send_user_name != NULL) {
    set_has_send_user_name();
  } else {
    clear_has_send_user_name();
  }
  send_user_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), send_user_name);
  // @@protoc_insertion_point(field_set_allocated:log_packet.send_user_name)
}

// required bytes log_msg = 5;
inline bool log_packet::has_log_msg() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void log_packet::set_has_log_msg() {
  _has_bits_[0] |= 0x00000008u;
}
inline void log_packet::clear_has_log_msg() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void log_packet::clear_log_msg() {
  log_msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_log_msg();
}
inline const ::std::string& log_packet::log_msg() const {
  // @@protoc_insertion_point(field_get:log_packet.log_msg)
  return log_msg_.GetNoArena();
}
inline void log_packet::set_log_msg(const ::std::string& value) {
  set_has_log_msg();
  log_msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:log_packet.log_msg)
}
#if LANG_CXX11
inline void log_packet::set_log_msg(::std::string&& value) {
  set_has_log_msg();
  log_msg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:log_packet.log_msg)
}
#endif
inline void log_packet::set_log_msg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_log_msg();
  log_msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:log_packet.log_msg)
}
inline void log_packet::set_log_msg(const void* value, size_t size) {
  set_has_log_msg();
  log_msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:log_packet.log_msg)
}
inline ::std::string* log_packet::mutable_log_msg() {
  set_has_log_msg();
  // @@protoc_insertion_point(field_mutable:log_packet.log_msg)
  return log_msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* log_packet::release_log_msg() {
  // @@protoc_insertion_point(field_release:log_packet.log_msg)
  clear_has_log_msg();
  return log_msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void log_packet::set_allocated_log_msg(::std::string* log_msg) {
  if (log_msg != NULL) {
    set_has_log_msg();
  } else {
    clear_has_log_msg();
  }
  log_msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), log_msg);
  // @@protoc_insertion_point(field_set_allocated:log_packet.log_msg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_log_5fpacket_2eproto__INCLUDED
