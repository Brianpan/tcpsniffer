// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packet.proto

#include "packet.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace packet {
class PackPacketDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PackPacket>
      _instance;
} _PackPacket_default_instance_;
}  // namespace packet
namespace protobuf_packet_2eproto {
static void InitDefaultsPackPacket() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::packet::_PackPacket_default_instance_;
    new (ptr) ::packet::PackPacket();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::packet::PackPacket::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_PackPacket =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsPackPacket}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_PackPacket.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::PackPacket, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::PackPacket, timestamp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::PackPacket, timestamp_int_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::PackPacket, src_ip_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::PackPacket, dest_ip_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::PackPacket, src_port_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::PackPacket, dest_port_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::PackPacket, seq_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::PackPacket, ack_seq_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::PackPacket, payload_size_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::PackPacket, is_query_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::PackPacket, payload_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::packet::PackPacket)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::packet::_PackPacket_default_instance_),
};

static void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "packet.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

static void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

static void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014packet.proto\022\006packet\"\323\001\n\nPackPacket\022\021\n"
      "\ttimestamp\030\001 \001(\t\022\025\n\rtimestamp_int\030\002 \001(\004\022"
      "\016\n\006src_ip\030\003 \001(\t\022\017\n\007dest_ip\030\004 \001(\t\022\020\n\010src_"
      "port\030\005 \001(\r\022\021\n\tdest_port\030\006 \001(\r\022\013\n\003seq\030\007 \001"
      "(\r\022\017\n\007ack_seq\030\010 \001(\r\022\024\n\014payload_size\030\t \001("
      "\r\022\020\n\010is_query\030\n \001(\010\022\017\n\007payload\030\013 \001(\014b\006pr"
      "oto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 244);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "packet.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_packet_2eproto
namespace packet {

// ===================================================================

void PackPacket::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PackPacket::kTimestampFieldNumber;
const int PackPacket::kTimestampIntFieldNumber;
const int PackPacket::kSrcIpFieldNumber;
const int PackPacket::kDestIpFieldNumber;
const int PackPacket::kSrcPortFieldNumber;
const int PackPacket::kDestPortFieldNumber;
const int PackPacket::kSeqFieldNumber;
const int PackPacket::kAckSeqFieldNumber;
const int PackPacket::kPayloadSizeFieldNumber;
const int PackPacket::kIsQueryFieldNumber;
const int PackPacket::kPayloadFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PackPacket::PackPacket()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_packet_2eproto::scc_info_PackPacket.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:packet.PackPacket)
}
PackPacket::PackPacket(const PackPacket& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  timestamp_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.timestamp().size() > 0) {
    timestamp_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.timestamp_);
  }
  src_ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.src_ip().size() > 0) {
    src_ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.src_ip_);
  }
  dest_ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.dest_ip().size() > 0) {
    dest_ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.dest_ip_);
  }
  payload_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.payload().size() > 0) {
    payload_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.payload_);
  }
  ::memcpy(&timestamp_int_, &from.timestamp_int_,
    static_cast<size_t>(reinterpret_cast<char*>(&is_query_) -
    reinterpret_cast<char*>(&timestamp_int_)) + sizeof(is_query_));
  // @@protoc_insertion_point(copy_constructor:packet.PackPacket)
}

void PackPacket::SharedCtor() {
  timestamp_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  src_ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  dest_ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  payload_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&timestamp_int_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&is_query_) -
      reinterpret_cast<char*>(&timestamp_int_)) + sizeof(is_query_));
}

PackPacket::~PackPacket() {
  // @@protoc_insertion_point(destructor:packet.PackPacket)
  SharedDtor();
}

void PackPacket::SharedDtor() {
  timestamp_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  src_ip_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  dest_ip_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  payload_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PackPacket::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* PackPacket::descriptor() {
  ::protobuf_packet_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_packet_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PackPacket& PackPacket::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_packet_2eproto::scc_info_PackPacket.base);
  return *internal_default_instance();
}


void PackPacket::Clear() {
// @@protoc_insertion_point(message_clear_start:packet.PackPacket)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  timestamp_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  src_ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  dest_ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  payload_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&timestamp_int_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&is_query_) -
      reinterpret_cast<char*>(&timestamp_int_)) + sizeof(is_query_));
  _internal_metadata_.Clear();
}

bool PackPacket::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:packet.PackPacket)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string timestamp = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_timestamp()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->timestamp().data(), static_cast<int>(this->timestamp().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "packet.PackPacket.timestamp"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 timestamp_int = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &timestamp_int_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string src_ip = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_src_ip()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->src_ip().data(), static_cast<int>(this->src_ip().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "packet.PackPacket.src_ip"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string dest_ip = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_dest_ip()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->dest_ip().data(), static_cast<int>(this->dest_ip().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "packet.PackPacket.dest_ip"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 src_port = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &src_port_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 dest_port = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dest_port_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 seq = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &seq_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 ack_seq = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ack_seq_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 payload_size = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &payload_size_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_query = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_query_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes payload = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_payload()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:packet.PackPacket)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:packet.PackPacket)
  return false;
#undef DO_
}

