// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: VYaml.Parser.ITokenContent
#include "VYaml/Parser/ITokenContent.hpp"
// Completed includes
// Type namespace: VYaml.Parser
namespace VYaml::Parser {
  // Forward declaring type: VersionDirective
  struct VersionDirective;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VYaml::Parser::VersionDirective, "VYaml.Parser", "VersionDirective");
// Type namespace: VYaml.Parser
namespace VYaml::Parser {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: VYaml.Parser.VersionDirective
  // [TokenAttribute] Offset: FFFFFFFF
  struct VersionDirective/*, public ::System::ValueType, public ::VYaml::Parser::ITokenContent*/ {
    public:
    public:
    // public readonly System.Int32 Major
    // Size: 0x4
    // Offset: 0x0
    int Major;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 Minor
    // Size: 0x4
    // Offset: 0x4
    int Minor;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VersionDirective
    constexpr VersionDirective(int Major_ = {}, int Minor_ = {}) noexcept : Major{Major_}, Minor{Minor_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::VYaml::Parser::ITokenContent
    operator ::VYaml::Parser::ITokenContent() noexcept {
      return *reinterpret_cast<::VYaml::Parser::ITokenContent*>(this);
    }
    // Get instance field reference: public readonly System.Int32 Major
    [[deprecated("Use field access instead!")]] int& dyn_Major();
    // Get instance field reference: public readonly System.Int32 Minor
    [[deprecated("Use field access instead!")]] int& dyn_Minor();
    // public System.Void .ctor(System.Int32 major, System.Int32 minor)
    // Offset: 0x573A194
    // ABORTED: conflicts with another method.  VersionDirective(int major, int minor);
  }; // VYaml.Parser.VersionDirective
  #pragma pack(pop)
  static check_size<sizeof(VersionDirective), 4 + sizeof(int)> __VYaml_Parser_VersionDirectiveSizeCheck;
  static_assert(sizeof(VersionDirective) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VYaml::Parser::VersionDirective::VersionDirective
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
