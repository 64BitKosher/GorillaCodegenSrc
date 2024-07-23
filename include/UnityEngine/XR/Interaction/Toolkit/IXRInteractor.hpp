// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder
#include "UnityEngine/XR/Interaction/Toolkit/XRInteractionUpdateOrder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: InteractorRegisteredEventArgs
  class InteractorRegisteredEventArgs;
  // Forward declaring type: InteractorUnregisteredEventArgs
  class InteractorUnregisteredEventArgs;
  // Forward declaring type: InteractionLayerMask
  struct InteractionLayerMask;
  // Forward declaring type: IXRInteractable
  class IXRInteractable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: IXRInteractor
  class IXRInteractor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, "UnityEngine.XR.Interaction.Toolkit", "IXRInteractor");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.IXRInteractor
  // [TokenAttribute] Offset: FFFFFFFF
  class IXRInteractor {
    public:
    // public System.Void add_registered(System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* value);
    // public System.Void remove_registered(System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* value);
    // public System.Void add_unregistered(System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* value);
    // public System.Void remove_unregistered(System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* value);
    // public UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask get_interactionLayers()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask get_interactionLayers();
    // public UnityEngine.Transform get_transform()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_transform();
    // public UnityEngine.Transform GetAttachTransform(UnityEngine.XR.Interaction.Toolkit.IXRInteractable interactable)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);
    // public System.Void GetValidTargets(System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> targets)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* targets);
    // public System.Void OnRegistered(UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs* args);
    // public System.Void OnUnregistered(UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs* args);
    // public System.Void PreprocessInteractor(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase updatePhase)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void PreprocessInteractor(::UnityEngine::XR::Interaction::Toolkit::XRInteractionUpdateOrder::UpdatePhase updatePhase);
    // public System.Void ProcessInteractor(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase updatePhase)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ProcessInteractor(::UnityEngine::XR::Interaction::Toolkit::XRInteractionUpdateOrder::UpdatePhase updatePhase);
  }; // UnityEngine.XR.Interaction.Toolkit.IXRInteractor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractor::add_registered
// Il2CppName: add_registered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRInteractor::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractor::add_registered)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InteractorRegisteredEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractor*), "add_registered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractor::remove_registered
// Il2CppName: remove_registered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRInteractor::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractor::remove_registered)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InteractorRegisteredEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractor*), "remove_registered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractor::add_unregistered
// Il2CppName: add_unregistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRInteractor::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractor::add_unregistered)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InteractorUnregisteredEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractor*), "add_unregistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractor::remove_unregistered
// Il2CppName: remove_unregistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRInteractor::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractor::remove_unregistered)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InteractorUnregisteredEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractor*), "remove_unregistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractor::get_interactionLayers
// Il2CppName: get_interactionLayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask (UnityEngine::XR::Interaction::Toolkit::IXRInteractor::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractor::get_interactionLayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractor*), "get_interactionLayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractor::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::XR::Interaction::Toolkit::IXRInteractor::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractor::get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractor*), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractor::GetAttachTransform
// Il2CppName: GetAttachTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::XR::Interaction::Toolkit::IXRInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractor::GetAttachTransform)> {
  static const MethodInfo* get() {
    static auto* interactable = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractor*), "GetAttachTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactable});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractor::GetValidTargets
// Il2CppName: GetValidTargets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRInteractor::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractor::GetValidTargets)> {
  static const MethodInfo* get() {
    static auto* targets = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractor*), "GetValidTargets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targets});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractor::OnRegistered
// Il2CppName: OnRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractor::OnRegistered)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InteractorRegisteredEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractor*), "OnRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractor::OnUnregistered
// Il2CppName: OnUnregistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractor::OnUnregistered)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InteractorUnregisteredEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractor*), "OnUnregistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractor::PreprocessInteractor
// Il2CppName: PreprocessInteractor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionUpdateOrder::UpdatePhase)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractor::PreprocessInteractor)> {
  static const MethodInfo* get() {
    static auto* updatePhase = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRInteractionUpdateOrder/UpdatePhase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractor*), "PreprocessInteractor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updatePhase});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractor::ProcessInteractor
// Il2CppName: ProcessInteractor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionUpdateOrder::UpdatePhase)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractor::ProcessInteractor)> {
  static const MethodInfo* get() {
    static auto* updatePhase = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRInteractionUpdateOrder/UpdatePhase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractor*), "ProcessInteractor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updatePhase});
  }
};