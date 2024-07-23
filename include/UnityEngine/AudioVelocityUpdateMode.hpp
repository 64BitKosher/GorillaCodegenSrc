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
  // Forward declaring type: AudioVelocityUpdateMode
  struct AudioVelocityUpdateMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioVelocityUpdateMode, "UnityEngine", "AudioVelocityUpdateMode");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioVelocityUpdateMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct AudioVelocityUpdateMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AudioVelocityUpdateMode
    constexpr AudioVelocityUpdateMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.AudioVelocityUpdateMode Auto
    static constexpr const int Auto = 0;
    // Get static field: static public UnityEngine.AudioVelocityUpdateMode Auto
    static ::UnityEngine::AudioVelocityUpdateMode _get_Auto();
    // Set static field: static public UnityEngine.AudioVelocityUpdateMode Auto
    static void _set_Auto(::UnityEngine::AudioVelocityUpdateMode value);
    // static field const value: static public UnityEngine.AudioVelocityUpdateMode Fixed
    static constexpr const int Fixed = 1;
    // Get static field: static public UnityEngine.AudioVelocityUpdateMode Fixed
    static ::UnityEngine::AudioVelocityUpdateMode _get_Fixed();
    // Set static field: static public UnityEngine.AudioVelocityUpdateMode Fixed
    static void _set_Fixed(::UnityEngine::AudioVelocityUpdateMode value);
    // static field const value: static public UnityEngine.AudioVelocityUpdateMode Dynamic
    static constexpr const int Dynamic = 2;
    // Get static field: static public UnityEngine.AudioVelocityUpdateMode Dynamic
    static ::UnityEngine::AudioVelocityUpdateMode _get_Dynamic();
    // Set static field: static public UnityEngine.AudioVelocityUpdateMode Dynamic
    static void _set_Dynamic(::UnityEngine::AudioVelocityUpdateMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.AudioVelocityUpdateMode
  #pragma pack(pop)
  static check_size<sizeof(AudioVelocityUpdateMode), 0 + sizeof(int)> __UnityEngine_AudioVelocityUpdateModeSizeCheck;
  static_assert(sizeof(AudioVelocityUpdateMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
