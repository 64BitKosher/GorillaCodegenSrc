// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.NetworkInformation.UnixNetworkInterface
#include "System/Net/NetworkInformation/UnixNetworkInterface.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: OperationalStatus
  struct OperationalStatus;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: MacOsNetworkInterface
  class MacOsNetworkInterface;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::MacOsNetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsNetworkInterface*, "System.Net.NetworkInformation", "MacOsNetworkInterface");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.MacOsNetworkInterface
  // [TokenAttribute] Offset: FFFFFFFF
  class MacOsNetworkInterface : public ::System::Net::NetworkInformation::UnixNetworkInterface {
    public:
    public:
    // private System.UInt32 _ifa_flags
    // Size: 0x4
    // Offset: 0x2C
    uint ifa_flags;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return ifa_flags;
    }
    // Get instance field reference: private System.UInt32 _ifa_flags
    [[deprecated("Use field access instead!")]] uint& dyn__ifa_flags();
    // System.Void .ctor(System.String name, System.UInt32 ifa_flags)
    // Offset: 0x4ECA1A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MacOsNetworkInterface* New_ctor(::StringW name, uint ifa_flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::MacOsNetworkInterface::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MacOsNetworkInterface*, creationType>(name, ifa_flags)));
    }
    // public override System.Net.NetworkInformation.OperationalStatus get_OperationalStatus()
    // Offset: 0x4ECA1C8
    // Implemented from: System.Net.NetworkInformation.NetworkInterface
    // Base method: System.Net.NetworkInformation.OperationalStatus NetworkInterface::get_OperationalStatus()
    ::System::Net::NetworkInformation::OperationalStatus get_OperationalStatus();
  }; // System.Net.NetworkInformation.MacOsNetworkInterface
  #pragma pack(pop)
  static check_size<sizeof(MacOsNetworkInterface), 44 + sizeof(uint)> __System_Net_NetworkInformation_MacOsNetworkInterfaceSizeCheck;
  static_assert(sizeof(MacOsNetworkInterface) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::MacOsNetworkInterface::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::MacOsNetworkInterface::get_OperationalStatus
// Il2CppName: get_OperationalStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::OperationalStatus (System::Net::NetworkInformation::MacOsNetworkInterface::*)()>(&System::Net::NetworkInformation::MacOsNetworkInterface::get_OperationalStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::MacOsNetworkInterface*), "get_OperationalStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
