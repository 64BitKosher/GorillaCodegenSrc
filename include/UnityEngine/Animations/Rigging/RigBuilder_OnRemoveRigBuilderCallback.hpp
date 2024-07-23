// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Animations.Rigging.RigBuilder
#include "UnityEngine/Animations/Rigging/RigBuilder.hpp"
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
NEED_NO_BOX(::UnityEngine::Animations::Rigging::RigBuilder::OnRemoveRigBuilderCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::RigBuilder::OnRemoveRigBuilderCallback*, "UnityEngine.Animations.Rigging", "RigBuilder/OnRemoveRigBuilderCallback");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.RigBuilder/OnRemoveRigBuilderCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class RigBuilder::OnRemoveRigBuilderCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x5079B1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RigBuilder::OnRemoveRigBuilderCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::RigBuilder::OnRemoveRigBuilderCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RigBuilder::OnRemoveRigBuilderCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Animations.Rigging.RigBuilder rigBuilder)
    // Offset: 0x5079C24
    void Invoke(::UnityEngine::Animations::Rigging::RigBuilder* rigBuilder);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Animations.Rigging.RigBuilder rigBuilder, System.AsyncCallback callback, System.Object object)
    // Offset: 0x5079C38
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Animations::Rigging::RigBuilder* rigBuilder, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x5079C58
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Animations.Rigging.RigBuilder/OnRemoveRigBuilderCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigBuilder::OnRemoveRigBuilderCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigBuilder::OnRemoveRigBuilderCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::RigBuilder::OnRemoveRigBuilderCallback::*)(::UnityEngine::Animations::Rigging::RigBuilder*)>(&UnityEngine::Animations::Rigging::RigBuilder::OnRemoveRigBuilderCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* rigBuilder = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "RigBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigBuilder::OnRemoveRigBuilderCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rigBuilder});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigBuilder::OnRemoveRigBuilderCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Animations::Rigging::RigBuilder::OnRemoveRigBuilderCallback::*)(::UnityEngine::Animations::Rigging::RigBuilder*, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Animations::Rigging::RigBuilder::OnRemoveRigBuilderCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* rigBuilder = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "RigBuilder")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigBuilder::OnRemoveRigBuilderCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rigBuilder, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigBuilder::OnRemoveRigBuilderCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::RigBuilder::OnRemoveRigBuilderCallback::*)(::System::IAsyncResult*)>(&UnityEngine::Animations::Rigging::RigBuilder::OnRemoveRigBuilderCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigBuilder::OnRemoveRigBuilderCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
