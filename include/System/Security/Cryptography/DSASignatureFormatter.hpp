// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.AsymmetricSignatureFormatter
#include "System/Security/Cryptography/AsymmetricSignatureFormatter.hpp"
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
  // Forward declaring type: DSA
  class DSA;
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: DSASignatureFormatter
  class DSASignatureFormatter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::DSASignatureFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSASignatureFormatter*, "System.Security.Cryptography", "DSASignatureFormatter");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.DSASignatureFormatter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class DSASignatureFormatter : public ::System::Security::Cryptography::AsymmetricSignatureFormatter {
    public:
    public:
    // private System.Security.Cryptography.DSA _dsaKey
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::Cryptography::DSA* dsaKey;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::DSA*) == 0x8);
    // private System.String _oid
    // Size: 0x8
    // Offset: 0x18
    ::StringW oid;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Security.Cryptography.DSA _dsaKey
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::DSA*& dyn__dsaKey();
    // Get instance field reference: private System.String _oid
    [[deprecated("Use field access instead!")]] ::StringW& dyn__oid();
    // public System.Void .ctor(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x44F8230
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DSASignatureFormatter* New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::DSASignatureFormatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DSASignatureFormatter*, creationType>(key)));
    }
    // public System.Void .ctor()
    // Offset: 0x44F81A8
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureFormatter
    // Base method: System.Void AsymmetricSignatureFormatter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DSASignatureFormatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::DSASignatureFormatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DSASignatureFormatter*, creationType>()));
    }
    // public override System.Void SetKey(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x44F8328
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureFormatter
    // Base method: System.Void AsymmetricSignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm key)
    void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key);
    // public override System.Void SetHashAlgorithm(System.String strName)
    // Offset: 0x44F8418
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureFormatter
    // Base method: System.Void AsymmetricSignatureFormatter::SetHashAlgorithm(System.String strName)
    void SetHashAlgorithm(::StringW strName);
    // public override System.Byte[] CreateSignature(System.Byte[] rgbHash)
    // Offset: 0x44F84DC
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureFormatter
    // Base method: System.Byte[] AsymmetricSignatureFormatter::CreateSignature(System.Byte[] rgbHash)
    ::ArrayW<uint8_t> CreateSignature(::ArrayW<uint8_t> rgbHash);
  }; // System.Security.Cryptography.DSASignatureFormatter
  #pragma pack(pop)
  static check_size<sizeof(DSASignatureFormatter), 24 + sizeof(::StringW)> __System_Security_Cryptography_DSASignatureFormatterSizeCheck;
  static_assert(sizeof(DSASignatureFormatter) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::DSASignatureFormatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::DSASignatureFormatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::DSASignatureFormatter::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DSASignatureFormatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&System::Security::Cryptography::DSASignatureFormatter::SetKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsymmetricAlgorithm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSASignatureFormatter*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DSASignatureFormatter::SetHashAlgorithm
// Il2CppName: SetHashAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DSASignatureFormatter::*)(::StringW)>(&System::Security::Cryptography::DSASignatureFormatter::SetHashAlgorithm)> {
  static const MethodInfo* get() {
    static auto* strName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSASignatureFormatter*), "SetHashAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{strName});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DSASignatureFormatter::CreateSignature
// Il2CppName: CreateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::DSASignatureFormatter::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::DSASignatureFormatter::CreateSignature)> {
  static const MethodInfo* get() {
    static auto* rgbHash = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSASignatureFormatter*), "CreateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbHash});
  }
};
