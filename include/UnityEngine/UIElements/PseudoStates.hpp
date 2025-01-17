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
  // Forward declaring type: PseudoStates
  struct PseudoStates;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PseudoStates, "UnityEngine.UIElements", "PseudoStates");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.PseudoStates
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct PseudoStates/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PseudoStates
    constexpr PseudoStates(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.PseudoStates Active
    static constexpr const int Active = 1;
    // Get static field: static public UnityEngine.UIElements.PseudoStates Active
    static ::UnityEngine::UIElements::PseudoStates _get_Active();
    // Set static field: static public UnityEngine.UIElements.PseudoStates Active
    static void _set_Active(::UnityEngine::UIElements::PseudoStates value);
    // static field const value: static public UnityEngine.UIElements.PseudoStates Hover
    static constexpr const int Hover = 2;
    // Get static field: static public UnityEngine.UIElements.PseudoStates Hover
    static ::UnityEngine::UIElements::PseudoStates _get_Hover();
    // Set static field: static public UnityEngine.UIElements.PseudoStates Hover
    static void _set_Hover(::UnityEngine::UIElements::PseudoStates value);
    // static field const value: static public UnityEngine.UIElements.PseudoStates Checked
    static constexpr const int Checked = 8;
    // Get static field: static public UnityEngine.UIElements.PseudoStates Checked
    static ::UnityEngine::UIElements::PseudoStates _get_Checked();
    // Set static field: static public UnityEngine.UIElements.PseudoStates Checked
    static void _set_Checked(::UnityEngine::UIElements::PseudoStates value);
    // static field const value: static public UnityEngine.UIElements.PseudoStates Disabled
    static constexpr const int Disabled = 32;
    // Get static field: static public UnityEngine.UIElements.PseudoStates Disabled
    static ::UnityEngine::UIElements::PseudoStates _get_Disabled();
    // Set static field: static public UnityEngine.UIElements.PseudoStates Disabled
    static void _set_Disabled(::UnityEngine::UIElements::PseudoStates value);
    // static field const value: static public UnityEngine.UIElements.PseudoStates Focus
    static constexpr const int Focus = 64;
    // Get static field: static public UnityEngine.UIElements.PseudoStates Focus
    static ::UnityEngine::UIElements::PseudoStates _get_Focus();
    // Set static field: static public UnityEngine.UIElements.PseudoStates Focus
    static void _set_Focus(::UnityEngine::UIElements::PseudoStates value);
    // static field const value: static public UnityEngine.UIElements.PseudoStates Root
    static constexpr const int Root = 128;
    // Get static field: static public UnityEngine.UIElements.PseudoStates Root
    static ::UnityEngine::UIElements::PseudoStates _get_Root();
    // Set static field: static public UnityEngine.UIElements.PseudoStates Root
    static void _set_Root(::UnityEngine::UIElements::PseudoStates value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.PseudoStates
  #pragma pack(pop)
  static check_size<sizeof(PseudoStates), 0 + sizeof(int)> __UnityEngine_UIElements_PseudoStatesSizeCheck;
  static_assert(sizeof(PseudoStates) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
