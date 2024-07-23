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
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509ContentType
  struct X509ContentType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ContentType, "System.Security.Cryptography.X509Certificates", "X509ContentType");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ContentType
  // [TokenAttribute] Offset: FFFFFFFF
  struct X509ContentType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: X509ContentType
    constexpr X509ContentType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ContentType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ContentType Unknown
    static ::System::Security::Cryptography::X509Certificates::X509ContentType _get_Unknown();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ContentType Unknown
    static void _set_Unknown(::System::Security::Cryptography::X509Certificates::X509ContentType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ContentType Cert
    static constexpr const int Cert = 1;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ContentType Cert
    static ::System::Security::Cryptography::X509Certificates::X509ContentType _get_Cert();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ContentType Cert
    static void _set_Cert(::System::Security::Cryptography::X509Certificates::X509ContentType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ContentType SerializedCert
    static constexpr const int SerializedCert = 2;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ContentType SerializedCert
    static ::System::Security::Cryptography::X509Certificates::X509ContentType _get_SerializedCert();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ContentType SerializedCert
    static void _set_SerializedCert(::System::Security::Cryptography::X509Certificates::X509ContentType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ContentType Pfx
    static constexpr const int Pfx = 3;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ContentType Pfx
    static ::System::Security::Cryptography::X509Certificates::X509ContentType _get_Pfx();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ContentType Pfx
    static void _set_Pfx(::System::Security::Cryptography::X509Certificates::X509ContentType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ContentType Pkcs12
    static constexpr const int Pkcs12 = 3;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ContentType Pkcs12
    static ::System::Security::Cryptography::X509Certificates::X509ContentType _get_Pkcs12();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ContentType Pkcs12
    static void _set_Pkcs12(::System::Security::Cryptography::X509Certificates::X509ContentType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ContentType SerializedStore
    static constexpr const int SerializedStore = 4;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ContentType SerializedStore
    static ::System::Security::Cryptography::X509Certificates::X509ContentType _get_SerializedStore();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ContentType SerializedStore
    static void _set_SerializedStore(::System::Security::Cryptography::X509Certificates::X509ContentType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ContentType Pkcs7
    static constexpr const int Pkcs7 = 5;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ContentType Pkcs7
    static ::System::Security::Cryptography::X509Certificates::X509ContentType _get_Pkcs7();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ContentType Pkcs7
    static void _set_Pkcs7(::System::Security::Cryptography::X509Certificates::X509ContentType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ContentType Authenticode
    static constexpr const int Authenticode = 6;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ContentType Authenticode
    static ::System::Security::Cryptography::X509Certificates::X509ContentType _get_Authenticode();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ContentType Authenticode
    static void _set_Authenticode(::System::Security::Cryptography::X509Certificates::X509ContentType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Security.Cryptography.X509Certificates.X509ContentType
  #pragma pack(pop)
  static check_size<sizeof(X509ContentType), 0 + sizeof(int)> __System_Security_Cryptography_X509Certificates_X509ContentTypeSizeCheck;
  static_assert(sizeof(X509ContentType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
