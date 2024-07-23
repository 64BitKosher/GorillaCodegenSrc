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
  // Forward declaring type: YogaDirection
  struct YogaDirection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaDirection, "UnityEngine.Yoga", "YogaDirection");
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Yoga.YogaDirection
  // [TokenAttribute] Offset: FFFFFFFF
  struct YogaDirection/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: YogaDirection
    constexpr YogaDirection(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Yoga.YogaDirection Inherit
    static constexpr const int Inherit = 0;
    // Get static field: static public UnityEngine.Yoga.YogaDirection Inherit
    static ::UnityEngine::Yoga::YogaDirection _get_Inherit();
    // Set static field: static public UnityEngine.Yoga.YogaDirection Inherit
    static void _set_Inherit(::UnityEngine::Yoga::YogaDirection value);
    // static field const value: static public UnityEngine.Yoga.YogaDirection LTR
    static constexpr const int LTR = 1;
    // Get static field: static public UnityEngine.Yoga.YogaDirection LTR
    static ::UnityEngine::Yoga::YogaDirection _get_LTR();
    // Set static field: static public UnityEngine.Yoga.YogaDirection LTR
    static void _set_LTR(::UnityEngine::Yoga::YogaDirection value);
    // static field const value: static public UnityEngine.Yoga.YogaDirection RTL
    static constexpr const int RTL = 2;
    // Get static field: static public UnityEngine.Yoga.YogaDirection RTL
    static ::UnityEngine::Yoga::YogaDirection _get_RTL();
    // Set static field: static public UnityEngine.Yoga.YogaDirection RTL
    static void _set_RTL(::UnityEngine::Yoga::YogaDirection value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Yoga.YogaDirection
  #pragma pack(pop)
  static check_size<sizeof(YogaDirection), 0 + sizeof(int)> __UnityEngine_Yoga_YogaDirectionSizeCheck;
  static_assert(sizeof(YogaDirection) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
