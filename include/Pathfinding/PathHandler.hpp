// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: BinaryHeap
  class BinaryHeap;
  // Forward declaring type: PathNode
  class PathNode;
  // Forward declaring type: Path
  class Path;
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: PathHandler
  class PathHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::PathHandler);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::PathHandler*, "Pathfinding", "PathHandler");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.PathHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class PathHandler : public ::Il2CppObject {
    public:
    public:
    // private System.UInt16 pathID
    // Size: 0x2
    // Offset: 0x10
    uint16_t pathID;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Padding between fields: pathID and: threadID
    char __padding0[0x2] = {};
    // public readonly System.Int32 threadID
    // Size: 0x4
    // Offset: 0x14
    int threadID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 totalThreadCount
    // Size: 0x4
    // Offset: 0x18
    int totalThreadCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: totalThreadCount and: heap
    char __padding2[0x4] = {};
    // public readonly Pathfinding.BinaryHeap heap
    // Size: 0x8
    // Offset: 0x20
    ::Pathfinding::BinaryHeap* heap;
    // Field size check
    static_assert(sizeof(::Pathfinding::BinaryHeap*) == 0x8);
    // public Pathfinding.PathNode[] nodes
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Pathfinding::PathNode*> nodes;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::PathNode*>) == 0x8);
    // public readonly System.Text.StringBuilder DebugStringBuilder
    // Size: 0x8
    // Offset: 0x30
    ::System::Text::StringBuilder* DebugStringBuilder;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    public:
    // Get instance field reference: private System.UInt16 pathID
    [[deprecated("Use field access instead!")]] uint16_t& dyn_pathID();
    // Get instance field reference: public readonly System.Int32 threadID
    [[deprecated("Use field access instead!")]] int& dyn_threadID();
    // Get instance field reference: public readonly System.Int32 totalThreadCount
    [[deprecated("Use field access instead!")]] int& dyn_totalThreadCount();
    // Get instance field reference: public readonly Pathfinding.BinaryHeap heap
    [[deprecated("Use field access instead!")]] ::Pathfinding::BinaryHeap*& dyn_heap();
    // Get instance field reference: public Pathfinding.PathNode[] nodes
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::PathNode*>& dyn_nodes();
    // Get instance field reference: public readonly System.Text.StringBuilder DebugStringBuilder
    [[deprecated("Use field access instead!")]] ::System::Text::StringBuilder*& dyn_DebugStringBuilder();
    // public System.UInt16 get_PathID()
    // Offset: 0x29BBE00
    uint16_t get_PathID();
    // public System.Void .ctor(System.Int32 threadID, System.Int32 totalThreadCount)
    // Offset: 0x29B4DA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PathHandler* New_ctor(int threadID, int totalThreadCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::PathHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PathHandler*, creationType>(threadID, totalThreadCount)));
    }
    // public System.Void InitializeForPath(Pathfinding.Path p)
    // Offset: 0x29BBA0C
    void InitializeForPath(::Pathfinding::Path* p);
    // public System.Void DestroyNode(Pathfinding.GraphNode node)
    // Offset: 0x29B6010
    void DestroyNode(::Pathfinding::GraphNode* node);
    // public System.Void InitializeNode(Pathfinding.GraphNode node)
    // Offset: 0x29B5D80
    void InitializeNode(::Pathfinding::GraphNode* node);
    // public Pathfinding.PathNode GetPathNode(System.Int32 nodeIndex)
    // Offset: 0x29BBE08
    ::Pathfinding::PathNode* GetPathNode(int nodeIndex);
    // public Pathfinding.PathNode GetPathNode(Pathfinding.GraphNode node)
    // Offset: 0x29B9230
    ::Pathfinding::PathNode* GetPathNode(::Pathfinding::GraphNode* node);
    // public System.Void ClearPathIDs()
    // Offset: 0x29BB9B4
    void ClearPathIDs();
  }; // Pathfinding.PathHandler
  #pragma pack(pop)
  static check_size<sizeof(PathHandler), 48 + sizeof(::System::Text::StringBuilder*)> __Pathfinding_PathHandlerSizeCheck;
  static_assert(sizeof(PathHandler) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::PathHandler::get_PathID
// Il2CppName: get_PathID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (Pathfinding::PathHandler::*)()>(&Pathfinding::PathHandler::get_PathID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PathHandler*), "get_PathID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::PathHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::PathHandler::InitializeForPath
// Il2CppName: InitializeForPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PathHandler::*)(::Pathfinding::Path*)>(&Pathfinding::PathHandler::InitializeForPath)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PathHandler*), "InitializeForPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::PathHandler::DestroyNode
// Il2CppName: DestroyNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PathHandler::*)(::Pathfinding::GraphNode*)>(&Pathfinding::PathHandler::DestroyNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PathHandler*), "DestroyNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Pathfinding::PathHandler::InitializeNode
// Il2CppName: InitializeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PathHandler::*)(::Pathfinding::GraphNode*)>(&Pathfinding::PathHandler::InitializeNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PathHandler*), "InitializeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Pathfinding::PathHandler::GetPathNode
// Il2CppName: GetPathNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::PathNode* (Pathfinding::PathHandler::*)(int)>(&Pathfinding::PathHandler::GetPathNode)> {
  static const MethodInfo* get() {
    static auto* nodeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PathHandler*), "GetPathNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeIndex});
  }
};
// Writing MetadataGetter for method: Pathfinding::PathHandler::GetPathNode
// Il2CppName: GetPathNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::PathNode* (Pathfinding::PathHandler::*)(::Pathfinding::GraphNode*)>(&Pathfinding::PathHandler::GetPathNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PathHandler*), "GetPathNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Pathfinding::PathHandler::ClearPathIDs
// Il2CppName: ClearPathIDs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PathHandler::*)()>(&Pathfinding::PathHandler::ClearPathIDs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PathHandler*), "ClearPathIDs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};