// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: TouchPhase
  struct TouchPhase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::TouchPhase, "UnityEngine.InputSystem", "TouchPhase");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.TouchPhase
  // [TokenAttribute] Offset: FFFFFFFF
  struct TouchPhase/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TouchPhase
    constexpr TouchPhase(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.InputSystem.TouchPhase None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.InputSystem.TouchPhase None
    static ::UnityEngine::InputSystem::TouchPhase _get_None();
    // Set static field: static public UnityEngine.InputSystem.TouchPhase None
    static void _set_None(::UnityEngine::InputSystem::TouchPhase value);
    // static field const value: static public UnityEngine.InputSystem.TouchPhase Began
    static constexpr const int Began = 1;
    // Get static field: static public UnityEngine.InputSystem.TouchPhase Began
    static ::UnityEngine::InputSystem::TouchPhase _get_Began();
    // Set static field: static public UnityEngine.InputSystem.TouchPhase Began
    static void _set_Began(::UnityEngine::InputSystem::TouchPhase value);
    // static field const value: static public UnityEngine.InputSystem.TouchPhase Moved
    static constexpr const int Moved = 2;
    // Get static field: static public UnityEngine.InputSystem.TouchPhase Moved
    static ::UnityEngine::InputSystem::TouchPhase _get_Moved();
    // Set static field: static public UnityEngine.InputSystem.TouchPhase Moved
    static void _set_Moved(::UnityEngine::InputSystem::TouchPhase value);
    // static field const value: static public UnityEngine.InputSystem.TouchPhase Ended
    static constexpr const int Ended = 3;
    // Get static field: static public UnityEngine.InputSystem.TouchPhase Ended
    static ::UnityEngine::InputSystem::TouchPhase _get_Ended();
    // Set static field: static public UnityEngine.InputSystem.TouchPhase Ended
    static void _set_Ended(::UnityEngine::InputSystem::TouchPhase value);
    // static field const value: static public UnityEngine.InputSystem.TouchPhase Canceled
    static constexpr const int Canceled = 4;
    // Get static field: static public UnityEngine.InputSystem.TouchPhase Canceled
    static ::UnityEngine::InputSystem::TouchPhase _get_Canceled();
    // Set static field: static public UnityEngine.InputSystem.TouchPhase Canceled
    static void _set_Canceled(::UnityEngine::InputSystem::TouchPhase value);
    // static field const value: static public UnityEngine.InputSystem.TouchPhase Stationary
    static constexpr const int Stationary = 5;
    // Get static field: static public UnityEngine.InputSystem.TouchPhase Stationary
    static ::UnityEngine::InputSystem::TouchPhase _get_Stationary();
    // Set static field: static public UnityEngine.InputSystem.TouchPhase Stationary
    static void _set_Stationary(::UnityEngine::InputSystem::TouchPhase value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.InputSystem.TouchPhase
  #pragma pack(pop)
  static check_size<sizeof(TouchPhase), 0 + sizeof(int)> __UnityEngine_InputSystem_TouchPhaseSizeCheck;
  static_assert(sizeof(TouchPhase) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
