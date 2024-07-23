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
  // Forward declaring type: RSAEncryptionPaddingMode
  struct RSAEncryptionPaddingMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAEncryptionPaddingMode, "System.Security.Cryptography", "RSAEncryptionPaddingMode");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RSAEncryptionPaddingMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct RSAEncryptionPaddingMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RSAEncryptionPaddingMode
    constexpr RSAEncryptionPaddingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.RSAEncryptionPaddingMode Pkcs1
    static constexpr const int Pkcs1 = 0;
    // Get static field: static public System.Security.Cryptography.RSAEncryptionPaddingMode Pkcs1
    static ::System::Security::Cryptography::RSAEncryptionPaddingMode _get_Pkcs1();
    // Set static field: static public System.Security.Cryptography.RSAEncryptionPaddingMode Pkcs1
    static void _set_Pkcs1(::System::Security::Cryptography::RSAEncryptionPaddingMode value);
    // static field const value: static public System.Security.Cryptography.RSAEncryptionPaddingMode Oaep
    static constexpr const int Oaep = 1;
    // Get static field: static public System.Security.Cryptography.RSAEncryptionPaddingMode Oaep
    static ::System::Security::Cryptography::RSAEncryptionPaddingMode _get_Oaep();
    // Set static field: static public System.Security.Cryptography.RSAEncryptionPaddingMode Oaep
    static void _set_Oaep(::System::Security::Cryptography::RSAEncryptionPaddingMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Security.Cryptography.RSAEncryptionPaddingMode
  #pragma pack(pop)
  static check_size<sizeof(RSAEncryptionPaddingMode), 0 + sizeof(int)> __System_Security_Cryptography_RSAEncryptionPaddingModeSizeCheck;
  static_assert(sizeof(RSAEncryptionPaddingMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"