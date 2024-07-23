// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.MonoBehaviourPun
#include "Photon/Pun/MonoBehaviourPun.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
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
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GorillaLocomotion::Gameplay
namespace GorillaLocomotion::Gameplay {
  // Forward declaring type: GorillaRopeSwingSettings
  class GorillaRopeSwingSettings;
}
// Completed forward declares
// Type namespace: GorillaLocomotion.Gameplay
namespace GorillaLocomotion::Gameplay {
  // Forward declaring type: OldGorillaRopeSwing
  class OldGorillaRopeSwing;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaLocomotion::Gameplay::OldGorillaRopeSwing);
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*, "GorillaLocomotion.Gameplay", "OldGorillaRopeSwing");
// Type namespace: GorillaLocomotion.Gameplay
namespace GorillaLocomotion::Gameplay {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: GorillaLocomotion.Gameplay.OldGorillaRopeSwing
  // [TokenAttribute] Offset: FFFFFFFF
  class OldGorillaRopeSwing : public ::Photon::Pun::MonoBehaviourPun {
    public:
    public:
    // private UnityEngine.GameObject prefabRopeBit
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* prefabRopeBit;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Rigidbody[] bones
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Rigidbody*> bones;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Rigidbody*>) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> remotePlayers
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::Dictionary_2<int, int>* remotePlayers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, int>*) == 0x8);
    // public System.Single lastGrabTime
    // Size: 0x4
    // Offset: 0x40
    float lastGrabTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lastGrabTime and: ropeCreakSFX
    char __padding3[0x4] = {};
    // private UnityEngine.AudioSource ropeCreakSFX
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::AudioSource* ropeCreakSFX;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private System.Boolean localPlayerOn
    // Size: 0x1
    // Offset: 0x50
    bool localPlayerOn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: localPlayerOn and: localPlayerXRNode
    char __padding5[0x3] = {};
    // private UnityEngine.XR.XRNode localPlayerXRNode
    // Size: 0x4
    // Offset: 0x54
    ::UnityEngine::XR::XRNode localPlayerXRNode;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::XRNode) == 0x4);
    // private UnityEngine.Rigidbody localGrabbedRigid
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Rigidbody* localGrabbedRigid;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // private System.Boolean <isIdle>k__BackingField
    // Size: 0x1
    // Offset: 0x60
    bool isIdle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isIdle and: potentialIdleTimer
    char __padding8[0x3] = {};
    // private System.Single potentialIdleTimer
    // Size: 0x4
    // Offset: 0x64
    float potentialIdleTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 ropeLength
    // Size: 0x4
    // Offset: 0x68
    int ropeLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ropeLength and: settings
    char __padding10[0x4] = {};
    // private GorillaLocomotion.Gameplay.GorillaRopeSwingSettings settings
    // Size: 0x8
    // Offset: 0x70
    ::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings* settings;
    // Field size check
    static_assert(sizeof(::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings*) == 0x8);
    public:
    // static field const value: static public System.Single kPlayerMass
    static constexpr const float kPlayerMass = 0.8;
    // Get static field: static public System.Single kPlayerMass
    static float _get_kPlayerMass();
    // Set static field: static public System.Single kPlayerMass
    static void _set_kPlayerMass(float value);
    // static field const value: static public System.Single ropeBitGenOffset
    static constexpr const float ropeBitGenOffset = 1;
    // Get static field: static public System.Single ropeBitGenOffset
    static float _get_ropeBitGenOffset();
    // Set static field: static public System.Single ropeBitGenOffset
    static void _set_ropeBitGenOffset(float value);
    // static field const value: static public System.Single MAX_ROPE_SPEED
    static constexpr const float MAX_ROPE_SPEED = 15;
    // Get static field: static public System.Single MAX_ROPE_SPEED
    static float _get_MAX_ROPE_SPEED();
    // Set static field: static public System.Single MAX_ROPE_SPEED
    static void _set_MAX_ROPE_SPEED(float value);
    // static field const value: static private System.Single MAX_VELOCITY_FOR_IDLE
    static constexpr const float MAX_VELOCITY_FOR_IDLE = 0.1;
    // Get static field: static private System.Single MAX_VELOCITY_FOR_IDLE
    static float _get_MAX_VELOCITY_FOR_IDLE();
    // Set static field: static private System.Single MAX_VELOCITY_FOR_IDLE
    static void _set_MAX_VELOCITY_FOR_IDLE(float value);
    // static field const value: static private System.Single TIME_FOR_IDLE
    static constexpr const float TIME_FOR_IDLE = 2;
    // Get static field: static private System.Single TIME_FOR_IDLE
    static float _get_TIME_FOR_IDLE();
    // Set static field: static private System.Single TIME_FOR_IDLE
    static void _set_TIME_FOR_IDLE(float value);
    // Get instance field reference: private UnityEngine.GameObject prefabRopeBit
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_prefabRopeBit();
    // Get instance field reference: public UnityEngine.Rigidbody[] bones
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Rigidbody*>& dyn_bones();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> remotePlayers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, int>*& dyn_remotePlayers();
    // Get instance field reference: public System.Single lastGrabTime
    [[deprecated("Use field access instead!")]] float& dyn_lastGrabTime();
    // Get instance field reference: private UnityEngine.AudioSource ropeCreakSFX
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_ropeCreakSFX();
    // Get instance field reference: private System.Boolean localPlayerOn
    [[deprecated("Use field access instead!")]] bool& dyn_localPlayerOn();
    // Get instance field reference: private UnityEngine.XR.XRNode localPlayerXRNode
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::XRNode& dyn_localPlayerXRNode();
    // Get instance field reference: private UnityEngine.Rigidbody localGrabbedRigid
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_localGrabbedRigid();
    // Get instance field reference: private System.Boolean <isIdle>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isIdle$k__BackingField();
    // Get instance field reference: private System.Single potentialIdleTimer
    [[deprecated("Use field access instead!")]] float& dyn_potentialIdleTimer();
    // Get instance field reference: private System.Int32 ropeLength
    [[deprecated("Use field access instead!")]] int& dyn_ropeLength();
    // Get instance field reference: private GorillaLocomotion.Gameplay.GorillaRopeSwingSettings settings
    [[deprecated("Use field access instead!")]] ::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings*& dyn_settings();
    // public System.Boolean get_isIdle()
    // Offset: 0x27EAE64
    bool get_isIdle();
    // private System.Void set_isIdle(System.Boolean value)
    // Offset: 0x27EAE6C
    void set_isIdle(bool value);
    // private System.Void Awake()
    // Offset: 0x27EAE78
    void Awake();
    // private System.Void OnDisable()
    // Offset: 0x27EAFF8
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x27EB00C
    void Update();
    // private System.Void SetIsIdle(System.Boolean idle)
    // Offset: 0x27EAE80
    void SetIsIdle(bool idle);
    // private System.Void ToggleIsKinematic(System.Boolean kinematic)
    // Offset: 0x27EB5C8
    void ToggleIsKinematic(bool kinematic);
    // public UnityEngine.Rigidbody GetBone(System.Int32 index)
    // Offset: 0x27EB668
    ::UnityEngine::Rigidbody* GetBone(int index);
    // public System.Int32 GetBoneIndex(UnityEngine.Rigidbody r)
    // Offset: 0x27EB6E4
    int GetBoneIndex(::UnityEngine::Rigidbody* r);
    // public System.Void AttachLocalPlayer(UnityEngine.XR.XRNode xrNode, UnityEngine.Rigidbody rigid, UnityEngine.Vector3 offset, UnityEngine.Vector3 velocity)
    // Offset: 0x27EB798
    void AttachLocalPlayer(::UnityEngine::XR::XRNode xrNode, ::UnityEngine::Rigidbody* rigid, ::UnityEngine::Vector3 offset, ::UnityEngine::Vector3 velocity);
    // public System.Void DetachLocalPlayer()
    // Offset: 0x27EBFE8
    void DetachLocalPlayer();
    // public System.Boolean AttachRemotePlayer(System.Int32 playerId, System.Int32 boneIndex, UnityEngine.Transform offsetTransform, UnityEngine.Vector3 offset)
    // Offset: 0x27EC0F4
    bool AttachRemotePlayer(int playerId, int boneIndex, ::UnityEngine::Transform* offsetTransform, ::UnityEngine::Vector3 offset);
    // public System.Void DetachRemotePlayer(System.Int32 playerId)
    // Offset: 0x27EC2D0
    void DetachRemotePlayer(int playerId);
    // public System.Void SetVelocity_RPC(System.Int32 boneIndex, UnityEngine.Vector3 velocity, System.Boolean wholeRope, UnityEngine.Vector3[] ropeRotations, UnityEngine.Vector3[] ropeVelocities)
    // Offset: 0x27EBD08
    void SetVelocity_RPC(int boneIndex, ::UnityEngine::Vector3 velocity, bool wholeRope, ::ArrayW<::UnityEngine::Vector3> ropeRotations, ::ArrayW<::UnityEngine::Vector3> ropeVelocities);
    // public System.Void SetVelocity(System.Int32 boneIndex, UnityEngine.Vector3 velocity, System.Boolean wholeRope, UnityEngine.Vector3[] ropeRotations, UnityEngine.Vector3[] ropeVelocities)
    // Offset: 0x27EC328
    void SetVelocity(int boneIndex, ::UnityEngine::Vector3 velocity, bool wholeRope, ::ArrayW<::UnityEngine::Vector3> ropeRotations, ::ArrayW<::UnityEngine::Vector3> ropeVelocities);
    // public System.Void .ctor()
    // Offset: 0x27EC698
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OldGorillaRopeSwing* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OldGorillaRopeSwing*, creationType>()));
    }
  }; // GorillaLocomotion.Gameplay.OldGorillaRopeSwing
  #pragma pack(pop)
  static check_size<sizeof(OldGorillaRopeSwing), 112 + sizeof(::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings*)> __GorillaLocomotion_Gameplay_OldGorillaRopeSwingSizeCheck;
  static_assert(sizeof(OldGorillaRopeSwing) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::OldGorillaRopeSwing::get_isIdle
// Il2CppName: get_isIdle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)()>(&GorillaLocomotion::Gameplay::OldGorillaRopeSwing::get_isIdle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::OldGorillaRopeSwing*), "get_isIdle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::OldGorillaRopeSwing::set_isIdle
// Il2CppName: set_isIdle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(bool)>(&GorillaLocomotion::Gameplay::OldGorillaRopeSwing::set_isIdle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::OldGorillaRopeSwing*), "set_isIdle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::OldGorillaRopeSwing::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)()>(&GorillaLocomotion::Gameplay::OldGorillaRopeSwing::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::OldGorillaRopeSwing*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::OldGorillaRopeSwing::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)()>(&GorillaLocomotion::Gameplay::OldGorillaRopeSwing::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::OldGorillaRopeSwing*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::OldGorillaRopeSwing::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)()>(&GorillaLocomotion::Gameplay::OldGorillaRopeSwing::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::OldGorillaRopeSwing*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::OldGorillaRopeSwing::SetIsIdle
// Il2CppName: SetIsIdle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(bool)>(&GorillaLocomotion::Gameplay::OldGorillaRopeSwing::SetIsIdle)> {
  static const MethodInfo* get() {
    static auto* idle = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::OldGorillaRopeSwing*), "SetIsIdle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idle});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::OldGorillaRopeSwing::ToggleIsKinematic
// Il2CppName: ToggleIsKinematic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(bool)>(&GorillaLocomotion::Gameplay::OldGorillaRopeSwing::ToggleIsKinematic)> {
  static const MethodInfo* get() {
    static auto* kinematic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::OldGorillaRopeSwing*), "ToggleIsKinematic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{kinematic});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::OldGorillaRopeSwing::GetBone
// Il2CppName: GetBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rigidbody* (GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(int)>(&GorillaLocomotion::Gameplay::OldGorillaRopeSwing::GetBone)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::OldGorillaRopeSwing*), "GetBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::OldGorillaRopeSwing::GetBoneIndex
// Il2CppName: GetBoneIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(::UnityEngine::Rigidbody*)>(&GorillaLocomotion::Gameplay::OldGorillaRopeSwing::GetBoneIndex)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::OldGorillaRopeSwing*), "GetBoneIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::OldGorillaRopeSwing::AttachLocalPlayer
// Il2CppName: AttachLocalPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(::UnityEngine::XR::XRNode, ::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GorillaLocomotion::Gameplay::OldGorillaRopeSwing::AttachLocalPlayer)> {
  static const MethodInfo* get() {
    static auto* xrNode = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* rigid = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::OldGorillaRopeSwing*), "AttachLocalPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xrNode, rigid, offset, velocity});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::OldGorillaRopeSwing::DetachLocalPlayer
// Il2CppName: DetachLocalPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)()>(&GorillaLocomotion::Gameplay::OldGorillaRopeSwing::DetachLocalPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::OldGorillaRopeSwing*), "DetachLocalPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::OldGorillaRopeSwing::AttachRemotePlayer
// Il2CppName: AttachRemotePlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(int, int, ::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&GorillaLocomotion::Gameplay::OldGorillaRopeSwing::AttachRemotePlayer)> {
  static const MethodInfo* get() {
    static auto* playerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* boneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* offsetTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::OldGorillaRopeSwing*), "AttachRemotePlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerId, boneIndex, offsetTransform, offset});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::OldGorillaRopeSwing::DetachRemotePlayer
// Il2CppName: DetachRemotePlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(int)>(&GorillaLocomotion::Gameplay::OldGorillaRopeSwing::DetachRemotePlayer)> {
  static const MethodInfo* get() {
    static auto* playerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::OldGorillaRopeSwing*), "DetachRemotePlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerId});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::OldGorillaRopeSwing::SetVelocity_RPC
// Il2CppName: SetVelocity_RPC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(int, ::UnityEngine::Vector3, bool, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>)>(&GorillaLocomotion::Gameplay::OldGorillaRopeSwing::SetVelocity_RPC)> {
  static const MethodInfo* get() {
    static auto* boneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* wholeRope = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* ropeRotations = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* ropeVelocities = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::OldGorillaRopeSwing*), "SetVelocity_RPC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boneIndex, velocity, wholeRope, ropeRotations, ropeVelocities});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::OldGorillaRopeSwing::SetVelocity
// Il2CppName: SetVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(int, ::UnityEngine::Vector3, bool, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>)>(&GorillaLocomotion::Gameplay::OldGorillaRopeSwing::SetVelocity)> {
  static const MethodInfo* get() {
    static auto* boneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* wholeRope = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* ropeRotations = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* ropeVelocities = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::OldGorillaRopeSwing*), "SetVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boneIndex, velocity, wholeRope, ropeRotations, ropeVelocities});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::OldGorillaRopeSwing::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
