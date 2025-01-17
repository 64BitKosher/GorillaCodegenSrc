// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: GorillaLocomotion.Swimming
namespace GorillaLocomotion::Swimming {
  // Forward declaring type: PlayerSwimmingParameters
  class PlayerSwimmingParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaLocomotion::Swimming::PlayerSwimmingParameters);
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Swimming::PlayerSwimmingParameters*, "GorillaLocomotion.Swimming", "PlayerSwimmingParameters");
// Type namespace: GorillaLocomotion.Swimming
namespace GorillaLocomotion::Swimming {
  // Size: 0xF8
  #pragma pack(push, 1)
  // Autogenerated type: GorillaLocomotion.Swimming.PlayerSwimmingParameters
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: FFFFFFFF
  class PlayerSwimmingParameters : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public System.Single floatingWaterLevelBelowHead
    // Size: 0x4
    // Offset: 0x18
    float floatingWaterLevelBelowHead;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single buoyancyFadeDist
    // Size: 0x4
    // Offset: 0x1C
    float buoyancyFadeDist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean extendBouyancyFromSpeed
    // Size: 0x1
    // Offset: 0x20
    bool extendBouyancyFromSpeed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: extendBouyancyFromSpeed and: buoyancyExtensionDecayHalflife
    char __padding2[0x3] = {};
    // public System.Single buoyancyExtensionDecayHalflife
    // Size: 0x4
    // Offset: 0x24
    float buoyancyExtensionDecayHalflife;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single baseUnderWaterDampingHalfLife
    // Size: 0x4
    // Offset: 0x28
    float baseUnderWaterDampingHalfLife;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single swimUnderWaterDampingHalfLife
    // Size: 0x4
    // Offset: 0x2C
    float swimUnderWaterDampingHalfLife;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.AnimationCurve speedToBouyancyExtension
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AnimationCurve* speedToBouyancyExtension;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.Vector2 speedToBouyancyExtensionMinMax
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Vector2 speedToBouyancyExtensionMinMax;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.Single swimmingVelocityOutOfWaterDrainRate
    // Size: 0x4
    // Offset: 0x40
    float swimmingVelocityOutOfWaterDrainRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single underwaterJumpsAsSwimVelocityFactor
    // Size: 0x4
    // Offset: 0x44
    float underwaterJumpsAsSwimVelocityFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single swimmingHapticsStrength
    // Size: 0x4
    // Offset: 0x48
    float swimmingHapticsStrength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean allowWaterSurfaceJumps
    // Size: 0x1
    // Offset: 0x4C
    bool allowWaterSurfaceJumps;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: allowWaterSurfaceJumps and: waterSurfaceJumpHandSpeedThreshold
    char __padding11[0x3] = {};
    // public System.Single waterSurfaceJumpHandSpeedThreshold
    // Size: 0x4
    // Offset: 0x50
    float waterSurfaceJumpHandSpeedThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single waterSurfaceJumpAmount
    // Size: 0x4
    // Offset: 0x54
    float waterSurfaceJumpAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single waterSurfaceJumpMaxSpeed
    // Size: 0x4
    // Offset: 0x58
    float waterSurfaceJumpMaxSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: waterSurfaceJumpMaxSpeed and: waterSurfaceJumpPalmFacingCurve
    char __padding14[0x4] = {};
    // public UnityEngine.AnimationCurve waterSurfaceJumpPalmFacingCurve
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::AnimationCurve* waterSurfaceJumpPalmFacingCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve waterSurfaceJumpHandVelocityFacingCurve
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::AnimationCurve* waterSurfaceJumpHandVelocityFacingCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public System.Boolean applyDiveSteering
    // Size: 0x1
    // Offset: 0x70
    bool applyDiveSteering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean applyDiveDampingMultiplier
    // Size: 0x1
    // Offset: 0x71
    bool applyDiveDampingMultiplier;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: applyDiveDampingMultiplier and: diveDampingMultiplier
    char __padding18[0x2] = {};
    // public System.Single diveDampingMultiplier
    // Size: 0x4
    // Offset: 0x74
    float diveDampingMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxDiveSteerAnglePerStep
    // Size: 0x4
    // Offset: 0x78
    float maxDiveSteerAnglePerStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single diveVelocityAveragingWindow
    // Size: 0x4
    // Offset: 0x7C
    float diveVelocityAveragingWindow;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean applyDiveSwimVelocityConversion
    // Size: 0x1
    // Offset: 0x80
    bool applyDiveSwimVelocityConversion;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: applyDiveSwimVelocityConversion and: diveSwimVelocityConversionRate
    char __padding22[0x3] = {};
    // public System.Single diveSwimVelocityConversionRate
    // Size: 0x4
    // Offset: 0x84
    float diveSwimVelocityConversionRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single diveMaxSwimVelocityConversion
    // Size: 0x4
    // Offset: 0x88
    float diveMaxSwimVelocityConversion;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean reduceDiveSteeringBelowVelocityPlane
    // Size: 0x1
    // Offset: 0x8C
    bool reduceDiveSteeringBelowVelocityPlane;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: reduceDiveSteeringBelowVelocityPlane and: reduceDiveSteeringBelowPlaneFadeStartDist
    char __padding25[0x3] = {};
    // public System.Single reduceDiveSteeringBelowPlaneFadeStartDist
    // Size: 0x4
    // Offset: 0x90
    float reduceDiveSteeringBelowPlaneFadeStartDist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single reduceDiveSteeringBelowPlaneFadeEndDist
    // Size: 0x4
    // Offset: 0x94
    float reduceDiveSteeringBelowPlaneFadeEndDist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.AnimationCurve palmFacingToRedirectAmount
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::AnimationCurve* palmFacingToRedirectAmount;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.Vector2 palmFacingToRedirectAmountMinMax
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::Vector2 palmFacingToRedirectAmountMinMax;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.AnimationCurve swimSpeedToRedirectAmount
    // Size: 0x8
    // Offset: 0xA8
    ::UnityEngine::AnimationCurve* swimSpeedToRedirectAmount;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.Vector2 swimSpeedToRedirectAmountMinMax
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::Vector2 swimSpeedToRedirectAmountMinMax;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.AnimationCurve swimSpeedToMaxRedirectAngle
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::AnimationCurve* swimSpeedToMaxRedirectAngle;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.Vector2 swimSpeedToMaxRedirectAngleMinMax
    // Size: 0x8
    // Offset: 0xC0
    ::UnityEngine::Vector2 swimSpeedToMaxRedirectAngleMinMax;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.AnimationCurve handSpeedToRedirectAmount
    // Size: 0x8
    // Offset: 0xC8
    ::UnityEngine::AnimationCurve* handSpeedToRedirectAmount;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.Vector2 handSpeedToRedirectAmountMinMax
    // Size: 0x8
    // Offset: 0xD0
    ::UnityEngine::Vector2 handSpeedToRedirectAmountMinMax;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.AnimationCurve handAccelToRedirectAmount
    // Size: 0x8
    // Offset: 0xD8
    ::UnityEngine::AnimationCurve* handAccelToRedirectAmount;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.Vector2 handAccelToRedirectAmountMinMax
    // Size: 0x8
    // Offset: 0xE0
    ::UnityEngine::Vector2 handAccelToRedirectAmountMinMax;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.AnimationCurve nonDiveDampingHapticsAmount
    // Size: 0x8
    // Offset: 0xE8
    ::UnityEngine::AnimationCurve* nonDiveDampingHapticsAmount;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.Vector2 nonDiveDampingHapticsAmountMinMax
    // Size: 0x8
    // Offset: 0xF0
    ::UnityEngine::Vector2 nonDiveDampingHapticsAmountMinMax;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single floatingWaterLevelBelowHead
    [[deprecated("Use field access instead!")]] float& dyn_floatingWaterLevelBelowHead();
    // Get instance field reference: public System.Single buoyancyFadeDist
    [[deprecated("Use field access instead!")]] float& dyn_buoyancyFadeDist();
    // Get instance field reference: public System.Boolean extendBouyancyFromSpeed
    [[deprecated("Use field access instead!")]] bool& dyn_extendBouyancyFromSpeed();
    // Get instance field reference: public System.Single buoyancyExtensionDecayHalflife
    [[deprecated("Use field access instead!")]] float& dyn_buoyancyExtensionDecayHalflife();
    // Get instance field reference: public System.Single baseUnderWaterDampingHalfLife
    [[deprecated("Use field access instead!")]] float& dyn_baseUnderWaterDampingHalfLife();
    // Get instance field reference: public System.Single swimUnderWaterDampingHalfLife
    [[deprecated("Use field access instead!")]] float& dyn_swimUnderWaterDampingHalfLife();
    // Get instance field reference: public UnityEngine.AnimationCurve speedToBouyancyExtension
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_speedToBouyancyExtension();
    // Get instance field reference: public UnityEngine.Vector2 speedToBouyancyExtensionMinMax
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_speedToBouyancyExtensionMinMax();
    // Get instance field reference: public System.Single swimmingVelocityOutOfWaterDrainRate
    [[deprecated("Use field access instead!")]] float& dyn_swimmingVelocityOutOfWaterDrainRate();
    // Get instance field reference: public System.Single underwaterJumpsAsSwimVelocityFactor
    [[deprecated("Use field access instead!")]] float& dyn_underwaterJumpsAsSwimVelocityFactor();
    // Get instance field reference: public System.Single swimmingHapticsStrength
    [[deprecated("Use field access instead!")]] float& dyn_swimmingHapticsStrength();
    // Get instance field reference: public System.Boolean allowWaterSurfaceJumps
    [[deprecated("Use field access instead!")]] bool& dyn_allowWaterSurfaceJumps();
    // Get instance field reference: public System.Single waterSurfaceJumpHandSpeedThreshold
    [[deprecated("Use field access instead!")]] float& dyn_waterSurfaceJumpHandSpeedThreshold();
    // Get instance field reference: public System.Single waterSurfaceJumpAmount
    [[deprecated("Use field access instead!")]] float& dyn_waterSurfaceJumpAmount();
    // Get instance field reference: public System.Single waterSurfaceJumpMaxSpeed
    [[deprecated("Use field access instead!")]] float& dyn_waterSurfaceJumpMaxSpeed();
    // Get instance field reference: public UnityEngine.AnimationCurve waterSurfaceJumpPalmFacingCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_waterSurfaceJumpPalmFacingCurve();
    // Get instance field reference: public UnityEngine.AnimationCurve waterSurfaceJumpHandVelocityFacingCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_waterSurfaceJumpHandVelocityFacingCurve();
    // Get instance field reference: public System.Boolean applyDiveSteering
    [[deprecated("Use field access instead!")]] bool& dyn_applyDiveSteering();
    // Get instance field reference: public System.Boolean applyDiveDampingMultiplier
    [[deprecated("Use field access instead!")]] bool& dyn_applyDiveDampingMultiplier();
    // Get instance field reference: public System.Single diveDampingMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_diveDampingMultiplier();
    // Get instance field reference: public System.Single maxDiveSteerAnglePerStep
    [[deprecated("Use field access instead!")]] float& dyn_maxDiveSteerAnglePerStep();
    // Get instance field reference: public System.Single diveVelocityAveragingWindow
    [[deprecated("Use field access instead!")]] float& dyn_diveVelocityAveragingWindow();
    // Get instance field reference: public System.Boolean applyDiveSwimVelocityConversion
    [[deprecated("Use field access instead!")]] bool& dyn_applyDiveSwimVelocityConversion();
    // Get instance field reference: public System.Single diveSwimVelocityConversionRate
    [[deprecated("Use field access instead!")]] float& dyn_diveSwimVelocityConversionRate();
    // Get instance field reference: public System.Single diveMaxSwimVelocityConversion
    [[deprecated("Use field access instead!")]] float& dyn_diveMaxSwimVelocityConversion();
    // Get instance field reference: public System.Boolean reduceDiveSteeringBelowVelocityPlane
    [[deprecated("Use field access instead!")]] bool& dyn_reduceDiveSteeringBelowVelocityPlane();
    // Get instance field reference: public System.Single reduceDiveSteeringBelowPlaneFadeStartDist
    [[deprecated("Use field access instead!")]] float& dyn_reduceDiveSteeringBelowPlaneFadeStartDist();
    // Get instance field reference: public System.Single reduceDiveSteeringBelowPlaneFadeEndDist
    [[deprecated("Use field access instead!")]] float& dyn_reduceDiveSteeringBelowPlaneFadeEndDist();
    // Get instance field reference: public UnityEngine.AnimationCurve palmFacingToRedirectAmount
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_palmFacingToRedirectAmount();
    // Get instance field reference: public UnityEngine.Vector2 palmFacingToRedirectAmountMinMax
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_palmFacingToRedirectAmountMinMax();
    // Get instance field reference: public UnityEngine.AnimationCurve swimSpeedToRedirectAmount
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_swimSpeedToRedirectAmount();
    // Get instance field reference: public UnityEngine.Vector2 swimSpeedToRedirectAmountMinMax
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_swimSpeedToRedirectAmountMinMax();
    // Get instance field reference: public UnityEngine.AnimationCurve swimSpeedToMaxRedirectAngle
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_swimSpeedToMaxRedirectAngle();
    // Get instance field reference: public UnityEngine.Vector2 swimSpeedToMaxRedirectAngleMinMax
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_swimSpeedToMaxRedirectAngleMinMax();
    // Get instance field reference: public UnityEngine.AnimationCurve handSpeedToRedirectAmount
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_handSpeedToRedirectAmount();
    // Get instance field reference: public UnityEngine.Vector2 handSpeedToRedirectAmountMinMax
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_handSpeedToRedirectAmountMinMax();
    // Get instance field reference: public UnityEngine.AnimationCurve handAccelToRedirectAmount
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_handAccelToRedirectAmount();
    // Get instance field reference: public UnityEngine.Vector2 handAccelToRedirectAmountMinMax
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_handAccelToRedirectAmountMinMax();
    // Get instance field reference: public UnityEngine.AnimationCurve nonDiveDampingHapticsAmount
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_nonDiveDampingHapticsAmount();
    // Get instance field reference: public UnityEngine.Vector2 nonDiveDampingHapticsAmountMinMax
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_nonDiveDampingHapticsAmountMinMax();
    // public System.Void .ctor()
    // Offset: 0x27DC630
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSwimmingParameters* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaLocomotion::Swimming::PlayerSwimmingParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSwimmingParameters*, creationType>()));
    }
  }; // GorillaLocomotion.Swimming.PlayerSwimmingParameters
  #pragma pack(pop)
  static check_size<sizeof(PlayerSwimmingParameters), 240 + sizeof(::UnityEngine::Vector2)> __GorillaLocomotion_Swimming_PlayerSwimmingParametersSizeCheck;
  static_assert(sizeof(PlayerSwimmingParameters) == 0xF8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::PlayerSwimmingParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
