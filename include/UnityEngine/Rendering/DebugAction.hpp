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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: DebugAction
  struct DebugAction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugAction, "UnityEngine.Rendering", "DebugAction");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.DebugAction
  // [TokenAttribute] Offset: FFFFFFFF
  struct DebugAction/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DebugAction
    constexpr DebugAction(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.DebugAction EnableDebugMenu
    static constexpr const int EnableDebugMenu = 0;
    // Get static field: static public UnityEngine.Rendering.DebugAction EnableDebugMenu
    static ::UnityEngine::Rendering::DebugAction _get_EnableDebugMenu();
    // Set static field: static public UnityEngine.Rendering.DebugAction EnableDebugMenu
    static void _set_EnableDebugMenu(::UnityEngine::Rendering::DebugAction value);
    // static field const value: static public UnityEngine.Rendering.DebugAction PreviousDebugPanel
    static constexpr const int PreviousDebugPanel = 1;
    // Get static field: static public UnityEngine.Rendering.DebugAction PreviousDebugPanel
    static ::UnityEngine::Rendering::DebugAction _get_PreviousDebugPanel();
    // Set static field: static public UnityEngine.Rendering.DebugAction PreviousDebugPanel
    static void _set_PreviousDebugPanel(::UnityEngine::Rendering::DebugAction value);
    // static field const value: static public UnityEngine.Rendering.DebugAction NextDebugPanel
    static constexpr const int NextDebugPanel = 2;
    // Get static field: static public UnityEngine.Rendering.DebugAction NextDebugPanel
    static ::UnityEngine::Rendering::DebugAction _get_NextDebugPanel();
    // Set static field: static public UnityEngine.Rendering.DebugAction NextDebugPanel
    static void _set_NextDebugPanel(::UnityEngine::Rendering::DebugAction value);
    // static field const value: static public UnityEngine.Rendering.DebugAction Action
    static constexpr const int Action = 3;
    // Get static field: static public UnityEngine.Rendering.DebugAction Action
    static ::UnityEngine::Rendering::DebugAction _get_Action();
    // Set static field: static public UnityEngine.Rendering.DebugAction Action
    static void _set_Action(::UnityEngine::Rendering::DebugAction value);
    // static field const value: static public UnityEngine.Rendering.DebugAction MakePersistent
    static constexpr const int MakePersistent = 4;
    // Get static field: static public UnityEngine.Rendering.DebugAction MakePersistent
    static ::UnityEngine::Rendering::DebugAction _get_MakePersistent();
    // Set static field: static public UnityEngine.Rendering.DebugAction MakePersistent
    static void _set_MakePersistent(::UnityEngine::Rendering::DebugAction value);
    // static field const value: static public UnityEngine.Rendering.DebugAction MoveVertical
    static constexpr const int MoveVertical = 5;
    // Get static field: static public UnityEngine.Rendering.DebugAction MoveVertical
    static ::UnityEngine::Rendering::DebugAction _get_MoveVertical();
    // Set static field: static public UnityEngine.Rendering.DebugAction MoveVertical
    static void _set_MoveVertical(::UnityEngine::Rendering::DebugAction value);
    // static field const value: static public UnityEngine.Rendering.DebugAction MoveHorizontal
    static constexpr const int MoveHorizontal = 6;
    // Get static field: static public UnityEngine.Rendering.DebugAction MoveHorizontal
    static ::UnityEngine::Rendering::DebugAction _get_MoveHorizontal();
    // Set static field: static public UnityEngine.Rendering.DebugAction MoveHorizontal
    static void _set_MoveHorizontal(::UnityEngine::Rendering::DebugAction value);
    // static field const value: static public UnityEngine.Rendering.DebugAction Multiplier
    static constexpr const int Multiplier = 7;
    // Get static field: static public UnityEngine.Rendering.DebugAction Multiplier
    static ::UnityEngine::Rendering::DebugAction _get_Multiplier();
    // Set static field: static public UnityEngine.Rendering.DebugAction Multiplier
    static void _set_Multiplier(::UnityEngine::Rendering::DebugAction value);
    // static field const value: static public UnityEngine.Rendering.DebugAction ResetAll
    static constexpr const int ResetAll = 8;
    // Get static field: static public UnityEngine.Rendering.DebugAction ResetAll
    static ::UnityEngine::Rendering::DebugAction _get_ResetAll();
    // Set static field: static public UnityEngine.Rendering.DebugAction ResetAll
    static void _set_ResetAll(::UnityEngine::Rendering::DebugAction value);
    // static field const value: static public UnityEngine.Rendering.DebugAction DebugActionCount
    static constexpr const int DebugActionCount = 9;
    // Get static field: static public UnityEngine.Rendering.DebugAction DebugActionCount
    static ::UnityEngine::Rendering::DebugAction _get_DebugActionCount();
    // Set static field: static public UnityEngine.Rendering.DebugAction DebugActionCount
    static void _set_DebugActionCount(::UnityEngine::Rendering::DebugAction value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.DebugAction
  #pragma pack(pop)
  static check_size<sizeof(DebugAction), 0 + sizeof(int)> __UnityEngine_Rendering_DebugActionSizeCheck;
  static_assert(sizeof(DebugAction) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
