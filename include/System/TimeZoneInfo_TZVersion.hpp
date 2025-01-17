// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.TimeZoneInfo
#include "System/TimeZoneInfo.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZoneInfo::TZVersion, "System", "TimeZoneInfo/TZVersion");
// Type namespace: System
namespace System {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: System.TimeZoneInfo/TZVersion
  // [TokenAttribute] Offset: FFFFFFFF
  struct TimeZoneInfo::TZVersion/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: TZVersion
    constexpr TZVersion(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public System.TimeZoneInfo/TZVersion V1
    static constexpr const uint8_t V1 = 0u;
    // Get static field: static public System.TimeZoneInfo/TZVersion V1
    static ::System::TimeZoneInfo::TZVersion _get_V1();
    // Set static field: static public System.TimeZoneInfo/TZVersion V1
    static void _set_V1(::System::TimeZoneInfo::TZVersion value);
    // static field const value: static public System.TimeZoneInfo/TZVersion V2
    static constexpr const uint8_t V2 = 1u;
    // Get static field: static public System.TimeZoneInfo/TZVersion V2
    static ::System::TimeZoneInfo::TZVersion _get_V2();
    // Set static field: static public System.TimeZoneInfo/TZVersion V2
    static void _set_V2(::System::TimeZoneInfo::TZVersion value);
    // static field const value: static public System.TimeZoneInfo/TZVersion V3
    static constexpr const uint8_t V3 = 2u;
    // Get static field: static public System.TimeZoneInfo/TZVersion V3
    static ::System::TimeZoneInfo::TZVersion _get_V3();
    // Set static field: static public System.TimeZoneInfo/TZVersion V3
    static void _set_V3(::System::TimeZoneInfo::TZVersion value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // System.TimeZoneInfo/TZVersion
  #pragma pack(pop)
  static check_size<sizeof(TimeZoneInfo::TZVersion), 0 + sizeof(uint8_t)> __System_TimeZoneInfo_TZVersionSizeCheck;
  static_assert(sizeof(TimeZoneInfo::TZVersion) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
