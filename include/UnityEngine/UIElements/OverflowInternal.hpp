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
  // Forward declaring type: OverflowInternal
  struct OverflowInternal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::OverflowInternal, "UnityEngine.UIElements", "OverflowInternal");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.OverflowInternal
  // [TokenAttribute] Offset: FFFFFFFF
  struct OverflowInternal/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OverflowInternal
    constexpr OverflowInternal(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.OverflowInternal Visible
    static constexpr const int Visible = 0;
    // Get static field: static public UnityEngine.UIElements.OverflowInternal Visible
    static ::UnityEngine::UIElements::OverflowInternal _get_Visible();
    // Set static field: static public UnityEngine.UIElements.OverflowInternal Visible
    static void _set_Visible(::UnityEngine::UIElements::OverflowInternal value);
    // static field const value: static public UnityEngine.UIElements.OverflowInternal Hidden
    static constexpr const int Hidden = 1;
    // Get static field: static public UnityEngine.UIElements.OverflowInternal Hidden
    static ::UnityEngine::UIElements::OverflowInternal _get_Hidden();
    // Set static field: static public UnityEngine.UIElements.OverflowInternal Hidden
    static void _set_Hidden(::UnityEngine::UIElements::OverflowInternal value);
    // static field const value: static public UnityEngine.UIElements.OverflowInternal Scroll
    static constexpr const int Scroll = 2;
    // Get static field: static public UnityEngine.UIElements.OverflowInternal Scroll
    static ::UnityEngine::UIElements::OverflowInternal _get_Scroll();
    // Set static field: static public UnityEngine.UIElements.OverflowInternal Scroll
    static void _set_Scroll(::UnityEngine::UIElements::OverflowInternal value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.OverflowInternal
  #pragma pack(pop)
  static check_size<sizeof(OverflowInternal), 0 + sizeof(int)> __UnityEngine_UIElements_OverflowInternalSizeCheck;
  static_assert(sizeof(OverflowInternal) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"