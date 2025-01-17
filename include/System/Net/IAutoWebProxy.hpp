// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.IWebProxy
#include "System/Net/IWebProxy.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ProxyChain
  class ProxyChain;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: IAutoWebProxy
  class IAutoWebProxy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::IAutoWebProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IAutoWebProxy*, "System.Net", "IAutoWebProxy");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.IAutoWebProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class IAutoWebProxy/*, public ::System::Net::IWebProxy*/ {
    public:
    // Creating interface conversion operator: operator ::System::Net::IWebProxy
    operator ::System::Net::IWebProxy() noexcept {
      return *reinterpret_cast<::System::Net::IWebProxy*>(this);
    }
    // public System.Net.ProxyChain GetProxies(System.Uri destination)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Net::ProxyChain* GetProxies(::System::Uri* destination);
  }; // System.Net.IAutoWebProxy
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::IAutoWebProxy::GetProxies
// Il2CppName: GetProxies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ProxyChain* (System::Net::IAutoWebProxy::*)(::System::Uri*)>(&System::Net::IAutoWebProxy::GetProxies)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IAutoWebProxy*), "GetProxies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination});
  }
};
