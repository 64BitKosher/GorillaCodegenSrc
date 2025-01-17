// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.IInputStateTypeInfo
#include "UnityEngine/InputSystem/LowLevel/IInputStateTypeInfo.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.GamepadButton
#include "UnityEngine/InputSystem/LowLevel/GamepadButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine::InputSystem::Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: FourCC
  struct FourCC;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: GamepadState
  struct GamepadState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::GamepadState, "UnityEngine.InputSystem.LowLevel", "GamepadState");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.GamepadState
  // [TokenAttribute] Offset: FFFFFFFF
  struct GamepadState/*, public ::System::ValueType, public ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*/ {
    public:
    public:
    // public System.UInt32 buttons
    // Size: 0x4
    // Offset: 0x0
    uint buttons;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public UnityEngine.Vector2 leftStick
    // Size: 0x8
    // Offset: 0x4
    ::UnityEngine::Vector2 leftStick;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 rightStick
    // Size: 0x8
    // Offset: 0xC
    ::UnityEngine::Vector2 rightStick;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.Single leftTrigger
    // Size: 0x4
    // Offset: 0x14
    float leftTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rightTrigger
    // Size: 0x4
    // Offset: 0x18
    float rightTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: GamepadState
    constexpr GamepadState(uint buttons_ = {}, ::UnityEngine::Vector2 leftStick_ = {}, ::UnityEngine::Vector2 rightStick_ = {}, float leftTrigger_ = {}, float rightTrigger_ = {}) noexcept : buttons{buttons_}, leftStick{leftStick_}, rightStick{rightStick_}, leftTrigger{leftTrigger_}, rightTrigger{rightTrigger_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
    operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(this);
    }
    // static field const value: static System.String ButtonSouthShortDisplayName
    static constexpr const char* ButtonSouthShortDisplayName = "A";
    // Get static field: static System.String ButtonSouthShortDisplayName
    static ::StringW _get_ButtonSouthShortDisplayName();
    // Set static field: static System.String ButtonSouthShortDisplayName
    static void _set_ButtonSouthShortDisplayName(::StringW value);
    // static field const value: static System.String ButtonNorthShortDisplayName
    static constexpr const char* ButtonNorthShortDisplayName = "Y";
    // Get static field: static System.String ButtonNorthShortDisplayName
    static ::StringW _get_ButtonNorthShortDisplayName();
    // Set static field: static System.String ButtonNorthShortDisplayName
    static void _set_ButtonNorthShortDisplayName(::StringW value);
    // static field const value: static System.String ButtonWestShortDisplayName
    static constexpr const char* ButtonWestShortDisplayName = "X";
    // Get static field: static System.String ButtonWestShortDisplayName
    static ::StringW _get_ButtonWestShortDisplayName();
    // Set static field: static System.String ButtonWestShortDisplayName
    static void _set_ButtonWestShortDisplayName(::StringW value);
    // static field const value: static System.String ButtonEastShortDisplayName
    static constexpr const char* ButtonEastShortDisplayName = "B";
    // Get static field: static System.String ButtonEastShortDisplayName
    static ::StringW _get_ButtonEastShortDisplayName();
    // Set static field: static System.String ButtonEastShortDisplayName
    static void _set_ButtonEastShortDisplayName(::StringW value);
    // Get instance field reference: public System.UInt32 buttons
    [[deprecated("Use field access instead!")]] uint& dyn_buttons();
    // Get instance field reference: public UnityEngine.Vector2 leftStick
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_leftStick();
    // Get instance field reference: public UnityEngine.Vector2 rightStick
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_rightStick();
    // Get instance field reference: public System.Single leftTrigger
    [[deprecated("Use field access instead!")]] float& dyn_leftTrigger();
    // Get instance field reference: public System.Single rightTrigger
    [[deprecated("Use field access instead!")]] float& dyn_rightTrigger();
    // static public UnityEngine.InputSystem.Utilities.FourCC get_Format()
    // Offset: 0x514AFCC
    static ::UnityEngine::InputSystem::Utilities::FourCC get_Format();
    // public UnityEngine.InputSystem.Utilities.FourCC get_format()
    // Offset: 0x514AFFC
    ::UnityEngine::InputSystem::Utilities::FourCC get_format();
    // public System.Void .ctor(params UnityEngine.InputSystem.LowLevel.GamepadButton[] buttons)
    // Offset: 0x514B02C
    GamepadState(::ArrayW<::UnityEngine::InputSystem::LowLevel::GamepadButton> buttons);
    // public UnityEngine.InputSystem.LowLevel.GamepadState WithButton(UnityEngine.InputSystem.LowLevel.GamepadButton button, System.Boolean value)
    // Offset: 0x514B0DC
    ::UnityEngine::InputSystem::LowLevel::GamepadState WithButton(::UnityEngine::InputSystem::LowLevel::GamepadButton button, bool value);
  }; // UnityEngine.InputSystem.LowLevel.GamepadState
  #pragma pack(pop)
  static check_size<sizeof(GamepadState), 24 + sizeof(float)> __UnityEngine_InputSystem_LowLevel_GamepadStateSizeCheck;
  static_assert(sizeof(GamepadState) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::GamepadState::get_Format
// Il2CppName: get_Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::LowLevel::GamepadState::get_Format)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::GamepadState), "get_Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::GamepadState::get_format
// Il2CppName: get_format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::GamepadState::*)()>(&UnityEngine::InputSystem::LowLevel::GamepadState::get_format)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::GamepadState), "get_format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::GamepadState::GamepadState
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::GamepadState::WithButton
// Il2CppName: WithButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::GamepadState (UnityEngine::InputSystem::LowLevel::GamepadState::*)(::UnityEngine::InputSystem::LowLevel::GamepadButton, bool)>(&UnityEngine::InputSystem::LowLevel::GamepadState::WithButton)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "GamepadButton")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::GamepadState), "WithButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button, value});
  }
};
