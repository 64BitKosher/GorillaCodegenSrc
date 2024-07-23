// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineVirtualCamera
#include "Cinemachine/CinemachineVirtualCamera.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
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
NEED_NO_BOX(::Cinemachine::CinemachineVirtualCamera::DestroyPipelineDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineVirtualCamera::DestroyPipelineDelegate*, "Cinemachine", "CinemachineVirtualCamera/DestroyPipelineDelegate");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class CinemachineVirtualCamera::DestroyPipelineDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2A9B8A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineVirtualCamera::DestroyPipelineDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineVirtualCamera::DestroyPipelineDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineVirtualCamera::DestroyPipelineDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.GameObject pipeline)
    // Offset: 0x2A9B958
    void Invoke(::UnityEngine::GameObject* pipeline);
    // public System.IAsyncResult BeginInvoke(UnityEngine.GameObject pipeline, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2A9B96C
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* pipeline, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2A9B98C
    void EndInvoke(::System::IAsyncResult* result);
  }; // Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineVirtualCamera::DestroyPipelineDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Cinemachine::CinemachineVirtualCamera::DestroyPipelineDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineVirtualCamera::DestroyPipelineDelegate::*)(::UnityEngine::GameObject*)>(&Cinemachine::CinemachineVirtualCamera::DestroyPipelineDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* pipeline = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineVirtualCamera::DestroyPipelineDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pipeline});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineVirtualCamera::DestroyPipelineDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Cinemachine::CinemachineVirtualCamera::DestroyPipelineDelegate::*)(::UnityEngine::GameObject*, ::System::AsyncCallback*, ::Il2CppObject*)>(&Cinemachine::CinemachineVirtualCamera::DestroyPipelineDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pipeline = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineVirtualCamera::DestroyPipelineDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pipeline, callback, object});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineVirtualCamera::DestroyPipelineDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineVirtualCamera::DestroyPipelineDelegate::*)(::System::IAsyncResult*)>(&Cinemachine::CinemachineVirtualCamera::DestroyPipelineDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineVirtualCamera::DestroyPipelineDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
