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
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: EventCategory
  struct EventCategory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventCategory, "UnityEngine.UIElements", "EventCategory");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.EventCategory
  // [TokenAttribute] Offset: FFFFFFFF
  struct EventCategory/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EventCategory
    constexpr EventCategory(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.EventCategory Default
    static constexpr const int Default = 0;
    // Get static field: static public UnityEngine.UIElements.EventCategory Default
    static ::UnityEngine::UIElements::EventCategory _get_Default();
    // Set static field: static public UnityEngine.UIElements.EventCategory Default
    static void _set_Default(::UnityEngine::UIElements::EventCategory value);
    // static field const value: static public UnityEngine.UIElements.EventCategory Pointer
    static constexpr const int Pointer = 1;
    // Get static field: static public UnityEngine.UIElements.EventCategory Pointer
    static ::UnityEngine::UIElements::EventCategory _get_Pointer();
    // Set static field: static public UnityEngine.UIElements.EventCategory Pointer
    static void _set_Pointer(::UnityEngine::UIElements::EventCategory value);
    // static field const value: static public UnityEngine.UIElements.EventCategory PointerMove
    static constexpr const int PointerMove = 2;
    // Get static field: static public UnityEngine.UIElements.EventCategory PointerMove
    static ::UnityEngine::UIElements::EventCategory _get_PointerMove();
    // Set static field: static public UnityEngine.UIElements.EventCategory PointerMove
    static void _set_PointerMove(::UnityEngine::UIElements::EventCategory value);
    // static field const value: static public UnityEngine.UIElements.EventCategory EnterLeave
    static constexpr const int EnterLeave = 3;
    // Get static field: static public UnityEngine.UIElements.EventCategory EnterLeave
    static ::UnityEngine::UIElements::EventCategory _get_EnterLeave();
    // Set static field: static public UnityEngine.UIElements.EventCategory EnterLeave
    static void _set_EnterLeave(::UnityEngine::UIElements::EventCategory value);
    // static field const value: static public UnityEngine.UIElements.EventCategory EnterLeaveWindow
    static constexpr const int EnterLeaveWindow = 4;
    // Get static field: static public UnityEngine.UIElements.EventCategory EnterLeaveWindow
    static ::UnityEngine::UIElements::EventCategory _get_EnterLeaveWindow();
    // Set static field: static public UnityEngine.UIElements.EventCategory EnterLeaveWindow
    static void _set_EnterLeaveWindow(::UnityEngine::UIElements::EventCategory value);
    // static field const value: static public UnityEngine.UIElements.EventCategory Keyboard
    static constexpr const int Keyboard = 5;
    // Get static field: static public UnityEngine.UIElements.EventCategory Keyboard
    static ::UnityEngine::UIElements::EventCategory _get_Keyboard();
    // Set static field: static public UnityEngine.UIElements.EventCategory Keyboard
    static void _set_Keyboard(::UnityEngine::UIElements::EventCategory value);
    // static field const value: static public UnityEngine.UIElements.EventCategory Geometry
    static constexpr const int Geometry = 6;
    // Get static field: static public UnityEngine.UIElements.EventCategory Geometry
    static ::UnityEngine::UIElements::EventCategory _get_Geometry();
    // Set static field: static public UnityEngine.UIElements.EventCategory Geometry
    static void _set_Geometry(::UnityEngine::UIElements::EventCategory value);
    // static field const value: static public UnityEngine.UIElements.EventCategory Style
    static constexpr const int Style = 7;
    // Get static field: static public UnityEngine.UIElements.EventCategory Style
    static ::UnityEngine::UIElements::EventCategory _get_Style();
    // Set static field: static public UnityEngine.UIElements.EventCategory Style
    static void _set_Style(::UnityEngine::UIElements::EventCategory value);
    // static field const value: static public UnityEngine.UIElements.EventCategory ChangeValue
    static constexpr const int ChangeValue = 8;
    // Get static field: static public UnityEngine.UIElements.EventCategory ChangeValue
    static ::UnityEngine::UIElements::EventCategory _get_ChangeValue();
    // Set static field: static public UnityEngine.UIElements.EventCategory ChangeValue
    static void _set_ChangeValue(::UnityEngine::UIElements::EventCategory value);
    // static field const value: static public UnityEngine.UIElements.EventCategory Bind
    static constexpr const int Bind = 9;
    // Get static field: static public UnityEngine.UIElements.EventCategory Bind
    static ::UnityEngine::UIElements::EventCategory _get_Bind();
    // Set static field: static public UnityEngine.UIElements.EventCategory Bind
    static void _set_Bind(::UnityEngine::UIElements::EventCategory value);
    // static field const value: static public UnityEngine.UIElements.EventCategory Focus
    static constexpr const int Focus = 10;
    // Get static field: static public UnityEngine.UIElements.EventCategory Focus
    static ::UnityEngine::UIElements::EventCategory _get_Focus();
    // Set static field: static public UnityEngine.UIElements.EventCategory Focus
    static void _set_Focus(::UnityEngine::UIElements::EventCategory value);
    // static field const value: static public UnityEngine.UIElements.EventCategory ChangePanel
    static constexpr const int ChangePanel = 11;
    // Get static field: static public UnityEngine.UIElements.EventCategory ChangePanel
    static ::UnityEngine::UIElements::EventCategory _get_ChangePanel();
    // Set static field: static public UnityEngine.UIElements.EventCategory ChangePanel
    static void _set_ChangePanel(::UnityEngine::UIElements::EventCategory value);
    // static field const value: static public UnityEngine.UIElements.EventCategory StyleTransition
    static constexpr const int StyleTransition = 12;
    // Get static field: static public UnityEngine.UIElements.EventCategory StyleTransition
    static ::UnityEngine::UIElements::EventCategory _get_StyleTransition();
    // Set static field: static public UnityEngine.UIElements.EventCategory StyleTransition
    static void _set_StyleTransition(::UnityEngine::UIElements::EventCategory value);
    // static field const value: static public UnityEngine.UIElements.EventCategory Navigation
    static constexpr const int Navigation = 13;
    // Get static field: static public UnityEngine.UIElements.EventCategory Navigation
    static ::UnityEngine::UIElements::EventCategory _get_Navigation();
    // Set static field: static public UnityEngine.UIElements.EventCategory Navigation
    static void _set_Navigation(::UnityEngine::UIElements::EventCategory value);
    // static field const value: static public UnityEngine.UIElements.EventCategory Command
    static constexpr const int Command = 14;
    // Get static field: static public UnityEngine.UIElements.EventCategory Command
    static ::UnityEngine::UIElements::EventCategory _get_Command();
    // Set static field: static public UnityEngine.UIElements.EventCategory Command
    static void _set_Command(::UnityEngine::UIElements::EventCategory value);
    // static field const value: static public UnityEngine.UIElements.EventCategory Tooltip
    static constexpr const int Tooltip = 15;
    // Get static field: static public UnityEngine.UIElements.EventCategory Tooltip
    static ::UnityEngine::UIElements::EventCategory _get_Tooltip();
    // Set static field: static public UnityEngine.UIElements.EventCategory Tooltip
    static void _set_Tooltip(::UnityEngine::UIElements::EventCategory value);
    // static field const value: static public UnityEngine.UIElements.EventCategory IMGUI
    static constexpr const int IMGUI = 16;
    // Get static field: static public UnityEngine.UIElements.EventCategory IMGUI
    static ::UnityEngine::UIElements::EventCategory _get_IMGUI();
    // Set static field: static public UnityEngine.UIElements.EventCategory IMGUI
    static void _set_IMGUI(::UnityEngine::UIElements::EventCategory value);
    // static field const value: static public UnityEngine.UIElements.EventCategory Reserved
    static constexpr const int Reserved = 31;
    // Get static field: static public UnityEngine.UIElements.EventCategory Reserved
    static ::UnityEngine::UIElements::EventCategory _get_Reserved();
    // Set static field: static public UnityEngine.UIElements.EventCategory Reserved
    static void _set_Reserved(::UnityEngine::UIElements::EventCategory value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.EventCategory
  #pragma pack(pop)
  static check_size<sizeof(EventCategory), 0 + sizeof(int)> __UnityEngine_UIElements_EventCategorySizeCheck;
  static_assert(sizeof(EventCategory) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"