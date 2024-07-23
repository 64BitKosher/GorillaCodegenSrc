// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
#include "UnityEngine/XR/Interaction/Toolkit/XRBaseInteractable.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::MovementType, "UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractable/MovementType");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType
  // [TokenAttribute] Offset: FFFFFFFF
  struct XRBaseInteractable::MovementType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MovementType
    constexpr MovementType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType VelocityTracking
    static constexpr const int VelocityTracking = 0;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType VelocityTracking
    static ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::MovementType _get_VelocityTracking();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType VelocityTracking
    static void _set_VelocityTracking(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::MovementType value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType Kinematic
    static constexpr const int Kinematic = 1;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType Kinematic
    static ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::MovementType _get_Kinematic();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType Kinematic
    static void _set_Kinematic(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::MovementType value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType Instantaneous
    static constexpr const int Instantaneous = 2;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType Instantaneous
    static ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::MovementType _get_Instantaneous();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType Instantaneous
    static void _set_Instantaneous(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::MovementType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType
  #pragma pack(pop)
  static check_size<sizeof(XRBaseInteractable::MovementType), 0 + sizeof(int)> __UnityEngine_XR_Interaction_Toolkit_XRBaseInteractable_MovementTypeSizeCheck;
  static_assert(sizeof(XRBaseInteractable::MovementType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
