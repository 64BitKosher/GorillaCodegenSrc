// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
#include "System/Security/Cryptography/X509Certificates/X509Certificate2Impl.hpp"
// Including type: Internal.Cryptography.Pal.CertificateData
#include "Internal/Cryptography/Pal/CertificateData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X500DistinguishedName
  class X500DistinguishedName;
  // Forward declaring type: X509NameType
  struct X509NameType;
  // Forward declaring type: X509Extension
  class X509Extension;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: DateTime because it is already included!
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2ImplUnix
  class X509Certificate2ImplUnix;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*, "System.Security.Cryptography.X509Certificates", "X509Certificate2ImplUnix");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Certificate2ImplUnix : public ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl {
    public:
    public:
    // private System.Boolean readCertData
    // Size: 0x1
    // Offset: 0x10
    bool readCertData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: readCertData and: certData
    char __padding0[0x7] = {};
    // private Internal.Cryptography.Pal.CertificateData certData
    // Size: 0x98
    // Offset: 0x18
    ::Internal::Cryptography::Pal::CertificateData certData;
    // Field size check
    static_assert(sizeof(::Internal::Cryptography::Pal::CertificateData) == 0x98);
    public:
    // Get instance field reference: private System.Boolean readCertData
    [[deprecated("Use field access instead!")]] bool& dyn_readCertData();
    // Get instance field reference: private Internal.Cryptography.Pal.CertificateData certData
    [[deprecated("Use field access instead!")]] ::Internal::Cryptography::Pal::CertificateData& dyn_certData();
    // private System.Void EnsureCertData()
    // Offset: 0x4F9A098
    void EnsureCertData();
    // protected System.Byte[] GetRawCertData()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<uint8_t> GetRawCertData();
    // public override System.String get_KeyAlgorithm()
    // Offset: 0x4F9A128
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.String X509CertificateImpl::get_KeyAlgorithm()
    ::StringW get_KeyAlgorithm();
    // public override System.Byte[] get_KeyAlgorithmParameters()
    // Offset: 0x4F9A140
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Byte[] X509CertificateImpl::get_KeyAlgorithmParameters()
    ::ArrayW<uint8_t> get_KeyAlgorithmParameters();
    // public override System.Byte[] get_PublicKeyValue()
    // Offset: 0x4F9A158
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Byte[] X509CertificateImpl::get_PublicKeyValue()
    ::ArrayW<uint8_t> get_PublicKeyValue();
    // public override System.Byte[] get_SerialNumber()
    // Offset: 0x4F9A170
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Byte[] X509CertificateImpl::get_SerialNumber()
    ::ArrayW<uint8_t> get_SerialNumber();
    // public override System.String get_SignatureAlgorithm()
    // Offset: 0x4F9A188
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.String X509Certificate2Impl::get_SignatureAlgorithm()
    ::StringW get_SignatureAlgorithm();
    // public override System.Int32 get_Version()
    // Offset: 0x4F9A1A0
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Int32 X509Certificate2Impl::get_Version()
    int get_Version();
    // public override System.Security.Cryptography.X509Certificates.X500DistinguishedName get_SubjectName()
    // Offset: 0x4F9A1BC
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Security.Cryptography.X509Certificates.X500DistinguishedName X509Certificate2Impl::get_SubjectName()
    ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_SubjectName();
    // public override System.Security.Cryptography.X509Certificates.X500DistinguishedName get_IssuerName()
    // Offset: 0x4F9A1D4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Security.Cryptography.X509Certificates.X500DistinguishedName X509Certificate2Impl::get_IssuerName()
    ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_IssuerName();
    // public override System.String get_Subject()
    // Offset: 0x4F9A1EC
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.String X509CertificateImpl::get_Subject()
    ::StringW get_Subject();
    // public override System.String get_Issuer()
    // Offset: 0x4F9A214
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.String X509CertificateImpl::get_Issuer()
    ::StringW get_Issuer();
    // public override System.Byte[] get_RawData()
    // Offset: 0x4F9A23C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Byte[] X509CertificateImpl::get_RawData()
    ::ArrayW<uint8_t> get_RawData();
    // public override System.Byte[] get_Thumbprint()
    // Offset: 0x4F9A254
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Byte[] X509CertificateImpl::get_Thumbprint()
    ::ArrayW<uint8_t> get_Thumbprint();
    // public override System.String GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType nameType, System.Boolean forIssuer)
    // Offset: 0x4F9A3E4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.String X509Certificate2Impl::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType nameType, System.Boolean forIssuer)
    ::StringW GetNameInfo(::System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer);
    // public override System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509Extension> get_Extensions()
    // Offset: 0x4F9A418
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509Extension> X509Certificate2Impl::get_Extensions()
    ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Extension*>* get_Extensions();
    // public override System.DateTime get_NotAfter()
    // Offset: 0x4F9A430
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.DateTime X509CertificateImpl::get_NotAfter()
    ::System::DateTime get_NotAfter();
    // public override System.DateTime get_NotBefore()
    // Offset: 0x4F9A44C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.DateTime X509CertificateImpl::get_NotBefore()
    ::System::DateTime get_NotBefore();
    // public override System.Void AppendPrivateKeyInfo(System.Text.StringBuilder sb)
    // Offset: 0x4F9A468
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Void X509Certificate2Impl::AppendPrivateKeyInfo(System.Text.StringBuilder sb)
    void AppendPrivateKeyInfo(::System::Text::StringBuilder* sb);
    // protected System.Void .ctor()
    // Offset: 0x4F98B64
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Void X509Certificate2Impl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2ImplUnix* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2ImplUnix*, creationType>()));
    }
  }; // System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix
  #pragma pack(pop)
  static check_size<sizeof(X509Certificate2ImplUnix), 24 + sizeof(::Internal::Cryptography::Pal::CertificateData)> __System_Security_Cryptography_X509Certificates_X509Certificate2ImplUnixSizeCheck;
  static_assert(sizeof(X509Certificate2ImplUnix) == 0xB0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::EnsureCertData
// Il2CppName: EnsureCertData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::EnsureCertData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "EnsureCertData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::GetRawCertData
// Il2CppName: GetRawCertData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::GetRawCertData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "GetRawCertData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_KeyAlgorithm
// Il2CppName: get_KeyAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_KeyAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "get_KeyAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_KeyAlgorithmParameters
// Il2CppName: get_KeyAlgorithmParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_KeyAlgorithmParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "get_KeyAlgorithmParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_PublicKeyValue
// Il2CppName: get_PublicKeyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_PublicKeyValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "get_PublicKeyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_SerialNumber
// Il2CppName: get_SerialNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_SerialNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "get_SerialNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_SignatureAlgorithm
// Il2CppName: get_SignatureAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_SignatureAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "get_SignatureAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_SubjectName
// Il2CppName: get_SubjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X500DistinguishedName* (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_SubjectName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "get_SubjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_IssuerName
// Il2CppName: get_IssuerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X500DistinguishedName* (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_IssuerName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "get_IssuerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Subject
// Il2CppName: get_Subject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Subject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "get_Subject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Issuer
// Il2CppName: get_Issuer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Issuer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "get_Issuer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_RawData
// Il2CppName: get_RawData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_RawData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "get_RawData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Thumbprint
// Il2CppName: get_Thumbprint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Thumbprint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "get_Thumbprint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::GetNameInfo
// Il2CppName: GetNameInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)(::System::Security::Cryptography::X509Certificates::X509NameType, bool)>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::GetNameInfo)> {
  static const MethodInfo* get() {
    static auto* nameType = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509NameType")->byval_arg;
    static auto* forIssuer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "GetNameInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nameType, forIssuer});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Extensions
// Il2CppName: get_Extensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Extension*>* (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Extensions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "get_Extensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_NotAfter
// Il2CppName: get_NotAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_NotAfter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "get_NotAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_NotBefore
// Il2CppName: get_NotBefore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_NotBefore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "get_NotBefore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::AppendPrivateKeyInfo
// Il2CppName: AppendPrivateKeyInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)(::System::Text::StringBuilder*)>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::AppendPrivateKeyInfo)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*), "AppendPrivateKeyInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
