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
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IController
  class IController;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: ControllerActiveState
  class ControllerActiveState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::ControllerActiveState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::ControllerActiveState*, "Oculus.Interaction", "ControllerActiveState");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.ControllerActiveState
  // [TokenAttribute] Offset: FFFFFFFF
  class ControllerActiveState : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::IActiveState*/ {
    public:
    public:
    // private UnityEngine.Object _controller
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* controller;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Input.IController Controller
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::Input::IController* Controller;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IController*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::IActiveState
    operator ::Oculus::Interaction::IActiveState() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::IActiveState*>(this);
    }
    // Get instance field reference: private UnityEngine.Object _controller
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__controller();
    // Get instance field reference: private Oculus.Interaction.Input.IController Controller
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IController*& dyn_Controller();
    // public System.Boolean get_Active()
    // Offset: 0x478170C
    bool get_Active();
    // protected System.Void Awake()
    // Offset: 0x47817B0
    void Awake();
    // protected System.Void Start()
    // Offset: 0x4781818
    void Start();
    // public System.Void InjectAllControllerActiveState(Oculus.Interaction.Input.IController controller)
    // Offset: 0x478181C
    void InjectAllControllerActiveState(::Oculus::Interaction::Input::IController* controller);
    // public System.Void InjectController(Oculus.Interaction.Input.IController controller)
    // Offset: 0x4781820
    void InjectController(::Oculus::Interaction::Input::IController* controller);
    // public System.Void .ctor()
    // Offset: 0x47818F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ControllerActiveState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::ControllerActiveState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ControllerActiveState*, creationType>()));
    }
  }; // Oculus.Interaction.ControllerActiveState
  #pragma pack(pop)
  static check_size<sizeof(ControllerActiveState), 40 + sizeof(::Oculus::Interaction::Input::IController*)> __Oculus_Interaction_ControllerActiveStateSizeCheck;
  static_assert(sizeof(ControllerActiveState) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::ControllerActiveState::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::ControllerActiveState::*)()>(&Oculus::Interaction::ControllerActiveState::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerActiveState*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerActiveState::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerActiveState::*)()>(&Oculus::Interaction::ControllerActiveState::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerActiveState*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerActiveState::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerActiveState::*)()>(&Oculus::Interaction::ControllerActiveState::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerActiveState*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerActiveState::InjectAllControllerActiveState
// Il2CppName: InjectAllControllerActiveState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerActiveState::*)(::Oculus::Interaction::Input::IController*)>(&Oculus::Interaction::ControllerActiveState::InjectAllControllerActiveState)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerActiveState*), "InjectAllControllerActiveState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerActiveState::InjectController
// Il2CppName: InjectController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerActiveState::*)(::Oculus::Interaction::Input::IController*)>(&Oculus::Interaction::ControllerActiveState::InjectController)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerActiveState*), "InjectController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerActiveState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
