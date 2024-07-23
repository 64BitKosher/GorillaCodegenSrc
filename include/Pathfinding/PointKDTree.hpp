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
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
  // Forward declaring type: Int3
  struct Int3;
  // Forward declaring type: NNConstraint
  class NNConstraint;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: PointKDTree
  class PointKDTree;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::PointKDTree);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::PointKDTree*, "Pathfinding", "PointKDTree");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.PointKDTree
  // [TokenAttribute] Offset: FFFFFFFF
  class PointKDTree : public ::Il2CppObject {
    public:
    // Nested type: ::Pathfinding::PointKDTree::Node
    struct Node;
    // Nested type: ::Pathfinding::PointKDTree::CompareX
    class CompareX;
    // Nested type: ::Pathfinding::PointKDTree::CompareY
    class CompareY;
    // Nested type: ::Pathfinding::PointKDTree::CompareZ
    class CompareZ;
    // Size: 0xF
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Pathfinding.PointKDTree/Node
    // [TokenAttribute] Offset: FFFFFFFF
    struct Node/*, public ::System::ValueType*/ {
      public:
      public:
      // public Pathfinding.GraphNode[] data
      // Size: 0x8
      // Offset: 0x0
      ::ArrayW<::Pathfinding::GraphNode*> data;
      // Field size check
      static_assert(sizeof(::ArrayW<::Pathfinding::GraphNode*>) == 0x8);
      // public System.Int32 split
      // Size: 0x4
      // Offset: 0x8
      int split;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.UInt16 count
      // Size: 0x2
      // Offset: 0xC
      uint16_t count;
      // Field size check
      static_assert(sizeof(uint16_t) == 0x2);
      // public System.Byte splitAxis
      // Size: 0x1
      // Offset: 0xE
      uint8_t splitAxis;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      public:
      // Creating value type constructor for type: Node
      constexpr Node(::ArrayW<::Pathfinding::GraphNode*> data_ = ::ArrayW<::Pathfinding::GraphNode*>(static_cast<void*>(nullptr)), int split_ = {}, uint16_t count_ = {}, uint8_t splitAxis_ = {}) noexcept : data{data_}, split{split_}, count{count_}, splitAxis{splitAxis_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public Pathfinding.GraphNode[] data
      [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::GraphNode*>& dyn_data();
      // Get instance field reference: public System.Int32 split
      [[deprecated("Use field access instead!")]] int& dyn_split();
      // Get instance field reference: public System.UInt16 count
      [[deprecated("Use field access instead!")]] uint16_t& dyn_count();
      // Get instance field reference: public System.Byte splitAxis
      [[deprecated("Use field access instead!")]] uint8_t& dyn_splitAxis();
    }; // Pathfinding.PointKDTree/Node
    #pragma pack(pop)
    static check_size<sizeof(PointKDTree::Node), 14 + sizeof(uint8_t)> __Pathfinding_PointKDTree_NodeSizeCheck;
    static_assert(sizeof(PointKDTree::Node) == 0xF);
    public:
    // private Pathfinding.PointKDTree/Node[] tree
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Pathfinding::PointKDTree::Node> tree;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::PointKDTree::Node>) == 0x8);
    // private System.Int32 numNodes
    // Size: 0x4
    // Offset: 0x18
    int numNodes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numNodes and: largeList
    char __padding1[0x4] = {};
    // private readonly System.Collections.Generic.List`1<Pathfinding.GraphNode> largeList
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* largeList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*) == 0x8);
    // private readonly System.Collections.Generic.Stack`1<Pathfinding.GraphNode[]> arrayCache
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Stack_1<::ArrayW<::Pathfinding::GraphNode*>>* arrayCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Stack_1<::ArrayW<::Pathfinding::GraphNode*>>*) == 0x8);
    public:
    // static field const value: static public System.Int32 LeafSize
    static constexpr const int LeafSize = 10;
    // Get static field: static public System.Int32 LeafSize
    static int _get_LeafSize();
    // Set static field: static public System.Int32 LeafSize
    static void _set_LeafSize(int value);
    // static field const value: static public System.Int32 LeafArraySize
    static constexpr const int LeafArraySize = 21;
    // Get static field: static public System.Int32 LeafArraySize
    static int _get_LeafArraySize();
    // Set static field: static public System.Int32 LeafArraySize
    static void _set_LeafArraySize(int value);
    // Get static field: static private readonly System.Collections.Generic.IComparer`1<Pathfinding.GraphNode>[] comparers
    static ::ArrayW<::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*> _get_comparers();
    // Set static field: static private readonly System.Collections.Generic.IComparer`1<Pathfinding.GraphNode>[] comparers
    static void _set_comparers(::ArrayW<::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*> value);
    // Get instance field reference: private Pathfinding.PointKDTree/Node[] tree
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::PointKDTree::Node>& dyn_tree();
    // Get instance field reference: private System.Int32 numNodes
    [[deprecated("Use field access instead!")]] int& dyn_numNodes();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Pathfinding.GraphNode> largeList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& dyn_largeList();
    // Get instance field reference: private readonly System.Collections.Generic.Stack`1<Pathfinding.GraphNode[]> arrayCache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Stack_1<::ArrayW<::Pathfinding::GraphNode*>>*& dyn_arrayCache();
    // public System.Void .ctor()
    // Offset: 0x29EB938
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointKDTree* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::PointKDTree::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointKDTree*, creationType>()));
    }
    // public System.Void Add(Pathfinding.GraphNode node)
    // Offset: 0x29EBB30
    void Add(::Pathfinding::GraphNode* node);
    // public System.Void Rebuild(Pathfinding.GraphNode[] nodes, System.Int32 start, System.Int32 end)
    // Offset: 0x29EBD20
    void Rebuild(::ArrayW<::Pathfinding::GraphNode*> nodes, int start, int end);
    // private Pathfinding.GraphNode[] GetOrCreateList()
    // Offset: 0x29EBAA0
    ::ArrayW<::Pathfinding::GraphNode*> GetOrCreateList();
    // private System.Int32 Size(System.Int32 index)
    // Offset: 0x29EC348
    int Size(int index);
    // private System.Void CollectAndClear(System.Int32 index, System.Collections.Generic.List`1<Pathfinding.GraphNode> buffer)
    // Offset: 0x29EC3C4
    void CollectAndClear(int index, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* buffer);
    // static private System.Int32 MaxAllowedSize(System.Int32 numNodes, System.Int32 depth)
    // Offset: 0x29EC53C
    static int MaxAllowedSize(int numNodes, int depth);
    // private System.Void Rebalance(System.Int32 index)
    // Offset: 0x29EC5C4
    void Rebalance(int index);
    // private System.Void EnsureSize(System.Int32 index)
    // Offset: 0x29EC64C
    void EnsureSize(int index);
    // private System.Void Build(System.Int32 index, System.Collections.Generic.List`1<Pathfinding.GraphNode> nodes, System.Int32 start, System.Int32 end)
    // Offset: 0x29EBEE0
    void Build(int index, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* nodes, int start, int end);
    // private System.Void Add(Pathfinding.GraphNode point, System.Int32 index, System.Int32 depth)
    // Offset: 0x29EBB48
    void Add(::Pathfinding::GraphNode* point, int index, int depth);
    // public Pathfinding.GraphNode GetNearest(Pathfinding.Int3 point, Pathfinding.NNConstraint constraint)
    // Offset: 0x29EC728
    ::Pathfinding::GraphNode* GetNearest(::Pathfinding::Int3 point, ::Pathfinding::NNConstraint* constraint);
    // private System.Void GetNearestInternal(System.Int32 index, Pathfinding.Int3 point, Pathfinding.NNConstraint constraint, ref Pathfinding.GraphNode best, ref System.Int64 bestSqrDist)
    // Offset: 0x29EC764
    void GetNearestInternal(int index, ::Pathfinding::Int3 point, ::Pathfinding::NNConstraint* constraint, ByRef<::Pathfinding::GraphNode*> best, ByRef<int64_t> bestSqrDist);
    // public Pathfinding.GraphNode GetNearestConnection(Pathfinding.Int3 point, Pathfinding.NNConstraint constraint, System.Int64 maximumSqrConnectionLength)
    // Offset: 0x29EC94C
    ::Pathfinding::GraphNode* GetNearestConnection(::Pathfinding::Int3 point, ::Pathfinding::NNConstraint* constraint, int64_t maximumSqrConnectionLength);
    // private System.Void GetNearestConnectionInternal(System.Int32 index, Pathfinding.Int3 point, Pathfinding.NNConstraint constraint, ref Pathfinding.GraphNode best, ref System.Int64 bestSqrDist, System.Int64 distanceThresholdOffset)
    // Offset: 0x29EC9A0
    void GetNearestConnectionInternal(int index, ::Pathfinding::Int3 point, ::Pathfinding::NNConstraint* constraint, ByRef<::Pathfinding::GraphNode*> best, ByRef<int64_t> bestSqrDist, int64_t distanceThresholdOffset);
    // public System.Void GetInRange(Pathfinding.Int3 point, System.Int64 sqrRadius, System.Collections.Generic.List`1<Pathfinding.GraphNode> buffer)
    // Offset: 0x29ECDAC
    void GetInRange(::Pathfinding::Int3 point, int64_t sqrRadius, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* buffer);
    // private System.Void GetInRangeInternal(System.Int32 index, Pathfinding.Int3 point, System.Int64 sqrRadius, System.Collections.Generic.List`1<Pathfinding.GraphNode> buffer)
    // Offset: 0x29ECDC8
    void GetInRangeInternal(int index, ::Pathfinding::Int3 point, int64_t sqrRadius, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* buffer);
    // static private System.Void .cctor()
    // Offset: 0x29ECFD8
    static void _cctor();
  }; // Pathfinding.PointKDTree
  #pragma pack(pop)
  static check_size<sizeof(PointKDTree), 40 + sizeof(::System::Collections::Generic::Stack_1<::ArrayW<::Pathfinding::GraphNode*>>*)> __Pathfinding_PointKDTreeSizeCheck;
  static_assert(sizeof(PointKDTree) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::PointKDTree::Node, "Pathfinding", "PointKDTree/Node");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::PointKDTree::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::PointKDTree::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PointKDTree::*)(::Pathfinding::GraphNode*)>(&Pathfinding::PointKDTree::Add)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointKDTree::Rebuild
