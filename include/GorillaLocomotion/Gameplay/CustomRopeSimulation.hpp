// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
// Including type: GorillaLocomotion.Gameplay.BurstRopeNode
#include "GorillaLocomotion/Gameplay/BurstRopeNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: GorillaLocomotion.Gameplay
namespace GorillaLocomotion::Gameplay {
  // Forward declaring type: CustomRopeSimulation
  class CustomRopeSimulation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaLocomotion::Gameplay::CustomRopeSimulation);
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Gameplay::CustomRopeSimulation*, "GorillaLocomotion.Gameplay", "CustomRopeSimulation");
// Type namespace: GorillaLocomotion.Gameplay
namespace GorillaLocomotion::Gameplay {
  // WARNING Size may be invalid!
  // Autogenerated type: GorillaLocomotion.Gameplay.CustomRopeSimulation
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomRopeSimulation : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Collections.Generic.List`1<UnityEngine.Transform> nodes
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* nodes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*) == 0x8);
    // private UnityEngine.GameObject ropeNodePrefab
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* ropeNodePrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Int32 nodeCount
    // Size: 0x4
    // Offset: 0x30
    int nodeCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single nodeDistance
    // Size: 0x4
    // Offset: 0x34
    float nodeDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 applyConstraintIterations
    // Size: 0x4
    // Offset: 0x38
    int applyConstraintIterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector3 gravity
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 gravity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single friction
    // Size: 0x4
    // Offset: 0x48
    float friction;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private Unity.Collections.NativeArray`1<GorillaLocomotion.Gameplay.BurstRopeNode> burstNodes
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    ::Unity::Collections::NativeArray_1<::GorillaLocomotion::Gameplay::BurstRopeNode> burstNodes;
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Transform> nodes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& dyn_nodes();
    // Get instance field reference: private UnityEngine.GameObject ropeNodePrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_ropeNodePrefab();
    // Get instance field reference: private System.Int32 nodeCount
    [[deprecated("Use field access instead!")]] int& dyn_nodeCount();
    // Get instance field reference: private System.Single nodeDistance
    [[deprecated("Use field access instead!")]] float& dyn_nodeDistance();
    // Get instance field reference: private System.Int32 applyConstraintIterations
    [[deprecated("Use field access instead!")]] int& dyn_applyConstraintIterations();
    // Get instance field reference: private UnityEngine.Vector3 gravity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_gravity();
    // Get instance field reference: private System.Single friction
    [[deprecated("Use field access instead!")]] float& dyn_friction();
    // Get instance field reference: private Unity.Collections.NativeArray`1<GorillaLocomotion.Gameplay.BurstRopeNode> burstNodes
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<::GorillaLocomotion::Gameplay::BurstRopeNode>& dyn_burstNodes();
    // private System.Void Start()
    // Offset: 0x27E6170
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x27E63DC
    void OnDestroy();
    // private System.Void Update()
    // Offset: 0x27E6424
    void Update();
    // public System.Void .ctor()
    // Offset: 0x27E65F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomRopeSimulation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaLocomotion::Gameplay::CustomRopeSimulation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomRopeSimulation*, creationType>()));
    }
  }; // GorillaLocomotion.Gameplay.CustomRopeSimulation
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::CustomRopeSimulation::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::CustomRopeSimulation::*)()>(&GorillaLocomotion::Gameplay::CustomRopeSimulation::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::CustomRopeSimulation*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::CustomRopeSimulation::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::CustomRopeSimulation::*)()>(&GorillaLocomotion::Gameplay::CustomRopeSimulation::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::CustomRopeSimulation*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::CustomRopeSimulation::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::CustomRopeSimulation::*)()>(&GorillaLocomotion::Gameplay::CustomRopeSimulation::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::CustomRopeSimulation*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::CustomRopeSimulation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
