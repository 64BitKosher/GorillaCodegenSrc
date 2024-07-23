// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: GorillaLocomotion.Swimming.WaterVolume
#include "GorillaLocomotion/Swimming/WaterVolume.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: GorillaLocomotion.Swimming
namespace GorillaLocomotion::Swimming {
  // Forward declaring type: UnderwaterParticleEffects
  class UnderwaterParticleEffects;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaLocomotion::Swimming::UnderwaterParticleEffects);
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Swimming::UnderwaterParticleEffects*, "GorillaLocomotion.Swimming", "UnderwaterParticleEffects");
// Type namespace: GorillaLocomotion.Swimming
namespace GorillaLocomotion::Swimming {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: GorillaLocomotion.Swimming.UnderwaterParticleEffects
  // [TokenAttribute] Offset: FFFFFFFF
  class UnderwaterParticleEffects : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.ParticleSystem underwaterFloaterParticles
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::ParticleSystem* underwaterFloaterParticles;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // public UnityEngine.ParticleSystem underwaterBubbleParticles
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::ParticleSystem* underwaterBubbleParticles;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // public UnityEngine.Camera playerCamera
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Camera* playerCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // public UnityEngine.Vector3 floaterParticleBoxExtents
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 floaterParticleBoxExtents;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 floaterParticleBaseOffset
    // Size: 0xC
    // Offset: 0x44
    ::UnityEngine::Vector3 floaterParticleBaseOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.AnimationCurve floaterSpeedVsOffsetDist
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::AnimationCurve* floaterSpeedVsOffsetDist;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.Vector2 floaterSpeedVsOffsetDistMinMax
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Vector2 floaterSpeedVsOffsetDistMinMax;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private System.Boolean debugDraw
    // Size: 0x1
    // Offset: 0x60
    bool debugDraw;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.ParticleSystem underwaterFloaterParticles
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn_underwaterFloaterParticles();
    // Get instance field reference: public UnityEngine.ParticleSystem underwaterBubbleParticles
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn_underwaterBubbleParticles();
    // Get instance field reference: public UnityEngine.Camera playerCamera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn_playerCamera();
    // Get instance field reference: public UnityEngine.Vector3 floaterParticleBoxExtents
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_floaterParticleBoxExtents();
    // Get instance field reference: public UnityEngine.Vector3 floaterParticleBaseOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_floaterParticleBaseOffset();
    // Get instance field reference: public UnityEngine.AnimationCurve floaterSpeedVsOffsetDist
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_floaterSpeedVsOffsetDist();
    // Get instance field reference: public UnityEngine.Vector2 floaterSpeedVsOffsetDistMinMax
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_floaterSpeedVsOffsetDistMinMax();
    // Get instance field reference: private System.Boolean debugDraw
    [[deprecated("Use field access instead!")]] bool& dyn_debugDraw();
    // public System.Void UpdateParticleEffect(System.Boolean waterSurfaceDetected, ref GorillaLocomotion.Swimming.WaterVolume/SurfaceQuery waterSurface)
    // Offset: 0x27DFF94
    void UpdateParticleEffect(bool waterSurfaceDetected, ByRef<::GorillaLocomotion::Swimming::WaterVolume::SurfaceQuery> waterSurface);
    // private System.Boolean IsValid(UnityEngine.Vector3 vector)
    // Offset: 0x27E0E94
    bool IsValid(::UnityEngine::Vector3 vector);
    // public System.Void .ctor()
    // Offset: 0x27E0EDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnderwaterParticleEffects* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaLocomotion::Swimming::UnderwaterParticleEffects::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnderwaterParticleEffects*, creationType>()));
    }
  }; // GorillaLocomotion.Swimming.UnderwaterParticleEffects
  #pragma pack(pop)
  static check_size<sizeof(UnderwaterParticleEffects), 96 + sizeof(bool)> __GorillaLocomotion_Swimming_UnderwaterParticleEffectsSizeCheck;
  static_assert(sizeof(UnderwaterParticleEffects) == 0x61);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::UnderwaterParticleEffects::UpdateParticleEffect
// Il2CppName: UpdateParticleEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Swimming::UnderwaterParticleEffects::*)(bool, ByRef<::GorillaLocomotion::Swimming::WaterVolume::SurfaceQuery>)>(&GorillaLocomotion::Swimming::UnderwaterParticleEffects::UpdateParticleEffect)> {
  static const MethodInfo* get() {
    static auto* waterSurfaceDetected = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* waterSurface = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Swimming", "WaterVolume/SurfaceQuery")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Swimming::UnderwaterParticleEffects*), "UpdateParticleEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{waterSurfaceDetected, waterSurface});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::UnderwaterParticleEffects::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GorillaLocomotion::Swimming::UnderwaterParticleEffects::*)(::UnityEngine::Vector3)>(&GorillaLocomotion::Swimming::UnderwaterParticleEffects::IsValid)> {
  static const MethodInfo* get() {
    static auto* vector = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Swimming::UnderwaterParticleEffects*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vector});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::UnderwaterParticleEffects::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
