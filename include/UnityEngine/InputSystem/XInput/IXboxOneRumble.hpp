// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Haptics.IDualMotorRumble
#include "UnityEngine/InputSystem/Haptics/IDualMotorRumble.hpp"
// Completed includes
// Type namespace: UnityEngine.InputSystem.XInput
namespace UnityEngine::InputSystem::XInput {
  // Forward declaring type: IXboxOneRumble
  class IXboxOneRumble;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::XInput::IXboxOneRumble);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XInput::IXboxOneRumble*, "UnityEngine.InputSystem.XInput", "IXboxOneRumble");
// Type namespace: UnityEngine.InputSystem.XInput
namespace UnityEngine::InputSystem::XInput {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.XInput.IXboxOneRumble
  // [TokenAttribute] Offset: FFFFFFFF
  class IXboxOneRumble/*, public ::UnityEngine::InputSystem::Haptics::IDualMotorRumble*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::Haptics::IDualMotorRumble
    operator ::UnityEngine::InputSystem::Haptics::IDualMotorRumble() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::Haptics::IDualMotorRumble*>(this);
    }
    // public System.Void SetMotorSpeeds(System.Single lowFrequency, System.Single highFrequency, System.Single leftTrigger, System.Single rightTrigger)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetMotorSpeeds(float lowFrequency, float highFrequency, float leftTrigger, float rightTrigger);
  }; // UnityEngine.InputSystem.XInput.IXboxOneRumble
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::XInput::IXboxOneRumble::SetMotorSpeeds
// Il2CppName: SetMotorSpeeds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XInput::IXboxOneRumble::*)(float, float, float, float)>(&UnityEngine::InputSystem::XInput::IXboxOneRumble::SetMotorSpeeds)> {
  static const MethodInfo* get() {
    static auto* lowFrequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* highFrequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* leftTrigger = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rightTrigger = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XInput::IXboxOneRumble*), "SetMotorSpeeds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lowFrequency, highFrequency, leftTrigger, rightTrigger});
  }
};
