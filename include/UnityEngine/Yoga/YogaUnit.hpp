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
  // Forward declaring type: YogaUnit
  struct YogaUnit;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaUnit, "UnityEngine.Yoga", "YogaUnit");
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Yoga.YogaUnit
  // [TokenAttribute] Offset: FFFFFFFF
  struct YogaUnit/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: YogaUnit
    constexpr YogaUnit(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Yoga.YogaUnit Undefined
    static constexpr const int Undefined = 0;
    // Get static field: static public UnityEngine.Yoga.YogaUnit Undefined
    static ::UnityEngine::Yoga::YogaUnit _get_Undefined();
    // Set static field: static public UnityEngine.Yoga.YogaUnit Undefined
    static void _set_Undefined(::UnityEngine::Yoga::YogaUnit value);
    // static field const value: static public UnityEngine.Yoga.YogaUnit Point
    static constexpr const int Point = 1;
    // Get static field: static public UnityEngine.Yoga.YogaUnit Point
    static ::UnityEngine::Yoga::YogaUnit _get_Point();
    // Set static field: static public UnityEngine.Yoga.YogaUnit Point
    static void _set_Point(::UnityEngine::Yoga::YogaUnit value);
    // static field const value: static public UnityEngine.Yoga.YogaUnit Percent
    static constexpr const int Percent = 2;
    // Get static field: static public UnityEngine.Yoga.YogaUnit Percent
    static ::UnityEngine::Yoga::YogaUnit _get_Percent();
    // Set static field: static public UnityEngine.Yoga.YogaUnit Percent
    static void _set_Percent(::UnityEngine::Yoga::YogaUnit value);
    // static field const value: static public UnityEngine.Yoga.YogaUnit Auto
    static constexpr const int Auto = 3;
    // Get static field: static public UnityEngine.Yoga.YogaUnit Auto
    static ::UnityEngine::Yoga::YogaUnit _get_Auto();
    // Set static field: static public UnityEngine.Yoga.YogaUnit Auto
    static void _set_Auto(::UnityEngine::Yoga::YogaUnit value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Yoga.YogaUnit
  #pragma pack(pop)
  static check_size<sizeof(YogaUnit), 0 + sizeof(int)> __UnityEngine_Yoga_YogaUnitSizeCheck;
  static_assert(sizeof(YogaUnit) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
