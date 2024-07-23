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
  // Forward declaring type: YogaWrap
  struct YogaWrap;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaWrap, "UnityEngine.Yoga", "YogaWrap");
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Yoga.YogaWrap
  // [TokenAttribute] Offset: FFFFFFFF
  struct YogaWrap/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: YogaWrap
    constexpr YogaWrap(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Yoga.YogaWrap NoWrap
    static constexpr const int NoWrap = 0;
    // Get static field: static public UnityEngine.Yoga.YogaWrap NoWrap
    static ::UnityEngine::Yoga::YogaWrap _get_NoWrap();
    // Set static field: static public UnityEngine.Yoga.YogaWrap NoWrap
    static void _set_NoWrap(::UnityEngine::Yoga::YogaWrap value);
    // static field const value: static public UnityEngine.Yoga.YogaWrap Wrap
    static constexpr const int Wrap = 1;
    // Get static field: static public UnityEngine.Yoga.YogaWrap Wrap
    static ::UnityEngine::Yoga::YogaWrap _get_Wrap();
    // Set static field: static public UnityEngine.Yoga.YogaWrap Wrap
    static void _set_Wrap(::UnityEngine::Yoga::YogaWrap value);
    // static field const value: static public UnityEngine.Yoga.YogaWrap WrapReverse
    static constexpr const int WrapReverse = 2;
    // Get static field: static public UnityEngine.Yoga.YogaWrap WrapReverse
    static ::UnityEngine::Yoga::YogaWrap _get_WrapReverse();
    // Set static field: static public UnityEngine.Yoga.YogaWrap WrapReverse
    static void _set_WrapReverse(::UnityEngine::Yoga::YogaWrap value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Yoga.YogaWrap
  #pragma pack(pop)
  static check_size<sizeof(YogaWrap), 0 + sizeof(int)> __UnityEngine_Yoga_YogaWrapSizeCheck;
  static_assert(sizeof(YogaWrap) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"