// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TransferrableObject
#include "GlobalNamespace/TransferrableObject.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GorillaVelocityEstimator
  class GorillaVelocityEstimator;
  // Forward declaring type: DropZone
  class DropZone;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GeodeItem
  class GeodeItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GeodeItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GeodeItem*, "", "GeodeItem");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: GeodeItem
  // [TokenAttribute] Offset: FFFFFFFF
  class GeodeItem : public ::GlobalNamespace::TransferrableObject {
    public:
    public:
    // public UnityEngine.GameObject effectsGameObject
    // Size: 0x8
    // Offset: 0x2D0
    ::UnityEngine::GameObject* effectsGameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.LayerMask collisionLayerMask
    // Size: 0x4
    // Offset: 0x2D8
    ::UnityEngine::LayerMask collisionLayerMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // public GorillaVelocityEstimator velocityEstimator
    // Size: 0x8
    // Offset: 0x2E0
    ::GlobalNamespace::GorillaVelocityEstimator* velocityEstimator;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaVelocityEstimator*) == 0x8);
    // public System.Single cooldown
    // Size: 0x4
    // Offset: 0x2E8
    float cooldown;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single minHitVelocity
    // Size: 0x4
    // Offset: 0x2EC
    float minHitVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.GameObject geodeFullMesh
    // Size: 0x8
    // Offset: 0x2F0
    ::UnityEngine::GameObject* geodeFullMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject[] geodeCrackedMeshes
    // Size: 0x8
    // Offset: 0x2F8
    ::ArrayW<::UnityEngine::GameObject*> geodeCrackedMeshes;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public System.Single rayCastMaxDistance
    // Size: 0x4
    // Offset: 0x300
    float rayCastMaxDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single sphereRayRadius
    // Size: 0x4
    // Offset: 0x304
    float sphereRayRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single cooldownRemaining
    // Size: 0x4
    // Offset: 0x308
    float cooldownRemaining;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean hitLastFrame
    // Size: 0x1
    // Offset: 0x30C
    bool hitLastFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UnityEngine.AudioSource audioSource
    // Size: 0x8
    // Offset: 0x310
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private System.Boolean hasEffectsGameObject
    // Size: 0x1
    // Offset: 0x318
    bool hasEffectsGameObject;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean effectsHaveBeenPlayed
    // Size: 0x1
    // Offset: 0x319
    bool effectsHaveBeenPlayed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UnityEngine.RaycastHit hit
    // Size: 0x2C
    // Offset: 0x31C
    ::UnityEngine::RaycastHit hit;
    // Field size check
    static_assert(sizeof(::UnityEngine::RaycastHit) == 0x2C);
    // private UnityEngine.RaycastHit[] collidersHit
    // Size: 0x8
    // Offset: 0x348
    ::ArrayW<::UnityEngine::RaycastHit> collidersHit;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::RaycastHit>) == 0x8);
    // private TransferrableObject/ItemStates currentItemState
    // Size: 0x4
    // Offset: 0x350
    ::GlobalNamespace::TransferrableObject::ItemStates currentItemState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TransferrableObject::ItemStates) == 0x4);
    // private TransferrableObject/ItemStates prevItemState
    // Size: 0x4
    // Offset: 0x354
    ::GlobalNamespace::TransferrableObject::ItemStates prevItemState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TransferrableObject::ItemStates) == 0x4);
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x358
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.GameObject effectsGameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_effectsGameObject();
    // Get instance field reference: public UnityEngine.LayerMask collisionLayerMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_collisionLayerMask();
    // Get instance field reference: public GorillaVelocityEstimator velocityEstimator
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaVelocityEstimator*& dyn_velocityEstimator();
    // Get instance field reference: public System.Single cooldown
    [[deprecated("Use field access instead!")]] float& dyn_cooldown();
    // Get instance field reference: public System.Single minHitVelocity
    [[deprecated("Use field access instead!")]] float& dyn_minHitVelocity();
    // Get instance field reference: public UnityEngine.GameObject geodeFullMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_geodeFullMesh();
    // Get instance field reference: public UnityEngine.GameObject[] geodeCrackedMeshes
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_geodeCrackedMeshes();
    // Get instance field reference: public System.Single rayCastMaxDistance
    [[deprecated("Use field access instead!")]] float& dyn_rayCastMaxDistance();
    // Get instance field reference: public System.Single sphereRayRadius
    [[deprecated("Use field access instead!")]] float& dyn_sphereRayRadius();
    // Get instance field reference: private System.Single cooldownRemaining
    [[deprecated("Use field access instead!")]] float& dyn_cooldownRemaining();
    // Get instance field reference: private System.Boolean hitLastFrame
    [[deprecated("Use field access instead!")]] bool& dyn_hitLastFrame();
    // Get instance field reference: private UnityEngine.AudioSource audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_audioSource();
    // Get instance field reference: private System.Boolean hasEffectsGameObject
    [[deprecated("Use field access instead!")]] bool& dyn_hasEffectsGameObject();
    // Get instance field reference: private System.Boolean effectsHaveBeenPlayed
    [[deprecated("Use field access instead!")]] bool& dyn_effectsHaveBeenPlayed();
    // Get instance field reference: private UnityEngine.RaycastHit hit
    [[deprecated("Use field access instead!")]] ::UnityEngine::RaycastHit& dyn_hit();
    // Get instance field reference: private UnityEngine.RaycastHit[] collidersHit
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::RaycastHit>& dyn_collidersHit();
    // Get instance field reference: private TransferrableObject/ItemStates currentItemState
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TransferrableObject::ItemStates& dyn_currentItemState();
    // Get instance field reference: private TransferrableObject/ItemStates prevItemState
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TransferrableObject::ItemStates& dyn_prevItemState();
    // Get instance field reference: private System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // private System.Void InitToDefault()
    // Offset: 0x26B38F4
    void InitToDefault();
    // private System.Void OnItemStateChanged()
    // Offset: 0x26B3CC4
    void OnItemStateChanged();
    // private System.Int32 RandomPickCrackedGeode()
    // Offset: 0x26B3FA8
    int RandomPickCrackedGeode();
    // public override System.Void OnSpawn()
    // Offset: 0x26B3850
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::OnSpawn()
    void OnSpawn();
    // protected override System.Void Start()
    // Offset: 0x26B38CC
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::Start()
    void Start();
    // public override System.Void ResetToDefaultState()
    // Offset: 0x26B3994
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::ResetToDefaultState()
    void ResetToDefaultState();
    // public override System.Boolean OnRelease(DropZone zoneReleased, UnityEngine.GameObject releasingHand)
    // Offset: 0x26B39BC
    // Implemented from: TransferrableObject
    // Base method: System.Boolean TransferrableObject::OnRelease(DropZone zoneReleased, UnityEngine.GameObject releasingHand)
    bool OnRelease(::GlobalNamespace::DropZone* zoneReleased, ::UnityEngine::GameObject* releasingHand);
    // protected override System.Void LateUpdateLocal()
    // Offset: 0x26B3A00
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::LateUpdateLocal()
    void LateUpdateLocal();
    // protected override System.Void LateUpdateShared()
    // Offset: 0x26B3FCC
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::LateUpdateShared()
    void LateUpdateShared();
    // public System.Void .ctor()
    // Offset: 0x26B4008
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::.ctor()
    // Base method: System.Void HoldableObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GeodeItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GeodeItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GeodeItem*, creationType>()));
    }
  }; // GeodeItem
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GeodeItem::InitToDefault
// Il2CppName: InitToDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GeodeItem::*)()>(&GlobalNamespace::GeodeItem::InitToDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GeodeItem*), "InitToDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GeodeItem::OnItemStateChanged
// Il2CppName: OnItemStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GeodeItem::*)()>(&GlobalNamespace::GeodeItem::OnItemStateChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GeodeItem*), "OnItemStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GeodeItem::RandomPickCrackedGeode
// Il2CppName: RandomPickCrackedGeode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GeodeItem::*)()>(&GlobalNamespace::GeodeItem::RandomPickCrackedGeode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GeodeItem*), "RandomPickCrackedGeode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GeodeItem::OnSpawn
// Il2CppName: OnSpawn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GeodeItem::*)()>(&GlobalNamespace::GeodeItem::OnSpawn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GeodeItem*), "OnSpawn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GeodeItem::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GeodeItem::*)()>(&GlobalNamespace::GeodeItem::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GeodeItem*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GeodeItem::ResetToDefaultState
// Il2CppName: ResetToDefaultState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GeodeItem::*)()>(&GlobalNamespace::GeodeItem::ResetToDefaultState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GeodeItem*), "ResetToDefaultState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GeodeItem::OnRelease
// Il2CppName: OnRelease
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GeodeItem::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&GlobalNamespace::GeodeItem::OnRelease)> {
  static const MethodInfo* get() {
    static auto* zoneReleased = &::il2cpp_utils::GetClassFromName("", "DropZone")->byval_arg;
    static auto* releasingHand = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GeodeItem*), "OnRelease", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{zoneReleased, releasingHand});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GeodeItem::LateUpdateLocal
// Il2CppName: LateUpdateLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GeodeItem::*)()>(&GlobalNamespace::GeodeItem::LateUpdateLocal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GeodeItem*), "LateUpdateLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GeodeItem::LateUpdateShared
// Il2CppName: LateUpdateShared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GeodeItem::*)()>(&GlobalNamespace::GeodeItem::LateUpdateShared)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GeodeItem*), "LateUpdateShared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GeodeItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
