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
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: TextElementType
  struct TextElementType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextElementType, "UnityEngine.TextCore.Text", "TextElementType");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextCore.Text.TextElementType
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextElementType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: TextElementType
    constexpr TextElementType(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextCore.Text.TextElementType Character
    static constexpr const uint8_t Character = 1u;
    // Get static field: static public UnityEngine.TextCore.Text.TextElementType Character
    static ::UnityEngine::TextCore::Text::TextElementType _get_Character();
    // Set static field: static public UnityEngine.TextCore.Text.TextElementType Character
    static void _set_Character(::UnityEngine::TextCore::Text::TextElementType value);
    // static field const value: static public UnityEngine.TextCore.Text.TextElementType Sprite
    static constexpr const uint8_t Sprite = 2u;
    // Get static field: static public UnityEngine.TextCore.Text.TextElementType Sprite
    static ::UnityEngine::TextCore::Text::TextElementType _get_Sprite();
    // Set static field: static public UnityEngine.TextCore.Text.TextElementType Sprite
    static void _set_Sprite(::UnityEngine::TextCore::Text::TextElementType value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // UnityEngine.TextCore.Text.TextElementType
  #pragma pack(pop)
  static check_size<sizeof(TextElementType), 0 + sizeof(uint8_t)> __UnityEngine_TextCore_Text_TextElementTypeSizeCheck;
  static_assert(sizeof(TextElementType) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
