// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_base.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "msg_base.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace msg_base {

namespace {

const ::google::protobuf::Descriptor* HeartbeatReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HeartbeatReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* HeartbeatResp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HeartbeatResp_reflection_ = NULL;
const ::google::protobuf::Descriptor* TimeReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TimeReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* TimeResp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TimeResp_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* c_cmd_base_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_msg_5fbase_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_msg_5fbase_2eproto() {
  protobuf_AddDesc_msg_5fbase_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "msg_base.proto");
  GOOGLE_CHECK(file != NULL);
  HeartbeatReq_descriptor_ = file->message_type(0);
  static const int HeartbeatReq_offsets_[1] = {
  };
  HeartbeatReq_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      HeartbeatReq_descriptor_,
      HeartbeatReq::default_instance_,
      HeartbeatReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartbeatReq, _has_bits_[0]),
      -1,
      -1,
      sizeof(HeartbeatReq),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartbeatReq, _internal_metadata_),
      -1);
  HeartbeatResp_descriptor_ = file->message_type(1);
  static const int HeartbeatResp_offsets_[1] = {
  };
  HeartbeatResp_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      HeartbeatResp_descriptor_,
      HeartbeatResp::default_instance_,
      HeartbeatResp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartbeatResp, _has_bits_[0]),
      -1,
      -1,
      sizeof(HeartbeatResp),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartbeatResp, _internal_metadata_),
      -1);
  TimeReq_descriptor_ = file->message_type(2);
  static const int TimeReq_offsets_[1] = {
  };
  TimeReq_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TimeReq_descriptor_,
      TimeReq::default_instance_,
      TimeReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TimeReq, _has_bits_[0]),
      -1,
      -1,
      sizeof(TimeReq),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TimeReq, _internal_metadata_),
      -1);
  TimeResp_descriptor_ = file->message_type(3);
  static const int TimeResp_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TimeResp, time_),
  };
  TimeResp_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TimeResp_descriptor_,
      TimeResp::default_instance_,
      TimeResp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TimeResp, _has_bits_[0]),
      -1,
      -1,
      sizeof(TimeResp),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TimeResp, _internal_metadata_),
      -1);
  c_cmd_base_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_msg_5fbase_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      HeartbeatReq_descriptor_, &HeartbeatReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      HeartbeatResp_descriptor_, &HeartbeatResp::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TimeReq_descriptor_, &TimeReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TimeResp_descriptor_, &TimeResp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_msg_5fbase_2eproto() {
  delete HeartbeatReq::default_instance_;
  delete HeartbeatReq_reflection_;
  delete HeartbeatResp::default_instance_;
  delete HeartbeatResp_reflection_;
  delete TimeReq::default_instance_;
  delete TimeReq_reflection_;
  delete TimeResp::default_instance_;
  delete TimeResp_reflection_;
}

void protobuf_AddDesc_msg_5fbase_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_msg_5fbase_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016msg_base.proto\022\010msg_base\"\016\n\014HeartbeatR"
    "eq\"\017\n\rHeartbeatResp\"\t\n\007TimeReq\"\030\n\010TimeRe"
    "sp\022\014\n\004time\030\001 \002(\004*P\n\nc_cmd_base\022\021\n\rheartb"
    "eat_req\020\000\022\022\n\016heartbeat_resp\020\001\022\014\n\010time_re"
    "q\020\003\022\r\n\ttime_resp\020\004", 178);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "msg_base.proto", &protobuf_RegisterTypes);
  HeartbeatReq::default_instance_ = new HeartbeatReq();
  HeartbeatResp::default_instance_ = new HeartbeatResp();
  TimeReq::default_instance_ = new TimeReq();
  TimeResp::default_instance_ = new TimeResp();
  HeartbeatReq::default_instance_->InitAsDefaultInstance();
  HeartbeatResp::default_instance_->InitAsDefaultInstance();
  TimeReq::default_instance_->InitAsDefaultInstance();
  TimeResp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_msg_5fbase_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_msg_5fbase_2eproto {
  StaticDescriptorInitializer_msg_5fbase_2eproto() {
    protobuf_AddDesc_msg_5fbase_2eproto();
  }
} static_descriptor_initializer_msg_5fbase_2eproto_;
const ::google::protobuf::EnumDescriptor* c_cmd_base_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return c_cmd_base_descriptor_;
}
bool c_cmd_base_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HeartbeatReq::HeartbeatReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:msg_base.HeartbeatReq)
}

void HeartbeatReq::InitAsDefaultInstance() {
}

HeartbeatReq::HeartbeatReq(const HeartbeatReq& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:msg_base.HeartbeatReq)
}

void HeartbeatReq::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HeartbeatReq::~HeartbeatReq() {
  // @@protoc_insertion_point(destructor:msg_base.HeartbeatReq)
  SharedDtor();
}

