// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grSim_Packet.proto

#include "grSim_Packet.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

extern PROTOBUF_INTERNAL_EXPORT_grSim_5fCommands_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_grSim_Commands_grSim_5fCommands_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_grSim_5fReplacement_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_grSim_Replacement_grSim_5fReplacement_2eproto;
class grSim_PacketDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<grSim_Packet> _instance;
} _grSim_Packet_default_instance_;
static void InitDefaultsgrSim_Packet_grSim_5fPacket_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_grSim_Packet_default_instance_;
    new (ptr) ::grSim_Packet();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::grSim_Packet::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_grSim_Packet_grSim_5fPacket_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsgrSim_Packet_grSim_5fPacket_2eproto}, {
      &scc_info_grSim_Commands_grSim_5fCommands_2eproto.base,
      &scc_info_grSim_Replacement_grSim_5fReplacement_2eproto.base,}};

void InitDefaults_grSim_5fPacket_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_grSim_Packet_grSim_5fPacket_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_grSim_5fPacket_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_grSim_5fPacket_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_grSim_5fPacket_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_grSim_5fPacket_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::grSim_Packet, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::grSim_Packet, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grSim_Packet, commands_),
  PROTOBUF_FIELD_OFFSET(::grSim_Packet, replacement_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::grSim_Packet)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_grSim_Packet_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_grSim_5fPacket_2eproto = {
  {}, AddDescriptors_grSim_5fPacket_2eproto, "grSim_Packet.proto", schemas,
  file_default_instances, TableStruct_grSim_5fPacket_2eproto::offsets,
  file_level_metadata_grSim_5fPacket_2eproto, 1, file_level_enum_descriptors_grSim_5fPacket_2eproto, file_level_service_descriptors_grSim_5fPacket_2eproto,
};

const char descriptor_table_protodef_grSim_5fPacket_2eproto[] =
  "\n\022grSim_Packet.proto\032\024grSim_Commands.pro"
  "to\032\027grSim_Replacement.proto\"Z\n\014grSim_Pac"
  "ket\022!\n\010commands\030\001 \001(\0132\017.grSim_Commands\022\'"
  "\n\013replacement\030\002 \001(\0132\022.grSim_Replacement"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_grSim_5fPacket_2eproto = {
  false, InitDefaults_grSim_5fPacket_2eproto, 
  descriptor_table_protodef_grSim_5fPacket_2eproto,
  "grSim_Packet.proto", &assign_descriptors_table_grSim_5fPacket_2eproto, 159,
};

void AddDescriptors_grSim_5fPacket_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[2] =
  {
    ::AddDescriptors_grSim_5fCommands_2eproto,
    ::AddDescriptors_grSim_5fReplacement_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_grSim_5fPacket_2eproto, deps, 2);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_grSim_5fPacket_2eproto = []() { AddDescriptors_grSim_5fPacket_2eproto(); return true; }();

// ===================================================================

void grSim_Packet::InitAsDefaultInstance() {
  ::_grSim_Packet_default_instance_._instance.get_mutable()->commands_ = const_cast< ::grSim_Commands*>(
      ::grSim_Commands::internal_default_instance());
  ::_grSim_Packet_default_instance_._instance.get_mutable()->replacement_ = const_cast< ::grSim_Replacement*>(
      ::grSim_Replacement::internal_default_instance());
}
class grSim_Packet::HasBitSetters {
 public:
  static const ::grSim_Commands& commands(const grSim_Packet* msg);
  static void set_has_commands(grSim_Packet* msg) {
    msg->_has_bits_[0] |= 0x00000001u;
  }
  static const ::grSim_Replacement& replacement(const grSim_Packet* msg);
  static void set_has_replacement(grSim_Packet* msg) {
    msg->_has_bits_[0] |= 0x00000002u;
  }
};

const ::grSim_Commands&
grSim_Packet::HasBitSetters::commands(const grSim_Packet* msg) {
  return *msg->commands_;
}
const ::grSim_Replacement&
grSim_Packet::HasBitSetters::replacement(const grSim_Packet* msg) {
  return *msg->replacement_;
}
void grSim_Packet::clear_commands() {
  if (commands_ != nullptr) commands_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void grSim_Packet::clear_replacement() {
  if (replacement_ != nullptr) replacement_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int grSim_Packet::kCommandsFieldNumber;
const int grSim_Packet::kReplacementFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

grSim_Packet::grSim_Packet()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:grSim_Packet)
}
grSim_Packet::grSim_Packet(const grSim_Packet& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_commands()) {
    commands_ = new ::grSim_Commands(*from.commands_);
  } else {
    commands_ = nullptr;
  }
  if (from.has_replacement()) {
    replacement_ = new ::grSim_Replacement(*from.replacement_);
  } else {
    replacement_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:grSim_Packet)
}

