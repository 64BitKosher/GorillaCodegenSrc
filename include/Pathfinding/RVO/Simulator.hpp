// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.RVO.MovementPlane
#include "Pathfinding/RVO/MovementPlane.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::RVO
namespace Pathfinding::RVO {
  // Forward declaring type: ObstacleVertex
  class ObstacleVertex;
  // Forward declaring type: RVOQuadtree
  class RVOQuadtree;
  // Forward declaring type: IAgent
  class IAgent;
  // Forward declaring type: RVOLayer
  struct RVOLayer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Pathfinding::RVO::Sampled
namespace Pathfinding::RVO::Sampled {
  // Forward declaring type: Agent
  class Agent;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: Pathfinding.RVO
namespace Pathfinding::RVO {
  // Forward declaring type: Simulator
  class Simulator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::RVO::Simulator);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::RVO::Simulator*, "Pathfinding.RVO", "Simulator");
// Type namespace: Pathfinding.RVO
namespace Pathfinding::RVO {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.RVO.Simulator
  // [TokenAttribute] Offset: FFFFFFFF
  class Simulator : public ::Il2CppObject {
    public:
    // Nested type: ::Pathfinding::RVO::Simulator::WorkerContext
    class WorkerContext;
    // Nested type: ::Pathfinding::RVO::Simulator::Worker
    class Worker;
    public:
    // private readonly System.Boolean doubleBuffering
    // Size: 0x1
    // Offset: 0x10
    bool doubleBuffering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: doubleBuffering and: desiredDeltaTime
    char __padding0[0x3] = {};
    // private System.Single desiredDeltaTime
    // Size: 0x4
    // Offset: 0x14
    float desiredDeltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly Pathfinding.RVO.Simulator/Worker[] workers
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Pathfinding::RVO::Simulator::Worker*> workers;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::RVO::Simulator::Worker*>) == 0x8);
    // private System.Collections.Generic.List`1<Pathfinding.RVO.Sampled.Agent> agents
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>* agents;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>*) == 0x8);
    // public System.Collections.Generic.List`1<Pathfinding.RVO.ObstacleVertex> obstacles
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* obstacles;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*) == 0x8);
    // private Pathfinding.RVO.RVOQuadtree <Quadtree>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::Pathfinding::RVO::RVOQuadtree* Quadtree;
    // Field size check
    static_assert(sizeof(::Pathfinding::RVO::RVOQuadtree*) == 0x8);
    // private System.Single deltaTime
    // Size: 0x4
    // Offset: 0x38
    float deltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single lastStep
    // Size: 0x4
    // Offset: 0x3C
    float lastStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean doUpdateObstacles
    // Size: 0x1
    // Offset: 0x40
    bool doUpdateObstacles;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean doCleanObstacles
    // Size: 0x1
    // Offset: 0x41
    bool doCleanObstacles;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: doCleanObstacles and: symmetryBreakingBias
    char __padding9[0x2] = {};
    // public System.Single symmetryBreakingBias
    // Size: 0x4
    // Offset: 0x44
    float symmetryBreakingBias;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly Pathfinding.RVO.MovementPlane movementPlane
    // Size: 0x4
    // Offset: 0x48
    ::Pathfinding::RVO::MovementPlane movementPlane;
    // Field size check
    static_assert(sizeof(::Pathfinding::RVO::MovementPlane) == 0x4);
    // Padding between fields: movementPlane and: coroutineWorkerContext
    char __padding11[0x4] = {};
    // private Pathfinding.RVO.Simulator/WorkerContext coroutineWorkerContext
    // Size: 0x8
    // Offset: 0x50
    ::Pathfinding::RVO::Simulator::WorkerContext* coroutineWorkerContext;
    // Field size check
    static_assert(sizeof(::Pathfinding::RVO::Simulator::WorkerContext*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Boolean doubleBuffering
    [[deprecated("Use field access instead!")]] bool& dyn_doubleBuffering();
    // Get instance field reference: private System.Single desiredDeltaTime
    [[deprecated("Use field access instead!")]] float& dyn_desiredDeltaTime();
    // Get instance field reference: private readonly Pathfinding.RVO.Simulator/Worker[] workers
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::RVO::Simulator::Worker*>& dyn_workers();
    // Get instance field reference: private System.Collections.Generic.List`1<Pathfinding.RVO.Sampled.Agent> agents
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>*& dyn_agents();
    // Get instance field reference: public System.Collections.Generic.List`1<Pathfinding.RVO.ObstacleVertex> obstacles
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*& dyn_obstacles();
    // Get instance field reference: private Pathfinding.RVO.RVOQuadtree <Quadtree>k__BackingField
    [[deprecated("Use field access instead!")]] ::Pathfinding::RVO::RVOQuadtree*& dyn_$Quadtree$k__BackingField();
    // Get instance field reference: private System.Single deltaTime
    [[deprecated("Use field access instead!")]] float& dyn_deltaTime();
    // Get instance field reference: private System.Single lastStep
    [[deprecated("Use field access instead!")]] float& dyn_lastStep();
    // Get instance field reference: private System.Boolean doUpdateObstacles
    [[deprecated("Use field access instead!")]] bool& dyn_doUpdateObstacles();
    // Get instance field reference: private System.Boolean doCleanObstacles
    [[deprecated("Use field access instead!")]] bool& dyn_doCleanObstacles();
    // Get instance field reference: public System.Single symmetryBreakingBias
    [[deprecated("Use field access instead!")]] float& dyn_symmetryBreakingBias();
    // Get instance field reference: public readonly Pathfinding.RVO.MovementPlane movementPlane
    [[deprecated("Use field access instead!")]] ::Pathfinding::RVO::MovementPlane& dyn_movementPlane();
    // Get instance field reference: private Pathfinding.RVO.Simulator/WorkerContext coroutineWorkerContext
    [[deprecated("Use field access instead!")]] ::Pathfinding::RVO::Simulator::WorkerContext*& dyn_coroutineWorkerContext();
    // public Pathfinding.RVO.RVOQuadtree get_Quadtree()
    // Offset: 0x2A34EA4
    ::Pathfinding::RVO::RVOQuadtree* get_Quadtree();
    // private System.Void set_Quadtree(Pathfinding.RVO.RVOQuadtree value)
    // Offset: 0x2A34EAC
    void set_Quadtree(::Pathfinding::RVO::RVOQuadtree* value);
    // public System.Single get_DeltaTime()
    // Offset: 0x2A34EB4
    float get_DeltaTime();
    // public System.Boolean get_Multithreading()
    // Offset: 0x2A34EBC
    bool get_Multithreading();
    // public System.Single get_DesiredDeltaTime()
    // Offset: 0x2A34EDC
    float get_DesiredDeltaTime();
    // public System.Void set_DesiredDeltaTime(System.Single value)
    // Offset: 0x2A34EE4
    void set_DesiredDeltaTime(float value);
    // public System.Collections.Generic.List`1<Pathfinding.RVO.Sampled.Agent> GetAgents()
    // Offset: 0x2A34F54
    ::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>* GetAgents();
    // public System.Collections.Generic.List`1<Pathfinding.RVO.ObstacleVertex> GetObstacles()
    // Offset: 0x2A34F5C
    ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* GetObstacles();
    // public System.Void .ctor(System.Int32 workers, System.Boolean doubleBuffering, Pathfinding.RVO.MovementPlane movementPlane)
    // Offset: 0x2A34F64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Simulator* New_ctor(int workers, bool doubleBuffering, ::Pathfinding::RVO::MovementPlane movementPlane) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::RVO::Simulator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Simulator*, creationType>(workers, doubleBuffering, movementPlane)));
    }
    // public System.Void ClearAgents()
    // Offset: 0x2A3550C
    void ClearAgents();
    // public System.Void OnDestroy()
    // Offset: 0x2A35650
    void OnDestroy();
    // public Pathfinding.RVO.IAgent AddAgent(Pathfinding.RVO.IAgent agent)
    // Offset: 0x2A356F0
    ::Pathfinding::RVO::IAgent* AddAgent(::Pathfinding::RVO::IAgent* agent);
    // public Pathfinding.RVO.IAgent AddAgent(UnityEngine.Vector3 position)
    // Offset: 0x2A35918
    ::Pathfinding::RVO::IAgent* AddAgent(::UnityEngine::Vector3 position);
    // public Pathfinding.RVO.IAgent AddAgent(UnityEngine.Vector2 position, System.Single elevationCoordinate)
    // Offset: 0x2A35928
    ::Pathfinding::RVO::IAgent* AddAgent(::UnityEngine::Vector2 position, float elevationCoordinate);
    // public System.Void RemoveAgent(Pathfinding.RVO.IAgent agent)
    // Offset: 0x2A35B6C
    void RemoveAgent(::Pathfinding::RVO::IAgent* agent);
    // public Pathfinding.RVO.ObstacleVertex AddObstacle(Pathfinding.RVO.ObstacleVertex v)
    // Offset: 0x2A35D58
    ::Pathfinding::RVO::ObstacleVertex* AddObstacle(::Pathfinding::RVO::ObstacleVertex* v);
    // public Pathfinding.RVO.ObstacleVertex AddObstacle(UnityEngine.Vector3[] vertices, System.Single height, System.Boolean cycle)
    // Offset: 0x2A35E70
    ::Pathfinding::RVO::ObstacleVertex* AddObstacle(::ArrayW<::UnityEngine::Vector3> vertices, float height, bool cycle);
    // public Pathfinding.RVO.ObstacleVertex AddObstacle(UnityEngine.Vector3[] vertices, System.Single height, UnityEngine.Matrix4x4 matrix, Pathfinding.RVO.RVOLayer layer, System.Boolean cycle)
    // Offset: 0x2A35F08
    ::Pathfinding::RVO::ObstacleVertex* AddObstacle(::ArrayW<::UnityEngine::Vector3> vertices, float height, ::UnityEngine::Matrix4x4 matrix, ::Pathfinding::RVO::RVOLayer layer, bool cycle);
    // public Pathfinding.RVO.ObstacleVertex AddObstacle(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single height)
    // Offset: 0x2A36524
    ::Pathfinding::RVO::ObstacleVertex* AddObstacle(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, float height);
    // public System.Void UpdateObstacle(Pathfinding.RVO.ObstacleVertex obstacle, UnityEngine.Vector3[] vertices, UnityEngine.Matrix4x4 matrix)
    // Offset: 0x2A36174
    void UpdateObstacle(::Pathfinding::RVO::ObstacleVertex* obstacle, ::ArrayW<::UnityEngine::Vector3> vertices, ::UnityEngine::Matrix4x4 matrix);
    // private System.Void ScheduleCleanObstacles()
    // Offset: 0x2A36780
    void ScheduleCleanObstacles();
    // private System.Void CleanObstacles()
    // Offset: 0x2A3678C
    void CleanObstacles();
    // public System.Void RemoveObstacle(Pathfinding.RVO.ObstacleVertex v)
    // Offset: 0x2A36790
    void RemoveObstacle(::Pathfinding::RVO::ObstacleVertex* v);
    // public System.Void UpdateObstacles()
    // Offset: 0x2A35E64
    void UpdateObstacles();
    // private System.Void BuildQuadtree()
    // Offset: 0x2A36848
    void BuildQuadtree();
    // private System.Void BlockUntilSimulationStepIsDone()
    // Offset: 0x2A355DC
    void BlockUntilSimulationStepIsDone();
    // private System.Void PreCalculation()
    // Offset: 0x2A36CE4
    void PreCalculation();
    // private System.Void CleanAndUpdateObstaclesIfNecessary()
    // Offset: 0x2A36D9C
    void CleanAndUpdateObstaclesIfNecessary();
    // public System.Void Update()
    // Offset: 0x2A36DBC
    void Update();
  }; // Pathfinding.RVO.Simulator
  #pragma pack(pop)
  static check_size<sizeof(Simulator), 80 + sizeof(::Pathfinding::RVO::Simulator::WorkerContext*)> __Pathfinding_RVO_SimulatorSizeCheck;
  static_assert(sizeof(Simulator) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::get_Quadtree
// Il2CppName: get_Quadtree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::RVO::RVOQuadtree* (Pathfinding::RVO::Simulator::*)()>(&Pathfinding::RVO::Simulator::get_Quadtree)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "get_Quadtree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::set_Quadtree
// Il2CppName: set_Quadtree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::Simulator::*)(::Pathfinding::RVO::RVOQuadtree*)>(&Pathfinding::RVO::Simulator::set_Quadtree)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Pathfinding.RVO", "RVOQuadtree")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "set_Quadtree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::get_DeltaTime
// Il2CppName: get_DeltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Pathfinding::RVO::Simulator::*)()>(&Pathfinding::RVO::Simulator::get_DeltaTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "get_DeltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::get_Multithreading
// Il2CppName: get_Multithreading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::RVO::Simulator::*)()>(&Pathfinding::RVO::Simulator::get_Multithreading)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "get_Multithreading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::get_DesiredDeltaTime
// Il2CppName: get_DesiredDeltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Pathfinding::RVO::Simulator::*)()>(&Pathfinding::RVO::Simulator::get_DesiredDeltaTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "get_DesiredDeltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::set_DesiredDeltaTime
// Il2CppName: set_DesiredDeltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::Simulator::*)(float)>(&Pathfinding::RVO::Simulator::set_DesiredDeltaTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "set_DesiredDeltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::GetAgents
// Il2CppName: GetAgents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>* (Pathfinding::RVO::Simulator::*)()>(&Pathfinding::RVO::Simulator::GetAgents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "GetAgents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::GetObstacles
// Il2CppName: GetObstacles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* (Pathfinding::RVO::Simulator::*)()>(&Pathfinding::RVO::Simulator::GetObstacles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "GetObstacles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::ClearAgents
// Il2CppName: ClearAgents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::Simulator::*)()>(&Pathfinding::RVO::Simulator::ClearAgents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "ClearAgents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::Simulator::*)()>(&Pathfinding::RVO::Simulator::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::AddAgent
// Il2CppName: AddAgent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::RVO::IAgent* (Pathfinding::RVO::Simulator::*)(::Pathfinding::RVO::IAgent*)>(&Pathfinding::RVO::Simulator::AddAgent)> {
  static const MethodInfo* get() {
    static auto* agent = &::il2cpp_utils::GetClassFromName("Pathfinding.RVO", "IAgent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "AddAgent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{agent});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::AddAgent
// Il2CppName: AddAgent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::RVO::IAgent* (Pathfinding::RVO::Simulator::*)(::UnityEngine::Vector3)>(&Pathfinding::RVO::Simulator::AddAgent)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "AddAgent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::AddAgent
// Il2CppName: AddAgent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::RVO::IAgent* (Pathfinding::RVO::Simulator::*)(::UnityEngine::Vector2, float)>(&Pathfinding::RVO::Simulator::AddAgent)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* elevationCoordinate = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "AddAgent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, elevationCoordinate});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::RemoveAgent
// Il2CppName: RemoveAgent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::Simulator::*)(::Pathfinding::RVO::IAgent*)>(&Pathfinding::RVO::Simulator::RemoveAgent)> {
  static const MethodInfo* get() {
    static auto* agent = &::il2cpp_utils::GetClassFromName("Pathfinding.RVO", "IAgent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "RemoveAgent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{agent});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::AddObstacle
// Il2CppName: AddObstacle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::RVO::ObstacleVertex* (Pathfinding::RVO::Simulator::*)(::Pathfinding::RVO::ObstacleVertex*)>(&Pathfinding::RVO::Simulator::AddObstacle)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("Pathfinding.RVO", "ObstacleVertex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "AddObstacle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::AddObstacle
// Il2CppName: AddObstacle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::RVO::ObstacleVertex* (Pathfinding::RVO::Simulator::*)(::ArrayW<::UnityEngine::Vector3>, float, bool)>(&Pathfinding::RVO::Simulator::AddObstacle)> {
  static const MethodInfo* get() {
    static auto* vertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* cycle = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "AddObstacle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertices, height, cycle});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::AddObstacle
// Il2CppName: AddObstacle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::RVO::ObstacleVertex* (Pathfinding::RVO::Simulator::*)(::ArrayW<::UnityEngine::Vector3>, float, ::UnityEngine::Matrix4x4, ::Pathfinding::RVO::RVOLayer, bool)>(&Pathfinding::RVO::Simulator::AddObstacle)> {
  static const MethodInfo* get() {
    static auto* vertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* matrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* layer = &::il2cpp_utils::GetClassFromName("Pathfinding.RVO", "RVOLayer")->byval_arg;
    static auto* cycle = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "AddObstacle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertices, height, matrix, layer, cycle});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::AddObstacle
// Il2CppName: AddObstacle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::RVO::ObstacleVertex* (Pathfinding::RVO::Simulator::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&Pathfinding::RVO::Simulator::AddObstacle)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "AddObstacle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, height});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::UpdateObstacle
// Il2CppName: UpdateObstacle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::Simulator::*)(::Pathfinding::RVO::ObstacleVertex*, ::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Matrix4x4)>(&Pathfinding::RVO::Simulator::UpdateObstacle)> {
  static const MethodInfo* get() {
    static auto* obstacle = &::il2cpp_utils::GetClassFromName("Pathfinding.RVO", "ObstacleVertex")->byval_arg;
    static auto* vertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* matrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "UpdateObstacle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacle, vertices, matrix});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::ScheduleCleanObstacles
// Il2CppName: ScheduleCleanObstacles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::Simulator::*)()>(&Pathfinding::RVO::Simulator::ScheduleCleanObstacles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "ScheduleCleanObstacles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::CleanObstacles
// Il2CppName: CleanObstacles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::Simulator::*)()>(&Pathfinding::RVO::Simulator::CleanObstacles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "CleanObstacles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::RemoveObstacle
// Il2CppName: RemoveObstacle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::Simulator::*)(::Pathfinding::RVO::ObstacleVertex*)>(&Pathfinding::RVO::Simulator::RemoveObstacle)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("Pathfinding.RVO", "ObstacleVertex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "RemoveObstacle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::UpdateObstacles
// Il2CppName: UpdateObstacles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::Simulator::*)()>(&Pathfinding::RVO::Simulator::UpdateObstacles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "UpdateObstacles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::BuildQuadtree
// Il2CppName: BuildQuadtree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::Simulator::*)()>(&Pathfinding::RVO::Simulator::BuildQuadtree)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "BuildQuadtree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::BlockUntilSimulationStepIsDone
// Il2CppName: BlockUntilSimulationStepIsDone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::Simulator::*)()>(&Pathfinding::RVO::Simulator::BlockUntilSimulationStepIsDone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "BlockUntilSimulationStepIsDone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::PreCalculation
// Il2CppName: PreCalculation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::Simulator::*)()>(&Pathfinding::RVO::Simulator::PreCalculation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "PreCalculation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::CleanAndUpdateObstaclesIfNecessary
// Il2CppName: CleanAndUpdateObstaclesIfNecessary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::Simulator::*)()>(&Pathfinding::RVO::Simulator::CleanAndUpdateObstaclesIfNecessary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "CleanAndUpdateObstaclesIfNecessary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::Simulator::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::Simulator::*)()>(&Pathfinding::RVO::Simulator::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::Simulator*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
