// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.Internal.PlayFabHttp
#include "PlayFab/Internal/PlayFabHttp.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::SharedModels
namespace PlayFab::SharedModels {
  // Forward declaring type: PlayFabRequestCommon
  class PlayFabRequestCommon;
}
// Forward declaring namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: PlayFabError
  class PlayFabError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::Internal::PlayFabHttp::ApiProcessErrorEvent);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::Internal::PlayFabHttp::ApiProcessErrorEvent*, "PlayFab.Internal", "PlayFabHttp/ApiProcessErrorEvent");
// Type namespace: PlayFab.Internal
namespace PlayFab::Internal {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.Internal.PlayFabHttp/ApiProcessErrorEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayFabHttp::ApiProcessErrorEvent : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4B66FA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayFabHttp::ApiProcessErrorEvent* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Internal::PlayFabHttp::ApiProcessErrorEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayFabHttp::ApiProcessErrorEvent*, creationType>(object, method)));
    }
    // public System.Void Invoke(PlayFab.SharedModels.PlayFabRequestCommon request, PlayFab.PlayFabError error)
    // Offset: 0x4B670B0
    void Invoke(::PlayFab::SharedModels::PlayFabRequestCommon* request, ::PlayFab::PlayFabError* error);
    // public System.IAsyncResult BeginInvoke(PlayFab.SharedModels.PlayFabRequestCommon request, PlayFab.PlayFabError error, System.AsyncCallback callback, System.Object object)
    // Offset: 0x4B670C4
    ::System::IAsyncResult* BeginInvoke(::PlayFab::SharedModels::PlayFabRequestCommon* request, ::PlayFab::PlayFabError* error, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x4B670EC
    void EndInvoke(::System::IAsyncResult* result);
  }; // PlayFab.Internal.PlayFabHttp/ApiProcessErrorEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::Internal::PlayFabHttp::ApiProcessErrorEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PlayFab::Internal::PlayFabHttp::ApiProcessErrorEvent::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Internal::PlayFabHttp::ApiProcessErrorEvent::*)(::PlayFab::SharedModels::PlayFabRequestCommon*, ::PlayFab::PlayFabError*)>(&PlayFab::Internal::PlayFabHttp::ApiProcessErrorEvent::Invoke)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("PlayFab.SharedModels", "PlayFabRequestCommon")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Internal::PlayFabHttp::ApiProcessErrorEvent*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, error});
  }
};
// Writing MetadataGetter for method: PlayFab::Internal::PlayFabHttp::ApiProcessErrorEvent::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (PlayFab::Internal::PlayFabHttp::ApiProcessErrorEvent::*)(::PlayFab::SharedModels::PlayFabRequestCommon*, ::PlayFab::PlayFabError*, ::System::AsyncCallback*, ::Il2CppObject*)>(&PlayFab::Internal::PlayFabHttp::ApiProcessErrorEvent::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("PlayFab.SharedModels", "PlayFabRequestCommon")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Internal::PlayFabHttp::ApiProcessErrorEvent*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, error, callback, object});
  }
};
// Writing MetadataGetter for method: PlayFab::Internal::PlayFabHttp::ApiProcessErrorEvent::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Internal::PlayFabHttp::ApiProcessErrorEvent::*)(::System::IAsyncResult*)>(&PlayFab::Internal::PlayFabHttp::ApiProcessErrorEvent::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Internal::PlayFabHttp::ApiProcessErrorEvent*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
