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
  // Forward declaring type: ParticleSystemRenderSpace
  struct ParticleSystemRenderSpace;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemRenderSpace, "UnityEngine", "ParticleSystemRenderSpace");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ParticleSystemRenderSpace
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystemRenderSpace/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ParticleSystemRenderSpace
    constexpr ParticleSystemRenderSpace(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ParticleSystemRenderSpace View
    static constexpr const int View = 0;
    // Get static field: static public UnityEngine.ParticleSystemRenderSpace View
    static ::UnityEngine::ParticleSystemRenderSpace _get_View();
    // Set static field: static public UnityEngine.ParticleSystemRenderSpace View
    static void _set_View(::UnityEngine::ParticleSystemRenderSpace value);
    // static field const value: static public UnityEngine.ParticleSystemRenderSpace World
    static constexpr const int World = 1;
    // Get static field: static public UnityEngine.ParticleSystemRenderSpace World
    static ::UnityEngine::ParticleSystemRenderSpace _get_World();
    // Set static field: static public UnityEngine.ParticleSystemRenderSpace World
    static void _set_World(::UnityEngine::ParticleSystemRenderSpace value);
    // static field const value: static public UnityEngine.ParticleSystemRenderSpace Local
    static constexpr const int Local = 2;
    // Get static field: static public UnityEngine.ParticleSystemRenderSpace Local
    static ::UnityEngine::ParticleSystemRenderSpace _get_Local();
    // Set static field: static public UnityEngine.ParticleSystemRenderSpace Local
    static void _set_Local(::UnityEngine::ParticleSystemRenderSpace value);
    // static field const value: static public UnityEngine.ParticleSystemRenderSpace Facing
    static constexpr const int Facing = 3;
    // Get static field: static public UnityEngine.ParticleSystemRenderSpace Facing
    static ::UnityEngine::ParticleSystemRenderSpace _get_Facing();
    // Set static field: static public UnityEngine.ParticleSystemRenderSpace Facing
    static void _set_Facing(::UnityEngine::ParticleSystemRenderSpace value);
    // static field const value: static public UnityEngine.ParticleSystemRenderSpace Velocity
    static constexpr const int Velocity = 4;
    // Get static field: static public UnityEngine.ParticleSystemRenderSpace Velocity
    static ::UnityEngine::ParticleSystemRenderSpace _get_Velocity();
    // Set static field: static public UnityEngine.ParticleSystemRenderSpace Velocity
    static void _set_Velocity(::UnityEngine::ParticleSystemRenderSpace value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.ParticleSystemRenderSpace
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystemRenderSpace), 0 + sizeof(int)> __UnityEngine_ParticleSystemRenderSpaceSizeCheck;
  static_assert(sizeof(ParticleSystemRenderSpace) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"