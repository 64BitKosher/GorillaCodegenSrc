// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Pathfinding::Util
namespace Pathfinding::Util {
  // Forward declaring type: RetainedGizmos
  class RetainedGizmos;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: HierarchicalGraph
  class HierarchicalGraph;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::HierarchicalGraph);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::HierarchicalGraph*, "Pathfinding", "HierarchicalGraph");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.HierarchicalGraph
  // [TokenAttribute] Offset: FFFFFFFF
  class HierarchicalGraph : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.List`1<Pathfinding.GraphNode>[] children
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*> children;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>) == 0x8);
    // private System.Collections.Generic.List`1<System.Int32>[] connections
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::System::Collections::Generic::List_1<int>*> connections;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Collections::Generic::List_1<int>*>) == 0x8);
    // private System.Int32[] areas
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> areas;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Byte[] dirty
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> dirty;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 <version>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: version and: onConnectedComponentsChanged
    char __padding4[0x4] = {};
    // public System.Action onConnectedComponentsChanged
    // Size: 0x8
    // Offset: 0x38
    ::System::Action* onConnectedComponentsChanged;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action`1<Pathfinding.GraphNode> connectionCallback
    // Size: 0x8
    // Offset: 0x40
    ::System::Action_1<::Pathfinding::GraphNode*>* connectionCallback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Pathfinding::GraphNode*>*) == 0x8);
    // private System.Collections.Generic.Queue`1<Pathfinding.GraphNode> temporaryQueue
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>* temporaryQueue;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*) == 0x8);
    // private System.Collections.Generic.List`1<Pathfinding.GraphNode> currentChildren
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* currentChildren;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Int32> currentConnections
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<int>* currentConnections;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int>*) == 0x8);
    // private System.Int32 currentHierarchicalNodeIndex
    // Size: 0x4
    // Offset: 0x60
    int currentHierarchicalNodeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: currentHierarchicalNodeIndex and: temporaryStack
    char __padding10[0x4] = {};
    // private System.Collections.Generic.Stack`1<System.Int32> temporaryStack
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::Stack_1<int>* temporaryStack;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Stack_1<int>*) == 0x8);
    // private System.Int32 numDirtyNodes
    // Size: 0x4
    // Offset: 0x70
    int numDirtyNodes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numDirtyNodes and: dirtyNodes
    char __padding12[0x4] = {};
    // private Pathfinding.GraphNode[] dirtyNodes
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<::Pathfinding::GraphNode*> dirtyNodes;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::GraphNode*>) == 0x8);
    // private System.Collections.Generic.Stack`1<System.Int32> freeNodeIndices
    // Size: 0x8
    // Offset: 0x80
    ::System::Collections::Generic::Stack_1<int>* freeNodeIndices;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Stack_1<int>*) == 0x8);
    // private System.Int32 gizmoVersion
    // Size: 0x4
    // Offset: 0x88
    int gizmoVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <NumConnectedComponents>k__BackingField
    // Size: 0x4
    // Offset: 0x8C
    int NumConnectedComponents;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // static field const value: static private System.Int32 Tiling
    static constexpr const int Tiling = 16;
    // Get static field: static private System.Int32 Tiling
    static int _get_Tiling();
    // Set static field: static private System.Int32 Tiling
    static void _set_Tiling(int value);
    // static field const value: static private System.Int32 MaxChildrenPerNode
    static constexpr const int MaxChildrenPerNode = 256;
    // Get static field: static private System.Int32 MaxChildrenPerNode
    static int _get_MaxChildrenPerNode();
    // Set static field: static private System.Int32 MaxChildrenPerNode
    static void _set_MaxChildrenPerNode(int value);
    // static field const value: static private System.Int32 MinChildrenPerNode
    static constexpr const int MinChildrenPerNode = 128;
    // Get static field: static private System.Int32 MinChildrenPerNode
    static int _get_MinChildrenPerNode();
    // Set static field: static private System.Int32 MinChildrenPerNode
    static void _set_MinChildrenPerNode(int value);
    // Get instance field reference: private System.Collections.Generic.List`1<Pathfinding.GraphNode>[] children
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>& dyn_children();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Int32>[] connections
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Collections::Generic::List_1<int>*>& dyn_connections();
    // Get instance field reference: private System.Int32[] areas
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_areas();
    // Get instance field reference: private System.Byte[] dirty
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_dirty();
    // Get instance field reference: private System.Int32 <version>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$version$k__BackingField();
    // Get instance field reference: public System.Action onConnectedComponentsChanged
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_onConnectedComponentsChanged();
    // Get instance field reference: private System.Action`1<Pathfinding.GraphNode> connectionCallback
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Pathfinding::GraphNode*>*& dyn_connectionCallback();
    // Get instance field reference: private System.Collections.Generic.Queue`1<Pathfinding.GraphNode> temporaryQueue
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*& dyn_temporaryQueue();
    // Get instance field reference: private System.Collections.Generic.List`1<Pathfinding.GraphNode> currentChildren
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& dyn_currentChildren();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Int32> currentConnections
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<int>*& dyn_currentConnections();
    // Get instance field reference: private System.Int32 currentHierarchicalNodeIndex
    [[deprecated("Use field access instead!")]] int& dyn_currentHierarchicalNodeIndex();
    // Get instance field reference: private System.Collections.Generic.Stack`1<System.Int32> temporaryStack
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Stack_1<int>*& dyn_temporaryStack();
    // Get instance field reference: private System.Int32 numDirtyNodes
    [[deprecated("Use field access instead!")]] int& dyn_numDirtyNodes();
    // Get instance field reference: private Pathfinding.GraphNode[] dirtyNodes
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::GraphNode*>& dyn_dirtyNodes();
    // Get instance field reference: private System.Collections.Generic.Stack`1<System.Int32> freeNodeIndices
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Stack_1<int>*& dyn_freeNodeIndices();
    // Get instance field reference: private System.Int32 gizmoVersion
    [[deprecated("Use field access instead!")]] int& dyn_gizmoVersion();
    // Get instance field reference: private System.Int32 <NumConnectedComponents>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$NumConnectedComponents$k__BackingField();
    // public System.Int32 get_version()
    // Offset: 0x29ABE58
    int get_version();
    // private System.Void set_version(System.Int32 value)
    // Offset: 0x29ABE60
    void set_version(int value);
    // public System.Void .ctor()
    // Offset: 0x29ABE68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HierarchicalGraph* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::HierarchicalGraph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HierarchicalGraph*, creationType>()));
    }
    // private System.Void Grow()
    // Offset: 0x29AC0C4
    void Grow();
    // private System.Int32 GetHierarchicalNodeIndex()
    // Offset: 0x29AC430
    int GetHierarchicalNodeIndex();
    // System.Void OnCreatedNode(Pathfinding.GraphNode node)
    // Offset: 0x29AC4A4
    void OnCreatedNode(::Pathfinding::GraphNode* node);
    // public System.Void AddDirtyNode(Pathfinding.GraphNode node)
    // Offset: 0x29AC598
    void AddDirtyNode(::Pathfinding::GraphNode* node);
    // public System.Int32 get_NumConnectedComponents()
    // Offset: 0x29AC98C
    int get_NumConnectedComponents();
    // private System.Void set_NumConnectedComponents(System.Int32 value)
    // Offset: 0x29AC994
    void set_NumConnectedComponents(int value);
    // public System.UInt32 GetConnectedComponent(System.Int32 hierarchicalNodeIndex)
    // Offset: 0x29AC99C
    uint GetConnectedComponent(int hierarchicalNodeIndex);
    // private System.Void RemoveHierarchicalNode(System.Int32 hierarchicalNode, System.Boolean removeAdjacentSmallNodes)
    // Offset: 0x29AC9CC
    void RemoveHierarchicalNode(int hierarchicalNode, bool removeAdjacentSmallNodes);
    // public System.Void RecalculateIfNecessary()
    // Offset: 0x29ACC1C
    void RecalculateIfNecessary();
    // public System.Void RecalculateAll()
    // Offset: 0x29AD314
    void RecalculateAll();
    // private System.Void FloodFill()
    // Offset: 0x29AD0F0
    void FloodFill();
    // private System.Void FindHierarchicalNodeChildren(System.Int32 hierarchicalNode, Pathfinding.GraphNode startNode)
    // Offset: 0x29ACE3C
    void FindHierarchicalNodeChildren(int hierarchicalNode, ::Pathfinding::GraphNode* startNode);
    // public System.Void OnDrawGizmos(Pathfinding.Util.RetainedGizmos gizmos)
    // Offset: 0x29AD3D8
    void OnDrawGizmos(::Pathfinding::Util::RetainedGizmos* gizmos);
    // private System.Void <.ctor>b__22_0(Pathfinding.GraphNode neighbour)
    // Offset: 0x29ADA40
    void $_ctor$b__22_0(::Pathfinding::GraphNode* neighbour);
    // private System.Void <RecalculateAll>b__34_0(Pathfinding.GraphNode node)
    // Offset: 0x29ADC10
    void $RecalculateAll$b__34_0(::Pathfinding::GraphNode* node);
  }; // Pathfinding.HierarchicalGraph
  #pragma pack(pop)
  static check_size<sizeof(HierarchicalGraph), 140 + sizeof(int)> __Pathfinding_HierarchicalGraphSizeCheck;
  static_assert(sizeof(HierarchicalGraph) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::HierarchicalGraph::*)()>(&Pathfinding::HierarchicalGraph::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::HierarchicalGraph*), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::set_version
