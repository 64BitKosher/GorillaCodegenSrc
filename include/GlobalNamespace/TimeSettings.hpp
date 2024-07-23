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
  // Forward declaring type: TimeSettings
  struct TimeSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimeSettings, "", "TimeSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TimeSettings
  // [TokenAttribute] Offset: FFFFFFFF
  struct TimeSettings/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TimeSettings
    constexpr TimeSettings(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TimeSettings Static
    static constexpr const int Static = 0;
    // Get static field: static public TimeSettings Static
    static ::GlobalNamespace::TimeSettings _get_Static();
    // Set static field: static public TimeSettings Static
    static void _set_Static(::GlobalNamespace::TimeSettings value);
    // static field const value: static public TimeSettings Normal
    static constexpr const int Normal = 1;
    // Get static field: static public TimeSettings Normal
    static ::GlobalNamespace::TimeSettings _get_Normal();
    // Set static field: static public TimeSettings Normal
    static void _set_Normal(::GlobalNamespace::TimeSettings value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // TimeSettings
  #pragma pack(pop)
  static check_size<sizeof(TimeSettings), 0 + sizeof(int)> __GlobalNamespace_TimeSettingsSizeCheck;
  static_assert(sizeof(TimeSettings) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
