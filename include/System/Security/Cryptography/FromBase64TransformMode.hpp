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
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: FromBase64TransformMode
  struct FromBase64TransformMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::FromBase64TransformMode, "System.Security.Cryptography", "FromBase64TransformMode");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.FromBase64TransformMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  struct FromBase64TransformMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FromBase64TransformMode
    constexpr FromBase64TransformMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.FromBase64TransformMode IgnoreWhiteSpaces
    static constexpr const int IgnoreWhiteSpaces = 0;
    // Get static field: static public System.Security.Cryptography.FromBase64TransformMode IgnoreWhiteSpaces
    static ::System::Security::Cryptography::FromBase64TransformMode _get_IgnoreWhiteSpaces();
    // Set static field: static public System.Security.Cryptography.FromBase64TransformMode IgnoreWhiteSpaces
    static void _set_IgnoreWhiteSpaces(::System::Security::Cryptography::FromBase64TransformMode value);
    // static field const value: static public System.Security.Cryptography.FromBase64TransformMode DoNotIgnoreWhiteSpaces
    static constexpr const int DoNotIgnoreWhiteSpaces = 1;
    // Get static field: static public System.Security.Cryptography.FromBase64TransformMode DoNotIgnoreWhiteSpaces
    static ::System::Security::Cryptography::FromBase64TransformMode _get_DoNotIgnoreWhiteSpaces();
    // Set static field: static public System.Security.Cryptography.FromBase64TransformMode DoNotIgnoreWhiteSpaces
    static void _set_DoNotIgnoreWhiteSpaces(::System::Security::Cryptography::FromBase64TransformMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Security.Cryptography.FromBase64TransformMode
  #pragma pack(pop)
  static check_size<sizeof(FromBase64TransformMode), 0 + sizeof(int)> __System_Security_Cryptography_FromBase64TransformModeSizeCheck;
  static_assert(sizeof(FromBase64TransformMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"