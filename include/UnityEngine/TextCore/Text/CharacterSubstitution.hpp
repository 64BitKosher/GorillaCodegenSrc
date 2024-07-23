// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: CharacterSubstitution
  struct CharacterSubstitution;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::CharacterSubstitution, "UnityEngine.TextCore.Text", "CharacterSubstitution");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.Text.CharacterSubstitution
  // [TokenAttribute] Offset: FFFFFFFF
  struct CharacterSubstitution/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x0
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.UInt32 unicode
    // Size: 0x4
    // Offset: 0x4
    uint unicode;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: CharacterSubstitution
    constexpr CharacterSubstitution(int index_ = {}, uint unicode_ = {}) noexcept : index{index_}, unicode{unicode_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // Get instance field reference: public System.UInt32 unicode
    [[deprecated("Use field access instead!")]] uint& dyn_unicode();
    // public System.Void .ctor(System.Int32 index, System.UInt32 unicode)
    // Offset: 0x556C348
    // ABORTED: conflicts with another method.  CharacterSubstitution(int index, uint unicode);
  }; // UnityEngine.TextCore.Text.CharacterSubstitution
  #pragma pack(pop)
  static check_size<sizeof(CharacterSubstitution), 4 + sizeof(uint)> __UnityEngine_TextCore_Text_CharacterSubstitutionSizeCheck;
  static_assert(sizeof(CharacterSubstitution) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::CharacterSubstitution::CharacterSubstitution
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
