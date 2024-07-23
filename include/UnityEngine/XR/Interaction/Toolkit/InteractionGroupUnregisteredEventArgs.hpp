// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.BaseRegistrationEventArgs
#include "UnityEngine/XR/Interaction/Toolkit/BaseRegistrationEventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: IXRInteractionGroup
  class IXRInteractionGroup;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: InteractionGroupUnregisteredEventArgs
  class InteractionGroupUnregisteredEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "InteractionGroupUnregisteredEventArgs");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractionGroupUnregisteredEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs {
    public:
    public:
    // private UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup <interactionGroupObject>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* interactionGroupObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*) == 0x8);
    public:
    // Deleting conversion operator: operator ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*
    constexpr operator ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*() const noexcept = delete;
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup <interactionGroupObject>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*& dyn_$interactionGroupObject$k__BackingField();
    // public UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup get_interactionGroupObject()
    // Offset: 0x53FE5A4
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* get_interactionGroupObject();
    // public System.Void set_interactionGroupObject(UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup value)
    // Offset: 0x53FE5AC
    void set_interactionGroupObject(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* value);
    // public System.Void .ctor()
    // Offset: 0x53FE5B4
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.BaseRegistrationEventArgs
    // Base method: System.Void BaseRegistrationEventArgs::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionGroupUnregisteredEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionGroupUnregisteredEventArgs*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs
  #pragma pack(pop)
  static check_size<sizeof(InteractionGroupUnregisteredEventArgs), 24 + sizeof(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*)> __UnityEngine_XR_Interaction_Toolkit_InteractionGroupUnregisteredEventArgsSizeCheck;
  static_assert(sizeof(InteractionGroupUnregisteredEventArgs) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::get_interactionGroupObject
// Il2CppName: get_interactionGroupObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* (UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::*)()>(&UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::get_interactionGroupObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*), "get_interactionGroupObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::set_interactionGroupObject
// Il2CppName: set_interactionGroupObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*)>(&UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::set_interactionGroupObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractionGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*), "set_interactionGroupObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
