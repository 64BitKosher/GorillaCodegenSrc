// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.NetworkInformation.IPGlobalProperties
#include "System/Net/NetworkInformation/IPGlobalProperties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: CommonUnixIPGlobalProperties
  class CommonUnixIPGlobalProperties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::CommonUnixIPGlobalProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*, "System.Net.NetworkInformation", "CommonUnixIPGlobalProperties");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.CommonUnixIPGlobalProperties
  // [TokenAttribute] Offset: FFFFFFFF
  class CommonUnixIPGlobalProperties : public ::System::Net::NetworkInformation::IPGlobalProperties {
    public:
    // static private System.Int32 getdomainname(System.Byte[] name, System.Int32 len)
    // Offset: 0x4ECA374
    static int getdomainname(::ArrayW<uint8_t> name, int len);
    // public override System.String get_DomainName()
    // Offset: 0x4ECA400
    // Implemented from: System.Net.NetworkInformation.IPGlobalProperties
    // Base method: System.String IPGlobalProperties::get_DomainName()
    ::StringW get_DomainName();
    // protected System.Void .ctor()
    // Offset: 0x4ECA570
    // Implemented from: System.Net.NetworkInformation.IPGlobalProperties
    // Base method: System.Void IPGlobalProperties::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommonUnixIPGlobalProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::CommonUnixIPGlobalProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommonUnixIPGlobalProperties*, creationType>()));
    }
  }; // System.Net.NetworkInformation.CommonUnixIPGlobalProperties
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::CommonUnixIPGlobalProperties::getdomainname
// Il2CppName: getdomainname
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int)>(&System::Net::NetworkInformation::CommonUnixIPGlobalProperties::getdomainname)> {
  static const MethodInfo* get() {
    static auto* name = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::CommonUnixIPGlobalProperties*), "getdomainname", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, len});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::CommonUnixIPGlobalProperties::get_DomainName
// Il2CppName: get_DomainName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::NetworkInformation::CommonUnixIPGlobalProperties::*)()>(&System::Net::NetworkInformation::CommonUnixIPGlobalProperties::get_DomainName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::CommonUnixIPGlobalProperties*), "get_DomainName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::CommonUnixIPGlobalProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
