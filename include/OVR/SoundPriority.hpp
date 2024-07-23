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
// Type namespace: OVR
namespace OVR {
  // Forward declaring type: SoundPriority
  struct SoundPriority;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::SoundPriority, "OVR", "SoundPriority");
// Type namespace: OVR
namespace OVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.SoundPriority
  // [TokenAttribute] Offset: FFFFFFFF
  struct SoundPriority/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SoundPriority
    constexpr SoundPriority(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.SoundPriority VeryLow
    static constexpr const int VeryLow = -2;
    // Get static field: static public OVR.SoundPriority VeryLow
    static ::OVR::SoundPriority _get_VeryLow();
    // Set static field: static public OVR.SoundPriority VeryLow
    static void _set_VeryLow(::OVR::SoundPriority value);
    // static field const value: static public OVR.SoundPriority Low
    static constexpr const int Low = -1;
    // Get static field: static public OVR.SoundPriority Low
    static ::OVR::SoundPriority _get_Low();
    // Set static field: static public OVR.SoundPriority Low
    static void _set_Low(::OVR::SoundPriority value);
    // static field const value: static public OVR.SoundPriority Default
    static constexpr const int Default = 0;
    // Get static field: static public OVR.SoundPriority Default
    static ::OVR::SoundPriority _get_Default();
    // Set static field: static public OVR.SoundPriority Default
    static void _set_Default(::OVR::SoundPriority value);
    // static field const value: static public OVR.SoundPriority High
    static constexpr const int High = 1;
    // Get static field: static public OVR.SoundPriority High
    static ::OVR::SoundPriority _get_High();
    // Set static field: static public OVR.SoundPriority High
    static void _set_High(::OVR::SoundPriority value);
    // static field const value: static public OVR.SoundPriority VeryHigh
    static constexpr const int VeryHigh = 2;
    // Get static field: static public OVR.SoundPriority VeryHigh
    static ::OVR::SoundPriority _get_VeryHigh();
    // Set static field: static public OVR.SoundPriority VeryHigh
    static void _set_VeryHigh(::OVR::SoundPriority value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVR.SoundPriority
  #pragma pack(pop)
  static check_size<sizeof(SoundPriority), 0 + sizeof(int)> __OVR_SoundPrioritySizeCheck;
  static_assert(sizeof(SoundPriority) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
