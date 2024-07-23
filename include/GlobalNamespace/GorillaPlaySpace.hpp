// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRRig
  class VRRig;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaPlaySpace
  class GorillaPlaySpace;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaPlaySpace);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaPlaySpace*, "", "GorillaPlaySpace");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x120
  #pragma pack(push, 1)
  // Autogenerated type: GorillaPlaySpace
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaPlaySpace : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Collider headCollider
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Collider* headCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // public UnityEngine.Collider bodyCollider
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Collider* bodyCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // public UnityEngine.Transform rightHandTransform
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* rightHandTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftHandTransform
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* leftHandTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Vector3 headColliderOffset
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 headColliderOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 bodyColliderOffset
    // Size: 0xC
    // Offset: 0x4C
    ::UnityEngine::Vector3 bodyColliderOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastLeftHandPosition
    // Size: 0xC
    // Offset: 0x58
    ::UnityEngine::Vector3 lastLeftHandPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastRightHandPosition
    // Size: 0xC
    // Offset: 0x64
    ::UnityEngine::Vector3 lastRightHandPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastLeftHandPositionForTag
    // Size: 0xC
    // Offset: 0x70
    ::UnityEngine::Vector3 lastLeftHandPositionForTag;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastRightHandPositionForTag
    // Size: 0xC
    // Offset: 0x7C
    ::UnityEngine::Vector3 lastRightHandPositionForTag;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastBodyPositionForTag
    // Size: 0xC
    // Offset: 0x88
    ::UnityEngine::Vector3 lastBodyPositionForTag;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastHeadPositionForTag
    // Size: 0xC
    // Offset: 0x94
    ::UnityEngine::Vector3 lastHeadPositionForTag;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Rigidbody playspaceRigidbody
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::Rigidbody* playspaceRigidbody;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // public UnityEngine.Transform headsetTransform
    // Size: 0x8
    // Offset: 0xA8
    ::UnityEngine::Transform* headsetTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Vector3 rightHandOffset
    // Size: 0xC
    // Offset: 0xB0
    ::UnityEngine::Vector3 rightHandOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 leftHandOffset
    // Size: 0xC
    // Offset: 0xBC
    ::UnityEngine::Vector3 leftHandOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public VRRig vrRig
    // Size: 0x8
    // Offset: 0xC8
    ::GlobalNamespace::VRRig* vrRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRig*) == 0x8);
    // public VRRig offlineVRRig
    // Size: 0x8
    // Offset: 0xD0
    ::GlobalNamespace::VRRig* offlineVRRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRig*) == 0x8);
    // public System.Single vibrationCooldown
    // Size: 0x4
    // Offset: 0xD8
    float vibrationCooldown;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single vibrationDuration
    // Size: 0x4
    // Offset: 0xDC
    float vibrationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single leftLastTouchedSurface
    // Size: 0x4
    // Offset: 0xE0
    float leftLastTouchedSurface;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single rightLastTouchedSurface
    // Size: 0x4
    // Offset: 0xE4
    float rightLastTouchedSurface;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public VRRig myVRRig
    // Size: 0x8
    // Offset: 0xE8
    ::GlobalNamespace::VRRig* myVRRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRig*) == 0x8);
    // private System.Single bodyHeight
    // Size: 0x4
    // Offset: 0xF0
    float bodyHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single tagCooldown
    // Size: 0x4
    // Offset: 0xF4
    float tagCooldown;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single taggedTime
    // Size: 0x4
    // Offset: 0xF8
    float taggedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single disconnectTime
    // Size: 0x4
    // Offset: 0xFC
    float disconnectTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxStepVelocity
    // Size: 0x4
    // Offset: 0x100
    float maxStepVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single hapticWaitSeconds
    // Size: 0x4
    // Offset: 0x104
    float hapticWaitSeconds;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single tapHapticDuration
    // Size: 0x4
    // Offset: 0x108
    float tapHapticDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single tapHapticStrength
    // Size: 0x4
    // Offset: 0x10C
    float tapHapticStrength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single tagHapticDuration
    // Size: 0x4
    // Offset: 0x110
    float tagHapticDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single tagHapticStrength
    // Size: 0x4
    // Offset: 0x114
    float tagHapticStrength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single taggedHapticDuration
    // Size: 0x4
    // Offset: 0x118
    float taggedHapticDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single taggedHapticStrength
    // Size: 0x4
    // Offset: 0x11C
    float taggedHapticStrength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get static field: static private GorillaPlaySpace _instance
    static ::GlobalNamespace::GorillaPlaySpace* _get__instance();
    // Set static field: static private GorillaPlaySpace _instance
    static void _set__instance(::GlobalNamespace::GorillaPlaySpace* value);
    // Get instance field reference: public UnityEngine.Collider headCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn_headCollider();
    // Get instance field reference: public UnityEngine.Collider bodyCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn_bodyCollider();
    // Get instance field reference: public UnityEngine.Transform rightHandTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_rightHandTransform();
    // Get instance field reference: public UnityEngine.Transform leftHandTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_leftHandTransform();
    // Get instance field reference: public UnityEngine.Vector3 headColliderOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_headColliderOffset();
    // Get instance field reference: public UnityEngine.Vector3 bodyColliderOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_bodyColliderOffset();
    // Get instance field reference: private UnityEngine.Vector3 lastLeftHandPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastLeftHandPosition();
    // Get instance field reference: private UnityEngine.Vector3 lastRightHandPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastRightHandPosition();
    // Get instance field reference: private UnityEngine.Vector3 lastLeftHandPositionForTag
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastLeftHandPositionForTag();
    // Get instance field reference: private UnityEngine.Vector3 lastRightHandPositionForTag
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastRightHandPositionForTag();
    // Get instance field reference: private UnityEngine.Vector3 lastBodyPositionForTag
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastBodyPositionForTag();
    // Get instance field reference: private UnityEngine.Vector3 lastHeadPositionForTag
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastHeadPositionForTag();
    // Get instance field reference: private UnityEngine.Rigidbody playspaceRigidbody
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_playspaceRigidbody();
    // Get instance field reference: public UnityEngine.Transform headsetTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_headsetTransform();
    // Get instance field reference: public UnityEngine.Vector3 rightHandOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_rightHandOffset();
    // Get instance field reference: public UnityEngine.Vector3 leftHandOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_leftHandOffset();
    // Get instance field reference: public VRRig vrRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRig*& dyn_vrRig();
    // Get instance field reference: public VRRig offlineVRRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRig*& dyn_offlineVRRig();
    // Get instance field reference: public System.Single vibrationCooldown
    [[deprecated("Use field access instead!")]] float& dyn_vibrationCooldown();
    // Get instance field reference: public System.Single vibrationDuration
    [[deprecated("Use field access instead!")]] float& dyn_vibrationDuration();
    // Get instance field reference: private System.Single leftLastTouchedSurface
    [[deprecated("Use field access instead!")]] float& dyn_leftLastTouchedSurface();
    // Get instance field reference: private System.Single rightLastTouchedSurface
    [[deprecated("Use field access instead!")]] float& dyn_rightLastTouchedSurface();
    // Get instance field reference: public VRRig myVRRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRig*& dyn_myVRRig();
    // Get instance field reference: private System.Single bodyHeight
    [[deprecated("Use field access instead!")]] float& dyn_bodyHeight();
    // Get instance field reference: public System.Single tagCooldown
    [[deprecated("Use field access instead!")]] float& dyn_tagCooldown();
    // Get instance field reference: public System.Single taggedTime
    [[deprecated("Use field access instead!")]] float& dyn_taggedTime();
    // Get instance field reference: public System.Single disconnectTime
    [[deprecated("Use field access instead!")]] float& dyn_disconnectTime();
    // Get instance field reference: public System.Single maxStepVelocity
    [[deprecated("Use field access instead!")]] float& dyn_maxStepVelocity();
    // Get instance field reference: public System.Single hapticWaitSeconds
    [[deprecated("Use field access instead!")]] float& dyn_hapticWaitSeconds();
    // Get instance field reference: public System.Single tapHapticDuration
    [[deprecated("Use field access instead!")]] float& dyn_tapHapticDuration();
    // Get instance field reference: public System.Single tapHapticStrength
    [[deprecated("Use field access instead!")]] float& dyn_tapHapticStrength();
    // Get instance field reference: public System.Single tagHapticDuration
    [[deprecated("Use field access instead!")]] float& dyn_tagHapticDuration();
    // Get instance field reference: public System.Single tagHapticStrength
    [[deprecated("Use field access instead!")]] float& dyn_tagHapticStrength();
    // Get instance field reference: public System.Single taggedHapticDuration
    [[deprecated("Use field access instead!")]] float& dyn_taggedHapticDuration();
    // Get instance field reference: public System.Single taggedHapticStrength
    [[deprecated("Use field access instead!")]] float& dyn_taggedHapticStrength();
    // static public GorillaPlaySpace get_Instance()
    // Offset: 0x26DEA78
    static ::GlobalNamespace::GorillaPlaySpace* get_Instance();
    // private System.Void Awake()
    // Offset: 0x26DEAC0
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x26DEBD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaPlaySpace* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaPlaySpace::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaPlaySpace*, creationType>()));
    }
  }; // GorillaPlaySpace
  #pragma pack(pop)
  static check_size<sizeof(GorillaPlaySpace), 284 + sizeof(float)> __GlobalNamespace_GorillaPlaySpaceSizeCheck;
  static_assert(sizeof(GorillaPlaySpace) == 0x120);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaPlaySpace::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GorillaPlaySpace* (*)()>(&GlobalNamespace::GorillaPlaySpace::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaPlaySpace*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaPlaySpace::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaPlaySpace::*)()>(&GlobalNamespace::GorillaPlaySpace::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaPlaySpace*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaPlaySpace::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!