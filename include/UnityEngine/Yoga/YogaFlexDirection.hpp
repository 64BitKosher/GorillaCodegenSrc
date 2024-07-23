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
  // Forward declaring type: YogaFlexDirection
  struct YogaFlexDirection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaFlexDirection, "UnityEngine.Yoga", "YogaFlexDirection");
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Yoga.YogaFlexDirection
  // [TokenAttribute] Offset: FFFFFFFF
  struct YogaFlexDirection/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: YogaFlexDirection
    constexpr YogaFlexDirection(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Yoga.YogaFlexDirection Column
    static constexpr const int Column = 0;
    // Get static field: static public UnityEngine.Yoga.YogaFlexDirection Column
    static ::UnityEngine::Yoga::YogaFlexDirection _get_Column();
    // Set static field: static public UnityEngine.Yoga.YogaFlexDirection Column
    static void _set_Column(::UnityEngine::Yoga::YogaFlexDirection value);
    // static field const value: static public UnityEngine.Yoga.YogaFlexDirection ColumnReverse
    static constexpr const int ColumnReverse = 1;
    // Get static field: static public UnityEngine.Yoga.YogaFlexDirection ColumnReverse
    static ::UnityEngine::Yoga::YogaFlexDirection _get_ColumnReverse();
    // Set static field: static public UnityEngine.Yoga.YogaFlexDirection ColumnReverse
    static void _set_ColumnReverse(::UnityEngine::Yoga::YogaFlexDirection value);
    // static field const value: static public UnityEngine.Yoga.YogaFlexDirection Row
    static constexpr const int Row = 2;
    // Get static field: static public UnityEngine.Yoga.YogaFlexDirection Row
    static ::UnityEngine::Yoga::YogaFlexDirection _get_Row();
    // Set static field: static public UnityEngine.Yoga.YogaFlexDirection Row
    static void _set_Row(::UnityEngine::Yoga::YogaFlexDirection value);
    // static field const value: static public UnityEngine.Yoga.YogaFlexDirection RowReverse
    static constexpr const int RowReverse = 3;
    // Get static field: static public UnityEngine.Yoga.YogaFlexDirection RowReverse
    static ::UnityEngine::Yoga::YogaFlexDirection _get_RowReverse();
    // Set static field: static public UnityEngine.Yoga.YogaFlexDirection RowReverse
    static void _set_RowReverse(::UnityEngine::Yoga::YogaFlexDirection value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Yoga.YogaFlexDirection
  #pragma pack(pop)
  static check_size<sizeof(YogaFlexDirection), 0 + sizeof(int)> __UnityEngine_Yoga_YogaFlexDirectionSizeCheck;
  static_assert(sizeof(YogaFlexDirection) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
