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
  // Forward declaring type: VisibleLightFlags
  struct VisibleLightFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VisibleLightFlags, "UnityEngine.Rendering", "VisibleLightFlags");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.VisibleLightFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct VisibleLightFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VisibleLightFlags
    constexpr VisibleLightFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.VisibleLightFlags IntersectsNearPlane
    static constexpr const int IntersectsNearPlane = 1;
    // Get static field: static public UnityEngine.Rendering.VisibleLightFlags IntersectsNearPlane
    static ::UnityEngine::Rendering::VisibleLightFlags _get_IntersectsNearPlane();
    // Set static field: static public UnityEngine.Rendering.VisibleLightFlags IntersectsNearPlane
    static void _set_IntersectsNearPlane(::UnityEngine::Rendering::VisibleLightFlags value);
    // static field const value: static public UnityEngine.Rendering.VisibleLightFlags IntersectsFarPlane
    static constexpr const int IntersectsFarPlane = 2;
    // Get static field: static public UnityEngine.Rendering.VisibleLightFlags IntersectsFarPlane
    static ::UnityEngine::Rendering::VisibleLightFlags _get_IntersectsFarPlane();
    // Set static field: static public UnityEngine.Rendering.VisibleLightFlags IntersectsFarPlane
    static void _set_IntersectsFarPlane(::UnityEngine::Rendering::VisibleLightFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.VisibleLightFlags
  #pragma pack(pop)
  static check_size<sizeof(VisibleLightFlags), 0 + sizeof(int)> __UnityEngine_Rendering_VisibleLightFlagsSizeCheck;
  static_assert(sizeof(VisibleLightFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"