// Il2CppName: Rebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PointKDTree::*)(::ArrayW<::Pathfinding::GraphNode*>, int, int)>(&Pathfinding::PointKDTree::Rebuild)> {
  static const MethodInfo* get() {
    static auto* nodes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree*), "Rebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodes, start, end});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointKDTree::GetOrCreateList
// Il2CppName: GetOrCreateList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Pathfinding::GraphNode*> (Pathfinding::PointKDTree::*)()>(&Pathfinding::PointKDTree::GetOrCreateList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree*), "GetOrCreateList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointKDTree::Size
// Il2CppName: Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::PointKDTree::*)(int)>(&Pathfinding::PointKDTree::Size)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree*), "Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointKDTree::CollectAndClear
// Il2CppName: CollectAndClear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PointKDTree::*)(int, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*)>(&Pathfinding::PointKDTree::CollectAndClear)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree*), "CollectAndClear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, buffer});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointKDTree::MaxAllowedSize
// Il2CppName: MaxAllowedSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&Pathfinding::PointKDTree::MaxAllowedSize)> {
  static const MethodInfo* get() {
    static auto* numNodes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree*), "MaxAllowedSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numNodes, depth});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointKDTree::Rebalance
// Il2CppName: Rebalance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PointKDTree::*)(int)>(&Pathfinding::PointKDTree::Rebalance)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree*), "Rebalance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointKDTree::EnsureSize
// Il2CppName: EnsureSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PointKDTree::*)(int)>(&Pathfinding::PointKDTree::EnsureSize)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree*), "EnsureSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointKDTree::Build
// Il2CppName: Build
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PointKDTree::*)(int, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*, int, int)>(&Pathfinding::PointKDTree::Build)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nodes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")})->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree*), "Build", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, nodes, start, end});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointKDTree::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PointKDTree::*)(::Pathfinding::GraphNode*, int, int)>(&Pathfinding::PointKDTree::Add)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, index, depth});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointKDTree::GetNearest
// Il2CppName: GetNearest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::GraphNode* (Pathfinding::PointKDTree::*)(::Pathfinding::Int3, ::Pathfinding::NNConstraint*)>(&Pathfinding::PointKDTree::GetNearest)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    static auto* constraint = &::il2cpp_utils::GetClassFromName("Pathfinding", "NNConstraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree*), "GetNearest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, constraint});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointKDTree::GetNearestInternal
// Il2CppName: GetNearestInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PointKDTree::*)(int, ::Pathfinding::Int3, ::Pathfinding::NNConstraint*, ByRef<::Pathfinding::GraphNode*>, ByRef<int64_t>)>(&Pathfinding::PointKDTree::GetNearestInternal)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    static auto* constraint = &::il2cpp_utils::GetClassFromName("Pathfinding", "NNConstraint")->byval_arg;
    static auto* best = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->this_arg;
    static auto* bestSqrDist = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree*), "GetNearestInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, point, constraint, best, bestSqrDist});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointKDTree::GetNearestConnection
