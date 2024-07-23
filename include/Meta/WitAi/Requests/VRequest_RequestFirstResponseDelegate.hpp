// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Requests.VRequest
#include "Meta/WitAi/Requests/VRequest.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate*, "Meta.WitAi.Requests", "VRequest/RequestFirstResponseDelegate");
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class VRequest::RequestFirstResponseDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4444424
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRequest::RequestFirstResponseDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRequest::RequestFirstResponseDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke()
    // Offset: 0x44444C0
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x44444D4
    ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x44444F4
    void EndInvoke(::System::IAsyncResult* result);
  }; // Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate::*)()>(&Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate::*)(::System::AsyncCallback*, ::Il2CppObject*)>(&Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, object});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate::*)(::System::IAsyncResult*)>(&Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VRequest::RequestFirstResponseDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
