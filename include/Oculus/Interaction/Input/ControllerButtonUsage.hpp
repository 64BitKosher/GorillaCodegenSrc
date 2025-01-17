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
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: ControllerButtonUsage
  struct ControllerButtonUsage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Input::ControllerButtonUsage, "Oculus.Interaction.Input", "ControllerButtonUsage");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Input.ControllerButtonUsage
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ControllerButtonUsage/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ControllerButtonUsage
    constexpr ControllerButtonUsage(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Oculus.Interaction.Input.ControllerButtonUsage None
    static constexpr const int None = 0;
    // Get static field: static public Oculus.Interaction.Input.ControllerButtonUsage None
    static ::Oculus::Interaction::Input::ControllerButtonUsage _get_None();
    // Set static field: static public Oculus.Interaction.Input.ControllerButtonUsage None
    static void _set_None(::Oculus::Interaction::Input::ControllerButtonUsage value);
    // static field const value: static public Oculus.Interaction.Input.ControllerButtonUsage PrimaryButton
    static constexpr const int PrimaryButton = 1;
    // Get static field: static public Oculus.Interaction.Input.ControllerButtonUsage PrimaryButton
    static ::Oculus::Interaction::Input::ControllerButtonUsage _get_PrimaryButton();
    // Set static field: static public Oculus.Interaction.Input.ControllerButtonUsage PrimaryButton
    static void _set_PrimaryButton(::Oculus::Interaction::Input::ControllerButtonUsage value);
    // static field const value: static public Oculus.Interaction.Input.ControllerButtonUsage PrimaryTouch
    static constexpr const int PrimaryTouch = 2;
    // Get static field: static public Oculus.Interaction.Input.ControllerButtonUsage PrimaryTouch
    static ::Oculus::Interaction::Input::ControllerButtonUsage _get_PrimaryTouch();
    // Set static field: static public Oculus.Interaction.Input.ControllerButtonUsage PrimaryTouch
    static void _set_PrimaryTouch(::Oculus::Interaction::Input::ControllerButtonUsage value);
    // static field const value: static public Oculus.Interaction.Input.ControllerButtonUsage SecondaryButton
    static constexpr const int SecondaryButton = 4;
    // Get static field: static public Oculus.Interaction.Input.ControllerButtonUsage SecondaryButton
    static ::Oculus::Interaction::Input::ControllerButtonUsage _get_SecondaryButton();
    // Set static field: static public Oculus.Interaction.Input.ControllerButtonUsage SecondaryButton
    static void _set_SecondaryButton(::Oculus::Interaction::Input::ControllerButtonUsage value);
    // static field const value: static public Oculus.Interaction.Input.ControllerButtonUsage SecondaryTouch
    static constexpr const int SecondaryTouch = 8;
    // Get static field: static public Oculus.Interaction.Input.ControllerButtonUsage SecondaryTouch
    static ::Oculus::Interaction::Input::ControllerButtonUsage _get_SecondaryTouch();
    // Set static field: static public Oculus.Interaction.Input.ControllerButtonUsage SecondaryTouch
    static void _set_SecondaryTouch(::Oculus::Interaction::Input::ControllerButtonUsage value);
    // static field const value: static public Oculus.Interaction.Input.ControllerButtonUsage GripButton
    static constexpr const int GripButton = 16;
    // Get static field: static public Oculus.Interaction.Input.ControllerButtonUsage GripButton
    static ::Oculus::Interaction::Input::ControllerButtonUsage _get_GripButton();
    // Set static field: static public Oculus.Interaction.Input.ControllerButtonUsage GripButton
    static void _set_GripButton(::Oculus::Interaction::Input::ControllerButtonUsage value);
    // static field const value: static public Oculus.Interaction.Input.ControllerButtonUsage TriggerButton
    static constexpr const int TriggerButton = 32;
    // Get static field: static public Oculus.Interaction.Input.ControllerButtonUsage TriggerButton
    static ::Oculus::Interaction::Input::ControllerButtonUsage _get_TriggerButton();
    // Set static field: static public Oculus.Interaction.Input.ControllerButtonUsage TriggerButton
    static void _set_TriggerButton(::Oculus::Interaction::Input::ControllerButtonUsage value);
    // static field const value: static public Oculus.Interaction.Input.ControllerButtonUsage MenuButton
    static constexpr const int MenuButton = 64;
    // Get static field: static public Oculus.Interaction.Input.ControllerButtonUsage MenuButton
    static ::Oculus::Interaction::Input::ControllerButtonUsage _get_MenuButton();
    // Set static field: static public Oculus.Interaction.Input.ControllerButtonUsage MenuButton
    static void _set_MenuButton(::Oculus::Interaction::Input::ControllerButtonUsage value);
    // static field const value: static public Oculus.Interaction.Input.ControllerButtonUsage Primary2DAxisClick
    static constexpr const int Primary2DAxisClick = 128;
    // Get static field: static public Oculus.Interaction.Input.ControllerButtonUsage Primary2DAxisClick
    static ::Oculus::Interaction::Input::ControllerButtonUsage _get_Primary2DAxisClick();
    // Set static field: static public Oculus.Interaction.Input.ControllerButtonUsage Primary2DAxisClick
    static void _set_Primary2DAxisClick(::Oculus::Interaction::Input::ControllerButtonUsage value);
    // static field const value: static public Oculus.Interaction.Input.ControllerButtonUsage Primary2DAxisTouch
    static constexpr const int Primary2DAxisTouch = 256;
    // Get static field: static public Oculus.Interaction.Input.ControllerButtonUsage Primary2DAxisTouch
    static ::Oculus::Interaction::Input::ControllerButtonUsage _get_Primary2DAxisTouch();
    // Set static field: static public Oculus.Interaction.Input.ControllerButtonUsage Primary2DAxisTouch
    static void _set_Primary2DAxisTouch(::Oculus::Interaction::Input::ControllerButtonUsage value);
    // static field const value: static public Oculus.Interaction.Input.ControllerButtonUsage Thumbrest
    static constexpr const int Thumbrest = 512;
    // Get static field: static public Oculus.Interaction.Input.ControllerButtonUsage Thumbrest
    static ::Oculus::Interaction::Input::ControllerButtonUsage _get_Thumbrest();
    // Set static field: static public Oculus.Interaction.Input.ControllerButtonUsage Thumbrest
    static void _set_Thumbrest(::Oculus::Interaction::Input::ControllerButtonUsage value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Interaction.Input.ControllerButtonUsage
  #pragma pack(pop)
  static check_size<sizeof(ControllerButtonUsage), 0 + sizeof(int)> __Oculus_Interaction_Input_ControllerButtonUsageSizeCheck;
  static_assert(sizeof(ControllerButtonUsage) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
