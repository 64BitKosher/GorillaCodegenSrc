// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.TilingJob
#include "UnityEngine/Rendering/Universal/TilingJob.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Rendering.VisibleLight
#include "UnityEngine/Rendering/VisibleLight.hpp"
// Including type: Unity.Mathematics.float3
#include "Unity/Mathematics/float3.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TilingJob::$$c__DisplayClass19_0, "UnityEngine.Rendering.Universal", "TilingJob/<>c__DisplayClass19_0");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x94
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.TilingJob/<>c__DisplayClass19_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct TilingJob::$$c__DisplayClass19_0/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Rendering.VisibleLight light
    // Size: 0x74
    // Offset: 0x0
    ::UnityEngine::Rendering::VisibleLight light;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::VisibleLight) == 0x74);
    // public Unity.Mathematics.float3 lightPositionVS
    // Size: 0xC
    // Offset: 0x74
    ::Unity::Mathematics::float3 lightPositionVS;
    // Field size check
    static_assert(sizeof(::Unity::Mathematics::float3) == 0xC);
    // public Unity.Mathematics.float3 lightDirectionVS
    // Size: 0xC
    // Offset: 0x80
    ::Unity::Mathematics::float3 lightDirectionVS;
    // Field size check
    static_assert(sizeof(::Unity::Mathematics::float3) == 0xC);
    // public System.Single cosHalfAngle
    // Size: 0x4
    // Offset: 0x8C
    float cosHalfAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single coneHeight
    // Size: 0x4
    // Offset: 0x90
    float coneHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: $$c__DisplayClass19_0
    constexpr $$c__DisplayClass19_0(::UnityEngine::Rendering::VisibleLight light_ = {}, ::Unity::Mathematics::float3 lightPositionVS_ = {}, ::Unity::Mathematics::float3 lightDirectionVS_ = {}, float cosHalfAngle_ = {}, float coneHeight_ = {}) noexcept : light{light_}, lightPositionVS{lightPositionVS_}, lightDirectionVS{lightDirectionVS_}, cosHalfAngle{cosHalfAngle_}, coneHeight{coneHeight_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Rendering.VisibleLight light
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::VisibleLight& dyn_light();
    // Get instance field reference: public Unity.Mathematics.float3 lightPositionVS
    [[deprecated("Use field access instead!")]] ::Unity::Mathematics::float3& dyn_lightPositionVS();
    // Get instance field reference: public Unity.Mathematics.float3 lightDirectionVS
    [[deprecated("Use field access instead!")]] ::Unity::Mathematics::float3& dyn_lightDirectionVS();
    // Get instance field reference: public System.Single cosHalfAngle
    [[deprecated("Use field access instead!")]] float& dyn_cosHalfAngle();
    // Get instance field reference: public System.Single coneHeight
    [[deprecated("Use field access instead!")]] float& dyn_coneHeight();
  }; // UnityEngine.Rendering.Universal.TilingJob/<>c__DisplayClass19_0
  #pragma pack(pop)
  static check_size<sizeof(TilingJob::$$c__DisplayClass19_0), 144 + sizeof(float)> __UnityEngine_Rendering_Universal_TilingJob_$$c__DisplayClass19_0SizeCheck;
  static_assert(sizeof(TilingJob::$$c__DisplayClass19_0) == 0x94);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
