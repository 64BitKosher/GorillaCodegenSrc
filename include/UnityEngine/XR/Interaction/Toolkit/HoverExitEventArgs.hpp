// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
#include "UnityEngine/XR/Interaction/Toolkit/BaseInteractionEventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRInteractionManager
  class XRInteractionManager;
  // Forward declaring type: IXRHoverInteractor
  class IXRHoverInteractor;
  // Forward declaring type: IXRHoverInteractable
  class IXRHoverInteractable;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: HoverExitEventArgs
  class HoverExitEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "HoverExitEventArgs");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class HoverExitEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs {
    public:
    public:
    // private UnityEngine.XR.Interaction.Toolkit.XRInteractionManager <manager>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* manager;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*) == 0x8);
    // private System.Boolean <isCanceled>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool isCanceled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.XRInteractionManager <manager>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*& dyn_$manager$k__BackingField();
    // Get instance field reference: private System.Boolean <isCanceled>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isCanceled$k__BackingField();
    // public UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor get_interactorObject()
    // Offset: 0x53FDFD8
    ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* get_interactorObject();
    // public System.Void set_interactorObject(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor value)
    // Offset: 0x53FE044
    void set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* value);
    // public UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable get_interactableObject()
    // Offset: 0x53EBE50
    ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* get_interactableObject();
    // public System.Void set_interactableObject(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable value)
    // Offset: 0x53FE04C
    void set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* value);
    // public UnityEngine.XR.Interaction.Toolkit.XRInteractionManager get_manager()
    // Offset: 0x53FE054
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* get_manager();
    // public System.Void set_manager(UnityEngine.XR.Interaction.Toolkit.XRInteractionManager value)
    // Offset: 0x53FE05C
    void set_manager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* value);
    // public System.Boolean get_isCanceled()
    // Offset: 0x53FE064
    bool get_isCanceled();
    // public System.Void set_isCanceled(System.Boolean value)
    // Offset: 0x53FE06C
    void set_isCanceled(bool value);
    // public System.Void .ctor()
    // Offset: 0x53FE078
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
    // Base method: System.Void BaseInteractionEventArgs::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HoverExitEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HoverExitEventArgs*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
  #pragma pack(pop)
  static check_size<sizeof(HoverExitEventArgs), 40 + sizeof(bool)> __UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgsSizeCheck;
  static_assert(sizeof(HoverExitEventArgs) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::get_interactorObject
// Il2CppName: get_interactorObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* (UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::*)()>(&UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::get_interactorObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*), "get_interactorObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::set_interactorObject
// Il2CppName: set_interactorObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*)>(&UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::set_interactorObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRHoverInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*), "set_interactorObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::get_interactableObject
// Il2CppName: get_interactableObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* (UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::*)()>(&UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::get_interactableObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*), "get_interactableObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::set_interactableObject
// Il2CppName: set_interactableObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*)>(&UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::set_interactableObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRHoverInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*), "set_interactableObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::get_manager
// Il2CppName: get_manager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* (UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::*)()>(&UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::get_manager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*), "get_manager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::set_manager
// Il2CppName: set_manager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*)>(&UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::set_manager)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRInteractionManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*), "set_manager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::get_isCanceled
// Il2CppName: get_isCanceled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::*)()>(&UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::get_isCanceled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*), "get_isCanceled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::set_isCanceled
// Il2CppName: set_isCanceled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::set_isCanceled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*), "set_isCanceled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
