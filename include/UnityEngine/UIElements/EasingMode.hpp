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
  // Forward declaring type: EasingMode
  struct EasingMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EasingMode, "UnityEngine.UIElements", "EasingMode");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.EasingMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct EasingMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EasingMode
    constexpr EasingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.EasingMode Ease
    static constexpr const int Ease = 0;
    // Get static field: static public UnityEngine.UIElements.EasingMode Ease
    static ::UnityEngine::UIElements::EasingMode _get_Ease();
    // Set static field: static public UnityEngine.UIElements.EasingMode Ease
    static void _set_Ease(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseIn
    static constexpr const int EaseIn = 1;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseIn
    static ::UnityEngine::UIElements::EasingMode _get_EaseIn();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseIn
    static void _set_EaseIn(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseOut
    static constexpr const int EaseOut = 2;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseOut
    static ::UnityEngine::UIElements::EasingMode _get_EaseOut();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseOut
    static void _set_EaseOut(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseInOut
    static constexpr const int EaseInOut = 3;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseInOut
    static ::UnityEngine::UIElements::EasingMode _get_EaseInOut();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseInOut
    static void _set_EaseInOut(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode Linear
    static constexpr const int Linear = 4;
    // Get static field: static public UnityEngine.UIElements.EasingMode Linear
    static ::UnityEngine::UIElements::EasingMode _get_Linear();
    // Set static field: static public UnityEngine.UIElements.EasingMode Linear
    static void _set_Linear(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseInSine
    static constexpr const int EaseInSine = 5;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseInSine
    static ::UnityEngine::UIElements::EasingMode _get_EaseInSine();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseInSine
    static void _set_EaseInSine(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseOutSine
    static constexpr const int EaseOutSine = 6;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseOutSine
    static ::UnityEngine::UIElements::EasingMode _get_EaseOutSine();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseOutSine
    static void _set_EaseOutSine(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseInOutSine
    static constexpr const int EaseInOutSine = 7;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseInOutSine
    static ::UnityEngine::UIElements::EasingMode _get_EaseInOutSine();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseInOutSine
    static void _set_EaseInOutSine(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseInCubic
    static constexpr const int EaseInCubic = 8;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseInCubic
    static ::UnityEngine::UIElements::EasingMode _get_EaseInCubic();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseInCubic
    static void _set_EaseInCubic(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseOutCubic
    static constexpr const int EaseOutCubic = 9;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseOutCubic
    static ::UnityEngine::UIElements::EasingMode _get_EaseOutCubic();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseOutCubic
    static void _set_EaseOutCubic(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseInOutCubic
    static constexpr const int EaseInOutCubic = 10;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseInOutCubic
    static ::UnityEngine::UIElements::EasingMode _get_EaseInOutCubic();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseInOutCubic
    static void _set_EaseInOutCubic(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseInCirc
    static constexpr const int EaseInCirc = 11;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseInCirc
    static ::UnityEngine::UIElements::EasingMode _get_EaseInCirc();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseInCirc
    static void _set_EaseInCirc(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseOutCirc
    static constexpr const int EaseOutCirc = 12;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseOutCirc
    static ::UnityEngine::UIElements::EasingMode _get_EaseOutCirc();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseOutCirc
    static void _set_EaseOutCirc(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseInOutCirc
    static constexpr const int EaseInOutCirc = 13;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseInOutCirc
    static ::UnityEngine::UIElements::EasingMode _get_EaseInOutCirc();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseInOutCirc
    static void _set_EaseInOutCirc(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseInElastic
    static constexpr const int EaseInElastic = 14;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseInElastic
    static ::UnityEngine::UIElements::EasingMode _get_EaseInElastic();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseInElastic
    static void _set_EaseInElastic(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseOutElastic
    static constexpr const int EaseOutElastic = 15;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseOutElastic
    static ::UnityEngine::UIElements::EasingMode _get_EaseOutElastic();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseOutElastic
    static void _set_EaseOutElastic(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseInOutElastic
    static constexpr const int EaseInOutElastic = 16;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseInOutElastic
    static ::UnityEngine::UIElements::EasingMode _get_EaseInOutElastic();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseInOutElastic
    static void _set_EaseInOutElastic(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseInBack
    static constexpr const int EaseInBack = 17;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseInBack
    static ::UnityEngine::UIElements::EasingMode _get_EaseInBack();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseInBack
    static void _set_EaseInBack(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseOutBack
    static constexpr const int EaseOutBack = 18;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseOutBack
    static ::UnityEngine::UIElements::EasingMode _get_EaseOutBack();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseOutBack
    static void _set_EaseOutBack(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseInOutBack
    static constexpr const int EaseInOutBack = 19;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseInOutBack
    static ::UnityEngine::UIElements::EasingMode _get_EaseInOutBack();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseInOutBack
    static void _set_EaseInOutBack(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseInBounce
    static constexpr const int EaseInBounce = 20;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseInBounce
    static ::UnityEngine::UIElements::EasingMode _get_EaseInBounce();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseInBounce
    static void _set_EaseInBounce(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseOutBounce
    static constexpr const int EaseOutBounce = 21;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseOutBounce
    static ::UnityEngine::UIElements::EasingMode _get_EaseOutBounce();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseOutBounce
    static void _set_EaseOutBounce(::UnityEngine::UIElements::EasingMode value);
    // static field const value: static public UnityEngine.UIElements.EasingMode EaseInOutBounce
    static constexpr const int EaseInOutBounce = 22;
    // Get static field: static public UnityEngine.UIElements.EasingMode EaseInOutBounce
    static ::UnityEngine::UIElements::EasingMode _get_EaseInOutBounce();
    // Set static field: static public UnityEngine.UIElements.EasingMode EaseInOutBounce
    static void _set_EaseInOutBounce(::UnityEngine::UIElements::EasingMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.EasingMode
  #pragma pack(pop)
  static check_size<sizeof(EasingMode), 0 + sizeof(int)> __UnityEngine_UIElements_EasingModeSizeCheck;
  static_assert(sizeof(EasingMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"