void grSim_Packet::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_grSim_Packet_grSim_5fPacket_2eproto.base);
  ::memset(&commands_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&replacement_) -
      reinterpret_cast<char*>(&commands_)) + sizeof(replacement_));
}

grSim_Packet::~grSim_Packet() {
  // @@protoc_insertion_point(destructor:grSim_Packet)
  SharedDtor();
}

void grSim_Packet::SharedDtor() {
  if (this != internal_default_instance()) delete commands_;
  if (this != internal_default_instance()) delete replacement_;
}

void grSim_Packet::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const grSim_Packet& grSim_Packet::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_grSim_Packet_grSim_5fPacket_2eproto.base);
  return *internal_default_instance();
}


void grSim_Packet::Clear() {
// @@protoc_insertion_point(message_clear_start:grSim_Packet)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(commands_ != nullptr);
      commands_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(replacement_ != nullptr);
      replacement_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* grSim_Packet::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<grSim_Packet*>(object);
  ::google::protobuf::uint32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // optional .grSim_Commands commands = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::Parse32(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::grSim_Commands::_InternalParse;
        object = msg->mutable_commands();
        if (size > end - ptr) goto len_delim_till_end;
        auto newend = ptr + size;
        bool ok = ctx->ParseExactRange({parser_till_end, object},
                                       ptr, newend);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ok);
        ptr = newend;
        break;
      }
      // optional .grSim_Replacement replacement = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::Parse32(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::grSim_Replacement::_InternalParse;
        object = msg->mutable_replacement();
        if (size > end - ptr) goto len_delim_till_end;
        auto newend = ptr + size;
        bool ok = ctx->ParseExactRange({parser_till_end, object},
                                       ptr, newend);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ok);
        ptr = newend;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool grSim_Packet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:grSim_Packet)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .grSim_Commands commands = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_commands()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .grSim_Replacement replacement = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_replacement()));
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
  // @@protoc_insertion_point(parse_success:grSim_Packet)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:grSim_Packet)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void grSim_Packet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:grSim_Packet)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .grSim_Commands commands = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, HasBitSetters::commands(this), output);
  }

  // optional .grSim_Replacement replacement = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, HasBitSetters::replacement(this), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:grSim_Packet)
}

::google::protobuf::uint8* grSim_Packet::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:grSim_Packet)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .grSim_Commands commands = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, HasBitSetters::commands(this), target);
  }

  // optional .grSim_Replacement replacement = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, HasBitSetters::replacement(this), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grSim_Packet)
  return target;
}

size_t grSim_Packet::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grSim_Packet)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .grSim_Commands commands = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *commands_);
    }

    // optional .grSim_Replacement replacement = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *replacement_);
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void grSim_Packet::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grSim_Packet)
  GOOGLE_DCHECK_NE(&from, this);
  const grSim_Packet* source =
      ::google::protobuf::DynamicCastToGenerated<grSim_Packet>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grSim_Packet)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grSim_Packet)
    MergeFrom(*source);
  }
}

void grSim_Packet::MergeFrom(const grSim_Packet& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grSim_Packet)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_commands()->::grSim_Commands::MergeFrom(from.commands());
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_replacement()->::grSim_Replacement::MergeFrom(from.replacement());
    }
  }
}

void grSim_Packet::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grSim_Packet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void grSim_Packet::CopyFrom(const grSim_Packet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grSim_Packet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool grSim_Packet::IsInitialized() const {
  if (has_commands()) {
    if (!this->commands_->IsInitialized()) return false;
  }
  if (has_replacement()) {
    if (!this->replacement_->IsInitialized()) return false;
  }
  return true;
}

void grSim_Packet::Swap(grSim_Packet* other) {
  if (other == this) return;
  InternalSwap(other);
}
void grSim_Packet::InternalSwap(grSim_Packet* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(commands_, other->commands_);
  swap(replacement_, other->replacement_);
}

::google::protobuf::Metadata grSim_Packet::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_grSim_5fPacket_2eproto);
  return ::file_level_metadata_grSim_5fPacket_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::grSim_Packet* Arena::CreateMaybeMessage< ::grSim_Packet >(Arena* arena) {
  return Arena::CreateInternal< ::grSim_Packet >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
