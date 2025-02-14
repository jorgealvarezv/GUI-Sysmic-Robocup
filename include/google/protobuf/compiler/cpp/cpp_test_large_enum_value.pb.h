// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/compiler/cpp/cpp_test_large_enum_value.proto

#ifndef PROTOBUF_INCLUDED_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto
#define PROTOBUF_INCLUDED_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3006001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto();
namespace protobuf_unittest {
class TestLargeEnumValue;
class TestLargeEnumValueDefaultTypeInternal;
extern TestLargeEnumValueDefaultTypeInternal _TestLargeEnumValue_default_instance_;
}  // namespace protobuf_unittest
namespace google {
namespace protobuf {
template<> ::protobuf_unittest::TestLargeEnumValue* Arena::CreateMaybeMessage<::protobuf_unittest::TestLargeEnumValue>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace protobuf_unittest {

enum TestLargeEnumValue_EnumWithLargeValue {
  TestLargeEnumValue_EnumWithLargeValue_VALUE_1 = 1,
  TestLargeEnumValue_EnumWithLargeValue_VALUE_MAX = 2147483647
};
bool TestLargeEnumValue_EnumWithLargeValue_IsValid(int value);
const TestLargeEnumValue_EnumWithLargeValue TestLargeEnumValue_EnumWithLargeValue_EnumWithLargeValue_MIN = TestLargeEnumValue_EnumWithLargeValue_VALUE_1;
const TestLargeEnumValue_EnumWithLargeValue TestLargeEnumValue_EnumWithLargeValue_EnumWithLargeValue_MAX = TestLargeEnumValue_EnumWithLargeValue_VALUE_MAX;
const ::google::protobuf::EnumDescriptor* TestLargeEnumValue_EnumWithLargeValue_descriptor();
inline const ::std::string& TestLargeEnumValue_EnumWithLargeValue_Name(TestLargeEnumValue_EnumWithLargeValue value) {
  return ::google::protobuf::internal::NameOfEnum(
    TestLargeEnumValue_EnumWithLargeValue_descriptor(), value);
}
inline bool TestLargeEnumValue_EnumWithLargeValue_Parse(
    const ::std::string& name, TestLargeEnumValue_EnumWithLargeValue* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TestLargeEnumValue_EnumWithLargeValue>(
    TestLargeEnumValue_EnumWithLargeValue_descriptor(), name, value);
}
// ===================================================================

class TestLargeEnumValue : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protobuf_unittest.TestLargeEnumValue) */ {
 public:
  TestLargeEnumValue();
  virtual ~TestLargeEnumValue();

  TestLargeEnumValue(const TestLargeEnumValue& from);

  inline TestLargeEnumValue& operator=(const TestLargeEnumValue& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TestLargeEnumValue(TestLargeEnumValue&& from) noexcept
    : TestLargeEnumValue() {
    *this = ::std::move(from);
  }

  inline TestLargeEnumValue& operator=(TestLargeEnumValue&& from) noexcept {
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

  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const TestLargeEnumValue& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestLargeEnumValue* internal_default_instance() {
    return reinterpret_cast<const TestLargeEnumValue*>(
               &_TestLargeEnumValue_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(TestLargeEnumValue* other);
  friend void swap(TestLargeEnumValue& a, TestLargeEnumValue& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestLargeEnumValue* New() const final {
    return CreateMaybeMessage<TestLargeEnumValue>(nullptr);
  }

  TestLargeEnumValue* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TestLargeEnumValue>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TestLargeEnumValue& from);
  void MergeFrom(const TestLargeEnumValue& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TestLargeEnumValue* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef TestLargeEnumValue_EnumWithLargeValue EnumWithLargeValue;
  static const EnumWithLargeValue VALUE_1 =
    TestLargeEnumValue_EnumWithLargeValue_VALUE_1;
  static const EnumWithLargeValue VALUE_MAX =
    TestLargeEnumValue_EnumWithLargeValue_VALUE_MAX;
  static inline bool EnumWithLargeValue_IsValid(int value) {
    return TestLargeEnumValue_EnumWithLargeValue_IsValid(value);
  }
  static const EnumWithLargeValue EnumWithLargeValue_MIN =
    TestLargeEnumValue_EnumWithLargeValue_EnumWithLargeValue_MIN;
  static const EnumWithLargeValue EnumWithLargeValue_MAX =
    TestLargeEnumValue_EnumWithLargeValue_EnumWithLargeValue_MAX;
  static inline const ::google::protobuf::EnumDescriptor*
  EnumWithLargeValue_descriptor() {
    return TestLargeEnumValue_EnumWithLargeValue_descriptor();
  }
  static inline const ::std::string& EnumWithLargeValue_Name(EnumWithLargeValue value) {
    return TestLargeEnumValue_EnumWithLargeValue_Name(value);
  }
  static inline bool EnumWithLargeValue_Parse(const ::std::string& name,
      EnumWithLargeValue* value) {
    return TestLargeEnumValue_EnumWithLargeValue_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:protobuf_unittest.TestLargeEnumValue)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestLargeEnumValue

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf_unittest

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::protobuf_unittest::TestLargeEnumValue_EnumWithLargeValue> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::protobuf_unittest::TestLargeEnumValue_EnumWithLargeValue>() {
  return ::protobuf_unittest::TestLargeEnumValue_EnumWithLargeValue_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto
