// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightningDispatcher
#include "GlobalNamespace/LightningDispatcher.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightningStrike
  class LightningStrike;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
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
NEED_NO_BOX(::GlobalNamespace::LightningDispatcher::DispatchLightningEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightningDispatcher::DispatchLightningEvent*, "", "LightningDispatcher/DispatchLightningEvent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: LightningDispatcher/DispatchLightningEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class LightningDispatcher::DispatchLightningEvent : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x27A0E28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightningDispatcher::DispatchLightningEvent* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightningDispatcher::DispatchLightningEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightningDispatcher::DispatchLightningEvent*, creationType>(object, method)));
    }
    // public LightningStrike Invoke(UnityEngine.Vector3 p1, UnityEngine.Vector3 p2)
    // Offset: 0x27A0EC8
    ::GlobalNamespace::LightningStrike* Invoke(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Vector3 p1, UnityEngine.Vector3 p2, System.AsyncCallback callback, System.Object object)
    // Offset: 0x27A0EDC
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public LightningStrike EndInvoke(System.IAsyncResult result)
    // Offset: 0x27A0F84
    ::GlobalNamespace::LightningStrike* EndInvoke(::System::IAsyncResult* result);
  }; // LightningDispatcher/DispatchLightningEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightningDispatcher::DispatchLightningEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightningDispatcher::DispatchLightningEvent::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightningStrike* (GlobalNamespace::LightningDispatcher::DispatchLightningEvent::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::LightningDispatcher::DispatchLightningEvent::Invoke)> {
  static const MethodInfo* get() {
    static auto* p1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightningDispatcher::DispatchLightningEvent*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p1, p2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightningDispatcher::DispatchLightningEvent::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::LightningDispatcher::DispatchLightningEvent::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::LightningDispatcher::DispatchLightningEvent::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* p1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightningDispatcher::DispatchLightningEvent*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p1, p2, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightningDispatcher::DispatchLightningEvent::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightningStrike* (GlobalNamespace::LightningDispatcher::DispatchLightningEvent::*)(::System::IAsyncResult*)>(&GlobalNamespace::LightningDispatcher::DispatchLightningEvent::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightningDispatcher::DispatchLightningEvent*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
