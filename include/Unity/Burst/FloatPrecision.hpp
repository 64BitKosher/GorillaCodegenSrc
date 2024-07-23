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
// Type namespace: Unity.Burst
namespace Unity::Burst {
  // Forward declaring type: FloatPrecision
  struct FloatPrecision;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::FloatPrecision, "Unity.Burst", "FloatPrecision");
// Type namespace: Unity.Burst
namespace Unity::Burst {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Burst.FloatPrecision
  // [TokenAttribute] Offset: FFFFFFFF
  struct FloatPrecision/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FloatPrecision
    constexpr FloatPrecision(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Unity.Burst.FloatPrecision Standard
    static constexpr const int Standard = 0;
    // Get static field: static public Unity.Burst.FloatPrecision Standard
    static ::Unity::Burst::FloatPrecision _get_Standard();
    // Set static field: static public Unity.Burst.FloatPrecision Standard
    static void _set_Standard(::Unity::Burst::FloatPrecision value);
    // static field const value: static public Unity.Burst.FloatPrecision High
    static constexpr const int High = 1;
    // Get static field: static public Unity.Burst.FloatPrecision High
    static ::Unity::Burst::FloatPrecision _get_High();
    // Set static field: static public Unity.Burst.FloatPrecision High
    static void _set_High(::Unity::Burst::FloatPrecision value);
    // static field const value: static public Unity.Burst.FloatPrecision Medium
    static constexpr const int Medium = 2;
    // Get static field: static public Unity.Burst.FloatPrecision Medium
    static ::Unity::Burst::FloatPrecision _get_Medium();
    // Set static field: static public Unity.Burst.FloatPrecision Medium
    static void _set_Medium(::Unity::Burst::FloatPrecision value);
    // static field const value: static public Unity.Burst.FloatPrecision Low
    static constexpr const int Low = 3;
    // Get static field: static public Unity.Burst.FloatPrecision Low
    static ::Unity::Burst::FloatPrecision _get_Low();
    // Set static field: static public Unity.Burst.FloatPrecision Low
    static void _set_Low(::Unity::Burst::FloatPrecision value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Unity.Burst.FloatPrecision
  #pragma pack(pop)
  static check_size<sizeof(FloatPrecision), 0 + sizeof(int)> __Unity_Burst_FloatPrecisionSizeCheck;
  static_assert(sizeof(FloatPrecision) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
