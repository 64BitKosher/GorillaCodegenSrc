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
  // Forward declaring type: AvatarTarget
  struct AvatarTarget;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AvatarTarget, "UnityEngine", "AvatarTarget");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AvatarTarget
  // [TokenAttribute] Offset: FFFFFFFF
  struct AvatarTarget/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AvatarTarget
    constexpr AvatarTarget(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.AvatarTarget Root
    static constexpr const int Root = 0;
    // Get static field: static public UnityEngine.AvatarTarget Root
    static ::UnityEngine::AvatarTarget _get_Root();
    // Set static field: static public UnityEngine.AvatarTarget Root
    static void _set_Root(::UnityEngine::AvatarTarget value);
    // static field const value: static public UnityEngine.AvatarTarget Body
    static constexpr const int Body = 1;
    // Get static field: static public UnityEngine.AvatarTarget Body
    static ::UnityEngine::AvatarTarget _get_Body();
    // Set static field: static public UnityEngine.AvatarTarget Body
    static void _set_Body(::UnityEngine::AvatarTarget value);
    // static field const value: static public UnityEngine.AvatarTarget LeftFoot
    static constexpr const int LeftFoot = 2;
    // Get static field: static public UnityEngine.AvatarTarget LeftFoot
    static ::UnityEngine::AvatarTarget _get_LeftFoot();
    // Set static field: static public UnityEngine.AvatarTarget LeftFoot
    static void _set_LeftFoot(::UnityEngine::AvatarTarget value);
    // static field const value: static public UnityEngine.AvatarTarget RightFoot
    static constexpr const int RightFoot = 3;
    // Get static field: static public UnityEngine.AvatarTarget RightFoot
    static ::UnityEngine::AvatarTarget _get_RightFoot();
    // Set static field: static public UnityEngine.AvatarTarget RightFoot
    static void _set_RightFoot(::UnityEngine::AvatarTarget value);
    // static field const value: static public UnityEngine.AvatarTarget LeftHand
    static constexpr const int LeftHand = 4;
    // Get static field: static public UnityEngine.AvatarTarget LeftHand
    static ::UnityEngine::AvatarTarget _get_LeftHand();
    // Set static field: static public UnityEngine.AvatarTarget LeftHand
    static void _set_LeftHand(::UnityEngine::AvatarTarget value);
    // static field const value: static public UnityEngine.AvatarTarget RightHand
    static constexpr const int RightHand = 5;
    // Get static field: static public UnityEngine.AvatarTarget RightHand
    static ::UnityEngine::AvatarTarget _get_RightHand();
    // Set static field: static public UnityEngine.AvatarTarget RightHand
    static void _set_RightHand(::UnityEngine::AvatarTarget value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.AvatarTarget
  #pragma pack(pop)
  static check_size<sizeof(AvatarTarget), 0 + sizeof(int)> __UnityEngine_AvatarTargetSizeCheck;
  static_assert(sizeof(AvatarTarget) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
