// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.IActiveState
#include "Oculus/Interaction/IActiveState.hpp"
// Including type: OVRInput/Controller
#include "GlobalNamespace/OVRInput.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: OVRInputDeviceActiveState
  class OVRInputDeviceActiveState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Input::OVRInputDeviceActiveState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Input::OVRInputDeviceActiveState*, "Oculus.Interaction.Input", "OVRInputDeviceActiveState");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Input.OVRInputDeviceActiveState
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRInputDeviceActiveState : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::IActiveState*/ {
    public:
    public:
    // private System.Collections.Generic.List`1<OVRInput/Controller> _controllerTypes
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput::Controller>* controllerTypes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput::Controller>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::IActiveState
    operator ::Oculus::Interaction::IActiveState() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::IActiveState*>(this);
    }
    // Get instance field reference: private System.Collections.Generic.List`1<OVRInput/Controller> _controllerTypes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput::Controller>*& dyn__controllerTypes();
    // public System.Boolean get_Active()
    // Offset: 0x4793CD4
    bool get_Active();
    // public System.Void InjectAllOVRInputDeviceActiveState(System.Collections.Generic.List`1<OVRInput/Controller> controllerTypes)
    // Offset: 0x4793E94
    void InjectAllOVRInputDeviceActiveState(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput::Controller>* controllerTypes);
    // public System.Void InjectControllerTypes(System.Collections.Generic.List`1<OVRInput/Controller> controllerTypes)
    // Offset: 0x4793E9C
    void InjectControllerTypes(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput::Controller>* controllerTypes);
    // public System.Void .ctor()
    // Offset: 0x4793EA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInputDeviceActiveState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::OVRInputDeviceActiveState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInputDeviceActiveState*, creationType>()));
    }
  }; // Oculus.Interaction.Input.OVRInputDeviceActiveState
  #pragma pack(pop)
  static check_size<sizeof(OVRInputDeviceActiveState), 32 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput::Controller>*)> __Oculus_Interaction_Input_OVRInputDeviceActiveStateSizeCheck;
  static_assert(sizeof(OVRInputDeviceActiveState) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Input::OVRInputDeviceActiveState::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Input::OVRInputDeviceActiveState::*)()>(&Oculus::Interaction::Input::OVRInputDeviceActiveState::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OVRInputDeviceActiveState*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OVRInputDeviceActiveState::InjectAllOVRInputDeviceActiveState
// Il2CppName: InjectAllOVRInputDeviceActiveState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::OVRInputDeviceActiveState::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput::Controller>*)>(&Oculus::Interaction::Input::OVRInputDeviceActiveState::InjectAllOVRInputDeviceActiveState)> {
  static const MethodInfo* get() {
    static auto* controllerTypes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRInput/Controller")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OVRInputDeviceActiveState*), "InjectAllOVRInputDeviceActiveState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controllerTypes});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OVRInputDeviceActiveState::InjectControllerTypes
// Il2CppName: InjectControllerTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::OVRInputDeviceActiveState::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput::Controller>*)>(&Oculus::Interaction::Input::OVRInputDeviceActiveState::InjectControllerTypes)> {
  static const MethodInfo* get() {
    static auto* controllerTypes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRInput/Controller")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OVRInputDeviceActiveState*), "InjectControllerTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controllerTypes});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OVRInputDeviceActiveState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!