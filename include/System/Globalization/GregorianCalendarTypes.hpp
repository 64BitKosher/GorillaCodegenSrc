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
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: GregorianCalendarTypes
  struct GregorianCalendarTypes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::GregorianCalendarTypes, "System.Globalization", "GregorianCalendarTypes");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.GregorianCalendarTypes
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  struct GregorianCalendarTypes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GregorianCalendarTypes
    constexpr GregorianCalendarTypes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Globalization.GregorianCalendarTypes Localized
    static constexpr const int Localized = 1;
    // Get static field: static public System.Globalization.GregorianCalendarTypes Localized
    static ::System::Globalization::GregorianCalendarTypes _get_Localized();
    // Set static field: static public System.Globalization.GregorianCalendarTypes Localized
    static void _set_Localized(::System::Globalization::GregorianCalendarTypes value);
    // static field const value: static public System.Globalization.GregorianCalendarTypes USEnglish
    static constexpr const int USEnglish = 2;
    // Get static field: static public System.Globalization.GregorianCalendarTypes USEnglish
    static ::System::Globalization::GregorianCalendarTypes _get_USEnglish();
    // Set static field: static public System.Globalization.GregorianCalendarTypes USEnglish
    static void _set_USEnglish(::System::Globalization::GregorianCalendarTypes value);
    // static field const value: static public System.Globalization.GregorianCalendarTypes MiddleEastFrench
    static constexpr const int MiddleEastFrench = 9;
    // Get static field: static public System.Globalization.GregorianCalendarTypes MiddleEastFrench
    static ::System::Globalization::GregorianCalendarTypes _get_MiddleEastFrench();
    // Set static field: static public System.Globalization.GregorianCalendarTypes MiddleEastFrench
    static void _set_MiddleEastFrench(::System::Globalization::GregorianCalendarTypes value);
    // static field const value: static public System.Globalization.GregorianCalendarTypes Arabic
    static constexpr const int Arabic = 10;
    // Get static field: static public System.Globalization.GregorianCalendarTypes Arabic
    static ::System::Globalization::GregorianCalendarTypes _get_Arabic();
    // Set static field: static public System.Globalization.GregorianCalendarTypes Arabic
    static void _set_Arabic(::System::Globalization::GregorianCalendarTypes value);
    // static field const value: static public System.Globalization.GregorianCalendarTypes TransliteratedEnglish
    static constexpr const int TransliteratedEnglish = 11;
    // Get static field: static public System.Globalization.GregorianCalendarTypes TransliteratedEnglish
    static ::System::Globalization::GregorianCalendarTypes _get_TransliteratedEnglish();
    // Set static field: static public System.Globalization.GregorianCalendarTypes TransliteratedEnglish
    static void _set_TransliteratedEnglish(::System::Globalization::GregorianCalendarTypes value);
    // static field const value: static public System.Globalization.GregorianCalendarTypes TransliteratedFrench
    static constexpr const int TransliteratedFrench = 12;
    // Get static field: static public System.Globalization.GregorianCalendarTypes TransliteratedFrench
    static ::System::Globalization::GregorianCalendarTypes _get_TransliteratedFrench();
    // Set static field: static public System.Globalization.GregorianCalendarTypes TransliteratedFrench
    static void _set_TransliteratedFrench(::System::Globalization::GregorianCalendarTypes value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Globalization.GregorianCalendarTypes
  #pragma pack(pop)
  static check_size<sizeof(GregorianCalendarTypes), 0 + sizeof(int)> __System_Globalization_GregorianCalendarTypesSizeCheck;
  static_assert(sizeof(GregorianCalendarTypes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
