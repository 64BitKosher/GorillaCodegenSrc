// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.Events.PlayFabEvents
#include "PlayFab/Events/PlayFabEvents.hpp"
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
NEED_NO_BOX(::PlayFab::Events::PlayFabEvents::PlayFabErrorEvent);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::Events::PlayFabEvents::PlayFabErrorEvent*, "PlayFab.Events", "PlayFabEvents/PlayFabErrorEvent");
// Type namespace: PlayFab.Events
namespace PlayFab::Events {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.Events.PlayFabEvents/PlayFabErrorEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayFabEvents::PlayFabErrorEvent : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4B6EF2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayFabEvents::PlayFabErrorEvent* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Events::PlayFabEvents::PlayFabErrorEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayFabEvents::PlayFabErrorEvent*, creationType>(object, method)));
    }
    // public System.Void Invoke(PlayFab.SharedModels.PlayFabRequestCommon request, PlayFab.PlayFabError error)
    // Offset: 0x4B6F038
    void Invoke(::PlayFab::SharedModels::PlayFabRequestCommon* request, ::PlayFab::PlayFabError* error);
    // public System.IAsyncResult BeginInvoke(PlayFab.SharedModels.PlayFabRequestCommon request, PlayFab.PlayFabError error, System.AsyncCallback callback, System.Object object)
    // Offset: 0x4B6F04C
    ::System::IAsyncResult* BeginInvoke(::PlayFab::SharedModels::PlayFabRequestCommon* request, ::PlayFab::PlayFabError* error, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x4B6F074
    void EndInvoke(::System::IAsyncResult* result);
  }; // PlayFab.Events.PlayFabEvents/PlayFabErrorEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::Events::PlayFabEvents::PlayFabErrorEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PlayFab::Events::PlayFabEvents::PlayFabErrorEvent::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Events::PlayFabEvents::PlayFabErrorEvent::*)(::PlayFab::SharedModels::PlayFabRequestCommon*, ::PlayFab::PlayFabError*)>(&PlayFab::Events::PlayFabEvents::PlayFabErrorEvent::Invoke)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("PlayFab.SharedModels", "PlayFabRequestCommon")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Events::PlayFabEvents::PlayFabErrorEvent*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, error});
  }
};
// Writing MetadataGetter for method: PlayFab::Events::PlayFabEvents::PlayFabErrorEvent::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (PlayFab::Events::PlayFabEvents::PlayFabErrorEvent::*)(::PlayFab::SharedModels::PlayFabRequestCommon*, ::PlayFab::PlayFabError*, ::System::AsyncCallback*, ::Il2CppObject*)>(&PlayFab::Events::PlayFabEvents::PlayFabErrorEvent::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("PlayFab.SharedModels", "PlayFabRequestCommon")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Events::PlayFabEvents::PlayFabErrorEvent*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, error, callback, object});
  }
};
// Writing MetadataGetter for method: PlayFab::Events::PlayFabEvents::PlayFabErrorEvent::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Events::PlayFabEvents::PlayFabErrorEvent::*)(::System::IAsyncResult*)>(&PlayFab::Events::PlayFabEvents::PlayFabErrorEvent::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Events::PlayFabEvents::PlayFabErrorEvent*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
