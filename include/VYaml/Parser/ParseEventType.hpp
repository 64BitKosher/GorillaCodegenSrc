// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: VYaml.Parser
namespace VYaml::Parser {
  // Forward declaring type: ParseEventType
  struct ParseEventType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VYaml::Parser::ParseEventType, "VYaml.Parser", "ParseEventType");
// Type namespace: VYaml.Parser
namespace VYaml::Parser {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: VYaml.Parser.ParseEventType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParseEventType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: ParseEventType
    constexpr ParseEventType(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public VYaml.Parser.ParseEventType Nothing
    static constexpr const uint8_t Nothing = 0u;
    // Get static field: static public VYaml.Parser.ParseEventType Nothing
    static ::VYaml::Parser::ParseEventType _get_Nothing();
    // Set static field: static public VYaml.Parser.ParseEventType Nothing
    static void _set_Nothing(::VYaml::Parser::ParseEventType value);
    // static field const value: static public VYaml.Parser.ParseEventType StreamStart
    static constexpr const uint8_t StreamStart = 1u;
    // Get static field: static public VYaml.Parser.ParseEventType StreamStart
    static ::VYaml::Parser::ParseEventType _get_StreamStart();
    // Set static field: static public VYaml.Parser.ParseEventType StreamStart
    static void _set_StreamStart(::VYaml::Parser::ParseEventType value);
    // static field const value: static public VYaml.Parser.ParseEventType StreamEnd
    static constexpr const uint8_t StreamEnd = 2u;
    // Get static field: static public VYaml.Parser.ParseEventType StreamEnd
    static ::VYaml::Parser::ParseEventType _get_StreamEnd();
    // Set static field: static public VYaml.Parser.ParseEventType StreamEnd
    static void _set_StreamEnd(::VYaml::Parser::ParseEventType value);
    // static field const value: static public VYaml.Parser.ParseEventType DocumentStart
    static constexpr const uint8_t DocumentStart = 3u;
    // Get static field: static public VYaml.Parser.ParseEventType DocumentStart
    static ::VYaml::Parser::ParseEventType _get_DocumentStart();
    // Set static field: static public VYaml.Parser.ParseEventType DocumentStart
    static void _set_DocumentStart(::VYaml::Parser::ParseEventType value);
    // static field const value: static public VYaml.Parser.ParseEventType DocumentEnd
    static constexpr const uint8_t DocumentEnd = 4u;
    // Get static field: static public VYaml.Parser.ParseEventType DocumentEnd
    static ::VYaml::Parser::ParseEventType _get_DocumentEnd();
    // Set static field: static public VYaml.Parser.ParseEventType DocumentEnd
    static void _set_DocumentEnd(::VYaml::Parser::ParseEventType value);
    // static field const value: static public VYaml.Parser.ParseEventType Alias
    static constexpr const uint8_t Alias = 5u;
    // Get static field: static public VYaml.Parser.ParseEventType Alias
    static ::VYaml::Parser::ParseEventType _get_Alias();
    // Set static field: static public VYaml.Parser.ParseEventType Alias
    static void _set_Alias(::VYaml::Parser::ParseEventType value);
    // static field const value: static public VYaml.Parser.ParseEventType Scalar
    static constexpr const uint8_t Scalar = 6u;
    // Get static field: static public VYaml.Parser.ParseEventType Scalar
    static ::VYaml::Parser::ParseEventType _get_Scalar();
    // Set static field: static public VYaml.Parser.ParseEventType Scalar
    static void _set_Scalar(::VYaml::Parser::ParseEventType value);
    // static field const value: static public VYaml.Parser.ParseEventType SequenceStart
    static constexpr const uint8_t SequenceStart = 7u;
    // Get static field: static public VYaml.Parser.ParseEventType SequenceStart
    static ::VYaml::Parser::ParseEventType _get_SequenceStart();
    // Set static field: static public VYaml.Parser.ParseEventType SequenceStart
    static void _set_SequenceStart(::VYaml::Parser::ParseEventType value);
    // static field const value: static public VYaml.Parser.ParseEventType SequenceEnd
    static constexpr const uint8_t SequenceEnd = 8u;
    // Get static field: static public VYaml.Parser.ParseEventType SequenceEnd
    static ::VYaml::Parser::ParseEventType _get_SequenceEnd();
    // Set static field: static public VYaml.Parser.ParseEventType SequenceEnd
    static void _set_SequenceEnd(::VYaml::Parser::ParseEventType value);
    // static field const value: static public VYaml.Parser.ParseEventType MappingStart
    static constexpr const uint8_t MappingStart = 9u;
    // Get static field: static public VYaml.Parser.ParseEventType MappingStart
    static ::VYaml::Parser::ParseEventType _get_MappingStart();
    // Set static field: static public VYaml.Parser.ParseEventType MappingStart
    static void _set_MappingStart(::VYaml::Parser::ParseEventType value);
    // static field const value: static public VYaml.Parser.ParseEventType MappingEnd
    static constexpr const uint8_t MappingEnd = 10u;
    // Get static field: static public VYaml.Parser.ParseEventType MappingEnd
    static ::VYaml::Parser::ParseEventType _get_MappingEnd();
    // Set static field: static public VYaml.Parser.ParseEventType MappingEnd
    static void _set_MappingEnd(::VYaml::Parser::ParseEventType value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // VYaml.Parser.ParseEventType
  #pragma pack(pop)
  static check_size<sizeof(ParseEventType), 0 + sizeof(uint8_t)> __VYaml_Parser_ParseEventTypeSizeCheck;
  static_assert(sizeof(ParseEventType) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
