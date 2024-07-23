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
  // Forward declaring type: SkinWeights
  struct SkinWeights;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SkinWeights, "UnityEngine", "SkinWeights");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SkinWeights
  // [TokenAttribute] Offset: FFFFFFFF
  struct SkinWeights/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SkinWeights
    constexpr SkinWeights(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.SkinWeights None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.SkinWeights None
    static ::UnityEngine::SkinWeights _get_None();
    // Set static field: static public UnityEngine.SkinWeights None
    static void _set_None(::UnityEngine::SkinWeights value);
    // static field const value: static public UnityEngine.SkinWeights OneBone
    static constexpr const int OneBone = 1;
    // Get static field: static public UnityEngine.SkinWeights OneBone
    static ::UnityEngine::SkinWeights _get_OneBone();
    // Set static field: static public UnityEngine.SkinWeights OneBone
    static void _set_OneBone(::UnityEngine::SkinWeights value);
    // static field const value: static public UnityEngine.SkinWeights TwoBones
    static constexpr const int TwoBones = 2;
    // Get static field: static public UnityEngine.SkinWeights TwoBones
    static ::UnityEngine::SkinWeights _get_TwoBones();
    // Set static field: static public UnityEngine.SkinWeights TwoBones
    static void _set_TwoBones(::UnityEngine::SkinWeights value);
    // static field const value: static public UnityEngine.SkinWeights FourBones
    static constexpr const int FourBones = 4;
    // Get static field: static public UnityEngine.SkinWeights FourBones
    static ::UnityEngine::SkinWeights _get_FourBones();
    // Set static field: static public UnityEngine.SkinWeights FourBones
    static void _set_FourBones(::UnityEngine::SkinWeights value);
    // static field const value: static public UnityEngine.SkinWeights Unlimited
    static constexpr const int Unlimited = 255;
    // Get static field: static public UnityEngine.SkinWeights Unlimited
    static ::UnityEngine::SkinWeights _get_Unlimited();
    // Set static field: static public UnityEngine.SkinWeights Unlimited
    static void _set_Unlimited(::UnityEngine::SkinWeights value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.SkinWeights
  #pragma pack(pop)
  static check_size<sizeof(SkinWeights), 0 + sizeof(int)> __UnityEngine_SkinWeightsSizeCheck;
  static_assert(sizeof(SkinWeights) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
