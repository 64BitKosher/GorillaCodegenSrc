// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: VYaml.Parser
namespace VYaml::Parser {
  // Forward declaring type: Marker
  struct Marker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VYaml::Parser::Marker, "VYaml.Parser", "Marker");
// Type namespace: VYaml.Parser
namespace VYaml::Parser {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: VYaml.Parser.Marker
  // [TokenAttribute] Offset: FFFFFFFF
  struct Marker/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 Position
    // Size: 0x4
    // Offset: 0x0
    int Position;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Line
    // Size: 0x4
    // Offset: 0x4
    int Line;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Col
    // Size: 0x4
    // Offset: 0x8
    int Col;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Marker
    constexpr Marker(int Position_ = {}, int Line_ = {}, int Col_ = {}) noexcept : Position{Position_}, Line{Line_}, Col{Col_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 Position
    [[deprecated("Use field access instead!")]] int& dyn_Position();
    // Get instance field reference: public System.Int32 Line
    [[deprecated("Use field access instead!")]] int& dyn_Line();
    // Get instance field reference: public System.Int32 Col
    [[deprecated("Use field access instead!")]] int& dyn_Col();
    // public System.Void .ctor(System.Int32 position, System.Int32 line, System.Int32 col)
    // Offset: 0x57340E0
    // ABORTED: conflicts with another method.  Marker(int position, int line, int col);
    // public override System.String ToString()
    // Offset: 0x57340EC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // VYaml.Parser.Marker
  #pragma pack(pop)
  static check_size<sizeof(Marker), 8 + sizeof(int)> __VYaml_Parser_MarkerSizeCheck;
  static_assert(sizeof(Marker) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VYaml::Parser::Marker::Marker
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VYaml::Parser::Marker::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VYaml::Parser::Marker::*)()>(&VYaml::Parser::Marker::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Parser::Marker), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