void HeartbeatReq::SharedDtor() {
  if (this != default_instance_) {
  }
}

void HeartbeatReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HeartbeatReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HeartbeatReq_descriptor_;
}

const HeartbeatReq& HeartbeatReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msg_5fbase_2eproto();
  return *default_instance_;
}

HeartbeatReq* HeartbeatReq::default_instance_ = NULL;

HeartbeatReq* HeartbeatReq::New(::google::protobuf::Arena* arena) const {
  HeartbeatReq* n = new HeartbeatReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HeartbeatReq::Clear() {
// @@protoc_insertion_point(message_clear_start:msg_base.HeartbeatReq)
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool HeartbeatReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:msg_base.HeartbeatReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:msg_base.HeartbeatReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:msg_base.HeartbeatReq)
  return false;
#undef DO_
}

void HeartbeatReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:msg_base.HeartbeatReq)
  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:msg_base.HeartbeatReq)
}

::google::protobuf::uint8* HeartbeatReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:msg_base.HeartbeatReq)
  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:msg_base.HeartbeatReq)
  return target;
}

int HeartbeatReq::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:msg_base.HeartbeatReq)
  int total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HeartbeatReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:msg_base.HeartbeatReq)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const HeartbeatReq* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const HeartbeatReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:msg_base.HeartbeatReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:msg_base.HeartbeatReq)
    MergeFrom(*source);
  }
}

void HeartbeatReq::MergeFrom(const HeartbeatReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:msg_base.HeartbeatReq)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void HeartbeatReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:msg_base.HeartbeatReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HeartbeatReq::CopyFrom(const HeartbeatReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:msg_base.HeartbeatReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HeartbeatReq::IsInitialized() const {

  return true;
}

void HeartbeatReq::Swap(HeartbeatReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HeartbeatReq::InternalSwap(HeartbeatReq* other) {
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata HeartbeatReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HeartbeatReq_descriptor_;
  metadata.reflection = HeartbeatReq_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HeartbeatReq

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HeartbeatResp::HeartbeatResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:msg_base.HeartbeatResp)
}

void HeartbeatResp::InitAsDefaultInstance() {
}

HeartbeatResp::HeartbeatResp(const HeartbeatResp& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:msg_base.HeartbeatResp)
}

void HeartbeatResp::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HeartbeatResp::~HeartbeatResp() {
  // @@protoc_insertion_point(destructor:msg_base.HeartbeatResp)
  SharedDtor();
}

void HeartbeatResp::SharedDtor() {
  if (this != default_instance_) {
  }
}

void HeartbeatResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HeartbeatResp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HeartbeatResp_descriptor_;
}

const HeartbeatResp& HeartbeatResp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msg_5fbase_2eproto();
  return *default_instance_;
}

HeartbeatResp* HeartbeatResp::default_instance_ = NULL;

HeartbeatResp* HeartbeatResp::New(::google::protobuf::Arena* arena) const {
  HeartbeatResp* n = new HeartbeatResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HeartbeatResp::Clear() {
// @@protoc_insertion_point(message_clear_start:msg_base.HeartbeatResp)
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool HeartbeatResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:msg_base.HeartbeatResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:msg_base.HeartbeatResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:msg_base.HeartbeatResp)
  return false;
#undef DO_
}

void HeartbeatResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:msg_base.HeartbeatResp)
  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:msg_base.HeartbeatResp)
}

::google::protobuf::uint8* HeartbeatResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:msg_base.HeartbeatResp)
  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:msg_base.HeartbeatResp)
  return target;
}

int HeartbeatResp::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:msg_base.HeartbeatResp)
  int total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HeartbeatResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:msg_base.HeartbeatResp)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const HeartbeatResp* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const HeartbeatResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:msg_base.HeartbeatResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:msg_base.HeartbeatResp)
    MergeFrom(*source);
  }
}

void HeartbeatResp::MergeFrom(const HeartbeatResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:msg_base.HeartbeatResp)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void HeartbeatResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:msg_base.HeartbeatResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HeartbeatResp::CopyFrom(const HeartbeatResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:msg_base.HeartbeatResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HeartbeatResp::IsInitialized() const {

  return true;
}

void HeartbeatResp::Swap(HeartbeatResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HeartbeatResp::InternalSwap(HeartbeatResp* other) {
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata HeartbeatResp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HeartbeatResp_descriptor_;
  metadata.reflection = HeartbeatResp_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HeartbeatResp

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TimeReq::TimeReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:msg_base.TimeReq)
}

void TimeReq::InitAsDefaultInstance() {
}

TimeReq::TimeReq(const TimeReq& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:msg_base.TimeReq)
}

void TimeReq::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TimeReq::~TimeReq() {
  // @@protoc_insertion_point(destructor:msg_base.TimeReq)
  SharedDtor();
}

