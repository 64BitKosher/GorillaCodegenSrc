// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.NetworkInformation.UnixNetworkInterfaceAPI
#include "System/Net/NetworkInformation/UnixNetworkInterfaceAPI.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: NetworkInterface
  class NetworkInterface;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: MacOsNetworkInterfaceAPI
  class MacOsNetworkInterfaceAPI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*, "System.Net.NetworkInformation", "MacOsNetworkInterfaceAPI");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.MacOsNetworkInterfaceAPI
  // [TokenAttribute] Offset: FFFFFFFF
  class MacOsNetworkInterfaceAPI : public ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI {
    public:
    public:
    // protected readonly System.Int32 AF_INET6
    // Size: 0x4
    // Offset: 0x10
    int AF_INET6;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return AF_INET6;
    }
    // Get instance field reference: protected readonly System.Int32 AF_INET6
    [[deprecated("Use field access instead!")]] int& dyn_AF_INET6();
    // protected System.Void .ctor(System.Int32 AF_INET6)
    // Offset: 0x4EC81D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MacOsNetworkInterfaceAPI* New_ctor(int AF_INET6) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MacOsNetworkInterfaceAPI*, creationType>(AF_INET6)));
    }
    // public System.Void .ctor()
    // Offset: 0x4EC95D8
    // Implemented from: System.Net.NetworkInformation.UnixNetworkInterfaceAPI
    // Base method: System.Void UnixNetworkInterfaceAPI::.ctor()
    // Base method: System.Void NetworkInterfaceFactory::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MacOsNetworkInterfaceAPI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MacOsNetworkInterfaceAPI*, creationType>()));
    }
    // public override System.Net.NetworkInformation.NetworkInterface[] GetAllNetworkInterfaces()
    // Offset: 0x4EC95F8
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory
    // Base method: System.Net.NetworkInformation.NetworkInterface[] NetworkInterfaceFactory::GetAllNetworkInterfaces()
    ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> GetAllNetworkInterfaces();
  }; // System.Net.NetworkInformation.MacOsNetworkInterfaceAPI
  #pragma pack(pop)
  static check_size<sizeof(MacOsNetworkInterfaceAPI), 16 + sizeof(int)> __System_Net_NetworkInformation_MacOsNetworkInterfaceAPISizeCheck;
  static_assert(sizeof(MacOsNetworkInterfaceAPI) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::GetAllNetworkInterfaces
// Il2CppName: GetAllNetworkInterfaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> (System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::*)()>(&System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::GetAllNetworkInterfaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*), "GetAllNetworkInterfaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};