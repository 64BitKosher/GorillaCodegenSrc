// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputActionState/TriggerState
#include "UnityEngine/InputSystem/InputActionState_TriggerState.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionState::TriggerState::Flags, "UnityEngine.InputSystem", "InputActionState/TriggerState/Flags");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.InputActionState/TriggerState/Flags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct InputActionState::TriggerState::Flags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Flags
    constexpr Flags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags HaveMagnitude
    static constexpr const int HaveMagnitude = 1;
    // Get static field: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags HaveMagnitude
    static ::UnityEngine::InputSystem::InputActionState::TriggerState::Flags _get_HaveMagnitude();
    // Set static field: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags HaveMagnitude
    static void _set_HaveMagnitude(::UnityEngine::InputSystem::InputActionState::TriggerState::Flags value);
    // static field const value: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags PassThrough
    static constexpr const int PassThrough = 2;
    // Get static field: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags PassThrough
    static ::UnityEngine::InputSystem::InputActionState::TriggerState::Flags _get_PassThrough();
    // Set static field: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags PassThrough
    static void _set_PassThrough(::UnityEngine::InputSystem::InputActionState::TriggerState::Flags value);
    // static field const value: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags MayNeedConflictResolution
    static constexpr const int MayNeedConflictResolution = 4;
    // Get static field: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags MayNeedConflictResolution
    static ::UnityEngine::InputSystem::InputActionState::TriggerState::Flags _get_MayNeedConflictResolution();
    // Set static field: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags MayNeedConflictResolution
    static void _set_MayNeedConflictResolution(::UnityEngine::InputSystem::InputActionState::TriggerState::Flags value);
    // static field const value: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags HasMultipleConcurrentActuations
    static constexpr const int HasMultipleConcurrentActuations = 8;
    // Get static field: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags HasMultipleConcurrentActuations
    static ::UnityEngine::InputSystem::InputActionState::TriggerState::Flags _get_HasMultipleConcurrentActuations();
    // Set static field: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags HasMultipleConcurrentActuations
    static void _set_HasMultipleConcurrentActuations(::UnityEngine::InputSystem::InputActionState::TriggerState::Flags value);
    // static field const value: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags InProcessing
    static constexpr const int InProcessing = 16;
    // Get static field: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags InProcessing
    static ::UnityEngine::InputSystem::InputActionState::TriggerState::Flags _get_InProcessing();
    // Set static field: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags InProcessing
    static void _set_InProcessing(::UnityEngine::InputSystem::InputActionState::TriggerState::Flags value);
    // static field const value: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags Button
    static constexpr const int Button = 32;
    // Get static field: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags Button
    static ::UnityEngine::InputSystem::InputActionState::TriggerState::Flags _get_Button();
    // Set static field: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags Button
    static void _set_Button(::UnityEngine::InputSystem::InputActionState::TriggerState::Flags value);
    // static field const value: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags Pressed
    static constexpr const int Pressed = 64;
    // Get static field: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags Pressed
    static ::UnityEngine::InputSystem::InputActionState::TriggerState::Flags _get_Pressed();
    // Set static field: static public UnityEngine.InputSystem.InputActionState/TriggerState/Flags Pressed
    static void _set_Pressed(::UnityEngine::InputSystem::InputActionState::TriggerState::Flags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.InputSystem.InputActionState/TriggerState/Flags
  #pragma pack(pop)
  static check_size<sizeof(InputActionState::TriggerState::Flags), 0 + sizeof(int)> __UnityEngine_InputSystem_InputActionState_TriggerState_FlagsSizeCheck;
  static_assert(sizeof(InputActionState::TriggerState::Flags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
