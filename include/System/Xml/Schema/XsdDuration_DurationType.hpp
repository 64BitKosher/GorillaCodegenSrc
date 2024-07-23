// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XsdDuration
#include "System/Xml/Schema/XsdDuration.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdDuration::DurationType, "System.Xml.Schema", "XsdDuration/DurationType");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XsdDuration/DurationType
  // [TokenAttribute] Offset: FFFFFFFF
  struct XsdDuration::DurationType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DurationType
    constexpr DurationType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.Schema.XsdDuration/DurationType Duration
    static constexpr const int Duration = 0;
    // Get static field: static public System.Xml.Schema.XsdDuration/DurationType Duration
    static ::System::Xml::Schema::XsdDuration::DurationType _get_Duration();
    // Set static field: static public System.Xml.Schema.XsdDuration/DurationType Duration
    static void _set_Duration(::System::Xml::Schema::XsdDuration::DurationType value);
    // static field const value: static public System.Xml.Schema.XsdDuration/DurationType YearMonthDuration
    static constexpr const int YearMonthDuration = 1;
    // Get static field: static public System.Xml.Schema.XsdDuration/DurationType YearMonthDuration
    static ::System::Xml::Schema::XsdDuration::DurationType _get_YearMonthDuration();
    // Set static field: static public System.Xml.Schema.XsdDuration/DurationType YearMonthDuration
    static void _set_YearMonthDuration(::System::Xml::Schema::XsdDuration::DurationType value);
    // static field const value: static public System.Xml.Schema.XsdDuration/DurationType DayTimeDuration
    static constexpr const int DayTimeDuration = 2;
    // Get static field: static public System.Xml.Schema.XsdDuration/DurationType DayTimeDuration
    static ::System::Xml::Schema::XsdDuration::DurationType _get_DayTimeDuration();
    // Set static field: static public System.Xml.Schema.XsdDuration/DurationType DayTimeDuration
    static void _set_DayTimeDuration(::System::Xml::Schema::XsdDuration::DurationType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.Schema.XsdDuration/DurationType
  #pragma pack(pop)
  static check_size<sizeof(XsdDuration::DurationType), 0 + sizeof(int)> __System_Xml_Schema_XsdDuration_DurationTypeSizeCheck;
  static_assert(sizeof(XsdDuration::DurationType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
