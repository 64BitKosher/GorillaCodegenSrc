// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.RVO.RVOQuadtree
#include "Pathfinding/RVO/RVOQuadtree.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::RVO::Sampled
namespace Pathfinding::RVO::Sampled {
  // Forward declaring type: Agent
  class Agent;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::RVO::RVOQuadtree::QuadtreeQuery, "Pathfinding.RVO", "RVOQuadtree/QuadtreeQuery");
// Type namespace: Pathfinding.RVO
namespace Pathfinding::RVO {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Pathfinding.RVO.RVOQuadtree/QuadtreeQuery
  // [TokenAttribute] Offset: FFFFFFFF
  struct RVOQuadtree::QuadtreeQuery/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector2 p
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Vector2 p;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.Single speed
    // Size: 0x4
    // Offset: 0x8
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single timeHorizon
    // Size: 0x4
    // Offset: 0xC
    float timeHorizon;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single agentRadius
    // Size: 0x4
    // Offset: 0x10
    float agentRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxRadius
    // Size: 0x4
    // Offset: 0x14
    float maxRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Pathfinding.RVO.Sampled.Agent agent
    // Size: 0x8
    // Offset: 0x18
    ::Pathfinding::RVO::Sampled::Agent* agent;
    // Field size check
    static_assert(sizeof(::Pathfinding::RVO::Sampled::Agent*) == 0x8);
    // public Pathfinding.RVO.RVOQuadtree/Node[] nodes
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::Pathfinding::RVO::RVOQuadtree::Node> nodes;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::RVO::RVOQuadtree::Node>) == 0x8);
    public:
    // Creating value type constructor for type: QuadtreeQuery
    constexpr QuadtreeQuery(::UnityEngine::Vector2 p_ = {}, float speed_ = {}, float timeHorizon_ = {}, float agentRadius_ = {}, float maxRadius_ = {}, ::Pathfinding::RVO::Sampled::Agent* agent_ = {}, ::ArrayW<::Pathfinding::RVO::RVOQuadtree::Node> nodes_ = ::ArrayW<::Pathfinding::RVO::RVOQuadtree::Node>(static_cast<void*>(nullptr))) noexcept : p{p_}, speed{speed_}, timeHorizon{timeHorizon_}, agentRadius{agentRadius_}, maxRadius{maxRadius_}, agent{agent_}, nodes{nodes_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector2 p
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_p();
    // Get instance field reference: public System.Single speed
    [[deprecated("Use field access instead!")]] float& dyn_speed();
    // Get instance field reference: public System.Single timeHorizon
    [[deprecated("Use field access instead!")]] float& dyn_timeHorizon();
    // Get instance field reference: public System.Single agentRadius
    [[deprecated("Use field access instead!")]] float& dyn_agentRadius();
    // Get instance field reference: public System.Single maxRadius
    [[deprecated("Use field access instead!")]] float& dyn_maxRadius();
    // Get instance field reference: public Pathfinding.RVO.Sampled.Agent agent
    [[deprecated("Use field access instead!")]] ::Pathfinding::RVO::Sampled::Agent*& dyn_agent();
    // Get instance field reference: public Pathfinding.RVO.RVOQuadtree/Node[] nodes
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::RVO::RVOQuadtree::Node>& dyn_nodes();
    // public System.Void QueryRec(System.Int32 i, UnityEngine.Rect r)
    // Offset: 0x2A38230
    void QueryRec(int i, ::UnityEngine::Rect r);
  }; // Pathfinding.RVO.RVOQuadtree/QuadtreeQuery
  #pragma pack(pop)
  static check_size<sizeof(RVOQuadtree::QuadtreeQuery), 32 + sizeof(::ArrayW<::Pathfinding::RVO::RVOQuadtree::Node>)> __Pathfinding_RVO_RVOQuadtree_QuadtreeQuerySizeCheck;
  static_assert(sizeof(RVOQuadtree::QuadtreeQuery) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::RVO::RVOQuadtree::QuadtreeQuery::QueryRec
// Il2CppName: QueryRec
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOQuadtree::QuadtreeQuery::*)(int, ::UnityEngine::Rect)>(&Pathfinding::RVO::RVOQuadtree::QuadtreeQuery::QueryRec)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOQuadtree::QuadtreeQuery), "QueryRec", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, r});
  }
};
