// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaTag.Cosmetics.RCVehicle
#include "GorillaTag/Cosmetics/RCVehicle.hpp"
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
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Collision
  class Collision;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: GorillaTag.Cosmetics
namespace GorillaTag::Cosmetics {
  // Forward declaring type: RCPlane
  class RCPlane;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::Cosmetics::RCPlane);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::Cosmetics::RCPlane*, "GorillaTag.Cosmetics", "RCPlane");
// Type namespace: GorillaTag.Cosmetics
namespace GorillaTag::Cosmetics {
  // Size: 0x1C4
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.Cosmetics.RCPlane
  // [TokenAttribute] Offset: FFFFFFFF
  class RCPlane : public ::GorillaTag::Cosmetics::RCVehicle {
    public:
    public:
    // public UnityEngine.Vector2 pitchVelocityTargetMinMax
    // Size: 0x8
    // Offset: 0xC8
    ::UnityEngine::Vector2 pitchVelocityTargetMinMax;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 pitchVelocityRampTimeMinMax
    // Size: 0x8
    // Offset: 0xD0
    ::UnityEngine::Vector2 pitchVelocityRampTimeMinMax;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.Single rollVelocityTarget
    // Size: 0x4
    // Offset: 0xD8
    float rollVelocityTarget;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rollVelocityRampTime
    // Size: 0x4
    // Offset: 0xDC
    float rollVelocityRampTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single thrustVelocityTarget
    // Size: 0x4
    // Offset: 0xE0
    float thrustVelocityTarget;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single thrustAccelTime
    // Size: 0x4
    // Offset: 0xE4
    float thrustAccelTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single pitchVelocityFollowRateAngle
    // Size: 0x4
    // Offset: 0xE8
    float pitchVelocityFollowRateAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single pitchVelocityFollowRateMagnitude
    // Size: 0x4
    // Offset: 0xEC
    float pitchVelocityFollowRateMagnitude;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single maxDrag
    // Size: 0x4
    // Offset: 0xF0
    float maxDrag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector2 liftVsSpeedInput
    // Size: 0x8
    // Offset: 0xF4
    ::UnityEngine::Vector2 liftVsSpeedInput;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 liftVsSpeedOutput
    // Size: 0x8
    // Offset: 0xFC
    ::UnityEngine::Vector2 liftVsSpeedOutput;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // Padding between fields: liftVsSpeedOutput and: liftVsAttackCurve
    char __padding10[0x4] = {};
    // private UnityEngine.AnimationCurve liftVsAttackCurve
    // Size: 0x8
    // Offset: 0x108
    ::UnityEngine::AnimationCurve* liftVsAttackCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve dragVsAttackCurve
    // Size: 0x8
    // Offset: 0x110
    ::UnityEngine::AnimationCurve* dragVsAttackCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.Vector2 gravityCompensationRange
    // Size: 0x8
    // Offset: 0x118
    ::UnityEngine::Vector2 gravityCompensationRange;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Collider> nonCrashColliders
    // Size: 0x8
    // Offset: 0x120
    ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* nonCrashColliders;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Collider*>*) == 0x8);
    // private UnityEngine.Transform propeller
    // Size: 0x8
    // Offset: 0x128
    ::UnityEngine::Transform* propeller;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform leftAileronUpper
    // Size: 0x8
    // Offset: 0x130
    ::UnityEngine::Transform* leftAileronUpper;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform leftAileronLower
    // Size: 0x8
    // Offset: 0x138
    ::UnityEngine::Transform* leftAileronLower;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform rightAileronUpper
    // Size: 0x8
    // Offset: 0x140
    ::UnityEngine::Transform* rightAileronUpper;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform rightAileronLower
    // Size: 0x8
    // Offset: 0x148
    ::UnityEngine::Transform* rightAileronLower;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.AudioSource audioSource
    // Size: 0x8
    // Offset: 0x150
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioClip motorSound
    // Size: 0x8
    // Offset: 0x158
    ::UnityEngine::AudioClip* motorSound;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.AudioClip crashSound
    // Size: 0x8
    // Offset: 0x160
    ::UnityEngine::AudioClip* crashSound;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.Vector2 motorSoundVolumeMinMax
    // Size: 0x8
    // Offset: 0x168
    ::UnityEngine::Vector2 motorSoundVolumeMinMax;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private System.Single crashSoundVolume
    // Size: 0x4
    // Offset: 0x170
    float crashSoundVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single motorVolumeRampTime
    // Size: 0x4
    // Offset: 0x174
    float motorVolumeRampTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single propellerAngle
    // Size: 0x4
    // Offset: 0x178
    float propellerAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single propellerSpinRate
    // Size: 0x4
    // Offset: 0x17C
    float propellerSpinRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single initialSpeed
    // Size: 0x4
    // Offset: 0x180
    float initialSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single pitch
    // Size: 0x4
    // Offset: 0x184
    float pitch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single pitchVel
    // Size: 0x4
    // Offset: 0x188
    float pitchVel;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector2 pitchAccelMinMax
    // Size: 0x8
    // Offset: 0x18C
    ::UnityEngine::Vector2 pitchAccelMinMax;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private System.Single roll
    // Size: 0x4
    // Offset: 0x194
    float roll;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single rollVel
    // Size: 0x4
    // Offset: 0x198
    float rollVel;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single rollAccel
    // Size: 0x4
    // Offset: 0x19C
    float rollAccel;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single thrustAccel
    // Size: 0x4
    // Offset: 0x1A0
    float thrustAccel;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single motorLevel
    // Size: 0x4
    // Offset: 0x1A4
    float motorLevel;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single leftAileronLevel
    // Size: 0x4
    // Offset: 0x1A8
    float leftAileronLevel;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single rightAileronLevel
    // Size: 0x4
    // Offset: 0x1AC
    float rightAileronLevel;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector2 aileronAngularRange
    // Size: 0x8
    // Offset: 0x1B0
    ::UnityEngine::Vector2 aileronAngularRange;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private System.Single aileronAngularAcc
    // Size: 0x4
    // Offset: 0x1B8
    float aileronAngularAcc;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single leftAileronAngle
    // Size: 0x4
    // Offset: 0x1BC
    float leftAileronAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single rightAileronAngle
    // Size: 0x4
    // Offset: 0x1C0
    float rightAileronAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // static field const value: static private System.Single propellerIdleAcc
    static constexpr const float propellerIdleAcc = 1;
    // Get static field: static private System.Single propellerIdleAcc
    static float _get_propellerIdleAcc();
    // Set static field: static private System.Single propellerIdleAcc
    static void _set_propellerIdleAcc(float value);
    // static field const value: static private System.Single propellerIdleSpinRate
    static constexpr const float propellerIdleSpinRate = 0.6;
    // Get static field: static private System.Single propellerIdleSpinRate
    static float _get_propellerIdleSpinRate();
    // Set static field: static private System.Single propellerIdleSpinRate
    static void _set_propellerIdleSpinRate(float value);
    // static field const value: static private System.Single propellerMaxAcc
    static constexpr const float propellerMaxAcc = 6.6666665;
    // Get static field: static private System.Single propellerMaxAcc
    static float _get_propellerMaxAcc();
    // Set static field: static private System.Single propellerMaxAcc
    static void _set_propellerMaxAcc(float value);
    // static field const value: static private System.Single propellerMaxSpinRate
    static constexpr const float propellerMaxSpinRate = 5;
    // Get static field: static private System.Single propellerMaxSpinRate
    static float _get_propellerMaxSpinRate();
    // Set static field: static private System.Single propellerMaxSpinRate
    static void _set_propellerMaxSpinRate(float value);
    // Get instance field reference: public UnityEngine.Vector2 pitchVelocityTargetMinMax
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_pitchVelocityTargetMinMax();
    // Get instance field reference: public UnityEngine.Vector2 pitchVelocityRampTimeMinMax
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_pitchVelocityRampTimeMinMax();
    // Get instance field reference: public System.Single rollVelocityTarget
    [[deprecated("Use field access instead!")]] float& dyn_rollVelocityTarget();
    // Get instance field reference: public System.Single rollVelocityRampTime
    [[deprecated("Use field access instead!")]] float& dyn_rollVelocityRampTime();
    // Get instance field reference: public System.Single thrustVelocityTarget
    [[deprecated("Use field access instead!")]] float& dyn_thrustVelocityTarget();
    // Get instance field reference: public System.Single thrustAccelTime
    [[deprecated("Use field access instead!")]] float& dyn_thrustAccelTime();
    // Get instance field reference: private System.Single pitchVelocityFollowRateAngle
    [[deprecated("Use field access instead!")]] float& dyn_pitchVelocityFollowRateAngle();
    // Get instance field reference: private System.Single pitchVelocityFollowRateMagnitude
    [[deprecated("Use field access instead!")]] float& dyn_pitchVelocityFollowRateMagnitude();
    // Get instance field reference: private System.Single maxDrag
    [[deprecated("Use field access instead!")]] float& dyn_maxDrag();
    // Get instance field reference: private UnityEngine.Vector2 liftVsSpeedInput
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_liftVsSpeedInput();
    // Get instance field reference: private UnityEngine.Vector2 liftVsSpeedOutput
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_liftVsSpeedOutput();
    // Get instance field reference: private UnityEngine.AnimationCurve liftVsAttackCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_liftVsAttackCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve dragVsAttackCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_dragVsAttackCurve();
    // Get instance field reference: private UnityEngine.Vector2 gravityCompensationRange
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_gravityCompensationRange();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Collider> nonCrashColliders
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*& dyn_nonCrashColliders();
    // Get instance field reference: private UnityEngine.Transform propeller
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_propeller();
    // Get instance field reference: private UnityEngine.Transform leftAileronUpper
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_leftAileronUpper();
    // Get instance field reference: private UnityEngine.Transform leftAileronLower
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_leftAileronLower();
    // Get instance field reference: private UnityEngine.Transform rightAileronUpper
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_rightAileronUpper();
    // Get instance field reference: private UnityEngine.Transform rightAileronLower
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_rightAileronLower();
    // Get instance field reference: private UnityEngine.AudioSource audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_audioSource();
    // Get instance field reference: private UnityEngine.AudioClip motorSound
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_motorSound();
    // Get instance field reference: private UnityEngine.AudioClip crashSound
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_crashSound();
    // Get instance field reference: private UnityEngine.Vector2 motorSoundVolumeMinMax
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_motorSoundVolumeMinMax();
    // Get instance field reference: private System.Single crashSoundVolume
    [[deprecated("Use field access instead!")]] float& dyn_crashSoundVolume();
    // Get instance field reference: private System.Single motorVolumeRampTime
    [[deprecated("Use field access instead!")]] float& dyn_motorVolumeRampTime();
    // Get instance field reference: private System.Single propellerAngle
    [[deprecated("Use field access instead!")]] float& dyn_propellerAngle();
    // Get instance field reference: private System.Single propellerSpinRate
    [[deprecated("Use field access instead!")]] float& dyn_propellerSpinRate();
    // Get instance field reference: public System.Single initialSpeed
    [[deprecated("Use field access instead!")]] float& dyn_initialSpeed();
    // Get instance field reference: private System.Single pitch
    [[deprecated("Use field access instead!")]] float& dyn_pitch();
    // Get instance field reference: private System.Single pitchVel
    [[deprecated("Use field access instead!")]] float& dyn_pitchVel();
    // Get instance field reference: private UnityEngine.Vector2 pitchAccelMinMax
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_pitchAccelMinMax();
    // Get instance field reference: private System.Single roll
    [[deprecated("Use field access instead!")]] float& dyn_roll();
    // Get instance field reference: private System.Single rollVel
    [[deprecated("Use field access instead!")]] float& dyn_rollVel();
    // Get instance field reference: private System.Single rollAccel
    [[deprecated("Use field access instead!")]] float& dyn_rollAccel();
    // Get instance field reference: private System.Single thrustAccel
    [[deprecated("Use field access instead!")]] float& dyn_thrustAccel();
    // Get instance field reference: private System.Single motorLevel
    [[deprecated("Use field access instead!")]] float& dyn_motorLevel();
    // Get instance field reference: private System.Single leftAileronLevel
    [[deprecated("Use field access instead!")]] float& dyn_leftAileronLevel();
    // Get instance field reference: private System.Single rightAileronLevel
    [[deprecated("Use field access instead!")]] float& dyn_rightAileronLevel();
    // Get instance field reference: private UnityEngine.Vector2 aileronAngularRange
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_aileronAngularRange();
    // Get instance field reference: private System.Single aileronAngularAcc
    [[deprecated("Use field access instead!")]] float& dyn_aileronAngularAcc();
    // Get instance field reference: private System.Single leftAileronAngle
    [[deprecated("Use field access instead!")]] float& dyn_leftAileronAngle();
    // Get instance field reference: private System.Single rightAileronAngle
    [[deprecated("Use field access instead!")]] float& dyn_rightAileronAngle();
    // private System.Void FixedUpdate()
    // Offset: 0x28BC118
    void FixedUpdate();
    // private System.Void OnCollisionEnter(UnityEngine.Collision collision)
    // Offset: 0x28BC834
    void OnCollisionEnter(::UnityEngine::Collision* collision);
    // protected override System.Void Awake()
    // Offset: 0x28BAF68
    // Implemented from: GorillaTag.Cosmetics.RCVehicle
    // Base method: System.Void RCVehicle::Awake()
    void Awake();
    // protected override System.Void AuthorityBeginMobilization()
    // Offset: 0x28BAFA4
    // Implemented from: GorillaTag.Cosmetics.RCVehicle
    // Base method: System.Void RCVehicle::AuthorityBeginMobilization()
    void AuthorityBeginMobilization();
    // protected override System.Void AuthorityUpdate(System.Single dt)
    // Offset: 0x28BB0B8
    // Implemented from: GorillaTag.Cosmetics.RCVehicle
    // Base method: System.Void RCVehicle::AuthorityUpdate(System.Single dt)
    void AuthorityUpdate(float dt);
    // protected override System.Void RemoteUpdate(System.Single dt)
    // Offset: 0x28BB5D8
    // Implemented from: GorillaTag.Cosmetics.RCVehicle
    // Base method: System.Void RCVehicle::RemoteUpdate(System.Single dt)
    void RemoteUpdate(float dt);
    // protected override System.Void SharedUpdate(System.Single dt)
    // Offset: 0x28BBC58
    // Implemented from: GorillaTag.Cosmetics.RCVehicle
    // Base method: System.Void RCVehicle::SharedUpdate(System.Single dt)
    void SharedUpdate(float dt);
    // public System.Void .ctor()
    // Offset: 0x28BCD08
    // Implemented from: GorillaTag.Cosmetics.RCVehicle
    // Base method: System.Void RCVehicle::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RCPlane* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::Cosmetics::RCPlane::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RCPlane*, creationType>()));
    }
  }; // GorillaTag.Cosmetics.RCPlane
  #pragma pack(pop)
  static check_size<sizeof(RCPlane), 448 + sizeof(float)> __GorillaTag_Cosmetics_RCPlaneSizeCheck;
  static_assert(sizeof(RCPlane) == 0x1C4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::Cosmetics::RCPlane::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::RCPlane::*)()>(&GorillaTag::Cosmetics::RCPlane::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::RCPlane*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::RCPlane::OnCollisionEnter
// Il2CppName: OnCollisionEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::RCPlane::*)(::UnityEngine::Collision*)>(&GorillaTag::Cosmetics::RCPlane::OnCollisionEnter)> {
  static const MethodInfo* get() {
    static auto* collision = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::RCPlane*), "OnCollisionEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collision});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::RCPlane::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::RCPlane::*)()>(&GorillaTag::Cosmetics::RCPlane::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::RCPlane*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::RCPlane::AuthorityBeginMobilization
// Il2CppName: AuthorityBeginMobilization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::RCPlane::*)()>(&GorillaTag::Cosmetics::RCPlane::AuthorityBeginMobilization)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::RCPlane*), "AuthorityBeginMobilization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::RCPlane::AuthorityUpdate
// Il2CppName: AuthorityUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::RCPlane::*)(float)>(&GorillaTag::Cosmetics::RCPlane::AuthorityUpdate)> {
  static const MethodInfo* get() {
    static auto* dt = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::RCPlane*), "AuthorityUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dt});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::RCPlane::RemoteUpdate
// Il2CppName: RemoteUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::RCPlane::*)(float)>(&GorillaTag::Cosmetics::RCPlane::RemoteUpdate)> {
  static const MethodInfo* get() {
    static auto* dt = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::RCPlane*), "RemoteUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dt});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::RCPlane::SharedUpdate
// Il2CppName: SharedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Cosmetics::RCPlane::*)(float)>(&GorillaTag::Cosmetics::RCPlane::SharedUpdate)> {
  static const MethodInfo* get() {
    static auto* dt = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Cosmetics::RCPlane*), "SharedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dt});
  }
};
// Writing MetadataGetter for method: GorillaTag::Cosmetics::RCPlane::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