// Il2CppName: GetNearestConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::GraphNode* (Pathfinding::PointKDTree::*)(::Pathfinding::Int3, ::Pathfinding::NNConstraint*, int64_t)>(&Pathfinding::PointKDTree::GetNearestConnection)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    static auto* constraint = &::il2cpp_utils::GetClassFromName("Pathfinding", "NNConstraint")->byval_arg;
    static auto* maximumSqrConnectionLength = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree*), "GetNearestConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, constraint, maximumSqrConnectionLength});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointKDTree::GetNearestConnectionInternal
// Il2CppName: GetNearestConnectionInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PointKDTree::*)(int, ::Pathfinding::Int3, ::Pathfinding::NNConstraint*, ByRef<::Pathfinding::GraphNode*>, ByRef<int64_t>, int64_t)>(&Pathfinding::PointKDTree::GetNearestConnectionInternal)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    static auto* constraint = &::il2cpp_utils::GetClassFromName("Pathfinding", "NNConstraint")->byval_arg;
    static auto* best = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->this_arg;
    static auto* bestSqrDist = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    static auto* distanceThresholdOffset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree*), "GetNearestConnectionInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, point, constraint, best, bestSqrDist, distanceThresholdOffset});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointKDTree::GetInRange
// Il2CppName: GetInRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PointKDTree::*)(::Pathfinding::Int3, int64_t, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*)>(&Pathfinding::PointKDTree::GetInRange)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    static auto* sqrRadius = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree*), "GetInRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, sqrRadius, buffer});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointKDTree::GetInRangeInternal
// Il2CppName: GetInRangeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PointKDTree::*)(int, ::Pathfinding::Int3, int64_t, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*)>(&Pathfinding::PointKDTree::GetInRangeInternal)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    static auto* sqrRadius = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree*), "GetInRangeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, point, sqrRadius, buffer});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointKDTree::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Pathfinding::PointKDTree::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointKDTree*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};