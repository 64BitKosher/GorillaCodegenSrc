// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Android.AndroidGamepad
#include "UnityEngine/InputSystem/Android/AndroidGamepad.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.InputSystem.Android
namespace UnityEngine::InputSystem::Android {
  // Forward declaring type: AndroidGamepadWithDpadAxes
  class AndroidGamepadWithDpadAxes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes*, "UnityEngine.InputSystem.Android", "AndroidGamepadWithDpadAxes");
// Type namespace: UnityEngine.InputSystem.Android
namespace UnityEngine::InputSystem::Android {
  // Size: 0x1F0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Android.AndroidGamepadWithDpadAxes
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: FFFFFFFF
  class AndroidGamepadWithDpadAxes : public ::UnityEngine::InputSystem::Android::AndroidGamepad {
    public:
    // public System.Void .ctor()
    // Offset: 0x51482A4
    // Implemented from: UnityEngine.InputSystem.Android.AndroidGamepad
    // Base method: System.Void AndroidGamepad::.ctor()
    // Base method: System.Void Gamepad::.ctor()
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidGamepadWithDpadAxes* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidGamepadWithDpadAxes*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Android.AndroidGamepadWithDpadAxes
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
