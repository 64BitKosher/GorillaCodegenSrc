// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: NetworkInterfaceFactory
  class NetworkInterfaceFactory;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: NetworkInterfaceFactoryPal
  class NetworkInterfaceFactoryPal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::NetworkInterfaceFactoryPal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::NetworkInterfaceFactoryPal*, "System.Net.NetworkInformation", "NetworkInterfaceFactoryPal");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterfaceFactoryPal
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkInterfaceFactoryPal : public ::Il2CppObject {
    public:
    // static public System.Net.NetworkInformation.NetworkInterfaceFactory Create()
    // Offset: 0x4ECA238
    static ::System::Net::NetworkInformation::NetworkInterfaceFactory* Create();
  }; // System.Net.NetworkInformation.NetworkInterfaceFactoryPal
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactoryPal::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::NetworkInterfaceFactory* (*)()>(&System::Net::NetworkInformation::NetworkInterfaceFactoryPal::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterfaceFactoryPal*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
