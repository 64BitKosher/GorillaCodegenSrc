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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TouchPhase
  struct TouchPhase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TouchPhase, "UnityEngine", "TouchPhase");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TouchPhase
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
    // static field const value: static public UnityEngine.TouchPhase Began
    static constexpr const int Began = 0;
    // Get static field: static public UnityEngine.TouchPhase Began
    static ::UnityEngine::TouchPhase _get_Began();
    // Set static field: static public UnityEngine.TouchPhase Began
    static void _set_Began(::UnityEngine::TouchPhase value);
    // static field const value: static public UnityEngine.TouchPhase Moved
    static constexpr const int Moved = 1;
    // Get static field: static public UnityEngine.TouchPhase Moved
    static ::UnityEngine::TouchPhase _get_Moved();
    // Set static field: static public UnityEngine.TouchPhase Moved
    static void _set_Moved(::UnityEngine::TouchPhase value);
    // static field const value: static public UnityEngine.TouchPhase Stationary
    static constexpr const int Stationary = 2;
    // Get static field: static public UnityEngine.TouchPhase Stationary
    static ::UnityEngine::TouchPhase _get_Stationary();
    // Set static field: static public UnityEngine.TouchPhase Stationary
    static void _set_Stationary(::UnityEngine::TouchPhase value);
    // static field const value: static public UnityEngine.TouchPhase Ended
    static constexpr const int Ended = 3;
    // Get static field: static public UnityEngine.TouchPhase Ended
    static ::UnityEngine::TouchPhase _get_Ended();
    // Set static field: static public UnityEngine.TouchPhase Ended
    static void _set_Ended(::UnityEngine::TouchPhase value);
    // static field const value: static public UnityEngine.TouchPhase Canceled
    static constexpr const int Canceled = 4;
    // Get static field: static public UnityEngine.TouchPhase Canceled
    static ::UnityEngine::TouchPhase _get_Canceled();
    // Set static field: static public UnityEngine.TouchPhase Canceled
    static void _set_Canceled(::UnityEngine::TouchPhase value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.TouchPhase
  #pragma pack(pop)
  static check_size<sizeof(TouchPhase), 0 + sizeof(int)> __UnityEngine_TouchPhaseSizeCheck;
  static_assert(sizeof(TouchPhase) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
