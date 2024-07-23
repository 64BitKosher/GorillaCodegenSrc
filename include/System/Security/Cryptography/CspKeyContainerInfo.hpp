// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: CspParameters
  class CspParameters;
  // Forward declaring type: KeyNumber
  struct KeyNumber;
}
// Forward declaring namespace: System::Security::AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: CryptoKeySecurity
  class CryptoKeySecurity;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: CspKeyContainerInfo
  class CspKeyContainerInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::CspKeyContainerInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CspKeyContainerInfo*, "System.Security.Cryptography", "CspKeyContainerInfo");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.CspKeyContainerInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class CspKeyContainerInfo : public ::Il2CppObject {
    public:
    public:
    // private System.Security.Cryptography.CspParameters _params
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::Cryptography::CspParameters* params;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::CspParameters*) == 0x8);
    // System.Boolean _random
    // Size: 0x1
    // Offset: 0x18
    bool random;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Security.Cryptography.CspParameters _params
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::CspParameters*& dyn__params();
    // Get instance field reference: System.Boolean _random
    [[deprecated("Use field access instead!")]] bool& dyn__random();
    // public System.Void .ctor(System.Security.Cryptography.CspParameters parameters)
    // Offset: 0x4507488
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CspKeyContainerInfo* New_ctor(::System::Security::Cryptography::CspParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::CspKeyContainerInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CspKeyContainerInfo*, creationType>(parameters)));
    }
    // public System.Boolean get_Accessible()
    // Offset: 0x4512C8C
    bool get_Accessible();
    // public System.Security.AccessControl.CryptoKeySecurity get_CryptoKeySecurity()
    // Offset: 0x4512C94
    ::System::Security::AccessControl::CryptoKeySecurity* get_CryptoKeySecurity();
    // public System.Boolean get_Exportable()
    // Offset: 0x4512C9C
    bool get_Exportable();
    // public System.Boolean get_HardwareDevice()
    // Offset: 0x4512CA4
    bool get_HardwareDevice();
    // public System.String get_KeyContainerName()
    // Offset: 0x4512CAC
    ::StringW get_KeyContainerName();
    // public System.Security.Cryptography.KeyNumber get_KeyNumber()
    // Offset: 0x4512CC8
    ::System::Security::Cryptography::KeyNumber get_KeyNumber();
    // public System.Boolean get_MachineKeyStore()
    // Offset: 0x4512CE4
    bool get_MachineKeyStore();
    // public System.Boolean get_Protected()
    // Offset: 0x4512CEC
    bool get_Protected();
    // public System.String get_ProviderName()
    // Offset: 0x4512CF4
    ::StringW get_ProviderName();
    // public System.Int32 get_ProviderType()
    // Offset: 0x4512D10
    int get_ProviderType();
    // public System.Boolean get_RandomlyGenerated()
    // Offset: 0x4512D2C
    bool get_RandomlyGenerated();
    // public System.Boolean get_Removable()
    // Offset: 0x4512D34
    bool get_Removable();
    // public System.String get_UniqueKeyContainerName()
    // Offset: 0x4512D3C
    ::StringW get_UniqueKeyContainerName();
  }; // System.Security.Cryptography.CspKeyContainerInfo
  #pragma pack(pop)
  static check_size<sizeof(CspKeyContainerInfo), 24 + sizeof(bool)> __System_Security_Cryptography_CspKeyContainerInfoSizeCheck;
  static_assert(sizeof(CspKeyContainerInfo) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::CspKeyContainerInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::CspKeyContainerInfo::get_Accessible
// Il2CppName: get_Accessible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CspKeyContainerInfo::*)()>(&System::Security::Cryptography::CspKeyContainerInfo::get_Accessible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CspKeyContainerInfo*), "get_Accessible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CspKeyContainerInfo::get_CryptoKeySecurity
// Il2CppName: get_CryptoKeySecurity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::CryptoKeySecurity* (System::Security::Cryptography::CspKeyContainerInfo::*)()>(&System::Security::Cryptography::CspKeyContainerInfo::get_CryptoKeySecurity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CspKeyContainerInfo*), "get_CryptoKeySecurity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CspKeyContainerInfo::get_Exportable
// Il2CppName: get_Exportable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CspKeyContainerInfo::*)()>(&System::Security::Cryptography::CspKeyContainerInfo::get_Exportable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CspKeyContainerInfo*), "get_Exportable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CspKeyContainerInfo::get_HardwareDevice
// Il2CppName: get_HardwareDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CspKeyContainerInfo::*)()>(&System::Security::Cryptography::CspKeyContainerInfo::get_HardwareDevice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CspKeyContainerInfo*), "get_HardwareDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CspKeyContainerInfo::get_KeyContainerName
// Il2CppName: get_KeyContainerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::CspKeyContainerInfo::*)()>(&System::Security::Cryptography::CspKeyContainerInfo::get_KeyContainerName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CspKeyContainerInfo*), "get_KeyContainerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CspKeyContainerInfo::get_KeyNumber
// Il2CppName: get_KeyNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::KeyNumber (System::Security::Cryptography::CspKeyContainerInfo::*)()>(&System::Security::Cryptography::CspKeyContainerInfo::get_KeyNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CspKeyContainerInfo*), "get_KeyNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CspKeyContainerInfo::get_MachineKeyStore
// Il2CppName: get_MachineKeyStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CspKeyContainerInfo::*)()>(&System::Security::Cryptography::CspKeyContainerInfo::get_MachineKeyStore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CspKeyContainerInfo*), "get_MachineKeyStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CspKeyContainerInfo::get_Protected
// Il2CppName: get_Protected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CspKeyContainerInfo::*)()>(&System::Security::Cryptography::CspKeyContainerInfo::get_Protected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CspKeyContainerInfo*), "get_Protected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CspKeyContainerInfo::get_ProviderName
// Il2CppName: get_ProviderName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::CspKeyContainerInfo::*)()>(&System::Security::Cryptography::CspKeyContainerInfo::get_ProviderName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CspKeyContainerInfo*), "get_ProviderName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CspKeyContainerInfo::get_ProviderType
// Il2CppName: get_ProviderType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::CspKeyContainerInfo::*)()>(&System::Security::Cryptography::CspKeyContainerInfo::get_ProviderType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CspKeyContainerInfo*), "get_ProviderType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CspKeyContainerInfo::get_RandomlyGenerated
// Il2CppName: get_RandomlyGenerated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CspKeyContainerInfo::*)()>(&System::Security::Cryptography::CspKeyContainerInfo::get_RandomlyGenerated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CspKeyContainerInfo*), "get_RandomlyGenerated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CspKeyContainerInfo::get_Removable
// Il2CppName: get_Removable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CspKeyContainerInfo::*)()>(&System::Security::Cryptography::CspKeyContainerInfo::get_Removable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CspKeyContainerInfo*), "get_Removable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CspKeyContainerInfo::get_UniqueKeyContainerName
// Il2CppName: get_UniqueKeyContainerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::CspKeyContainerInfo::*)()>(&System::Security::Cryptography::CspKeyContainerInfo::get_UniqueKeyContainerName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CspKeyContainerInfo*), "get_UniqueKeyContainerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
