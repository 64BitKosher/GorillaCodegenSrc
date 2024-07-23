// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: INavmesh
  class INavmesh;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::INavmesh);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::INavmesh*, "Pathfinding", "INavmesh");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.INavmesh
  // [TokenAttribute] Offset: FFFFFFFF
  class INavmesh {
    public:
    // public System.Void GetNodes(System.Action`1<Pathfinding.GraphNode> del)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GetNodes(::System::Action_1<::Pathfinding::GraphNode*>* del);
  }; // Pathfinding.INavmesh
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::INavmesh::GetNodes
// Il2CppName: GetNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::INavmesh::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&Pathfinding::INavmesh::GetNodes)> {
  static const MethodInfo* get() {
    static auto* del = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::INavmesh*), "GetNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{del});
  }
};