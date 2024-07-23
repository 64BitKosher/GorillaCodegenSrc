// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: HashAlgorithm
  class HashAlgorithm;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: CryptoConfigForwarder
  class CryptoConfigForwarder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::CryptoConfigForwarder);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptoConfigForwarder*, "System.Security.Cryptography", "CryptoConfigForwarder");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.CryptoConfigForwarder
  // [TokenAttribute] Offset: FFFFFFFF
  class CryptoConfigForwarder : public ::Il2CppObject {
    public:
    // static System.Object CreateFromName(System.String name)
    // Offset: 0x4519E88
    static ::Il2CppObject* CreateFromName(::StringW name);
    // static System.Security.Cryptography.HashAlgorithm CreateDefaultHashAlgorithm()
    // Offset: 0x4519EE0
    static ::System::Security::Cryptography::HashAlgorithm* CreateDefaultHashAlgorithm();
  }; // System.Security.Cryptography.CryptoConfigForwarder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoConfigForwarder::CreateFromName
// Il2CppName: CreateFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::StringW)>(&System::Security::Cryptography::CryptoConfigForwarder::CreateFromName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoConfigForwarder*), "CreateFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoConfigForwarder::CreateDefaultHashAlgorithm
// Il2CppName: CreateDefaultHashAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithm* (*)()>(&System::Security::Cryptography::CryptoConfigForwarder::CreateDefaultHashAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoConfigForwarder*), "CreateDefaultHashAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
