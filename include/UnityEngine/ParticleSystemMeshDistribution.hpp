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
  // Forward declaring type: ParticleSystemMeshDistribution
  struct ParticleSystemMeshDistribution;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemMeshDistribution, "UnityEngine", "ParticleSystemMeshDistribution");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ParticleSystemMeshDistribution
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystemMeshDistribution/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ParticleSystemMeshDistribution
    constexpr ParticleSystemMeshDistribution(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ParticleSystemMeshDistribution UniformRandom
    static constexpr const int UniformRandom = 0;
    // Get static field: static public UnityEngine.ParticleSystemMeshDistribution UniformRandom
    static ::UnityEngine::ParticleSystemMeshDistribution _get_UniformRandom();
    // Set static field: static public UnityEngine.ParticleSystemMeshDistribution UniformRandom
    static void _set_UniformRandom(::UnityEngine::ParticleSystemMeshDistribution value);
    // static field const value: static public UnityEngine.ParticleSystemMeshDistribution NonUniformRandom
    static constexpr const int NonUniformRandom = 1;
    // Get static field: static public UnityEngine.ParticleSystemMeshDistribution NonUniformRandom
    static ::UnityEngine::ParticleSystemMeshDistribution _get_NonUniformRandom();
    // Set static field: static public UnityEngine.ParticleSystemMeshDistribution NonUniformRandom
    static void _set_NonUniformRandom(::UnityEngine::ParticleSystemMeshDistribution value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.ParticleSystemMeshDistribution
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystemMeshDistribution), 0 + sizeof(int)> __UnityEngine_ParticleSystemMeshDistributionSizeCheck;
  static_assert(sizeof(ParticleSystemMeshDistribution) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"