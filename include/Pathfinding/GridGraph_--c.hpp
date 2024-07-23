// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.GridGraph
#include "Pathfinding/GridGraph.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::GridGraph::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::GridGraph::$$c*, "Pathfinding", "GridGraph/<>c");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.GridGraph/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GridGraph::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Pathfinding.GridGraph/<>c <>9
    static ::Pathfinding::GridGraph::$$c* _get_$$9();
    // Set static field: static public readonly Pathfinding.GridGraph/<>c <>9
    static void _set_$$9(::Pathfinding::GridGraph::$$c* value);
    // Get static field: static public System.Action`1<Pathfinding.GraphNode> <>9__1_0
    static ::System::Action_1<::Pathfinding::GraphNode*>* _get_$$9__1_0();
    // Set static field: static public System.Action`1<Pathfinding.GraphNode> <>9__1_0
    static void _set_$$9__1_0(::System::Action_1<::Pathfinding::GraphNode*>* value);
    // static private System.Void .cctor()
    // Offset: 0x29C88F8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x29C8960
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GridGraph::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::GridGraph::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GridGraph::$$c*, creationType>()));
    }
    // System.Void <DestroyAllNodes>b__1_0(Pathfinding.GraphNode node)
    // Offset: 0x29C8968
    void $DestroyAllNodes$b__1_0(::Pathfinding::GraphNode* node);
  }; // Pathfinding.GridGraph/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::GridGraph::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Pathfinding::GridGraph::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridGraph::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridGraph::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::GridGraph::$$c::$DestroyAllNodes$b__1_0
// Il2CppName: <DestroyAllNodes>b__1_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridGraph::$$c::*)(::Pathfinding::GraphNode*)>(&Pathfinding::GridGraph::$$c::$DestroyAllNodes$b__1_0)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridGraph::$$c*), "<DestroyAllNodes>b__1_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};