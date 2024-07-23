// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.VersionedMonoBehaviour
#include "Pathfinding/VersionedMonoBehaviour.hpp"
// Including type: Pathfinding.RVO.RVOLayer
#include "Pathfinding/RVO/RVOLayer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::RVO
namespace Pathfinding::RVO {
  // Forward declaring type: IAgent
  class IAgent;
  // Forward declaring type: Simulator
  class Simulator;
  // Forward declaring type: MovementPlane
  struct MovementPlane;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: LayerMask
  struct LayerMask;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: IAstarAI
  class IAstarAI;
}
// Completed forward declares
// Type namespace: Pathfinding.RVO
namespace Pathfinding::RVO {
  // Forward declaring type: RVOController
  class RVOController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::RVO::RVOController);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::RVO::RVOController*, "Pathfinding.RVO", "RVOController");
// Type namespace: Pathfinding.RVO
namespace Pathfinding::RVO {
  // Size: 0x79
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.RVO.RVOController
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  class RVOController : public ::Pathfinding::VersionedMonoBehaviour {
    public:
    public:
    // System.Single radiusBackingField
    // Size: 0x4
    // Offset: 0x24
    float radiusBackingField;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single heightBackingField
    // Size: 0x4
    // Offset: 0x28
    float heightBackingField;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single centerBackingField
    // Size: 0x4
    // Offset: 0x2C
    float centerBackingField;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean locked
    // Size: 0x1
    // Offset: 0x30
    bool locked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean lockWhenNotMoving
    // Size: 0x1
    // Offset: 0x31
    bool lockWhenNotMoving;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lockWhenNotMoving and: agentTimeHorizon
    char __padding4[0x2] = {};
    // public System.Single agentTimeHorizon
    // Size: 0x4
    // Offset: 0x34
    float agentTimeHorizon;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single obstacleTimeHorizon
    // Size: 0x4
    // Offset: 0x38
    float obstacleTimeHorizon;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 maxNeighbours
    // Size: 0x4
    // Offset: 0x3C
    int maxNeighbours;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Pathfinding.RVO.RVOLayer layer
    // Size: 0x4
    // Offset: 0x40
    ::Pathfinding::RVO::RVOLayer layer;
    // Field size check
    static_assert(sizeof(::Pathfinding::RVO::RVOLayer) == 0x4);
    // public Pathfinding.RVO.RVOLayer collidesWith
    // Size: 0x4
    // Offset: 0x44
    ::Pathfinding::RVO::RVOLayer collidesWith;
    // Field size check
    static_assert(sizeof(::Pathfinding::RVO::RVOLayer) == 0x4);
    // public System.Single wallAvoidForce
    // Size: 0x4
    // Offset: 0x48
    float wallAvoidForce;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single wallAvoidFalloff
    // Size: 0x4
    // Offset: 0x4C
    float wallAvoidFalloff;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single priority
    // Size: 0x4
    // Offset: 0x50
    float priority;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: priority and: rvoAgent
    char __padding12[0x4] = {};
    // private Pathfinding.RVO.IAgent <rvoAgent>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::Pathfinding::RVO::IAgent* rvoAgent;
    // Field size check
    static_assert(sizeof(::Pathfinding::RVO::IAgent*) == 0x8);
    // private Pathfinding.RVO.Simulator <simulator>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    ::Pathfinding::RVO::Simulator* simulator;
    // Field size check
    static_assert(sizeof(::Pathfinding::RVO::Simulator*) == 0x8);
    // protected UnityEngine.Transform tr
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Transform* tr;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private Pathfinding.IAstarAI aiBackingField
    // Size: 0x8
    // Offset: 0x70
    ::Pathfinding::IAstarAI* aiBackingField;
    // Field size check
    static_assert(sizeof(::Pathfinding::IAstarAI*) == 0x8);
    // public System.Boolean debug
    // Size: 0x1
    // Offset: 0x78
    bool debug;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: System.Single radiusBackingField
    [[deprecated("Use field access instead!")]] float& dyn_radiusBackingField();
    // Get instance field reference: private System.Single heightBackingField
    [[deprecated("Use field access instead!")]] float& dyn_heightBackingField();
    // Get instance field reference: private System.Single centerBackingField
    [[deprecated("Use field access instead!")]] float& dyn_centerBackingField();
    // Get instance field reference: public System.Boolean locked
    [[deprecated("Use field access instead!")]] bool& dyn_locked();
    // Get instance field reference: public System.Boolean lockWhenNotMoving
    [[deprecated("Use field access instead!")]] bool& dyn_lockWhenNotMoving();
    // Get instance field reference: public System.Single agentTimeHorizon
    [[deprecated("Use field access instead!")]] float& dyn_agentTimeHorizon();
    // Get instance field reference: public System.Single obstacleTimeHorizon
    [[deprecated("Use field access instead!")]] float& dyn_obstacleTimeHorizon();
    // Get instance field reference: public System.Int32 maxNeighbours
    [[deprecated("Use field access instead!")]] int& dyn_maxNeighbours();
    // Get instance field reference: public Pathfinding.RVO.RVOLayer layer
    [[deprecated("Use field access instead!")]] ::Pathfinding::RVO::RVOLayer& dyn_layer();
    // Get instance field reference: public Pathfinding.RVO.RVOLayer collidesWith
    [[deprecated("Use field access instead!")]] ::Pathfinding::RVO::RVOLayer& dyn_collidesWith();
    // Get instance field reference: public System.Single wallAvoidForce
    [[deprecated("Use field access instead!")]] float& dyn_wallAvoidForce();
    // Get instance field reference: public System.Single wallAvoidFalloff
    [[deprecated("Use field access instead!")]] float& dyn_wallAvoidFalloff();
    // Get instance field reference: public System.Single priority
    [[deprecated("Use field access instead!")]] float& dyn_priority();
    // Get instance field reference: private Pathfinding.RVO.IAgent <rvoAgent>k__BackingField
    [[deprecated("Use field access instead!")]] ::Pathfinding::RVO::IAgent*& dyn_$rvoAgent$k__BackingField();
    // Get instance field reference: private Pathfinding.RVO.Simulator <simulator>k__BackingField
    [[deprecated("Use field access instead!")]] ::Pathfinding::RVO::Simulator*& dyn_$simulator$k__BackingField();
    // Get instance field reference: protected UnityEngine.Transform tr
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_tr();
    // Get instance field reference: private Pathfinding.IAstarAI aiBackingField
    [[deprecated("Use field access instead!")]] ::Pathfinding::IAstarAI*& dyn_aiBackingField();
    // Get instance field reference: public System.Boolean debug
    [[deprecated("Use field access instead!")]] bool& dyn_debug();
    // public System.Single get_radius()
    // Offset: 0x2A38BAC
    float get_radius();
    // public System.Void set_radius(System.Single value)
    // Offset: 0x2A38D3C
    void set_radius(float value);
    // public System.Single get_height()
    // Offset: 0x2A38E0C
    float get_height();
    // public System.Void set_height(System.Single value)
    // Offset: 0x2A38ED4
    void set_height(float value);
    // public System.Single get_center()
    // Offset: 0x2A38FA4
    float get_center();
    // public System.Void set_center(System.Single value)
    // Offset: 0x2A39070
    void set_center(float value);
    // public UnityEngine.LayerMask get_mask()
    // Offset: 0x2A39078
    ::UnityEngine::LayerMask get_mask();
    // public System.Void set_mask(UnityEngine.LayerMask value)
    // Offset: 0x2A39094
    void set_mask(::UnityEngine::LayerMask value);
    // public System.Boolean get_enableRotation()
    // Offset: 0x2A39098
    bool get_enableRotation();
    // public System.Void set_enableRotation(System.Boolean value)
    // Offset: 0x2A390A0
    void set_enableRotation(bool value);
    // public System.Single get_rotationSpeed()
    // Offset: 0x2A390A4
    float get_rotationSpeed();
    // public System.Void set_rotationSpeed(System.Single value)
    // Offset: 0x2A390AC
    void set_rotationSpeed(float value);
    // public System.Single get_maxSpeed()
    // Offset: 0x2A390B0
    float get_maxSpeed();
    // public System.Void set_maxSpeed(System.Single value)
    // Offset: 0x2A390B8
    void set_maxSpeed(float value);
    // public Pathfinding.RVO.MovementPlane get_movementPlane()
    // Offset: 0x2A390BC
    ::Pathfinding::RVO::MovementPlane get_movementPlane();
    // public Pathfinding.RVO.IAgent get_rvoAgent()
    // Offset: 0x2A3919C
    ::Pathfinding::RVO::IAgent* get_rvoAgent();
    // private System.Void set_rvoAgent(Pathfinding.RVO.IAgent value)
    // Offset: 0x2A391A4
    void set_rvoAgent(::Pathfinding::RVO::IAgent* value);
    // public Pathfinding.RVO.Simulator get_simulator()
    // Offset: 0x2A391AC
    ::Pathfinding::RVO::Simulator* get_simulator();
    // private System.Void set_simulator(Pathfinding.RVO.Simulator value)
    // Offset: 0x2A391B4
    void set_simulator(::Pathfinding::RVO::Simulator* value);
    // protected Pathfinding.IAstarAI get_ai()
    // Offset: 0x2A38C70
    ::Pathfinding::IAstarAI* get_ai();
    // protected System.Void set_ai(Pathfinding.IAstarAI value)
    // Offset: 0x2A391BC
    void set_ai(::Pathfinding::IAstarAI* value);
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x2A391C4
    ::UnityEngine::Vector3 get_position();
    // public UnityEngine.Vector3 get_velocity()
    // Offset: 0x2A39344
    ::UnityEngine::Vector3 get_velocity();
    // public System.Void set_velocity(UnityEngine.Vector3 value)
    // Offset: 0x2A396A0
    void set_velocity(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 CalculateMovementDelta(System.Single deltaTime)
    // Offset: 0x2A393A4
    ::UnityEngine::Vector3 CalculateMovementDelta(float deltaTime);
    // public UnityEngine.Vector3 CalculateMovementDelta(UnityEngine.Vector3 position, System.Single deltaTime)
    // Offset: 0x2A397B0
    ::UnityEngine::Vector3 CalculateMovementDelta(::UnityEngine::Vector3 position, float deltaTime);
    // public System.Void SetCollisionNormal(UnityEngine.Vector3 normal)
    // Offset: 0x2A39990
    void SetCollisionNormal(::UnityEngine::Vector3 normal);
    // public System.Void ForceSetVelocity(UnityEngine.Vector3 velocity)
    // Offset: 0x2A39A68
    void ForceSetVelocity(::UnityEngine::Vector3 velocity);
    // public UnityEngine.Vector2 To2D(UnityEngine.Vector3 p)
    // Offset: 0x2A39778
    ::UnityEngine::Vector2 To2D(::UnityEngine::Vector3 p);
    // public UnityEngine.Vector2 To2D(UnityEngine.Vector3 p, out System.Single elevation)
    // Offset: 0x2A39A6C
    ::UnityEngine::Vector2 To2D(::UnityEngine::Vector3 p, ByRef<float> elevation);
    // public UnityEngine.Vector3 To3D(UnityEngine.Vector2 p, System.Single elevationCoordinate)
    // Offset: 0x2A39304
    ::UnityEngine::Vector3 To3D(::UnityEngine::Vector2 p, float elevationCoordinate);
    // private System.Void OnDisable()
    // Offset: 0x2A39AB4
    void OnDisable();
    // private System.Void OnEnable()
    // Offset: 0x2A39ACC
    void OnEnable();
    // protected System.Void UpdateAgentProperties()
    // Offset: 0x2A39E68
    void UpdateAgentProperties();
    // public System.Void SetTarget(UnityEngine.Vector3 pos, System.Single speed, System.Single maxSpeed)
    // Offset: 0x2A3A5F8
    void SetTarget(::UnityEngine::Vector3 pos, float speed, float maxSpeed);
    // public System.Void Move(UnityEngine.Vector3 vel)
    // Offset: 0x2A3A710
    void Move(::UnityEngine::Vector3 vel);
    // public System.Void Teleport(UnityEngine.Vector3 pos)
    // Offset: 0x2A3A958
    void Teleport(::UnityEngine::Vector3 pos);
    // private System.Void OnDrawGizmos()
    // Offset: 0x2A3A974
    void OnDrawGizmos();
    // protected override System.Int32 OnUpgradeSerializedData(System.Int32 version, System.Boolean unityThread)
    // Offset: 0x2A3AC60
    // Implemented from: Pathfinding.VersionedMonoBehaviour
    // Base method: System.Int32 VersionedMonoBehaviour::OnUpgradeSerializedData(System.Int32 version, System.Boolean unityThread)
    int OnUpgradeSerializedData(int version, bool unityThread);
    // public System.Void .ctor()
    // Offset: 0x2A3AD6C
    // Implemented from: Pathfinding.VersionedMonoBehaviour
    // Base method: System.Void VersionedMonoBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RVOController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::RVO::RVOController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RVOController*, creationType>()));
    }
  }; // Pathfinding.RVO.RVOController
  #pragma pack(pop)
  static check_size<sizeof(RVOController), 120 + sizeof(bool)> __Pathfinding_RVO_RVOControllerSizeCheck;
  static_assert(sizeof(RVOController) == 0x79);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::get_radius
// Il2CppName: get_radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Pathfinding::RVO::RVOController::*)()>(&Pathfinding::RVO::RVOController::get_radius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "get_radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::set_radius
// Il2CppName: set_radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)(float)>(&Pathfinding::RVO::RVOController::set_radius)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "set_radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Pathfinding::RVO::RVOController::*)()>(&Pathfinding::RVO::RVOController::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::set_height
// Il2CppName: set_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)(float)>(&Pathfinding::RVO::RVOController::set_height)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "set_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::get_center
// Il2CppName: get_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Pathfinding::RVO::RVOController::*)()>(&Pathfinding::RVO::RVOController::get_center)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "get_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::set_center
// Il2CppName: set_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)(float)>(&Pathfinding::RVO::RVOController::set_center)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "set_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::get_mask
// Il2CppName: get_mask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (Pathfinding::RVO::RVOController::*)()>(&Pathfinding::RVO::RVOController::get_mask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "get_mask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::set_mask
// Il2CppName: set_mask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)(::UnityEngine::LayerMask)>(&Pathfinding::RVO::RVOController::set_mask)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "set_mask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::get_enableRotation
// Il2CppName: get_enableRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::RVO::RVOController::*)()>(&Pathfinding::RVO::RVOController::get_enableRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "get_enableRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::set_enableRotation
// Il2CppName: set_enableRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)(bool)>(&Pathfinding::RVO::RVOController::set_enableRotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "set_enableRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::get_rotationSpeed
// Il2CppName: get_rotationSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Pathfinding::RVO::RVOController::*)()>(&Pathfinding::RVO::RVOController::get_rotationSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "get_rotationSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::set_rotationSpeed
// Il2CppName: set_rotationSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)(float)>(&Pathfinding::RVO::RVOController::set_rotationSpeed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "set_rotationSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::get_maxSpeed
// Il2CppName: get_maxSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Pathfinding::RVO::RVOController::*)()>(&Pathfinding::RVO::RVOController::get_maxSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "get_maxSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::set_maxSpeed
// Il2CppName: set_maxSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)(float)>(&Pathfinding::RVO::RVOController::set_maxSpeed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "set_maxSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::get_movementPlane
// Il2CppName: get_movementPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::RVO::MovementPlane (Pathfinding::RVO::RVOController::*)()>(&Pathfinding::RVO::RVOController::get_movementPlane)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "get_movementPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::get_rvoAgent
// Il2CppName: get_rvoAgent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::RVO::IAgent* (Pathfinding::RVO::RVOController::*)()>(&Pathfinding::RVO::RVOController::get_rvoAgent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "get_rvoAgent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::set_rvoAgent
// Il2CppName: set_rvoAgent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)(::Pathfinding::RVO::IAgent*)>(&Pathfinding::RVO::RVOController::set_rvoAgent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Pathfinding.RVO", "IAgent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "set_rvoAgent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::get_simulator
// Il2CppName: get_simulator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::RVO::Simulator* (Pathfinding::RVO::RVOController::*)()>(&Pathfinding::RVO::RVOController::get_simulator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "get_simulator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::set_simulator
// Il2CppName: set_simulator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)(::Pathfinding::RVO::Simulator*)>(&Pathfinding::RVO::RVOController::set_simulator)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Pathfinding.RVO", "Simulator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "set_simulator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::get_ai
// Il2CppName: get_ai
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::IAstarAI* (Pathfinding::RVO::RVOController::*)()>(&Pathfinding::RVO::RVOController::get_ai)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "get_ai", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::set_ai
// Il2CppName: set_ai
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)(::Pathfinding::IAstarAI*)>(&Pathfinding::RVO::RVOController::set_ai)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Pathfinding", "IAstarAI")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "set_ai", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::RVO::RVOController::*)()>(&Pathfinding::RVO::RVOController::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::get_velocity
// Il2CppName: get_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::RVO::RVOController::*)()>(&Pathfinding::RVO::RVOController::get_velocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "get_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::set_velocity
// Il2CppName: set_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3)>(&Pathfinding::RVO::RVOController::set_velocity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "set_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::CalculateMovementDelta
// Il2CppName: CalculateMovementDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::RVO::RVOController::*)(float)>(&Pathfinding::RVO::RVOController::CalculateMovementDelta)> {
  static const MethodInfo* get() {
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "CalculateMovementDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deltaTime});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::CalculateMovementDelta
// Il2CppName: CalculateMovementDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3, float)>(&Pathfinding::RVO::RVOController::CalculateMovementDelta)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "CalculateMovementDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, deltaTime});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::SetCollisionNormal
// Il2CppName: SetCollisionNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3)>(&Pathfinding::RVO::RVOController::SetCollisionNormal)> {
  static const MethodInfo* get() {
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "SetCollisionNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{normal});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::ForceSetVelocity
// Il2CppName: ForceSetVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3)>(&Pathfinding::RVO::RVOController::ForceSetVelocity)> {
  static const MethodInfo* get() {
    static auto* velocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "ForceSetVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{velocity});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::To2D
// Il2CppName: To2D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3)>(&Pathfinding::RVO::RVOController::To2D)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "To2D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::To2D
// Il2CppName: To2D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3, ByRef<float>)>(&Pathfinding::RVO::RVOController::To2D)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* elevation = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "To2D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, elevation});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::To3D
// Il2CppName: To3D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector2, float)>(&Pathfinding::RVO::RVOController::To3D)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* elevationCoordinate = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "To3D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, elevationCoordinate});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)()>(&Pathfinding::RVO::RVOController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)()>(&Pathfinding::RVO::RVOController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::UpdateAgentProperties
// Il2CppName: UpdateAgentProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)()>(&Pathfinding::RVO::RVOController::UpdateAgentProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "UpdateAgentProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::SetTarget
// Il2CppName: SetTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3, float, float)>(&Pathfinding::RVO::RVOController::SetTarget)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* speed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "SetTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, speed, maxSpeed});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::Move
// Il2CppName: Move
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3)>(&Pathfinding::RVO::RVOController::Move)> {
  static const MethodInfo* get() {
    static auto* vel = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "Move", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vel});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::Teleport
// Il2CppName: Teleport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3)>(&Pathfinding::RVO::RVOController::Teleport)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "Teleport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOController::*)()>(&Pathfinding::RVO::RVOController::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::OnUpgradeSerializedData
// Il2CppName: OnUpgradeSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::RVO::RVOController::*)(int, bool)>(&Pathfinding::RVO::RVOController::OnUpgradeSerializedData)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* unityThread = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOController*), "OnUpgradeSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version, unityThread});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!