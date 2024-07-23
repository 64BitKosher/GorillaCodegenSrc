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
  // Forward declaring type: ParticleSystemSortMode
  struct ParticleSystemSortMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemSortMode, "UnityEngine", "ParticleSystemSortMode");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ParticleSystemSortMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystemSortMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ParticleSystemSortMode
    constexpr ParticleSystemSortMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ParticleSystemSortMode None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.ParticleSystemSortMode None
    static ::UnityEngine::ParticleSystemSortMode _get_None();
    // Set static field: static public UnityEngine.ParticleSystemSortMode None
    static void _set_None(::UnityEngine::ParticleSystemSortMode value);
    // static field const value: static public UnityEngine.ParticleSystemSortMode Distance
    static constexpr const int Distance = 1;
    // Get static field: static public UnityEngine.ParticleSystemSortMode Distance
    static ::UnityEngine::ParticleSystemSortMode _get_Distance();
    // Set static field: static public UnityEngine.ParticleSystemSortMode Distance
    static void _set_Distance(::UnityEngine::ParticleSystemSortMode value);
    // static field const value: static public UnityEngine.ParticleSystemSortMode OldestInFront
    static constexpr const int OldestInFront = 2;
    // Get static field: static public UnityEngine.ParticleSystemSortMode OldestInFront
    static ::UnityEngine::ParticleSystemSortMode _get_OldestInFront();
    // Set static field: static public UnityEngine.ParticleSystemSortMode OldestInFront
    static void _set_OldestInFront(::UnityEngine::ParticleSystemSortMode value);
    // static field const value: static public UnityEngine.ParticleSystemSortMode YoungestInFront
    static constexpr const int YoungestInFront = 3;
    // Get static field: static public UnityEngine.ParticleSystemSortMode YoungestInFront
    static ::UnityEngine::ParticleSystemSortMode _get_YoungestInFront();
    // Set static field: static public UnityEngine.ParticleSystemSortMode YoungestInFront
    static void _set_YoungestInFront(::UnityEngine::ParticleSystemSortMode value);
    // static field const value: static public UnityEngine.ParticleSystemSortMode Depth
    static constexpr const int Depth = 4;
    // Get static field: static public UnityEngine.ParticleSystemSortMode Depth
    static ::UnityEngine::ParticleSystemSortMode _get_Depth();
    // Set static field: static public UnityEngine.ParticleSystemSortMode Depth
    static void _set_Depth(::UnityEngine::ParticleSystemSortMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.ParticleSystemSortMode
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystemSortMode), 0 + sizeof(int)> __UnityEngine_ParticleSystemSortModeSizeCheck;
  static_assert(sizeof(ParticleSystemSortMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"