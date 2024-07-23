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
  // Forward declaring type: CultureTypes
  struct CultureTypes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CultureTypes, "System.Globalization", "CultureTypes");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.CultureTypes
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct CultureTypes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CultureTypes
    constexpr CultureTypes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Globalization.CultureTypes NeutralCultures
    static constexpr const int NeutralCultures = 1;
    // Get static field: static public System.Globalization.CultureTypes NeutralCultures
    static ::System::Globalization::CultureTypes _get_NeutralCultures();
    // Set static field: static public System.Globalization.CultureTypes NeutralCultures
    static void _set_NeutralCultures(::System::Globalization::CultureTypes value);
    // static field const value: static public System.Globalization.CultureTypes SpecificCultures
    static constexpr const int SpecificCultures = 2;
    // Get static field: static public System.Globalization.CultureTypes SpecificCultures
    static ::System::Globalization::CultureTypes _get_SpecificCultures();
    // Set static field: static public System.Globalization.CultureTypes SpecificCultures
    static void _set_SpecificCultures(::System::Globalization::CultureTypes value);
    // static field const value: static public System.Globalization.CultureTypes InstalledWin32Cultures
    static constexpr const int InstalledWin32Cultures = 4;
    // Get static field: static public System.Globalization.CultureTypes InstalledWin32Cultures
    static ::System::Globalization::CultureTypes _get_InstalledWin32Cultures();
    // Set static field: static public System.Globalization.CultureTypes InstalledWin32Cultures
    static void _set_InstalledWin32Cultures(::System::Globalization::CultureTypes value);
    // static field const value: static public System.Globalization.CultureTypes AllCultures
    static constexpr const int AllCultures = 7;
    // Get static field: static public System.Globalization.CultureTypes AllCultures
    static ::System::Globalization::CultureTypes _get_AllCultures();
    // Set static field: static public System.Globalization.CultureTypes AllCultures
    static void _set_AllCultures(::System::Globalization::CultureTypes value);
    // static field const value: static public System.Globalization.CultureTypes UserCustomCulture
    static constexpr const int UserCustomCulture = 8;
    // Get static field: static public System.Globalization.CultureTypes UserCustomCulture
    static ::System::Globalization::CultureTypes _get_UserCustomCulture();
    // Set static field: static public System.Globalization.CultureTypes UserCustomCulture
    static void _set_UserCustomCulture(::System::Globalization::CultureTypes value);
    // static field const value: static public System.Globalization.CultureTypes ReplacementCultures
    static constexpr const int ReplacementCultures = 16;
    // Get static field: static public System.Globalization.CultureTypes ReplacementCultures
    static ::System::Globalization::CultureTypes _get_ReplacementCultures();
    // Set static field: static public System.Globalization.CultureTypes ReplacementCultures
    static void _set_ReplacementCultures(::System::Globalization::CultureTypes value);
    // static field const value: static public System.Globalization.CultureTypes WindowsOnlyCultures
    static constexpr const int WindowsOnlyCultures = 32;
    // Get static field: static public System.Globalization.CultureTypes WindowsOnlyCultures
    static ::System::Globalization::CultureTypes _get_WindowsOnlyCultures();
    // Set static field: static public System.Globalization.CultureTypes WindowsOnlyCultures
    static void _set_WindowsOnlyCultures(::System::Globalization::CultureTypes value);
    // static field const value: static public System.Globalization.CultureTypes FrameworkCultures
    static constexpr const int FrameworkCultures = 64;
    // Get static field: static public System.Globalization.CultureTypes FrameworkCultures
    static ::System::Globalization::CultureTypes _get_FrameworkCultures();
    // Set static field: static public System.Globalization.CultureTypes FrameworkCultures
    static void _set_FrameworkCultures(::System::Globalization::CultureTypes value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Globalization.CultureTypes
  #pragma pack(pop)
  static check_size<sizeof(CultureTypes), 0 + sizeof(int)> __System_Globalization_CultureTypesSizeCheck;
  static_assert(sizeof(CultureTypes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
