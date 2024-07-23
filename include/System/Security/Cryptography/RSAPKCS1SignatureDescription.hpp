// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.SignatureDescription
#include "System/Security/Cryptography/SignatureDescription.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AsymmetricSignatureDeformatter
  class AsymmetricSignatureDeformatter;
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
  // Forward declaring type: AsymmetricSignatureFormatter
  class AsymmetricSignatureFormatter;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSAPKCS1SignatureDescription
  class RSAPKCS1SignatureDescription;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::RSAPKCS1SignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAPKCS1SignatureDescription*, "System.Security.Cryptography", "RSAPKCS1SignatureDescription");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RSAPKCS1SignatureDescription
  // [TokenAttribute] Offset: FFFFFFFF
  class RSAPKCS1SignatureDescription : public ::System::Security::Cryptography::SignatureDescription {
    public:
    public:
    // private System.String _hashAlgorithm
    // Size: 0x8
    // Offset: 0x30
    ::StringW hashAlgorithm;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return hashAlgorithm;
    }
    // Get instance field reference: private System.String _hashAlgorithm
    [[deprecated("Use field access instead!")]] ::StringW& dyn__hashAlgorithm();
    // protected System.Void .ctor(System.String hashAlgorithm, System.String digestAlgorithm)
    // Offset: 0x450CF00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSAPKCS1SignatureDescription* New_ctor(::StringW hashAlgorithm, ::StringW digestAlgorithm) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::RSAPKCS1SignatureDescription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSAPKCS1SignatureDescription*, creationType>(hashAlgorithm, digestAlgorithm)));
    }
    // public override System.Security.Cryptography.AsymmetricSignatureDeformatter CreateDeformatter(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x450CFD8
    // Implemented from: System.Security.Cryptography.SignatureDescription
    // Base method: System.Security.Cryptography.AsymmetricSignatureDeformatter SignatureDescription::CreateDeformatter(System.Security.Cryptography.AsymmetricAlgorithm key)
    ::System::Security::Cryptography::AsymmetricSignatureDeformatter* CreateDeformatter(::System::Security::Cryptography::AsymmetricAlgorithm* key);
    // public override System.Security.Cryptography.AsymmetricSignatureFormatter CreateFormatter(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x450D014
    // Implemented from: System.Security.Cryptography.SignatureDescription
    // Base method: System.Security.Cryptography.AsymmetricSignatureFormatter SignatureDescription::CreateFormatter(System.Security.Cryptography.AsymmetricAlgorithm key)
    ::System::Security::Cryptography::AsymmetricSignatureFormatter* CreateFormatter(::System::Security::Cryptography::AsymmetricAlgorithm* key);
  }; // System.Security.Cryptography.RSAPKCS1SignatureDescription
  #pragma pack(pop)
  static check_size<sizeof(RSAPKCS1SignatureDescription), 48 + sizeof(::StringW)> __System_Security_Cryptography_RSAPKCS1SignatureDescriptionSizeCheck;
  static_assert(sizeof(RSAPKCS1SignatureDescription) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1SignatureDescription::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1SignatureDescription::CreateDeformatter
// Il2CppName: CreateDeformatter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::AsymmetricSignatureDeformatter* (System::Security::Cryptography::RSAPKCS1SignatureDescription::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&System::Security::Cryptography::RSAPKCS1SignatureDescription::CreateDeformatter)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsymmetricAlgorithm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSAPKCS1SignatureDescription*), "CreateDeformatter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1SignatureDescription::CreateFormatter
// Il2CppName: CreateFormatter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::AsymmetricSignatureFormatter* (System::Security::Cryptography::RSAPKCS1SignatureDescription::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&System::Security::Cryptography::RSAPKCS1SignatureDescription::CreateFormatter)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsymmetricAlgorithm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSAPKCS1SignatureDescription*), "CreateFormatter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
