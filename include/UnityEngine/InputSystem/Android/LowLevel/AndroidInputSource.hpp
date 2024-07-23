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
// Type namespace: UnityEngine.InputSystem.Android.LowLevel
namespace UnityEngine::InputSystem::Android::LowLevel {
  // Forward declaring type: AndroidInputSource
  struct AndroidInputSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource, "UnityEngine.InputSystem.Android.LowLevel", "AndroidInputSource");
// Type namespace: UnityEngine.InputSystem.Android.LowLevel
namespace UnityEngine::InputSystem::Android::LowLevel {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource
  // [TokenAttribute] Offset: FFFFFFFF
  struct AndroidInputSource/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AndroidInputSource
    constexpr AndroidInputSource(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Keyboard
    static constexpr const int Keyboard = 257;
    // Get static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Keyboard
    static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource _get_Keyboard();
    // Set static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Keyboard
    static void _set_Keyboard(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource value);
    // static field const value: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Dpad
    static constexpr const int Dpad = 513;
    // Get static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Dpad
    static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource _get_Dpad();
    // Set static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Dpad
    static void _set_Dpad(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource value);
    // static field const value: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Gamepad
    static constexpr const int Gamepad = 1025;
    // Get static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Gamepad
    static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource _get_Gamepad();
    // Set static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Gamepad
    static void _set_Gamepad(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource value);
    // static field const value: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Touchscreen
    static constexpr const int Touchscreen = 4098;
    // Get static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Touchscreen
    static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource _get_Touchscreen();
    // Set static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Touchscreen
    static void _set_Touchscreen(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource value);
    // static field const value: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Mouse
    static constexpr const int Mouse = 8194;
    // Get static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Mouse
    static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource _get_Mouse();
    // Set static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Mouse
    static void _set_Mouse(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource value);
    // static field const value: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Stylus
    static constexpr const int Stylus = 16386;
    // Get static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Stylus
    static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource _get_Stylus();
    // Set static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Stylus
    static void _set_Stylus(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource value);
    // static field const value: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Trackball
    static constexpr const int Trackball = 65540;
    // Get static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Trackball
    static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource _get_Trackball();
    // Set static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Trackball
    static void _set_Trackball(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource value);
    // static field const value: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Touchpad
    static constexpr const int Touchpad = 1048584;
    // Get static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Touchpad
    static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource _get_Touchpad();
    // Set static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Touchpad
    static void _set_Touchpad(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource value);
    // static field const value: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Joystick
    static constexpr const int Joystick = 16777232;
    // Get static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Joystick
    static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource _get_Joystick();
    // Set static field: static public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource Joystick
    static void _set_Joystick(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource
  #pragma pack(pop)
  static check_size<sizeof(AndroidInputSource), 0 + sizeof(int)> __UnityEngine_InputSystem_Android_LowLevel_AndroidInputSourceSizeCheck;
  static_assert(sizeof(AndroidInputSource) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
