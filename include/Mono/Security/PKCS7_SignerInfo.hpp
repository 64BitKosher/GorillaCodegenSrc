// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.PKCS7
#include "Mono/Security/PKCS7.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::PKCS7::SignerInfo);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::PKCS7::SignerInfo*, "Mono.Security", "PKCS7/SignerInfo");
// Type namespace: Mono.Security
namespace Mono::Security {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.PKCS7/SignerInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class PKCS7::SignerInfo : public ::Il2CppObject {
    public:
    public:
    // private System.Byte version
    // Size: 0x1
    // Offset: 0x10
    uint8_t version;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: version and: hashAlgorithm
    char __padding0[0x7] = {};
    // private System.String hashAlgorithm
    // Size: 0x8
    // Offset: 0x18
    ::StringW hashAlgorithm;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Collections.ArrayList authenticatedAttributes
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::ArrayList* authenticatedAttributes;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Collections.ArrayList unauthenticatedAttributes
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::ArrayList* unauthenticatedAttributes;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Byte[] signature
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> signature;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.String issuer
    // Size: 0x8
    // Offset: 0x38
    ::StringW issuer;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Byte[] serial
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> serial;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] ski
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> ski;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: private System.Byte version
    [[deprecated("Use field access instead!")]] uint8_t& dyn_version();
    // Get instance field reference: private System.String hashAlgorithm
    [[deprecated("Use field access instead!")]] ::StringW& dyn_hashAlgorithm();
    // Get instance field reference: private System.Collections.ArrayList authenticatedAttributes
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_authenticatedAttributes();
    // Get instance field reference: private System.Collections.ArrayList unauthenticatedAttributes
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_unauthenticatedAttributes();
    // Get instance field reference: private System.Byte[] signature
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_signature();
    // Get instance field reference: private System.String issuer
    [[deprecated("Use field access instead!")]] ::StringW& dyn_issuer();
    // Get instance field reference: private System.Byte[] serial
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_serial();
    // Get instance field reference: private System.Byte[] ski
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_ski();
    // public System.Void .ctor()
    // Offset: 0x446E588
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS7::SignerInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::PKCS7::SignerInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS7::SignerInfo*, creationType>()));
    }
    // public System.Void .ctor(Mono.Security.ASN1 asn1)
    // Offset: 0x446E1E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS7::SignerInfo* New_ctor(::Mono::Security::ASN1* asn1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::PKCS7::SignerInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS7::SignerInfo*, creationType>(asn1)));
    }
    // public System.String get_IssuerName()
    // Offset: 0x446E964
    ::StringW get_IssuerName();
    // public System.Byte[] get_SerialNumber()
    // Offset: 0x446E96C
    ::ArrayW<uint8_t> get_SerialNumber();
    // public System.Collections.ArrayList get_AuthenticatedAttributes()
    // Offset: 0x446E9E0
    ::System::Collections::ArrayList* get_AuthenticatedAttributes();
    // public System.String get_HashName()
    // Offset: 0x446E9E8
    ::StringW get_HashName();
    // public System.Void set_HashName(System.String value)
    // Offset: 0x446E9F0
    void set_HashName(::StringW value);
    // public System.Byte[] get_Signature()
    // Offset: 0x446E9F8
    ::ArrayW<uint8_t> get_Signature();
    // public System.Collections.ArrayList get_UnauthenticatedAttributes()
    // Offset: 0x446EA6C
    ::System::Collections::ArrayList* get_UnauthenticatedAttributes();
    // public System.Byte get_Version()
    // Offset: 0x446EA74
    uint8_t get_Version();
  }; // Mono.Security.PKCS7/SignerInfo
  #pragma pack(pop)
  static check_size<sizeof(PKCS7::SignerInfo), 72 + sizeof(::ArrayW<uint8_t>)> __Mono_Security_PKCS7_SignerInfoSizeCheck;
  static_assert(sizeof(PKCS7::SignerInfo) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::PKCS7::SignerInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::PKCS7::SignerInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::PKCS7::SignerInfo::get_IssuerName
// Il2CppName: get_IssuerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::PKCS7::SignerInfo::*)()>(&Mono::Security::PKCS7::SignerInfo::get_IssuerName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::SignerInfo*), "get_IssuerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::SignerInfo::get_SerialNumber
// Il2CppName: get_SerialNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::PKCS7::SignerInfo::*)()>(&Mono::Security::PKCS7::SignerInfo::get_SerialNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::SignerInfo*), "get_SerialNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::SignerInfo::get_AuthenticatedAttributes
// Il2CppName: get_AuthenticatedAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (Mono::Security::PKCS7::SignerInfo::*)()>(&Mono::Security::PKCS7::SignerInfo::get_AuthenticatedAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::SignerInfo*), "get_AuthenticatedAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::SignerInfo::get_HashName
// Il2CppName: get_HashName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::PKCS7::SignerInfo::*)()>(&Mono::Security::PKCS7::SignerInfo::get_HashName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::SignerInfo*), "get_HashName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::SignerInfo::set_HashName
// Il2CppName: set_HashName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::PKCS7::SignerInfo::*)(::StringW)>(&Mono::Security::PKCS7::SignerInfo::set_HashName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::SignerInfo*), "set_HashName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::SignerInfo::get_Signature
// Il2CppName: get_Signature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::PKCS7::SignerInfo::*)()>(&Mono::Security::PKCS7::SignerInfo::get_Signature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::SignerInfo*), "get_Signature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::SignerInfo::get_UnauthenticatedAttributes
// Il2CppName: get_UnauthenticatedAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (Mono::Security::PKCS7::SignerInfo::*)()>(&Mono::Security::PKCS7::SignerInfo::get_UnauthenticatedAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::SignerInfo*), "get_UnauthenticatedAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::SignerInfo::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Mono::Security::PKCS7::SignerInfo::*)()>(&Mono::Security::PKCS7::SignerInfo::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::SignerInfo*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
