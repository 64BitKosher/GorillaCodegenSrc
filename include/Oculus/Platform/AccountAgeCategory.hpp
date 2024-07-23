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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: AccountAgeCategory
  struct AccountAgeCategory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AccountAgeCategory, "Oculus.Platform", "AccountAgeCategory");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.AccountAgeCategory
  // [TokenAttribute] Offset: FFFFFFFF
  struct AccountAgeCategory/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AccountAgeCategory
    constexpr AccountAgeCategory(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Oculus.Platform.AccountAgeCategory Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.AccountAgeCategory Unknown
    static ::Oculus::Platform::AccountAgeCategory _get_Unknown();
    // Set static field: static public Oculus.Platform.AccountAgeCategory Unknown
    static void _set_Unknown(::Oculus::Platform::AccountAgeCategory value);
    // static field const value: static public Oculus.Platform.AccountAgeCategory Ch
    static constexpr const int Ch = 1;
    // Get static field: static public Oculus.Platform.AccountAgeCategory Ch
    static ::Oculus::Platform::AccountAgeCategory _get_Ch();
    // Set static field: static public Oculus.Platform.AccountAgeCategory Ch
    static void _set_Ch(::Oculus::Platform::AccountAgeCategory value);
    // static field const value: static public Oculus.Platform.AccountAgeCategory Tn
    static constexpr const int Tn = 2;
    // Get static field: static public Oculus.Platform.AccountAgeCategory Tn
    static ::Oculus::Platform::AccountAgeCategory _get_Tn();
    // Set static field: static public Oculus.Platform.AccountAgeCategory Tn
    static void _set_Tn(::Oculus::Platform::AccountAgeCategory value);
    // static field const value: static public Oculus.Platform.AccountAgeCategory Ad
    static constexpr const int Ad = 3;
    // Get static field: static public Oculus.Platform.AccountAgeCategory Ad
    static ::Oculus::Platform::AccountAgeCategory _get_Ad();
    // Set static field: static public Oculus.Platform.AccountAgeCategory Ad
    static void _set_Ad(::Oculus::Platform::AccountAgeCategory value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Platform.AccountAgeCategory
  #pragma pack(pop)
  static check_size<sizeof(AccountAgeCategory), 0 + sizeof(int)> __Oculus_Platform_AccountAgeCategorySizeCheck;
  static_assert(sizeof(AccountAgeCategory) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"