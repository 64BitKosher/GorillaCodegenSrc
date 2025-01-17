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
  // Forward declaring type: PlayerNotifications
  struct PlayerNotifications;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::PlayerNotifications, "UnityEngine.InputSystem", "PlayerNotifications");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.PlayerNotifications
  // [TokenAttribute] Offset: FFFFFFFF
  struct PlayerNotifications/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PlayerNotifications
    constexpr PlayerNotifications(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.InputSystem.PlayerNotifications SendMessages
    static constexpr const int SendMessages = 0;
    // Get static field: static public UnityEngine.InputSystem.PlayerNotifications SendMessages
    static ::UnityEngine::InputSystem::PlayerNotifications _get_SendMessages();
    // Set static field: static public UnityEngine.InputSystem.PlayerNotifications SendMessages
    static void _set_SendMessages(::UnityEngine::InputSystem::PlayerNotifications value);
    // static field const value: static public UnityEngine.InputSystem.PlayerNotifications BroadcastMessages
    static constexpr const int BroadcastMessages = 1;
    // Get static field: static public UnityEngine.InputSystem.PlayerNotifications BroadcastMessages
    static ::UnityEngine::InputSystem::PlayerNotifications _get_BroadcastMessages();
    // Set static field: static public UnityEngine.InputSystem.PlayerNotifications BroadcastMessages
    static void _set_BroadcastMessages(::UnityEngine::InputSystem::PlayerNotifications value);
    // static field const value: static public UnityEngine.InputSystem.PlayerNotifications InvokeUnityEvents
    static constexpr const int InvokeUnityEvents = 2;
    // Get static field: static public UnityEngine.InputSystem.PlayerNotifications InvokeUnityEvents
    static ::UnityEngine::InputSystem::PlayerNotifications _get_InvokeUnityEvents();
    // Set static field: static public UnityEngine.InputSystem.PlayerNotifications InvokeUnityEvents
    static void _set_InvokeUnityEvents(::UnityEngine::InputSystem::PlayerNotifications value);
    // static field const value: static public UnityEngine.InputSystem.PlayerNotifications InvokeCSharpEvents
    static constexpr const int InvokeCSharpEvents = 3;
    // Get static field: static public UnityEngine.InputSystem.PlayerNotifications InvokeCSharpEvents
    static ::UnityEngine::InputSystem::PlayerNotifications _get_InvokeCSharpEvents();
    // Set static field: static public UnityEngine.InputSystem.PlayerNotifications InvokeCSharpEvents
    static void _set_InvokeCSharpEvents(::UnityEngine::InputSystem::PlayerNotifications value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.InputSystem.PlayerNotifications
  #pragma pack(pop)
  static check_size<sizeof(PlayerNotifications), 0 + sizeof(int)> __UnityEngine_InputSystem_PlayerNotificationsSizeCheck;
  static_assert(sizeof(PlayerNotifications) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
