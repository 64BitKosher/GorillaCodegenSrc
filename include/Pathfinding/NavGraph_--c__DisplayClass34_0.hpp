// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.NavGraph
#include "Pathfinding/NavGraph.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::NavGraph::$$c__DisplayClass34_0);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::NavGraph::$$c__DisplayClass34_0*, "Pathfinding", "NavGraph/<>c__DisplayClass34_0");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.NavGraph/<>c__DisplayClass34_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NavGraph::$$c__DisplayClass34_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Single size
    // Size: 0x4
    // Offset: 0x10
    float size;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return size;
    }
    // Get instance field reference: public System.Single size
    [[deprecated("Use field access instead!")]] float& dyn_size();
    // public System.Void .ctor()
    // Offset: 0x29BE488
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NavGraph::$$c__DisplayClass34_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::NavGraph::$$c__DisplayClass34_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NavGraph::$$c__DisplayClass34_0*, creationType>()));
    }
    // System.Void <DrawUnwalkableNodes>b__0(Pathfinding.GraphNode node)
    // Offset: 0x29BE490
    void $DrawUnwalkableNodes$b__0(::Pathfinding::GraphNode* node);
  }; // Pathfinding.NavGraph/<>c__DisplayClass34_0
  #pragma pack(pop)
  static check_size<sizeof(NavGraph::$$c__DisplayClass34_0), 16 + sizeof(float)> __Pathfinding_NavGraph_$$c__DisplayClass34_0SizeCheck;
  static_assert(sizeof(NavGraph::$$c__DisplayClass34_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::NavGraph::$$c__DisplayClass34_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::NavGraph::$$c__DisplayClass34_0::$DrawUnwalkableNodes$b__0
// Il2CppName: <DrawUnwalkableNodes>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavGraph::$$c__DisplayClass34_0::*)(::Pathfinding::GraphNode*)>(&Pathfinding::NavGraph::$$c__DisplayClass34_0::$DrawUnwalkableNodes$b__0)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavGraph::$$c__DisplayClass34_0*), "<DrawUnwalkableNodes>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};