// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: AuthenticationSchemes
  struct AuthenticationSchemes;
  // Forward declaring type: HttpListenerRequest
  class HttpListenerRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: AuthenticationSchemeSelector
  class AuthenticationSchemeSelector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::AuthenticationSchemeSelector);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::AuthenticationSchemeSelector*, "System.Net", "AuthenticationSchemeSelector");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.AuthenticationSchemeSelector
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthenticationSchemeSelector : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4FCFDA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticationSchemeSelector* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::AuthenticationSchemeSelector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticationSchemeSelector*, creationType>(object, method)));
    }
    // public System.Net.AuthenticationSchemes Invoke(System.Net.HttpListenerRequest httpRequest)
    // Offset: 0x4FCFE50
    ::System::Net::AuthenticationSchemes Invoke(::System::Net::HttpListenerRequest* httpRequest);
    // public System.IAsyncResult BeginInvoke(System.Net.HttpListenerRequest httpRequest, System.AsyncCallback callback, System.Object object)
    // Offset: 0x4FCFE64
    ::System::IAsyncResult* BeginInvoke(::System::Net::HttpListenerRequest* httpRequest, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Net.AuthenticationSchemes EndInvoke(System.IAsyncResult result)
    // Offset: 0x4FCFE84
    ::System::Net::AuthenticationSchemes EndInvoke(::System::IAsyncResult* result);
  }; // System.Net.AuthenticationSchemeSelector
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::AuthenticationSchemeSelector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::AuthenticationSchemeSelector::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::AuthenticationSchemes (System::Net::AuthenticationSchemeSelector::*)(::System::Net::HttpListenerRequest*)>(&System::Net::AuthenticationSchemeSelector::Invoke)> {
  static const MethodInfo* get() {
    static auto* httpRequest = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListenerRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::AuthenticationSchemeSelector*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{httpRequest});
  }
};
// Writing MetadataGetter for method: System::Net::AuthenticationSchemeSelector::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::AuthenticationSchemeSelector::*)(::System::Net::HttpListenerRequest*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::AuthenticationSchemeSelector::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* httpRequest = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListenerRequest")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::AuthenticationSchemeSelector*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{httpRequest, callback, object});
  }
};
// Writing MetadataGetter for method: System::Net::AuthenticationSchemeSelector::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::AuthenticationSchemes (System::Net::AuthenticationSchemeSelector::*)(::System::IAsyncResult*)>(&System::Net::AuthenticationSchemeSelector::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::AuthenticationSchemeSelector*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
