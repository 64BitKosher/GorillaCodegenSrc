// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
#include "System/Security/Cryptography/AsymmetricKeyExchangeDeformatter.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSAPKCS1KeyExchangeDeformatter
  class RSAPKCS1KeyExchangeDeformatter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*, "System.Security.Cryptography", "RSAPKCS1KeyExchangeDeformatter");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class RSAPKCS1KeyExchangeDeformatter : public ::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter {
    public:
    public:
    // private System.Security.Cryptography.RSA _rsaKey
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::Cryptography::RSA* rsaKey;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::RSA*) == 0x8);
    // private System.Nullable`1<System.Boolean> _rsaOverridesDecrypt
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Nullable_1<bool> rsaOverridesDecrypt;
    // private System.Security.Cryptography.RandomNumberGenerator RngValue
    // Size: 0x8
    // Offset: 0x20
    ::System::Security::Cryptography::RandomNumberGenerator* RngValue;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::RandomNumberGenerator*) == 0x8);
    public:
    // Get instance field reference: private System.Security.Cryptography.RSA _rsaKey
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::RSA*& dyn__rsaKey();
    // Get instance field reference: private System.Nullable`1<System.Boolean> _rsaOverridesDecrypt
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn__rsaOverridesDecrypt();
    // Get instance field reference: private System.Security.Cryptography.RandomNumberGenerator RngValue
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::RandomNumberGenerator*& dyn_RngValue();
    // public System.Void .ctor(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x4506288
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSAPKCS1KeyExchangeDeformatter* New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSAPKCS1KeyExchangeDeformatter*, creationType>(key)));
    }
    // public System.Security.Cryptography.RandomNumberGenerator get_RNG()
    // Offset: 0x45084EC
    ::System::Security::Cryptography::RandomNumberGenerator* get_RNG();
    // public System.Void set_RNG(System.Security.Cryptography.RandomNumberGenerator value)
    // Offset: 0x45084F4
    void set_RNG(::System::Security::Cryptography::RandomNumberGenerator* value);
    // private System.Boolean get_OverridesDecrypt()
    // Offset: 0x45086D4
    bool get_OverridesDecrypt();
    // public System.Void .ctor()
    // Offset: 0x45084E4
    // Implemented from: System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
    // Base method: System.Void AsymmetricKeyExchangeDeformatter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSAPKCS1KeyExchangeDeformatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSAPKCS1KeyExchangeDeformatter*, creationType>()));
    }
    // public override System.String get_Parameters()
    // Offset: 0x45084FC
    // Implemented from: System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
    // Base method: System.String AsymmetricKeyExchangeDeformatter::get_Parameters()
    ::StringW get_Parameters();
    // public override System.Void set_Parameters(System.String value)
    // Offset: 0x4508504
    // Implemented from: System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
    // Base method: System.Void AsymmetricKeyExchangeDeformatter::set_Parameters(System.String value)
    void set_Parameters(::StringW value);
    // public override System.Byte[] DecryptKeyExchange(System.Byte[] rgbIn)
    // Offset: 0x4508508
    // Implemented from: System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
    // Base method: System.Byte[] AsymmetricKeyExchangeDeformatter::DecryptKeyExchange(System.Byte[] rgbIn)
    ::ArrayW<uint8_t> DecryptKeyExchange(::ArrayW<uint8_t> rgbIn);
    // public override System.Void SetKey(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x45088D4
    // Implemented from: System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
    // Base method: System.Void AsymmetricKeyExchangeDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm key)
    void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key);
  }; // System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::get_RNG
// Il2CppName: get_RNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RandomNumberGenerator* (System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::*)()>(&System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::get_RNG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*), "get_RNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::set_RNG
// Il2CppName: set_RNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::*)(::System::Security::Cryptography::RandomNumberGenerator*)>(&System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::set_RNG)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RandomNumberGenerator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*), "set_RNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::get_OverridesDecrypt
// Il2CppName: get_OverridesDecrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::*)()>(&System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::get_OverridesDecrypt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*), "get_OverridesDecrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::*)()>(&System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::get_Parameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::set_Parameters
// Il2CppName: set_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::*)(::StringW)>(&System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::set_Parameters)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*), "set_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::DecryptKeyExchange
// Il2CppName: DecryptKeyExchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::DecryptKeyExchange)> {
  static const MethodInfo* get() {
    static auto* rgbIn = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*), "DecryptKeyExchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbIn});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::SetKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsymmetricAlgorithm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
