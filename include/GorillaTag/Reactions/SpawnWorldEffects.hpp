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
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SinglePool
  class SinglePool;
}
// Completed forward declares
// Type namespace: GorillaTag.Reactions
namespace GorillaTag::Reactions {
  // Forward declaring type: SpawnWorldEffects
  class SpawnWorldEffects;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::Reactions::SpawnWorldEffects);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::Reactions::SpawnWorldEffects*, "GorillaTag.Reactions", "SpawnWorldEffects");
// Type namespace: GorillaTag.Reactions
namespace GorillaTag::Reactions {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.Reactions.SpawnWorldEffects
  // [TokenAttribute] Offset: FFFFFFFF
  class SpawnWorldEffects : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private readonly System.Single _maxParticleHitReactionRate
    // Size: 0x4
    // Offset: 0x20
    float maxParticleHitReactionRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maxParticleHitReactionRate and: prefabToSpawn
    char __padding0[0x4] = {};
    // private UnityEngine.GameObject _prefabToSpawn
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* prefabToSpawn;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Boolean _hasPrefabToSpawn
    // Size: 0x1
    // Offset: 0x30
    bool hasPrefabToSpawn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isPrefabInPool
    // Size: 0x1
    // Offset: 0x31
    bool isPrefabInPool;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isPrefabInPool and: lastCollisionTime
    char __padding3[0x6] = {};
    // private System.Double _lastCollisionTime
    // Size: 0x8
    // Offset: 0x38
    double lastCollisionTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private SinglePool _pool
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::SinglePool* pool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SinglePool*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Single _maxParticleHitReactionRate
    [[deprecated("Use field access instead!")]] float& dyn__maxParticleHitReactionRate();
    // Get instance field reference: private UnityEngine.GameObject _prefabToSpawn
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__prefabToSpawn();
    // Get instance field reference: private System.Boolean _hasPrefabToSpawn
    [[deprecated("Use field access instead!")]] bool& dyn__hasPrefabToSpawn();
    // Get instance field reference: private System.Boolean _isPrefabInPool
    [[deprecated("Use field access instead!")]] bool& dyn__isPrefabInPool();
    // Get instance field reference: private System.Double _lastCollisionTime
    [[deprecated("Use field access instead!")]] double& dyn__lastCollisionTime();
    // Get instance field reference: private SinglePool _pool
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SinglePool*& dyn__pool();
    // protected System.Void OnEnable()
    // Offset: 0x28A5A5C
    void OnEnable();
    // public System.Void RequestSpawn(UnityEngine.Vector3 worldPosition)
    // Offset: 0x28A5CE4
    void RequestSpawn(::UnityEngine::Vector3 worldPosition);
    // public System.Void RequestSpawn(UnityEngine.Vector3 worldPosition, UnityEngine.Vector3 normal)
    // Offset: 0x28A5D60
    void RequestSpawn(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 normal);
    // public System.Void .ctor()
    // Offset: 0x28A5EF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpawnWorldEffects* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::Reactions::SpawnWorldEffects::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpawnWorldEffects*, creationType>()));
    }
  }; // GorillaTag.Reactions.SpawnWorldEffects
  #pragma pack(pop)
  static check_size<sizeof(SpawnWorldEffects), 64 + sizeof(::GlobalNamespace::SinglePool*)> __GorillaTag_Reactions_SpawnWorldEffectsSizeCheck;
  static_assert(sizeof(SpawnWorldEffects) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::Reactions::SpawnWorldEffects::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Reactions::SpawnWorldEffects::*)()>(&GorillaTag::Reactions::SpawnWorldEffects::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Reactions::SpawnWorldEffects*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Reactions::SpawnWorldEffects::RequestSpawn
// Il2CppName: RequestSpawn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Reactions::SpawnWorldEffects::*)(::UnityEngine::Vector3)>(&GorillaTag::Reactions::SpawnWorldEffects::RequestSpawn)> {
  static const MethodInfo* get() {
    static auto* worldPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Reactions::SpawnWorldEffects*), "RequestSpawn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldPosition});
  }
};
// Writing MetadataGetter for method: GorillaTag::Reactions::SpawnWorldEffects::RequestSpawn
// Il2CppName: RequestSpawn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Reactions::SpawnWorldEffects::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GorillaTag::Reactions::SpawnWorldEffects::RequestSpawn)> {
  static const MethodInfo* get() {
    static auto* worldPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Reactions::SpawnWorldEffects*), "RequestSpawn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldPosition, normal});
  }
};
// Writing MetadataGetter for method: GorillaTag::Reactions::SpawnWorldEffects::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
