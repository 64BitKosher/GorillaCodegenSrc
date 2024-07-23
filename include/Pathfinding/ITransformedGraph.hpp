// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Util
namespace Pathfinding::Util {
  // Forward declaring type: GraphTransform
  class GraphTransform;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: ITransformedGraph
  class ITransformedGraph;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::ITransformedGraph);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::ITransformedGraph*, "Pathfinding", "ITransformedGraph");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.ITransformedGraph
  // [TokenAttribute] Offset: FFFFFFFF
  class ITransformedGraph {
    public:
    // public Pathfinding.Util.GraphTransform get_transform()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Pathfinding::Util::GraphTransform* get_transform();
  }; // Pathfinding.ITransformedGraph
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::ITransformedGraph::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Util::GraphTransform* (Pathfinding::ITransformedGraph::*)()>(&Pathfinding::ITransformedGraph::get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::ITransformedGraph*), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
