// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusSpatializerUnity
#include "GlobalNamespace/OculusSpatializerUnity.hpp"
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
NEED_NO_BOX(::GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback*, "", "OculusSpatializerUnity/AudioRaycastCallback");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: OculusSpatializerUnity/AudioRaycastCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusSpatializerUnity::AudioRaycastCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x488EC74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusSpatializerUnity::AudioRaycastCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusSpatializerUnity::AudioRaycastCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.Vector3 point, out UnityEngine.Vector3 normal, System.IntPtr data)
    // Offset: 0x4890790
    void Invoke(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::Vector3> point, ByRef<::UnityEngine::Vector3> normal, ::System::IntPtr data);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.Vector3 point, out UnityEngine.Vector3 normal, System.IntPtr data, System.AsyncCallback callback, System.Object object)
    // Offset: 0x48907A4
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::Vector3> point, ByRef<::UnityEngine::Vector3> normal, ::System::IntPtr data, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(out UnityEngine.Vector3 point, out UnityEngine.Vector3 normal, System.IAsyncResult result)
    // Offset: 0x48908B8
    void EndInvoke(ByRef<::UnityEngine::Vector3> point, ByRef<::UnityEngine::Vector3> normal, ::System::IAsyncResult* result);
  }; // OculusSpatializerUnity/AudioRaycastCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ::System::IntPtr)>(&GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, point, normal, data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ::System::IntPtr, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, point, normal, data, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ::System::IAsyncResult*)>(&GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, normal, result});
  }
};