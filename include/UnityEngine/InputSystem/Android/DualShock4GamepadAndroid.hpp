// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.DualShock.DualShockGamepad
#include "UnityEngine/InputSystem/DualShock/DualShockGamepad.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.InputSystem.Android
namespace UnityEngine::InputSystem::Android {
  // Forward declaring type: DualShock4GamepadAndroid
  class DualShock4GamepadAndroid;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid*, "UnityEngine.InputSystem.Android", "DualShock4GamepadAndroid");
// Type namespace: UnityEngine.InputSystem.Android
namespace UnityEngine::InputSystem::Android {
  // Size: 0x238
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Android.DualShock4GamepadAndroid
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: FFFFFFFF
  class DualShock4GamepadAndroid : public ::UnityEngine::InputSystem::DualShock::DualShockGamepad {
    public:
    // public System.Void .ctor()
    // Offset: 0x51482BC
    // Implemented from: UnityEngine.InputSystem.DualShock.DualShockGamepad
    // Base method: System.Void DualShockGamepad::.ctor()
    // Base method: System.Void Gamepad::.ctor()
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DualShock4GamepadAndroid* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DualShock4GamepadAndroid*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Android.DualShock4GamepadAndroid
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Android::DualShock4GamepadAndroid::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
