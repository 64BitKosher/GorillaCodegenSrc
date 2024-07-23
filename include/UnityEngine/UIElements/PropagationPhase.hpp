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
  // Forward declaring type: PropagationPhase
  struct PropagationPhase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropagationPhase, "UnityEngine.UIElements", "PropagationPhase");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.PropagationPhase
  // [TokenAttribute] Offset: FFFFFFFF
  struct PropagationPhase/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PropagationPhase
    constexpr PropagationPhase(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.PropagationPhase None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.UIElements.PropagationPhase None
    static ::UnityEngine::UIElements::PropagationPhase _get_None();
    // Set static field: static public UnityEngine.UIElements.PropagationPhase None
    static void _set_None(::UnityEngine::UIElements::PropagationPhase value);
    // static field const value: static public UnityEngine.UIElements.PropagationPhase TrickleDown
    static constexpr const int TrickleDown = 1;
    // Get static field: static public UnityEngine.UIElements.PropagationPhase TrickleDown
    static ::UnityEngine::UIElements::PropagationPhase _get_TrickleDown();
    // Set static field: static public UnityEngine.UIElements.PropagationPhase TrickleDown
    static void _set_TrickleDown(::UnityEngine::UIElements::PropagationPhase value);
    // static field const value: static public UnityEngine.UIElements.PropagationPhase AtTarget
    static constexpr const int AtTarget = 2;
    // Get static field: static public UnityEngine.UIElements.PropagationPhase AtTarget
    static ::UnityEngine::UIElements::PropagationPhase _get_AtTarget();
    // Set static field: static public UnityEngine.UIElements.PropagationPhase AtTarget
    static void _set_AtTarget(::UnityEngine::UIElements::PropagationPhase value);
    // static field const value: static public UnityEngine.UIElements.PropagationPhase DefaultActionAtTarget
    static constexpr const int DefaultActionAtTarget = 5;
    // Get static field: static public UnityEngine.UIElements.PropagationPhase DefaultActionAtTarget
    static ::UnityEngine::UIElements::PropagationPhase _get_DefaultActionAtTarget();
    // Set static field: static public UnityEngine.UIElements.PropagationPhase DefaultActionAtTarget
    static void _set_DefaultActionAtTarget(::UnityEngine::UIElements::PropagationPhase value);
    // static field const value: static public UnityEngine.UIElements.PropagationPhase BubbleUp
    static constexpr const int BubbleUp = 3;
    // Get static field: static public UnityEngine.UIElements.PropagationPhase BubbleUp
    static ::UnityEngine::UIElements::PropagationPhase _get_BubbleUp();
    // Set static field: static public UnityEngine.UIElements.PropagationPhase BubbleUp
    static void _set_BubbleUp(::UnityEngine::UIElements::PropagationPhase value);
    // static field const value: static public UnityEngine.UIElements.PropagationPhase DefaultAction
    static constexpr const int DefaultAction = 4;
    // Get static field: static public UnityEngine.UIElements.PropagationPhase DefaultAction
    static ::UnityEngine::UIElements::PropagationPhase _get_DefaultAction();
    // Set static field: static public UnityEngine.UIElements.PropagationPhase DefaultAction
    static void _set_DefaultAction(::UnityEngine::UIElements::PropagationPhase value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.PropagationPhase
  #pragma pack(pop)
  static check_size<sizeof(PropagationPhase), 0 + sizeof(int)> __UnityEngine_UIElements_PropagationPhaseSizeCheck;
  static_assert(sizeof(PropagationPhase) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
