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
// Type namespace: System.Net.Security
namespace System::Net::Security {
  // Forward declaring type: EncryptionPolicy
  struct EncryptionPolicy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::EncryptionPolicy, "System.Net.Security", "EncryptionPolicy");
// Type namespace: System.Net.Security
namespace System::Net::Security {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Security.EncryptionPolicy
  // [TokenAttribute] Offset: FFFFFFFF
  struct EncryptionPolicy/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EncryptionPolicy
    constexpr EncryptionPolicy(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Security.EncryptionPolicy RequireEncryption
    static constexpr const int RequireEncryption = 0;
    // Get static field: static public System.Net.Security.EncryptionPolicy RequireEncryption
    static ::System::Net::Security::EncryptionPolicy _get_RequireEncryption();
    // Set static field: static public System.Net.Security.EncryptionPolicy RequireEncryption
    static void _set_RequireEncryption(::System::Net::Security::EncryptionPolicy value);
    // static field const value: static public System.Net.Security.EncryptionPolicy AllowNoEncryption
    static constexpr const int AllowNoEncryption = 1;
    // Get static field: static public System.Net.Security.EncryptionPolicy AllowNoEncryption
    static ::System::Net::Security::EncryptionPolicy _get_AllowNoEncryption();
    // Set static field: static public System.Net.Security.EncryptionPolicy AllowNoEncryption
    static void _set_AllowNoEncryption(::System::Net::Security::EncryptionPolicy value);
    // static field const value: static public System.Net.Security.EncryptionPolicy NoEncryption
    static constexpr const int NoEncryption = 2;
    // Get static field: static public System.Net.Security.EncryptionPolicy NoEncryption
    static ::System::Net::Security::EncryptionPolicy _get_NoEncryption();
    // Set static field: static public System.Net.Security.EncryptionPolicy NoEncryption
    static void _set_NoEncryption(::System::Net::Security::EncryptionPolicy value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.Security.EncryptionPolicy
  #pragma pack(pop)
  static check_size<sizeof(EncryptionPolicy), 0 + sizeof(int)> __System_Net_Security_EncryptionPolicySizeCheck;
  static_assert(sizeof(EncryptionPolicy) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
