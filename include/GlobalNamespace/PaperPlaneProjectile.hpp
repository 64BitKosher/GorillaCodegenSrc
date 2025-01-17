// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRRig
  class VRRig;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: GorillaTag::Reactions
namespace GorillaTag::Reactions {
  // Forward declaring type: SpawnWorldEffects
  class SpawnWorldEffects;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PaperPlaneProjectile
  class PaperPlaneProjectile;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PaperPlaneProjectile);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PaperPlaneProjectile*, "", "PaperPlaneProjectile");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xDC
  #pragma pack(push, 1)
  // Autogenerated type: PaperPlaneProjectile
  // [TokenAttribute] Offset: FFFFFFFF
  class PaperPlaneProjectile : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::PaperPlaneProjectile::PaperPlaneHit
    class PaperPlaneHit;
    public:
    // public UnityEngine.Vector3 startPos
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 startPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 endPos
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 endPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single flyTimeOut
    // Size: 0x4
    // Offset: 0x38
    float flyTimeOut;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: flyTimeOut and: OnHit
    char __padding2[0x4] = {};
    // private PaperPlaneProjectile/PaperPlaneHit OnHit
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::PaperPlaneProjectile::PaperPlaneHit* OnHit;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PaperPlaneProjectile::PaperPlaneHit*) == 0x8);
    // public System.Single curveTime
    // Size: 0x4
    // Offset: 0x48
    float curveTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 curveDirection
    // Size: 0xC
    // Offset: 0x4C
    ::UnityEngine::Vector3 curveDirection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single curveDistance
    // Size: 0x4
    // Offset: 0x58
    float curveDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _timeElapsed
    // Size: 0x4
    // Offset: 0x5C
    float timeElapsed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _speed
    // Size: 0x4
    // Offset: 0x60
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _direction
    // Size: 0xC
    // Offset: 0x64
    ::UnityEngine::Vector3 direction;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean _stopped
    // Size: 0x1
    // Offset: 0x70
    bool stopped;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: stopped and: tCached
    char __padding10[0x7] = {};
    // private UnityEngine.Transform _tCached
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::Transform* tCached;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private GorillaTag.Reactions.SpawnWorldEffects spawnWorldEffects
    // Size: 0x8
    // Offset: 0x80
    ::GorillaTag::Reactions::SpawnWorldEffects* spawnWorldEffects;
    // Field size check
    static_assert(sizeof(::GorillaTag::Reactions::SpawnWorldEffects*) == 0x8);
    // private UnityEngine.Vector3 nextPos
    // Size: 0xC
    // Offset: 0x88
    ::UnityEngine::Vector3 nextPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: nextPos and: results
    char __padding13[0x4] = {};
    // private UnityEngine.RaycastHit[] results
    // Size: 0x8
    // Offset: 0x98
    ::ArrayW<::UnityEngine::RaycastHit> results;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::RaycastHit>) == 0x8);
    // private System.Single maxFlightTime
    // Size: 0x4
    // Offset: 0xA0
    float maxFlightTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single minFlightTime
    // Size: 0x4
    // Offset: 0xA4
    float minFlightTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single maxSpeed
    // Size: 0x4
    // Offset: 0xA8
    float maxSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single minSpeed
    // Size: 0x4
    // Offset: 0xAC
    float minSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean enableRotation
    // Size: 0x1
    // Offset: 0xB0
    bool enableRotation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enableRotation and: flyingObject
    char __padding19[0x7] = {};
    // private UnityEngine.GameObject flyingObject
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::GameObject* flyingObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject crashingObject
    // Size: 0x8
    // Offset: 0xC0
    ::UnityEngine::GameObject* crashingObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.LayerMask layerMask
    // Size: 0x4
    // Offset: 0xC8
    ::UnityEngine::LayerMask layerMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // Padding between fields: layerMask and: myRig
    char __padding22[0x4] = {};
    // private VRRig myRig
    // Size: 0x8
    // Offset: 0xD0
    ::GlobalNamespace::VRRig* myRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRig*) == 0x8);
    // private System.Single scaleFactor
    // Size: 0x4
    // Offset: 0xD8
    float scaleFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // static field const value: static private System.Single speedScaleRatio
    static constexpr const float speedScaleRatio = 0.7;
    // Get static field: static private System.Single speedScaleRatio
    static float _get_speedScaleRatio();
    // Set static field: static private System.Single speedScaleRatio
    static void _set_speedScaleRatio(float value);
    // Get instance field reference: public UnityEngine.Vector3 startPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_startPos();
    // Get instance field reference: public UnityEngine.Vector3 endPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_endPos();
    // Get instance field reference: public System.Single flyTimeOut
    [[deprecated("Use field access instead!")]] float& dyn_flyTimeOut();
    // Get instance field reference: private PaperPlaneProjectile/PaperPlaneHit OnHit
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PaperPlaneProjectile::PaperPlaneHit*& dyn_OnHit();
    // Get instance field reference: public System.Single curveTime
    [[deprecated("Use field access instead!")]] float& dyn_curveTime();
    // Get instance field reference: public UnityEngine.Vector3 curveDirection
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_curveDirection();
    // Get instance field reference: public System.Single curveDistance
    [[deprecated("Use field access instead!")]] float& dyn_curveDistance();
    // Get instance field reference: private System.Single _timeElapsed
    [[deprecated("Use field access instead!")]] float& dyn__timeElapsed();
    // Get instance field reference: private System.Single _speed
    [[deprecated("Use field access instead!")]] float& dyn__speed();
    // Get instance field reference: private UnityEngine.Vector3 _direction
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__direction();
    // Get instance field reference: private System.Boolean _stopped
    [[deprecated("Use field access instead!")]] bool& dyn__stopped();
    // Get instance field reference: private UnityEngine.Transform _tCached
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__tCached();
    // Get instance field reference: private GorillaTag.Reactions.SpawnWorldEffects spawnWorldEffects
    [[deprecated("Use field access instead!")]] ::GorillaTag::Reactions::SpawnWorldEffects*& dyn_spawnWorldEffects();
    // Get instance field reference: private UnityEngine.Vector3 nextPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_nextPos();
    // Get instance field reference: private UnityEngine.RaycastHit[] results
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::RaycastHit>& dyn_results();
    // Get instance field reference: private System.Single maxFlightTime
    [[deprecated("Use field access instead!")]] float& dyn_maxFlightTime();
    // Get instance field reference: private System.Single minFlightTime
    [[deprecated("Use field access instead!")]] float& dyn_minFlightTime();
    // Get instance field reference: private System.Single maxSpeed
    [[deprecated("Use field access instead!")]] float& dyn_maxSpeed();
    // Get instance field reference: private System.Single minSpeed
    [[deprecated("Use field access instead!")]] float& dyn_minSpeed();
    // Get instance field reference: private System.Boolean enableRotation
    [[deprecated("Use field access instead!")]] bool& dyn_enableRotation();
    // Get instance field reference: private UnityEngine.GameObject flyingObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_flyingObject();
    // Get instance field reference: private UnityEngine.GameObject crashingObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_crashingObject();
    // Get instance field reference: private UnityEngine.LayerMask layerMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_layerMask();
    // Get instance field reference: private VRRig myRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRig*& dyn_myRig();
    // Get instance field reference: private System.Single scaleFactor
    [[deprecated("Use field access instead!")]] float& dyn_scaleFactor();
    // public System.Void add_OnHit(PaperPlaneProjectile/PaperPlaneHit value)
    // Offset: 0x26D600C
    void add_OnHit(::GlobalNamespace::PaperPlaneProjectile::PaperPlaneHit* value);
    // public System.Void remove_OnHit(PaperPlaneProjectile/PaperPlaneHit value)
    // Offset: 0x26D60A8
    void remove_OnHit(::GlobalNamespace::PaperPlaneProjectile::PaperPlaneHit* value);
    // public UnityEngine.Transform get_transform()
    // Offset: 0x26D6144
    ::UnityEngine::Transform* get_transform();
    // public VRRig get_MyRig()
    // Offset: 0x26D614C
    ::GlobalNamespace::VRRig* get_MyRig();
    // private System.Void Awake()
    // Offset: 0x26D6154
    void Awake();
    // private System.Void Start()
    // Offset: 0x26D61C8
    void Start();
    // public System.Void ResetProjectile()
    // Offset: 0x26D61CC
    void ResetProjectile();
    // public System.Void Launch(UnityEngine.Vector3 startPos, UnityEngine.Quaternion startRot, UnityEngine.Vector3 vel)
    // Offset: 0x26D6208
    void Launch(::UnityEngine::Vector3 startPos, ::UnityEngine::Quaternion startRot, ::UnityEngine::Vector3 vel);
    // private System.Void Update()
    // Offset: 0x26D64C0
    void Update();
    // System.Void SetVRRig(VRRig rig)
    // Offset: 0x26D6958
    void SetVRRig(::GlobalNamespace::VRRig* rig);
    // public System.Void .ctor()
    // Offset: 0x26D6960
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PaperPlaneProjectile* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PaperPlaneProjectile::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PaperPlaneProjectile*, creationType>()));
    }
  }; // PaperPlaneProjectile
  #pragma pack(pop)
  static check_size<sizeof(PaperPlaneProjectile), 216 + sizeof(float)> __GlobalNamespace_PaperPlaneProjectileSizeCheck;
  static_assert(sizeof(PaperPlaneProjectile) == 0xDC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PaperPlaneProjectile::add_OnHit
// Il2CppName: add_OnHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PaperPlaneProjectile::*)(::GlobalNamespace::PaperPlaneProjectile::PaperPlaneHit*)>(&GlobalNamespace::PaperPlaneProjectile::add_OnHit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "PaperPlaneProjectile/PaperPlaneHit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PaperPlaneProjectile*), "add_OnHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PaperPlaneProjectile::remove_OnHit
// Il2CppName: remove_OnHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PaperPlaneProjectile::*)(::GlobalNamespace::PaperPlaneProjectile::PaperPlaneHit*)>(&GlobalNamespace::PaperPlaneProjectile::remove_OnHit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "PaperPlaneProjectile/PaperPlaneHit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PaperPlaneProjectile*), "remove_OnHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PaperPlaneProjectile::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::PaperPlaneProjectile::*)()>(&GlobalNamespace::PaperPlaneProjectile::get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PaperPlaneProjectile*), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PaperPlaneProjectile::get_MyRig
// Il2CppName: get_MyRig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRRig* (GlobalNamespace::PaperPlaneProjectile::*)()>(&GlobalNamespace::PaperPlaneProjectile::get_MyRig)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PaperPlaneProjectile*), "get_MyRig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PaperPlaneProjectile::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PaperPlaneProjectile::*)()>(&GlobalNamespace::PaperPlaneProjectile::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PaperPlaneProjectile*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PaperPlaneProjectile::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PaperPlaneProjectile::*)()>(&GlobalNamespace::PaperPlaneProjectile::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PaperPlaneProjectile*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PaperPlaneProjectile::ResetProjectile
// Il2CppName: ResetProjectile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PaperPlaneProjectile::*)()>(&GlobalNamespace::PaperPlaneProjectile::ResetProjectile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PaperPlaneProjectile*), "ResetProjectile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PaperPlaneProjectile::Launch
// Il2CppName: Launch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PaperPlaneProjectile::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&GlobalNamespace::PaperPlaneProjectile::Launch)> {
  static const MethodInfo* get() {
    static auto* startPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* startRot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* vel = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PaperPlaneProjectile*), "Launch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startPos, startRot, vel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PaperPlaneProjectile::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PaperPlaneProjectile::*)()>(&GlobalNamespace::PaperPlaneProjectile::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PaperPlaneProjectile*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PaperPlaneProjectile::SetVRRig
// Il2CppName: SetVRRig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PaperPlaneProjectile::*)(::GlobalNamespace::VRRig*)>(&GlobalNamespace::PaperPlaneProjectile::SetVRRig)> {
  static const MethodInfo* get() {
    static auto* rig = &::il2cpp_utils::GetClassFromName("", "VRRig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PaperPlaneProjectile*), "SetVRRig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rig});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PaperPlaneProjectile::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
