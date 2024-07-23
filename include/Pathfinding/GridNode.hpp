// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.GridNodeBase
#include "Pathfinding/GridNodeBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GridGraph
  class GridGraph;
  // Forward declaring type: Path
  class Path;
  // Forward declaring type: PathNode
  class PathNode;
  // Forward declaring type: PathHandler
  class PathHandler;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AstarPath
  class AstarPath;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Pathfinding::Serialization
namespace Pathfinding::Serialization {
  // Forward declaring type: GraphSerializationContext
  class GraphSerializationContext;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GridNode
  class GridNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::GridNode);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::GridNode*, "Pathfinding", "GridNode");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.GridNode
  // [TokenAttribute] Offset: FFFFFFFF
  class GridNode : public ::Pathfinding::GridNodeBase {
    public:
    // Get static field: static private Pathfinding.GridGraph[] _gridGraphs
    static ::ArrayW<::Pathfinding::GridGraph*> _get__gridGraphs();
    // Set static field: static private Pathfinding.GridGraph[] _gridGraphs
    static void _set__gridGraphs(::ArrayW<::Pathfinding::GridGraph*> value);
    // static field const value: static private System.Int32 GridFlagsConnectionOffset
    static constexpr const int GridFlagsConnectionOffset = 0;
    // Get static field: static private System.Int32 GridFlagsConnectionOffset
    static int _get_GridFlagsConnectionOffset();
    // Set static field: static private System.Int32 GridFlagsConnectionOffset
    static void _set_GridFlagsConnectionOffset(int value);
    // static field const value: static private System.Int32 GridFlagsConnectionBit0
    static constexpr const int GridFlagsConnectionBit0 = 1;
    // Get static field: static private System.Int32 GridFlagsConnectionBit0
    static int _get_GridFlagsConnectionBit0();
    // Set static field: static private System.Int32 GridFlagsConnectionBit0
    static void _set_GridFlagsConnectionBit0(int value);
    // static field const value: static private System.Int32 GridFlagsConnectionMask
    static constexpr const int GridFlagsConnectionMask = 255;
    // Get static field: static private System.Int32 GridFlagsConnectionMask
    static int _get_GridFlagsConnectionMask();
    // Set static field: static private System.Int32 GridFlagsConnectionMask
    static void _set_GridFlagsConnectionMask(int value);
    // static field const value: static private System.Int32 GridFlagsEdgeNodeOffset
    static constexpr const int GridFlagsEdgeNodeOffset = 10;
    // Get static field: static private System.Int32 GridFlagsEdgeNodeOffset
    static int _get_GridFlagsEdgeNodeOffset();
    // Set static field: static private System.Int32 GridFlagsEdgeNodeOffset
    static void _set_GridFlagsEdgeNodeOffset(int value);
    // static field const value: static private System.Int32 GridFlagsEdgeNodeMask
    static constexpr const int GridFlagsEdgeNodeMask = 1024;
    // Get static field: static private System.Int32 GridFlagsEdgeNodeMask
    static int _get_GridFlagsEdgeNodeMask();
    // Set static field: static private System.Int32 GridFlagsEdgeNodeMask
    static void _set_GridFlagsEdgeNodeMask(int value);
    // static public Pathfinding.GridGraph GetGridGraph(System.UInt32 graphIndex)
    // Offset: 0x29D7F10
    static ::Pathfinding::GridGraph* GetGridGraph(uint graphIndex);
    // static public System.Void SetGridGraph(System.Int32 graphIndex, Pathfinding.GridGraph graph)
    // Offset: 0x29D7F8C
    static void SetGridGraph(int graphIndex, ::Pathfinding::GridGraph* graph);
    // static public System.Void ClearGridGraph(System.Int32 graphIndex, Pathfinding.GridGraph graph)
    // Offset: 0x29D815C
    static void ClearGridGraph(int graphIndex, ::Pathfinding::GridGraph* graph);
    // System.UInt16 get_InternalGridFlags()
    // Offset: 0x29D825C
    uint16_t get_InternalGridFlags();
    // System.Void set_InternalGridFlags(System.UInt16 value)
    // Offset: 0x29D8264
    void set_InternalGridFlags(uint16_t value);
    // public System.Boolean GetConnectionInternal(System.Int32 dir)
    // Offset: 0x29D8290
    bool GetConnectionInternal(int dir);
    // public System.Void SetConnectionInternal(System.Int32 dir, System.Boolean value)
    // Offset: 0x29D82A0
    void SetConnectionInternal(int dir, bool value);
    // public System.Void SetAllConnectionInternal(System.Int32 connections)
    // Offset: 0x29D834C
    void SetAllConnectionInternal(int connections);
    // public System.Void ResetConnectionsInternal()
    // Offset: 0x29D83D8
    void ResetConnectionsInternal();
    // public System.Boolean get_EdgeNode()
    // Offset: 0x29D8458
    bool get_EdgeNode();
    // public System.Void set_EdgeNode(System.Boolean value)
    // Offset: 0x29D8464
    void set_EdgeNode(bool value);
    // protected System.Void RemoveGridConnection(Pathfinding.GridNode node)
    // Offset: 0x29D9958
    void RemoveGridConnection(::Pathfinding::GridNode* node);
    // static private System.Void .cctor()
    // Offset: 0x29D9F00
    static void _cctor();
    // public System.Void .ctor(AstarPath astar)
    // Offset: 0x29D7F00
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Void GridNodeBase::.ctor(AstarPath astar)
    // Base method: System.Void GraphNode::.ctor(AstarPath astar)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GridNode* New_ctor(::GlobalNamespace::AstarPath* astar) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::GridNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GridNode*, creationType>(astar)));
    }
    // public override System.Boolean get_HasConnectionsToAllEightNeighbours()
    // Offset: 0x29D826C
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Boolean GridNodeBase::get_HasConnectionsToAllEightNeighbours()
    bool get_HasConnectionsToAllEightNeighbours();
    // public override System.Boolean HasConnectionInDirection(System.Int32 dir)
    // Offset: 0x29D8280
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Boolean GridNodeBase::HasConnectionInDirection(System.Int32 dir)
    bool HasConnectionInDirection(int dir);
    // public override Pathfinding.GridNodeBase GetNeighbourAlongDirection(System.Int32 direction)
    // Offset: 0x29D8494
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: Pathfinding.GridNodeBase GridNodeBase::GetNeighbourAlongDirection(System.Int32 direction)
    ::Pathfinding::GridNodeBase* GetNeighbourAlongDirection(int direction);
    // public override System.Void ClearConnections(System.Boolean alsoReverse)
    // Offset: 0x29D8584
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Void GridNodeBase::ClearConnections(System.Boolean alsoReverse)
    void ClearConnections(bool alsoReverse);
    // public override System.Void GetConnections(System.Action`1<Pathfinding.GraphNode> action)
    // Offset: 0x29D8678
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Void GridNodeBase::GetConnections(System.Action`1<Pathfinding.GraphNode> action)
    void GetConnections(::System::Action_1<::Pathfinding::GraphNode*>* action);
    // public override UnityEngine.Vector3 ClosestPointOnNode(UnityEngine.Vector3 p)
    // Offset: 0x29D8810
    // Implemented from: Pathfinding.GraphNode
    // Base method: UnityEngine.Vector3 GraphNode::ClosestPointOnNode(UnityEngine.Vector3 p)
    ::UnityEngine::Vector3 ClosestPointOnNode(::UnityEngine::Vector3 p);
    // public override System.Boolean GetPortal(Pathfinding.GraphNode other, System.Collections.Generic.List`1<UnityEngine.Vector3> left, System.Collections.Generic.List`1<UnityEngine.Vector3> right, System.Boolean backwards)
    // Offset: 0x29D8944
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Boolean GraphNode::GetPortal(Pathfinding.GraphNode other, System.Collections.Generic.List`1<UnityEngine.Vector3> left, System.Collections.Generic.List`1<UnityEngine.Vector3> right, System.Boolean backwards)
    bool GetPortal(::Pathfinding::GraphNode* other, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* right, bool backwards);
    // public override System.Void UpdateRecursiveG(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    // Offset: 0x29D9120
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Void GridNodeBase::UpdateRecursiveG(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    void UpdateRecursiveG(::Pathfinding::Path* path, ::Pathfinding::PathNode* pathNode, ::Pathfinding::PathHandler* handler);
    // public override System.Void Open(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    // Offset: 0x29D9390
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Void GridNodeBase::Open(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    void Open(::Pathfinding::Path* path, ::Pathfinding::PathNode* pathNode, ::Pathfinding::PathHandler* handler);
    // public override System.Void SerializeNode(Pathfinding.Serialization.GraphSerializationContext ctx)
    // Offset: 0x29D97E8
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::SerializeNode(Pathfinding.Serialization.GraphSerializationContext ctx)
    void SerializeNode(::Pathfinding::Serialization::GraphSerializationContext* ctx);
    // public override System.Void DeserializeNode(Pathfinding.Serialization.GraphSerializationContext ctx)
    // Offset: 0x29D9840
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::DeserializeNode(Pathfinding.Serialization.GraphSerializationContext ctx)
    void DeserializeNode(::Pathfinding::Serialization::GraphSerializationContext* ctx);
    // public override System.Void AddConnection(Pathfinding.GraphNode node, System.UInt32 cost)
    // Offset: 0x29D989C
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Void GridNodeBase::AddConnection(Pathfinding.GraphNode node, System.UInt32 cost)
    void AddConnection(::Pathfinding::GraphNode* node, uint cost);
    // public override System.Void RemoveConnection(Pathfinding.GraphNode node)
    // Offset: 0x29D9C6C
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Void GridNodeBase::RemoveConnection(Pathfinding.GraphNode node)
    void RemoveConnection(::Pathfinding::GraphNode* node);
  }; // Pathfinding.GridNode
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::GridNode::GetGridGraph
// Il2CppName: GetGridGraph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::GridGraph* (*)(uint)>(&Pathfinding::GridNode::GetGridGraph)> {
  static const MethodInfo* get() {
    static auto* graphIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "GetGridGraph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graphIndex});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::SetGridGraph
// Il2CppName: SetGridGraph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Pathfinding::GridGraph*)>(&Pathfinding::GridNode::SetGridGraph)> {
  static const MethodInfo* get() {
    static auto* graphIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* graph = &::il2cpp_utils::GetClassFromName("Pathfinding", "GridGraph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "SetGridGraph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graphIndex, graph});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::ClearGridGraph
// Il2CppName: ClearGridGraph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Pathfinding::GridGraph*)>(&Pathfinding::GridNode::ClearGridGraph)> {
  static const MethodInfo* get() {
    static auto* graphIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* graph = &::il2cpp_utils::GetClassFromName("Pathfinding", "GridGraph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "ClearGridGraph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graphIndex, graph});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::get_InternalGridFlags
// Il2CppName: get_InternalGridFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (Pathfinding::GridNode::*)()>(&Pathfinding::GridNode::get_InternalGridFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "get_InternalGridFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::set_InternalGridFlags
// Il2CppName: set_InternalGridFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNode::*)(uint16_t)>(&Pathfinding::GridNode::set_InternalGridFlags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "set_InternalGridFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::GetConnectionInternal
// Il2CppName: GetConnectionInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::GridNode::*)(int)>(&Pathfinding::GridNode::GetConnectionInternal)> {
  static const MethodInfo* get() {
    static auto* dir = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "GetConnectionInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dir});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::SetConnectionInternal
// Il2CppName: SetConnectionInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNode::*)(int, bool)>(&Pathfinding::GridNode::SetConnectionInternal)> {
  static const MethodInfo* get() {
    static auto* dir = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "SetConnectionInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dir, value});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::SetAllConnectionInternal
// Il2CppName: SetAllConnectionInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNode::*)(int)>(&Pathfinding::GridNode::SetAllConnectionInternal)> {
  static const MethodInfo* get() {
    static auto* connections = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "SetAllConnectionInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connections});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::ResetConnectionsInternal
// Il2CppName: ResetConnectionsInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNode::*)()>(&Pathfinding::GridNode::ResetConnectionsInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "ResetConnectionsInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::get_EdgeNode
// Il2CppName: get_EdgeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::GridNode::*)()>(&Pathfinding::GridNode::get_EdgeNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "get_EdgeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::set_EdgeNode
// Il2CppName: set_EdgeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNode::*)(bool)>(&Pathfinding::GridNode::set_EdgeNode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "set_EdgeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::RemoveGridConnection
// Il2CppName: RemoveGridConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNode::*)(::Pathfinding::GridNode*)>(&Pathfinding::GridNode::RemoveGridConnection)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GridNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "RemoveGridConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Pathfinding::GridNode::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::GridNode::get_HasConnectionsToAllEightNeighbours
// Il2CppName: get_HasConnectionsToAllEightNeighbours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::GridNode::*)()>(&Pathfinding::GridNode::get_HasConnectionsToAllEightNeighbours)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "get_HasConnectionsToAllEightNeighbours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::HasConnectionInDirection
// Il2CppName: HasConnectionInDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::GridNode::*)(int)>(&Pathfinding::GridNode::HasConnectionInDirection)> {
  static const MethodInfo* get() {
    static auto* dir = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "HasConnectionInDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dir});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::GetNeighbourAlongDirection
// Il2CppName: GetNeighbourAlongDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::GridNodeBase* (Pathfinding::GridNode::*)(int)>(&Pathfinding::GridNode::GetNeighbourAlongDirection)> {
  static const MethodInfo* get() {
    static auto* direction = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "GetNeighbourAlongDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{direction});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::ClearConnections
// Il2CppName: ClearConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNode::*)(bool)>(&Pathfinding::GridNode::ClearConnections)> {
  static const MethodInfo* get() {
    static auto* alsoReverse = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "ClearConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alsoReverse});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::GetConnections
// Il2CppName: GetConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNode::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&Pathfinding::GridNode::GetConnections)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "GetConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::ClosestPointOnNode
// Il2CppName: ClosestPointOnNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::GridNode::*)(::UnityEngine::Vector3)>(&Pathfinding::GridNode::ClosestPointOnNode)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "ClosestPointOnNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::GetPortal
// Il2CppName: GetPortal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::GridNode::*)(::Pathfinding::GraphNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool)>(&Pathfinding::GridNode::GetPortal)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    static auto* left = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* right = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* backwards = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "GetPortal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other, left, right, backwards});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::UpdateRecursiveG
// Il2CppName: UpdateRecursiveG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&Pathfinding::GridNode::UpdateRecursiveG)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    static auto* pathNode = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathNode")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "UpdateRecursiveG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, pathNode, handler});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&Pathfinding::GridNode::Open)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    static auto* pathNode = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathNode")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, pathNode, handler});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::SerializeNode
// Il2CppName: SerializeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&Pathfinding::GridNode::SerializeNode)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Pathfinding.Serialization", "GraphSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "SerializeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::DeserializeNode
// Il2CppName: DeserializeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&Pathfinding::GridNode::DeserializeNode)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Pathfinding.Serialization", "GraphSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "DeserializeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::AddConnection
// Il2CppName: AddConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNode::*)(::Pathfinding::GraphNode*, uint)>(&Pathfinding::GridNode::AddConnection)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    static auto* cost = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "AddConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, cost});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNode::RemoveConnection
// Il2CppName: RemoveConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNode::*)(::Pathfinding::GraphNode*)>(&Pathfinding::GridNode::RemoveConnection)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNode*), "RemoveConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};