// Il2CppName: set_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::HierarchicalGraph::*)(int)>(&Pathfinding::HierarchicalGraph::set_version)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::HierarchicalGraph*), "set_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::Grow
// Il2CppName: Grow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::HierarchicalGraph::*)()>(&Pathfinding::HierarchicalGraph::Grow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::HierarchicalGraph*), "Grow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::GetHierarchicalNodeIndex
// Il2CppName: GetHierarchicalNodeIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::HierarchicalGraph::*)()>(&Pathfinding::HierarchicalGraph::GetHierarchicalNodeIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::HierarchicalGraph*), "GetHierarchicalNodeIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::OnCreatedNode
// Il2CppName: OnCreatedNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::HierarchicalGraph::*)(::Pathfinding::GraphNode*)>(&Pathfinding::HierarchicalGraph::OnCreatedNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::HierarchicalGraph*), "OnCreatedNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::AddDirtyNode
// Il2CppName: AddDirtyNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::HierarchicalGraph::*)(::Pathfinding::GraphNode*)>(&Pathfinding::HierarchicalGraph::AddDirtyNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::HierarchicalGraph*), "AddDirtyNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::get_NumConnectedComponents
// Il2CppName: get_NumConnectedComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::HierarchicalGraph::*)()>(&Pathfinding::HierarchicalGraph::get_NumConnectedComponents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::HierarchicalGraph*), "get_NumConnectedComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::set_NumConnectedComponents
// Il2CppName: set_NumConnectedComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::HierarchicalGraph::*)(int)>(&Pathfinding::HierarchicalGraph::set_NumConnectedComponents)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::HierarchicalGraph*), "set_NumConnectedComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::GetConnectedComponent
// Il2CppName: GetConnectedComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Pathfinding::HierarchicalGraph::*)(int)>(&Pathfinding::HierarchicalGraph::GetConnectedComponent)> {
  static const MethodInfo* get() {
    static auto* hierarchicalNodeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::HierarchicalGraph*), "GetConnectedComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hierarchicalNodeIndex});
  }
};
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::RemoveHierarchicalNode
// Il2CppName: RemoveHierarchicalNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::HierarchicalGraph::*)(int, bool)>(&Pathfinding::HierarchicalGraph::RemoveHierarchicalNode)> {
  static const MethodInfo* get() {
    static auto* hierarchicalNode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* removeAdjacentSmallNodes = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::HierarchicalGraph*), "RemoveHierarchicalNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hierarchicalNode, removeAdjacentSmallNodes});
  }
};
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::RecalculateIfNecessary
// Il2CppName: RecalculateIfNecessary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::HierarchicalGraph::*)()>(&Pathfinding::HierarchicalGraph::RecalculateIfNecessary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::HierarchicalGraph*), "RecalculateIfNecessary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::RecalculateAll
// Il2CppName: RecalculateAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::HierarchicalGraph::*)()>(&Pathfinding::HierarchicalGraph::RecalculateAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::HierarchicalGraph*), "RecalculateAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::FloodFill
// Il2CppName: FloodFill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::HierarchicalGraph::*)()>(&Pathfinding::HierarchicalGraph::FloodFill)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::HierarchicalGraph*), "FloodFill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::FindHierarchicalNodeChildren
// Il2CppName: FindHierarchicalNodeChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::HierarchicalGraph::*)(int, ::Pathfinding::GraphNode*)>(&Pathfinding::HierarchicalGraph::FindHierarchicalNodeChildren)> {
  static const MethodInfo* get() {
    static auto* hierarchicalNode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* startNode = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::HierarchicalGraph*), "FindHierarchicalNodeChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hierarchicalNode, startNode});
  }
};
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::HierarchicalGraph::*)(::Pathfinding::Util::RetainedGizmos*)>(&Pathfinding::HierarchicalGraph::OnDrawGizmos)> {
  static const MethodInfo* get() {
    static auto* gizmos = &::il2cpp_utils::GetClassFromName("Pathfinding.Util", "RetainedGizmos")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::HierarchicalGraph*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gizmos});
  }
};
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::$_ctor$b__22_0
// Il2CppName: <.ctor>b__22_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::HierarchicalGraph::*)(::Pathfinding::GraphNode*)>(&Pathfinding::HierarchicalGraph::$_ctor$b__22_0)> {
  static const MethodInfo* get() {
    static auto* neighbour = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::HierarchicalGraph*), "<.ctor>b__22_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{neighbour});
  }
};
// Writing MetadataGetter for method: Pathfinding::HierarchicalGraph::$RecalculateAll$b__34_0
// Il2CppName: <RecalculateAll>b__34_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::HierarchicalGraph::*)(::Pathfinding::GraphNode*)>(&Pathfinding::HierarchicalGraph::$RecalculateAll$b__34_0)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::HierarchicalGraph*), "<RecalculateAll>b__34_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