void TimeReq::SharedDtor() {
  if (this != default_instance_) {
  }
}

void TimeReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TimeReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TimeReq_descriptor_;
}

const TimeReq& TimeReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msg_5fbase_2eproto();
  return *default_instance_;
}

TimeReq* TimeReq::default_instance_ = NULL;

TimeReq* TimeReq::New(::google::protobuf::Arena* arena) const {
  TimeReq* n = new TimeReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TimeReq::Clear() {
// @@protoc_insertion_point(message_clear_start:msg_base.TimeReq)
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool TimeReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:msg_base.TimeReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:msg_base.TimeReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:msg_base.TimeReq)
  return false;
#undef DO_
}

void TimeReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:msg_base.TimeReq)
  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:msg_base.TimeReq)
}

::google::protobuf::uint8* TimeReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:msg_base.TimeReq)
  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:msg_base.TimeReq)
  return target;
}

int TimeReq::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:msg_base.TimeReq)
  int total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TimeReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:msg_base.TimeReq)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const TimeReq* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const TimeReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:msg_base.TimeReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:msg_base.TimeReq)
    MergeFrom(*source);
  }
}

void TimeReq::MergeFrom(const TimeReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:msg_base.TimeReq)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void TimeReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:msg_base.TimeReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TimeReq::CopyFrom(const TimeReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:msg_base.TimeReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TimeReq::IsInitialized() const {

  return true;
}

void TimeReq::Swap(TimeReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TimeReq::InternalSwap(TimeReq* other) {
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TimeReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TimeReq_descriptor_;
  metadata.reflection = TimeReq_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TimeReq

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TimeResp::kTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TimeResp::TimeResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:msg_base.TimeResp)
}

void TimeResp::InitAsDefaultInstance() {
}

TimeResp::TimeResp(const TimeResp& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:msg_base.TimeResp)
}

void TimeResp::SharedCtor() {
  _cached_size_ = 0;
  time_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TimeResp::~TimeResp() {
  // @@protoc_insertion_point(destructor:msg_base.TimeResp)
  SharedDtor();
}

void TimeResp::SharedDtor() {
  if (this != default_instance_) {
  }
}

void TimeResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TimeResp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TimeResp_descriptor_;
}

const TimeResp& TimeResp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msg_5fbase_2eproto();
  return *default_instance_;
}

TimeResp* TimeResp::default_instance_ = NULL;

TimeResp* TimeResp::New(::google::protobuf::Arena* arena) const {
  TimeResp* n = new TimeResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TimeResp::Clear() {
// @@protoc_insertion_point(message_clear_start:msg_base.TimeResp)
  time_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool TimeResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:msg_base.TimeResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 time = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &time_)));
          set_has_time();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:msg_base.TimeResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:msg_base.TimeResp)
  return false;
#undef DO_
}

void TimeResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:msg_base.TimeResp)
  // required uint64 time = 1;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->time(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:msg_base.TimeResp)
}

::google::protobuf::uint8* TimeResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:msg_base.TimeResp)
  // required uint64 time = 1;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->time(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:msg_base.TimeResp)
  return target;
}

int TimeResp::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:msg_base.TimeResp)
  int total_size = 0;

  // required uint64 time = 1;
  if (has_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->time());
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TimeResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:msg_base.TimeResp)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const TimeResp* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const TimeResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:msg_base.TimeResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:msg_base.TimeResp)
    MergeFrom(*source);
  }
}

void TimeResp::MergeFrom(const TimeResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:msg_base.TimeResp)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_time()) {
      set_time(from.time());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void TimeResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:msg_base.TimeResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TimeResp::CopyFrom(const TimeResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:msg_base.TimeResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TimeResp::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void TimeResp::Swap(TimeResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TimeResp::InternalSwap(TimeResp* other) {
  std::swap(time_, other->time_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TimeResp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TimeResp_descriptor_;
  metadata.reflection = TimeResp_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TimeResp

// required uint64 time = 1;
bool TimeResp::has_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void TimeResp::set_has_time() {
  _has_bits_[0] |= 0x00000001u;
}
void TimeResp::clear_has_time() {
  _has_bits_[0] &= ~0x00000001u;
}
void TimeResp::clear_time() {
  time_ = GOOGLE_ULONGLONG(0);
  clear_has_time();
}
 ::google::protobuf::uint64 TimeResp::time() const {
  // @@protoc_insertion_point(field_get:msg_base.TimeResp.time)
  return time_;
}
 void TimeResp::set_time(::google::protobuf::uint64 value) {
  set_has_time();
  time_ = value;
  // @@protoc_insertion_point(field_set:msg_base.TimeResp.time)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace msg_base

// @@protoc_insertion_point(global_scope)