void PackPacket::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:packet.PackPacket)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string timestamp = 1;
  if (this->timestamp().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->timestamp().data(), static_cast<int>(this->timestamp().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "packet.PackPacket.timestamp");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->timestamp(), output);
  }

  // uint64 timestamp_int = 2;
  if (this->timestamp_int() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->timestamp_int(), output);
  }

  // string src_ip = 3;
  if (this->src_ip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->src_ip().data(), static_cast<int>(this->src_ip().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "packet.PackPacket.src_ip");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->src_ip(), output);
  }

  // string dest_ip = 4;
  if (this->dest_ip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->dest_ip().data(), static_cast<int>(this->dest_ip().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "packet.PackPacket.dest_ip");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->dest_ip(), output);
  }

  // uint32 src_port = 5;
  if (this->src_port() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->src_port(), output);
  }

  // uint32 dest_port = 6;
  if (this->dest_port() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->dest_port(), output);
  }

  // uint32 seq = 7;
  if (this->seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->seq(), output);
  }

  // uint32 ack_seq = 8;
  if (this->ack_seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->ack_seq(), output);
  }

  // uint32 payload_size = 9;
  if (this->payload_size() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->payload_size(), output);
  }

  // bool is_query = 10;
  if (this->is_query() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(10, this->is_query(), output);
  }

  // bytes payload = 11;
  if (this->payload().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      11, this->payload(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:packet.PackPacket)
}

::google::protobuf::uint8* PackPacket::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:packet.PackPacket)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string timestamp = 1;
  if (this->timestamp().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->timestamp().data(), static_cast<int>(this->timestamp().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "packet.PackPacket.timestamp");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->timestamp(), target);
  }

  // uint64 timestamp_int = 2;
  if (this->timestamp_int() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->timestamp_int(), target);
  }

  // string src_ip = 3;
  if (this->src_ip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->src_ip().data(), static_cast<int>(this->src_ip().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "packet.PackPacket.src_ip");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->src_ip(), target);
  }

  // string dest_ip = 4;
  if (this->dest_ip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->dest_ip().data(), static_cast<int>(this->dest_ip().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "packet.PackPacket.dest_ip");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->dest_ip(), target);
  }

  // uint32 src_port = 5;
  if (this->src_port() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->src_port(), target);
  }

  // uint32 dest_port = 6;
  if (this->dest_port() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->dest_port(), target);
  }

  // uint32 seq = 7;
  if (this->seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->seq(), target);
  }

  // uint32 ack_seq = 8;
  if (this->ack_seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->ack_seq(), target);
  }

  // uint32 payload_size = 9;
  if (this->payload_size() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->payload_size(), target);
  }

  // bool is_query = 10;
  if (this->is_query() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(10, this->is_query(), target);
  }

  // bytes payload = 11;
  if (this->payload().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        11, this->payload(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:packet.PackPacket)
  return target;
}

size_t PackPacket::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:packet.PackPacket)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string timestamp = 1;
  if (this->timestamp().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->timestamp());
  }

  // string src_ip = 3;
  if (this->src_ip().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->src_ip());
  }

  // string dest_ip = 4;
  if (this->dest_ip().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->dest_ip());
  }

  // bytes payload = 11;
  if (this->payload().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->payload());
  }

  // uint64 timestamp_int = 2;
  if (this->timestamp_int() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->timestamp_int());
  }

  // uint32 src_port = 5;
  if (this->src_port() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->src_port());
  }

  // uint32 dest_port = 6;
  if (this->dest_port() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->dest_port());
  }

  // uint32 seq = 7;
  if (this->seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->seq());
  }

  // uint32 ack_seq = 8;
  if (this->ack_seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->ack_seq());
  }

  // uint32 payload_size = 9;
  if (this->payload_size() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->payload_size());
  }

  // bool is_query = 10;
  if (this->is_query() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PackPacket::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:packet.PackPacket)
  GOOGLE_DCHECK_NE(&from, this);
  const PackPacket* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PackPacket>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:packet.PackPacket)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:packet.PackPacket)
    MergeFrom(*source);
  }
}

void PackPacket::MergeFrom(const PackPacket& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:packet.PackPacket)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.timestamp().size() > 0) {

    timestamp_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.timestamp_);
  }
  if (from.src_ip().size() > 0) {

    src_ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.src_ip_);
  }
  if (from.dest_ip().size() > 0) {

    dest_ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.dest_ip_);
  }
  if (from.payload().size() > 0) {

    payload_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.payload_);
  }
  if (from.timestamp_int() != 0) {
    set_timestamp_int(from.timestamp_int());
  }
  if (from.src_port() != 0) {
    set_src_port(from.src_port());
  }
  if (from.dest_port() != 0) {
    set_dest_port(from.dest_port());
  }
  if (from.seq() != 0) {
    set_seq(from.seq());
  }
  if (from.ack_seq() != 0) {
    set_ack_seq(from.ack_seq());
  }
  if (from.payload_size() != 0) {
    set_payload_size(from.payload_size());
  }
  if (from.is_query() != 0) {
    set_is_query(from.is_query());
  }
}

void PackPacket::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:packet.PackPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PackPacket::CopyFrom(const PackPacket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:packet.PackPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PackPacket::IsInitialized() const {
  return true;
}

void PackPacket::Swap(PackPacket* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PackPacket::InternalSwap(PackPacket* other) {
  using std::swap;
  timestamp_.Swap(&other->timestamp_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  src_ip_.Swap(&other->src_ip_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  dest_ip_.Swap(&other->dest_ip_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  payload_.Swap(&other->payload_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(timestamp_int_, other->timestamp_int_);
  swap(src_port_, other->src_port_);
  swap(dest_port_, other->dest_port_);
  swap(seq_, other->seq_);
  swap(ack_seq_, other->ack_seq_);
  swap(payload_size_, other->payload_size_);
  swap(is_query_, other->is_query_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata PackPacket::GetMetadata() const {
  protobuf_packet_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_packet_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace packet
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::packet::PackPacket* Arena::CreateMaybeMessage< ::packet::PackPacket >(Arena* arena) {
  return Arena::CreateInternal< ::packet::PackPacket >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)