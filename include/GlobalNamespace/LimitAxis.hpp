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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LimitAxis
  struct LimitAxis;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LimitAxis, "", "LimitAxis");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: LimitAxis
  // [TokenAttribute] Offset: FFFFFFFF
  struct LimitAxis/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LimitAxis
    constexpr LimitAxis(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LimitAxis NoMovement
    static constexpr const int NoMovement = 0;
    // Get static field: static public LimitAxis NoMovement
    static ::GlobalNamespace::LimitAxis _get_NoMovement();
    // Set static field: static public LimitAxis NoMovement
    static void _set_NoMovement(::GlobalNamespace::LimitAxis value);
    // static field const value: static public LimitAxis YAxis
    static constexpr const int YAxis = 1;
    // Get static field: static public LimitAxis YAxis
    static ::GlobalNamespace::LimitAxis _get_YAxis();
    // Set static field: static public LimitAxis YAxis
    static void _set_YAxis(::GlobalNamespace::LimitAxis value);
    // static field const value: static public LimitAxis XAxis
    static constexpr const int XAxis = 2;
    // Get static field: static public LimitAxis XAxis
    static ::GlobalNamespace::LimitAxis _get_XAxis();
    // Set static field: static public LimitAxis XAxis
    static void _set_XAxis(::GlobalNamespace::LimitAxis value);
    // static field const value: static public LimitAxis ZAxis
    static constexpr const int ZAxis = 3;
    // Get static field: static public LimitAxis ZAxis
    static ::GlobalNamespace::LimitAxis _get_ZAxis();
    // Set static field: static public LimitAxis ZAxis
    static void _set_ZAxis(::GlobalNamespace::LimitAxis value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // LimitAxis
  #pragma pack(pop)
  static check_size<sizeof(LimitAxis), 0 + sizeof(int)> __GlobalNamespace_LimitAxisSizeCheck;
  static_assert(sizeof(LimitAxis) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
