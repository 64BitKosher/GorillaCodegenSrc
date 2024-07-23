// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: IWebProxyFinder
  class IWebProxyFinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::IWebProxyFinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IWebProxyFinder*, "System.Net", "IWebProxyFinder");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.IWebProxyFinder
  // [TokenAttribute] Offset: FFFFFFFF
  class IWebProxyFinder/*, public ::System::IDisposable*/ {
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // public System.Boolean GetProxies(System.Uri destination, out System.Collections.Generic.IList`1<System.String> proxyList)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool GetProxies(::System::Uri* destination, ByRef<::System::Collections::Generic::IList_1<::StringW>*> proxyList);
    // public System.Void Abort()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Abort();
    // public System.Void Reset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Reset();
    // public System.Boolean get_IsValid()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsValid();
  }; // System.Net.IWebProxyFinder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::IWebProxyFinder::GetProxies
// Il2CppName: GetProxies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::IWebProxyFinder::*)(::System::Uri*, ByRef<::System::Collections::Generic::IList_1<::StringW>*>)>(&System::Net::IWebProxyFinder::GetProxies)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* proxyList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IWebProxyFinder*), "GetProxies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, proxyList});
  }
};
// Writing MetadataGetter for method: System::Net::IWebProxyFinder::Abort
// Il2CppName: Abort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::IWebProxyFinder::*)()>(&System::Net::IWebProxyFinder::Abort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IWebProxyFinder*), "Abort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IWebProxyFinder::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::IWebProxyFinder::*)()>(&System::Net::IWebProxyFinder::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IWebProxyFinder*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IWebProxyFinder::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::IWebProxyFinder::*)()>(&System::Net::IWebProxyFinder::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IWebProxyFinder*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};