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
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Forward declaring type: YogaAlign
  struct YogaAlign;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaAlign, "UnityEngine.Yoga", "YogaAlign");
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Yoga.YogaAlign
  // [TokenAttribute] Offset: FFFFFFFF
  struct YogaAlign/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: YogaAlign
    constexpr YogaAlign(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Yoga.YogaAlign Auto
    static constexpr const int Auto = 0;
    // Get static field: static public UnityEngine.Yoga.YogaAlign Auto
    static ::UnityEngine::Yoga::YogaAlign _get_Auto();
    // Set static field: static public UnityEngine.Yoga.YogaAlign Auto
    static void _set_Auto(::UnityEngine::Yoga::YogaAlign value);
    // static field const value: static public UnityEngine.Yoga.YogaAlign FlexStart
    static constexpr const int FlexStart = 1;
    // Get static field: static public UnityEngine.Yoga.YogaAlign FlexStart
    static ::UnityEngine::Yoga::YogaAlign _get_FlexStart();
    // Set static field: static public UnityEngine.Yoga.YogaAlign FlexStart
    static void _set_FlexStart(::UnityEngine::Yoga::YogaAlign value);
    // static field const value: static public UnityEngine.Yoga.YogaAlign Center
    static constexpr const int Center = 2;
    // Get static field: static public UnityEngine.Yoga.YogaAlign Center
    static ::UnityEngine::Yoga::YogaAlign _get_Center();
    // Set static field: static public UnityEngine.Yoga.YogaAlign Center
    static void _set_Center(::UnityEngine::Yoga::YogaAlign value);
    // static field const value: static public UnityEngine.Yoga.YogaAlign FlexEnd
    static constexpr const int FlexEnd = 3;
    // Get static field: static public UnityEngine.Yoga.YogaAlign FlexEnd
    static ::UnityEngine::Yoga::YogaAlign _get_FlexEnd();
    // Set static field: static public UnityEngine.Yoga.YogaAlign FlexEnd
    static void _set_FlexEnd(::UnityEngine::Yoga::YogaAlign value);
    // static field const value: static public UnityEngine.Yoga.YogaAlign Stretch
    static constexpr const int Stretch = 4;
    // Get static field: static public UnityEngine.Yoga.YogaAlign Stretch
    static ::UnityEngine::Yoga::YogaAlign _get_Stretch();
    // Set static field: static public UnityEngine.Yoga.YogaAlign Stretch
    static void _set_Stretch(::UnityEngine::Yoga::YogaAlign value);
    // static field const value: static public UnityEngine.Yoga.YogaAlign Baseline
    static constexpr const int Baseline = 5;
    // Get static field: static public UnityEngine.Yoga.YogaAlign Baseline
    static ::UnityEngine::Yoga::YogaAlign _get_Baseline();
    // Set static field: static public UnityEngine.Yoga.YogaAlign Baseline
    static void _set_Baseline(::UnityEngine::Yoga::YogaAlign value);
    // static field const value: static public UnityEngine.Yoga.YogaAlign SpaceBetween
    static constexpr const int SpaceBetween = 6;
    // Get static field: static public UnityEngine.Yoga.YogaAlign SpaceBetween
    static ::UnityEngine::Yoga::YogaAlign _get_SpaceBetween();
    // Set static field: static public UnityEngine.Yoga.YogaAlign SpaceBetween
    static void _set_SpaceBetween(::UnityEngine::Yoga::YogaAlign value);
    // static field const value: static public UnityEngine.Yoga.YogaAlign SpaceAround
    static constexpr const int SpaceAround = 7;
    // Get static field: static public UnityEngine.Yoga.YogaAlign SpaceAround
    static ::UnityEngine::Yoga::YogaAlign _get_SpaceAround();
    // Set static field: static public UnityEngine.Yoga.YogaAlign SpaceAround
    static void _set_SpaceAround(::UnityEngine::Yoga::YogaAlign value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Yoga.YogaAlign
  #pragma pack(pop)
  static check_size<sizeof(YogaAlign), 0 + sizeof(int)> __UnityEngine_Yoga_YogaAlignSizeCheck;
  static_assert(sizeof(YogaAlign) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
