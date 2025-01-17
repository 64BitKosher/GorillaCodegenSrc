// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.XR.XRController
#include "UnityEngine/InputSystem/XR/XRController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // Forward declaring type: XRControllerWithRumble
  class XRControllerWithRumble;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRControllerWithRumble);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRControllerWithRumble*, "UnityEngine.InputSystem.XR", "XRControllerWithRumble");
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // Size: 0x190
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.XR.XRControllerWithRumble
  // [TokenAttribute] Offset: FFFFFFFF
  class XRControllerWithRumble : public ::UnityEngine::InputSystem::XR::XRController {
    public:
    // public System.Void SendImpulse(System.Single amplitude, System.Single duration)
    // Offset: 0x5126ADC
    void SendImpulse(float amplitude, float duration);
    // public System.Void .ctor()
    // Offset: 0x5126C04
    // Implemented from: UnityEngine.InputSystem.XR.XRController
    // Base method: System.Void XRController::.ctor()
    // Base method: System.Void TrackedDevice::.ctor()
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRControllerWithRumble* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::XR::XRControllerWithRumble::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRControllerWithRumble*, creationType>()));
    }
  }; // UnityEngine.InputSystem.XR.XRControllerWithRumble
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRControllerWithRumble::SendImpulse
// Il2CppName: SendImpulse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::XRControllerWithRumble::*)(float, float)>(&UnityEngine::InputSystem::XR::XRControllerWithRumble::SendImpulse)> {
  static const MethodInfo* get() {
    static auto* amplitude = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRControllerWithRumble*), "SendImpulse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{amplitude, duration});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRControllerWithRumble::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
