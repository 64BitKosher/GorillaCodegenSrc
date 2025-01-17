// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.DecalProjector
#include "UnityEngine/Rendering/Universal/DecalProjector.hpp"
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
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalProjector::DecalProjectorAction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalProjector::DecalProjectorAction*, "UnityEngine.Rendering.Universal", "DecalProjector/DecalProjectorAction");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DecalProjector/DecalProjectorAction
  // [TokenAttribute] Offset: FFFFFFFF
  class DecalProjector::DecalProjectorAction : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x52A2A08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecalProjector::DecalProjectorAction* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::DecalProjector::DecalProjectorAction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecalProjector::DecalProjectorAction*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Rendering.Universal.DecalProjector decalProjector)
    // Offset: 0x52A2B10
    void Invoke(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Rendering.Universal.DecalProjector decalProjector, System.AsyncCallback callback, System.Object object)
    // Offset: 0x52A2B24
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x52A2B44
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Rendering.Universal.DecalProjector/DecalProjectorAction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalProjector::DecalProjectorAction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalProjector::DecalProjectorAction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DecalProjector::DecalProjectorAction::*)(::UnityEngine::Rendering::Universal::DecalProjector*)>(&UnityEngine::Rendering::Universal::DecalProjector::DecalProjectorAction::Invoke)> {
  static const MethodInfo* get() {
    static auto* decalProjector = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DecalProjector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DecalProjector::DecalProjectorAction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decalProjector});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalProjector::DecalProjectorAction::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Rendering::Universal::DecalProjector::DecalProjectorAction::*)(::UnityEngine::Rendering::Universal::DecalProjector*, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Rendering::Universal::DecalProjector::DecalProjectorAction::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* decalProjector = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DecalProjector")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DecalProjector::DecalProjectorAction*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decalProjector, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalProjector::DecalProjectorAction::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DecalProjector::DecalProjectorAction::*)(::System::IAsyncResult*)>(&UnityEngine::Rendering::Universal::DecalProjector::DecalProjectorAction::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DecalProjector::DecalProjectorAction*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
