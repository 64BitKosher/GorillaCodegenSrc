// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.Light2DBlendStyle
#include "UnityEngine/Rendering/Universal/Light2DBlendStyle.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Light2DBlendStyle::BlendFactors, "UnityEngine.Rendering.Universal", "Light2DBlendStyle/BlendFactors");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.Light2DBlendStyle/BlendFactors
  // [TokenAttribute] Offset: FFFFFFFF
  struct Light2DBlendStyle::BlendFactors/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single multiplicative
    // Size: 0x4
    // Offset: 0x0
    float multiplicative;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single additive
    // Size: 0x4
    // Offset: 0x4
    float additive;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: BlendFactors
    constexpr BlendFactors(float multiplicative_ = {}, float additive_ = {}) noexcept : multiplicative{multiplicative_}, additive{additive_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single multiplicative
    [[deprecated("Use field access instead!")]] float& dyn_multiplicative();
    // Get instance field reference: public System.Single additive
    [[deprecated("Use field access instead!")]] float& dyn_additive();
  }; // UnityEngine.Rendering.Universal.Light2DBlendStyle/BlendFactors
  #pragma pack(pop)
  static check_size<sizeof(Light2DBlendStyle::BlendFactors), 4 + sizeof(float)> __UnityEngine_Rendering_Universal_Light2DBlendStyle_BlendFactorsSizeCheck;
  static_assert(sizeof(Light2DBlendStyle::BlendFactors) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
