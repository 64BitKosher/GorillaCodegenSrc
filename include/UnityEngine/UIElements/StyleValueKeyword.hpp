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
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: StyleValueKeyword
  struct StyleValueKeyword;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueKeyword, "UnityEngine.UIElements", "StyleValueKeyword");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.StyleValueKeyword
  // [TokenAttribute] Offset: FFFFFFFF
  struct StyleValueKeyword/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: StyleValueKeyword
    constexpr StyleValueKeyword(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.StyleValueKeyword Inherit
    static constexpr const int Inherit = 0;
    // Get static field: static public UnityEngine.UIElements.StyleValueKeyword Inherit
    static ::UnityEngine::UIElements::StyleValueKeyword _get_Inherit();
    // Set static field: static public UnityEngine.UIElements.StyleValueKeyword Inherit
    static void _set_Inherit(::UnityEngine::UIElements::StyleValueKeyword value);
    // static field const value: static public UnityEngine.UIElements.StyleValueKeyword Initial
    static constexpr const int Initial = 1;
    // Get static field: static public UnityEngine.UIElements.StyleValueKeyword Initial
    static ::UnityEngine::UIElements::StyleValueKeyword _get_Initial();
    // Set static field: static public UnityEngine.UIElements.StyleValueKeyword Initial
    static void _set_Initial(::UnityEngine::UIElements::StyleValueKeyword value);
    // static field const value: static public UnityEngine.UIElements.StyleValueKeyword Auto
    static constexpr const int Auto = 2;
    // Get static field: static public UnityEngine.UIElements.StyleValueKeyword Auto
    static ::UnityEngine::UIElements::StyleValueKeyword _get_Auto();
    // Set static field: static public UnityEngine.UIElements.StyleValueKeyword Auto
    static void _set_Auto(::UnityEngine::UIElements::StyleValueKeyword value);
    // static field const value: static public UnityEngine.UIElements.StyleValueKeyword Unset
    static constexpr const int Unset = 3;
    // Get static field: static public UnityEngine.UIElements.StyleValueKeyword Unset
    static ::UnityEngine::UIElements::StyleValueKeyword _get_Unset();
    // Set static field: static public UnityEngine.UIElements.StyleValueKeyword Unset
    static void _set_Unset(::UnityEngine::UIElements::StyleValueKeyword value);
    // static field const value: static public UnityEngine.UIElements.StyleValueKeyword True
    static constexpr const int True = 4;
    // Get static field: static public UnityEngine.UIElements.StyleValueKeyword True
    static ::UnityEngine::UIElements::StyleValueKeyword _get_True();
    // Set static field: static public UnityEngine.UIElements.StyleValueKeyword True
    static void _set_True(::UnityEngine::UIElements::StyleValueKeyword value);
    // static field const value: static public UnityEngine.UIElements.StyleValueKeyword False
    static constexpr const int False = 5;
    // Get static field: static public UnityEngine.UIElements.StyleValueKeyword False
    static ::UnityEngine::UIElements::StyleValueKeyword _get_False();
    // Set static field: static public UnityEngine.UIElements.StyleValueKeyword False
    static void _set_False(::UnityEngine::UIElements::StyleValueKeyword value);
    // static field const value: static public UnityEngine.UIElements.StyleValueKeyword None
    static constexpr const int None = 6;
    // Get static field: static public UnityEngine.UIElements.StyleValueKeyword None
    static ::UnityEngine::UIElements::StyleValueKeyword _get_None();
    // Set static field: static public UnityEngine.UIElements.StyleValueKeyword None
    static void _set_None(::UnityEngine::UIElements::StyleValueKeyword value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.StyleValueKeyword
  #pragma pack(pop)
  static check_size<sizeof(StyleValueKeyword), 0 + sizeof(int)> __UnityEngine_UIElements_StyleValueKeywordSizeCheck;
  static_assert(sizeof(StyleValueKeyword) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
