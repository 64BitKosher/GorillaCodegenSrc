// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GradientAlphaKey
  struct GradientAlphaKey;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GradientAlphaKey, "UnityEngine", "GradientAlphaKey");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.GradientAlphaKey
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct GradientAlphaKey/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single alpha
    // Size: 0x4
    // Offset: 0x0
    float alpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single time
    // Size: 0x4
    // Offset: 0x4
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: GradientAlphaKey
    constexpr GradientAlphaKey(float alpha_ = {}, float time_ = {}) noexcept : alpha{alpha_}, time{time_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single alpha
    [[deprecated("Use field access instead!")]] float& dyn_alpha();
    // Get instance field reference: public System.Single time
    [[deprecated("Use field access instead!")]] float& dyn_time();
    // public System.Void .ctor(System.Single alpha, System.Single time)
    // Offset: 0x54B5E84
    // ABORTED: conflicts with another method.  GradientAlphaKey(float alpha, float time);
  }; // UnityEngine.GradientAlphaKey
  #pragma pack(pop)
  static check_size<sizeof(GradientAlphaKey), 4 + sizeof(float)> __UnityEngine_GradientAlphaKeySizeCheck;
  static_assert(sizeof(GradientAlphaKey) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GradientAlphaKey::GradientAlphaKey
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
