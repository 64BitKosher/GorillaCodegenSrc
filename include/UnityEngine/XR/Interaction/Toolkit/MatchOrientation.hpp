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
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: MatchOrientation
  struct MatchOrientation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::MatchOrientation, "UnityEngine.XR.Interaction.Toolkit", "MatchOrientation");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.MatchOrientation
  // [TokenAttribute] Offset: FFFFFFFF
  struct MatchOrientation/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MatchOrientation
    constexpr MatchOrientation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.MatchOrientation WorldSpaceUp
    static constexpr const int WorldSpaceUp = 0;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.MatchOrientation WorldSpaceUp
    static ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation _get_WorldSpaceUp();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.MatchOrientation WorldSpaceUp
    static void _set_WorldSpaceUp(::UnityEngine::XR::Interaction::Toolkit::MatchOrientation value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.MatchOrientation TargetUp
    static constexpr const int TargetUp = 1;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.MatchOrientation TargetUp
    static ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation _get_TargetUp();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.MatchOrientation TargetUp
    static void _set_TargetUp(::UnityEngine::XR::Interaction::Toolkit::MatchOrientation value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.MatchOrientation TargetUpAndForward
    static constexpr const int TargetUpAndForward = 2;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.MatchOrientation TargetUpAndForward
    static ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation _get_TargetUpAndForward();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.MatchOrientation TargetUpAndForward
    static void _set_TargetUpAndForward(::UnityEngine::XR::Interaction::Toolkit::MatchOrientation value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.MatchOrientation None
    static constexpr const int None = 3;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.MatchOrientation None
    static ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation _get_None();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.MatchOrientation None
    static void _set_None(::UnityEngine::XR::Interaction::Toolkit::MatchOrientation value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.XR.Interaction.Toolkit.MatchOrientation
  #pragma pack(pop)
  static check_size<sizeof(MatchOrientation), 0 + sizeof(int)> __UnityEngine_XR_Interaction_Toolkit_MatchOrientationSizeCheck;
  static_assert(sizeof(MatchOrientation) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
