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
  // Forward declaring type: WhiteSpace
  struct WhiteSpace;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::WhiteSpace, "UnityEngine.UIElements", "WhiteSpace");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.WhiteSpace
  // [TokenAttribute] Offset: FFFFFFFF
  struct WhiteSpace/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: WhiteSpace
    constexpr WhiteSpace(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.WhiteSpace Normal
    static constexpr const int Normal = 0;
    // Get static field: static public UnityEngine.UIElements.WhiteSpace Normal
    static ::UnityEngine::UIElements::WhiteSpace _get_Normal();
    // Set static field: static public UnityEngine.UIElements.WhiteSpace Normal
    static void _set_Normal(::UnityEngine::UIElements::WhiteSpace value);
    // static field const value: static public UnityEngine.UIElements.WhiteSpace NoWrap
    static constexpr const int NoWrap = 1;
    // Get static field: static public UnityEngine.UIElements.WhiteSpace NoWrap
    static ::UnityEngine::UIElements::WhiteSpace _get_NoWrap();
    // Set static field: static public UnityEngine.UIElements.WhiteSpace NoWrap
    static void _set_NoWrap(::UnityEngine::UIElements::WhiteSpace value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.WhiteSpace
  #pragma pack(pop)
  static check_size<sizeof(WhiteSpace), 0 + sizeof(int)> __UnityEngine_UIElements_WhiteSpaceSizeCheck;
  static_assert(sizeof(WhiteSpace) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
