// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.TrackedDevice
#include "UnityEngine/InputSystem/TrackedDevice.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // Forward declaring type: XRController
  class XRController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRController*, "UnityEngine.InputSystem.XR", "XRController");
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // Size: 0x190
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.XR.XRController
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: FFFFFFFF
  class XRController : public ::UnityEngine::InputSystem::TrackedDevice {
    public:
    // static public UnityEngine.InputSystem.XR.XRController get_leftHand()
    // Offset: 0x5126854
    static ::UnityEngine::InputSystem::XR::XRController* get_leftHand();
    // static public UnityEngine.InputSystem.XR.XRController get_rightHand()
    // Offset: 0x51268F4
    static ::UnityEngine::InputSystem::XR::XRController* get_rightHand();
    // protected override System.Void FinishSetup()
    // Offset: 0x5126994
    // Implemented from: UnityEngine.InputSystem.TrackedDevice
    // Base method: System.Void TrackedDevice::FinishSetup()
    void FinishSetup();
    // public System.Void .ctor()
    // Offset: 0x5126AD4
    // Implemented from: UnityEngine.InputSystem.TrackedDevice
    // Base method: System.Void TrackedDevice::.ctor()
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::XR::XRController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRController*, creationType>()));
    }
  }; // UnityEngine.InputSystem.XR.XRController
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRController::get_leftHand
// Il2CppName: get_leftHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::XRController* (*)()>(&UnityEngine::InputSystem::XR::XRController::get_leftHand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRController*), "get_leftHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRController::get_rightHand
// Il2CppName: get_rightHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::XRController* (*)()>(&UnityEngine::InputSystem::XR::XRController::get_rightHand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRController*), "get_rightHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRController::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::XRController::*)()>(&UnityEngine::InputSystem::XR::XRController::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRController*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!