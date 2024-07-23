// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BoingKit.BoingReactor
#include "BoingKit/BoingReactor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BoingKit
namespace BoingKit {
  // Forward declaring type: BoingBoneCollider
  class BoingBoneCollider;
  // Skipping declaration: Version because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: BoingKit
namespace BoingKit {
  // Forward declaring type: BoingBones
  class BoingBones;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BoingKit::BoingBones);
DEFINE_IL2CPP_ARG_TYPE(::BoingKit::BoingBones*, "BoingKit", "BoingBones");
// Type namespace: BoingKit
namespace BoingKit {
  // Size: 0x26C
  #pragma pack(push, 1)
  // Autogenerated type: BoingKit.BoingBones
  // [TokenAttribute] Offset: FFFFFFFF
  class BoingBones : public ::BoingKit::BoingReactor {
    public:
    // Writing base type padding for base size: 0x231 to desired offset: 0x238
    char ___base_padding[0x7] = {};
    // Nested type: ::BoingKit::BoingBones::Bone
    class Bone;
    // Nested type: ::BoingKit::BoingBones::Chain
    class Chain;
    // Nested type: ::BoingKit::BoingBones::RescanEntry
    class RescanEntry;
    public:
    // BoingKit.BoingBones/Bone[][] BoneData
    // Size: 0x8
    // Offset: 0x238
    ::ArrayW<::ArrayW<::BoingKit::BoingBones::Bone*>> BoneData;
    // Field size check
    static_assert(sizeof(::ArrayW<::ArrayW<::BoingKit::BoingBones::Bone*>>) == 0x8);
    // public BoingKit.BoingBones/Chain[] BoneChains
    // Size: 0x8
    // Offset: 0x240
    ::ArrayW<::BoingKit::BoingBones::Chain*> BoneChains;
    // Field size check
    static_assert(sizeof(::ArrayW<::BoingKit::BoingBones::Chain*>) == 0x8);
    // public System.Boolean TwistPropagation
    // Size: 0x1
    // Offset: 0x248
    bool TwistPropagation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: TwistPropagation and: MaxCollisionResolutionSpeed
    char __padding2[0x3] = {};
    // public System.Single MaxCollisionResolutionSpeed
    // Size: 0x4
    // Offset: 0x24C
    float MaxCollisionResolutionSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public BoingKit.BoingBoneCollider[] BoingColliders
    // Size: 0x8
    // Offset: 0x250
    ::ArrayW<::BoingKit::BoingBoneCollider*> BoingColliders;
    // Field size check
    static_assert(sizeof(::ArrayW<::BoingKit::BoingBoneCollider*>) == 0x8);
    // public UnityEngine.Collider[] UnityColliders
    // Size: 0x8
    // Offset: 0x258
    ::ArrayW<::UnityEngine::Collider*> UnityColliders;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // public System.Boolean DebugDrawRawBones
    // Size: 0x1
    // Offset: 0x260
    bool DebugDrawRawBones;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean DebugDrawTargetBones
    // Size: 0x1
    // Offset: 0x261
    bool DebugDrawTargetBones;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean DebugDrawBoingBones
    // Size: 0x1
    // Offset: 0x262
    bool DebugDrawBoingBones;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean DebugDrawFinalBones
    // Size: 0x1
    // Offset: 0x263
    bool DebugDrawFinalBones;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean DebugDrawColliders
    // Size: 0x1
    // Offset: 0x264
    bool DebugDrawColliders;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean DebugDrawChainBounds
    // Size: 0x1
    // Offset: 0x265
    bool DebugDrawChainBounds;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean DebugDrawBoneNames
    // Size: 0x1
    // Offset: 0x266
    bool DebugDrawBoneNames;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean DebugDrawLengthFromRoot
    // Size: 0x1
    // Offset: 0x267
    bool DebugDrawLengthFromRoot;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Single m_minScale
    // Size: 0x4
    // Offset: 0x268
    float m_minScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: BoingKit.BoingBones/Bone[][] BoneData
    [[deprecated("Use field access instead!")]] ::ArrayW<::ArrayW<::BoingKit::BoingBones::Bone*>>& dyn_BoneData();
    // Get instance field reference: public BoingKit.BoingBones/Chain[] BoneChains
    [[deprecated("Use field access instead!")]] ::ArrayW<::BoingKit::BoingBones::Chain*>& dyn_BoneChains();
    // Get instance field reference: public System.Boolean TwistPropagation
    [[deprecated("Use field access instead!")]] bool& dyn_TwistPropagation();
    // Get instance field reference: public System.Single MaxCollisionResolutionSpeed
    [[deprecated("Use field access instead!")]] float& dyn_MaxCollisionResolutionSpeed();
    // Get instance field reference: public BoingKit.BoingBoneCollider[] BoingColliders
    [[deprecated("Use field access instead!")]] ::ArrayW<::BoingKit::BoingBoneCollider*>& dyn_BoingColliders();
    // Get instance field reference: public UnityEngine.Collider[] UnityColliders
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Collider*>& dyn_UnityColliders();
    // Get instance field reference: public System.Boolean DebugDrawRawBones
    [[deprecated("Use field access instead!")]] bool& dyn_DebugDrawRawBones();
    // Get instance field reference: public System.Boolean DebugDrawTargetBones
    [[deprecated("Use field access instead!")]] bool& dyn_DebugDrawTargetBones();
    // Get instance field reference: public System.Boolean DebugDrawBoingBones
    [[deprecated("Use field access instead!")]] bool& dyn_DebugDrawBoingBones();
    // Get instance field reference: public System.Boolean DebugDrawFinalBones
    [[deprecated("Use field access instead!")]] bool& dyn_DebugDrawFinalBones();
    // Get instance field reference: public System.Boolean DebugDrawColliders
    [[deprecated("Use field access instead!")]] bool& dyn_DebugDrawColliders();
    // Get instance field reference: public System.Boolean DebugDrawChainBounds
    [[deprecated("Use field access instead!")]] bool& dyn_DebugDrawChainBounds();
    // Get instance field reference: public System.Boolean DebugDrawBoneNames
    [[deprecated("Use field access instead!")]] bool& dyn_DebugDrawBoneNames();
    // Get instance field reference: public System.Boolean DebugDrawLengthFromRoot
    [[deprecated("Use field access instead!")]] bool& dyn_DebugDrawLengthFromRoot();
    // Get instance field reference: private System.Single m_minScale
    [[deprecated("Use field access instead!")]] float& dyn_m_minScale();
    // public System.Void OnValidate()
    // Offset: 0x28EABF4
    void OnValidate();
    // public System.Void RescanBoneChains()
    // Offset: 0x28EAC0C
    void RescanBoneChains();
    // private System.Void UpdateCollisionRadius()
    // Offset: 0x28EB698
    void UpdateCollisionRadius();
    // public System.Void Reboot(System.Int32 iChain)
    // Offset: 0x28EBA8C
    void Reboot(int iChain);
    // System.Single get_MinScale()
    // Offset: 0x28EBC3C
    float get_MinScale();
    // public System.Void AccumulateTarget(ref BoingKit.BoingEffector/Params effector, System.Single dt)
    // Offset: 0x28EC808
    void AccumulateTarget(ByRef<::BoingKit::BoingEffector::Params> effector, float dt);
    // public System.Void EndAccumulateTargets()
    // Offset: 0x28EC9A4
    void EndAccumulateTargets();
    // protected override System.Void Register()
    // Offset: 0x28EA94C
    // Implemented from: BoingKit.BoingReactor
    // Base method: System.Void BoingReactor::Register()
    void Register();
    // protected override System.Void Unregister()
    // Offset: 0x28EAA88
    // Implemented from: BoingKit.BoingReactor
    // Base method: System.Void BoingReactor::Unregister()
    void Unregister();
    // protected override System.Void OnUpgrade(BoingKit.Version oldVersion, BoingKit.Version newVersion)
    // Offset: 0x28EABC0
    // Implemented from: BoingKit.BoingBase
    // Base method: System.Void BoingBase::OnUpgrade(BoingKit.Version oldVersion, BoingKit.Version newVersion)
    void OnUpgrade(::BoingKit::Version oldVersion, ::BoingKit::Version newVersion);
    // public override System.Void OnEnable()
    // Offset: 0x28EB7EC
    // Implemented from: BoingKit.BoingBehavior
    // Base method: System.Void BoingBehavior::OnEnable()
    void OnEnable();
    // public override System.Void OnDisable()
    // Offset: 0x28EB824
    // Implemented from: BoingKit.BoingBehavior
    // Base method: System.Void BoingBehavior::OnDisable()
    void OnDisable();
    // public override System.Void Reboot()
    // Offset: 0x28EBBEC
    // Implemented from: BoingKit.BoingBehavior
    // Base method: System.Void BoingBehavior::Reboot()
    void Reboot();
    // public override System.Void PrepareExecute()
    // Offset: 0x28EBC44
    // Implemented from: BoingKit.BoingReactor
    // Base method: System.Void BoingReactor::PrepareExecute()
    void PrepareExecute();
    // public override System.Void Restore()
    // Offset: 0x28ECAE0
    // Implemented from: BoingKit.BoingBehavior
    // Base method: System.Void BoingBehavior::Restore()
    void Restore();
    // public System.Void .ctor()
    // Offset: 0x28ECC0C
    // Implemented from: BoingKit.BoingReactor
    // Base method: System.Void BoingReactor::.ctor()
    // Base method: System.Void BoingBehavior::.ctor()
    // Base method: System.Void BoingBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoingBones* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BoingKit::BoingBones::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoingBones*, creationType>()));
    }
  }; // BoingKit.BoingBones
  #pragma pack(pop)
  static check_size<sizeof(BoingBones), 616 + sizeof(float)> __BoingKit_BoingBonesSizeCheck;
  static_assert(sizeof(BoingBones) == 0x26C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BoingKit::BoingBones::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingBones::*)()>(&BoingKit::BoingBones::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingBones*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingBones::RescanBoneChains
// Il2CppName: RescanBoneChains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingBones::*)()>(&BoingKit::BoingBones::RescanBoneChains)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingBones*), "RescanBoneChains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingBones::UpdateCollisionRadius
// Il2CppName: UpdateCollisionRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingBones::*)()>(&BoingKit::BoingBones::UpdateCollisionRadius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingBones*), "UpdateCollisionRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingBones::Reboot
// Il2CppName: Reboot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingBones::*)(int)>(&BoingKit::BoingBones::Reboot)> {
  static const MethodInfo* get() {
    static auto* iChain = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingBones*), "Reboot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{iChain});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingBones::get_MinScale
// Il2CppName: get_MinScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BoingKit::BoingBones::*)()>(&BoingKit::BoingBones::get_MinScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingBones*), "get_MinScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingBones::AccumulateTarget
// Il2CppName: AccumulateTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingBones::*)(ByRef<::BoingKit::BoingEffector::Params>, float)>(&BoingKit::BoingBones::AccumulateTarget)> {
  static const MethodInfo* get() {
    static auto* effector = &::il2cpp_utils::GetClassFromName("BoingKit", "BoingEffector/Params")->this_arg;
    static auto* dt = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingBones*), "AccumulateTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{effector, dt});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingBones::EndAccumulateTargets
// Il2CppName: EndAccumulateTargets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingBones::*)()>(&BoingKit::BoingBones::EndAccumulateTargets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingBones*), "EndAccumulateTargets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingBones::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingBones::*)()>(&BoingKit::BoingBones::Register)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingBones*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingBones::Unregister
// Il2CppName: Unregister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingBones::*)()>(&BoingKit::BoingBones::Unregister)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingBones*), "Unregister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingBones::OnUpgrade
// Il2CppName: OnUpgrade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingBones::*)(::BoingKit::Version, ::BoingKit::Version)>(&BoingKit::BoingBones::OnUpgrade)> {
  static const MethodInfo* get() {
    static auto* oldVersion = &::il2cpp_utils::GetClassFromName("BoingKit", "Version")->byval_arg;
    static auto* newVersion = &::il2cpp_utils::GetClassFromName("BoingKit", "Version")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingBones*), "OnUpgrade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldVersion, newVersion});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingBones::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingBones::*)()>(&BoingKit::BoingBones::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingBones*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingBones::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingBones::*)()>(&BoingKit::BoingBones::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingBones*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingBones::Reboot
// Il2CppName: Reboot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingBones::*)()>(&BoingKit::BoingBones::Reboot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingBones*), "Reboot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingBones::PrepareExecute
// Il2CppName: PrepareExecute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingBones::*)()>(&BoingKit::BoingBones::PrepareExecute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingBones*), "PrepareExecute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingBones::Restore
// Il2CppName: Restore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingBones::*)()>(&BoingKit::BoingBones::Restore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingBones*), "Restore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingBones::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!