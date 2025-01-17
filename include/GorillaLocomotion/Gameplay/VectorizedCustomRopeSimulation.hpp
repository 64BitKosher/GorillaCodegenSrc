// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: GorillaLocomotion.Gameplay.VectorizedBurstRopeData
#include "GorillaLocomotion/Gameplay/VectorizedBurstRopeData.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
}
// Forward declaring namespace: GorillaLocomotion::Gameplay
namespace GorillaLocomotion::Gameplay {
  // Forward declaring type: GorillaRopeSwing
  class GorillaRopeSwing;
}
// Completed forward declares
// Type namespace: GorillaLocomotion.Gameplay
namespace GorillaLocomotion::Gameplay {
  // Forward declaring type: VectorizedCustomRopeSimulation
  class VectorizedCustomRopeSimulation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation);
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*, "GorillaLocomotion.Gameplay", "VectorizedCustomRopeSimulation");
// Type namespace: GorillaLocomotion.Gameplay
namespace GorillaLocomotion::Gameplay {
  // WARNING Size may be invalid!
  // Autogenerated type: GorillaLocomotion.Gameplay.VectorizedCustomRopeSimulation
  // [TokenAttribute] Offset: FFFFFFFF
  class VectorizedCustomRopeSimulation : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Collections.Generic.List`1<UnityEngine.Transform> nodes
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* nodes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*) == 0x8);
    // private System.Single nodeDistance
    // Size: 0x4
    // Offset: 0x28
    float nodeDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 applyConstraintIterations
    // Size: 0x4
    // Offset: 0x2C
    int applyConstraintIterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 finalPassIterations
    // Size: 0x4
    // Offset: 0x30
    int finalPassIterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single gravity
    // Size: 0x4
    // Offset: 0x34
    float gravity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single friction
    // Size: 0x4
    // Offset: 0x38
    float friction;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private GorillaLocomotion.Gameplay.VectorizedBurstRopeData burstData
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    ::GorillaLocomotion::Gameplay::VectorizedBurstRopeData burstData;
    // private System.Single lastDelta
    // Size: 0x4
    // Offset: 0xD0
    float lastDelta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Collections.Generic.List`1<GorillaLocomotion.Gameplay.GorillaRopeSwing> ropes
    // Size: 0x8
    // Offset: 0xD8
    ::System::Collections::Generic::List_1<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>* ropes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>*) == 0x8);
    // private System.Boolean simulateExtraFrame
    // Size: 0x1
    // Offset: 0xE0
    bool simulateExtraFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static public GorillaLocomotion.Gameplay.VectorizedCustomRopeSimulation instance
    static ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation* _get_instance();
    // Set static field: static public GorillaLocomotion.Gameplay.VectorizedCustomRopeSimulation instance
    static void _set_instance(::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation* value);
    // static field const value: static public System.Int32 MAX_NODE_COUNT
    static constexpr const int MAX_NODE_COUNT = 32;
    // Get static field: static public System.Int32 MAX_NODE_COUNT
    static int _get_MAX_NODE_COUNT();
    // Set static field: static public System.Int32 MAX_NODE_COUNT
    static void _set_MAX_NODE_COUNT(int value);
    // static field const value: static public System.Single MAX_ROPE_SPEED
    static constexpr const float MAX_ROPE_SPEED = 15;
    // Get static field: static public System.Single MAX_ROPE_SPEED
    static float _get_MAX_ROPE_SPEED();
    // Set static field: static public System.Single MAX_ROPE_SPEED
    static void _set_MAX_ROPE_SPEED(float value);
    // Get static field: static private System.Collections.Generic.List`1<GorillaLocomotion.Gameplay.GorillaRopeSwing> registerQueue
    static ::System::Collections::Generic::List_1<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>* _get_registerQueue();
    // Set static field: static private System.Collections.Generic.List`1<GorillaLocomotion.Gameplay.GorillaRopeSwing> registerQueue
    static void _set_registerQueue(::System::Collections::Generic::List_1<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>* value);
    // Get static field: static private System.Collections.Generic.List`1<GorillaLocomotion.Gameplay.GorillaRopeSwing> deregisterQueue
    static ::System::Collections::Generic::List_1<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>* _get_deregisterQueue();
    // Set static field: static private System.Collections.Generic.List`1<GorillaLocomotion.Gameplay.GorillaRopeSwing> deregisterQueue
    static void _set_deregisterQueue(::System::Collections::Generic::List_1<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>* value);
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Transform> nodes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& dyn_nodes();
    // Get instance field reference: private System.Single nodeDistance
    [[deprecated("Use field access instead!")]] float& dyn_nodeDistance();
    // Get instance field reference: private System.Int32 applyConstraintIterations
    [[deprecated("Use field access instead!")]] int& dyn_applyConstraintIterations();
    // Get instance field reference: private System.Int32 finalPassIterations
    [[deprecated("Use field access instead!")]] int& dyn_finalPassIterations();
    // Get instance field reference: private System.Single gravity
    [[deprecated("Use field access instead!")]] float& dyn_gravity();
    // Get instance field reference: private System.Single friction
    [[deprecated("Use field access instead!")]] float& dyn_friction();
    // Get instance field reference: private GorillaLocomotion.Gameplay.VectorizedBurstRopeData burstData
    [[deprecated("Use field access instead!")]] ::GorillaLocomotion::Gameplay::VectorizedBurstRopeData& dyn_burstData();
    // Get instance field reference: private System.Single lastDelta
    [[deprecated("Use field access instead!")]] float& dyn_lastDelta();
    // Get instance field reference: private System.Collections.Generic.List`1<GorillaLocomotion.Gameplay.GorillaRopeSwing> ropes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>*& dyn_ropes();
    // Get instance field reference: private System.Boolean simulateExtraFrame
    [[deprecated("Use field access instead!")]] bool& dyn_simulateExtraFrame();
    // private System.Void Awake()
    // Offset: 0x27ED244
    void Awake();
    // static public System.Void Register(GorillaLocomotion.Gameplay.GorillaRopeSwing rope)
    // Offset: 0x27E7304
    static void Register(::GorillaLocomotion::Gameplay::GorillaRopeSwing* rope);
    // static public System.Void Unregister(GorillaLocomotion.Gameplay.GorillaRopeSwing rope)
    // Offset: 0x27E75C4
    static void Unregister(::GorillaLocomotion::Gameplay::GorillaRopeSwing* rope);
    // private System.Void RegenerateData()
    // Offset: 0x27ED2AC
    void RegenerateData();
    // private System.Void Dispose()
    // Offset: 0x27EDB14
    void Dispose();
    // private System.Void OnDestroy()
    // Offset: 0x27EDC10
    void OnDestroy();
    // public System.Void SetRopePos(GorillaLocomotion.Gameplay.GorillaRopeSwing ropeTarget, UnityEngine.Vector3[] positions, System.Boolean setCurPos, System.Boolean setLastPos, System.Int32 onlySetIndex)
    // Offset: 0x27EDC14
    void SetRopePos(::GorillaLocomotion::Gameplay::GorillaRopeSwing* ropeTarget, ::ArrayW<::UnityEngine::Vector3> positions, bool setCurPos, bool setLastPos, int onlySetIndex);
    // public System.Void SetVelocity(GorillaLocomotion.Gameplay.GorillaRopeSwing ropeTarget, UnityEngine.Vector3 velocity, System.Boolean wholeRope, System.Int32 boneIndex)
    // Offset: 0x27E91E8
    void SetVelocity(::GorillaLocomotion::Gameplay::GorillaRopeSwing* ropeTarget, ::UnityEngine::Vector3 velocity, bool wholeRope, int boneIndex);
    // public UnityEngine.Vector3 GetNodeVelocity(GorillaLocomotion.Gameplay.GorillaRopeSwing ropeTarget, System.Int32 nodeIndex)
    // Offset: 0x27E7DB8
    ::UnityEngine::Vector3 GetNodeVelocity(::GorillaLocomotion::Gameplay::GorillaRopeSwing* ropeTarget, int nodeIndex);
    // public System.Void SetMassForPlayers(GorillaLocomotion.Gameplay.GorillaRopeSwing ropeTarget, System.Boolean hasPlayers, System.Int32 furthestBoneIndex)
    // Offset: 0x27E8EB0
    void SetMassForPlayers(::GorillaLocomotion::Gameplay::GorillaRopeSwing* ropeTarget, bool hasPlayers, int furthestBoneIndex);
    // private System.Void Update()
    // Offset: 0x27EDE78
    void Update();
    // public System.Void .ctor()
    // Offset: 0x27EE310
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VectorizedCustomRopeSimulation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VectorizedCustomRopeSimulation*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x27EE418
    static void _cctor();
  }; // GorillaLocomotion.Gameplay.VectorizedCustomRopeSimulation
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)()>(&GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*)>(&GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Register)> {
  static const MethodInfo* get() {
    static auto* rope = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Gameplay", "GorillaRopeSwing")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rope});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Unregister
// Il2CppName: Unregister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*)>(&GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Unregister)> {
  static const MethodInfo* get() {
    static auto* rope = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Gameplay", "GorillaRopeSwing")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*), "Unregister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rope});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::RegenerateData
// Il2CppName: RegenerateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)()>(&GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::RegenerateData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*), "RegenerateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)()>(&GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)()>(&GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::SetRopePos
// Il2CppName: SetRopePos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*, ::ArrayW<::UnityEngine::Vector3>, bool, bool, int)>(&GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::SetRopePos)> {
  static const MethodInfo* get() {
    static auto* ropeTarget = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Gameplay", "GorillaRopeSwing")->byval_arg;
    static auto* positions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* setCurPos = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* setLastPos = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* onlySetIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*), "SetRopePos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ropeTarget, positions, setCurPos, setLastPos, onlySetIndex});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::SetVelocity
// Il2CppName: SetVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*, ::UnityEngine::Vector3, bool, int)>(&GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::SetVelocity)> {
  static const MethodInfo* get() {
    static auto* ropeTarget = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Gameplay", "GorillaRopeSwing")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* wholeRope = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* boneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*), "SetVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ropeTarget, velocity, wholeRope, boneIndex});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::GetNodeVelocity
// Il2CppName: GetNodeVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*, int)>(&GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::GetNodeVelocity)> {
  static const MethodInfo* get() {
    static auto* ropeTarget = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Gameplay", "GorillaRopeSwing")->byval_arg;
    static auto* nodeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*), "GetNodeVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ropeTarget, nodeIndex});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::SetMassForPlayers
// Il2CppName: SetMassForPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*, bool, int)>(&GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::SetMassForPlayers)> {
  static const MethodInfo* get() {
    static auto* ropeTarget = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Gameplay", "GorillaRopeSwing")->byval_arg;
    static auto* hasPlayers = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* furthestBoneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*), "SetMassForPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ropeTarget, hasPlayers, furthestBoneIndex});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)()>(&GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
