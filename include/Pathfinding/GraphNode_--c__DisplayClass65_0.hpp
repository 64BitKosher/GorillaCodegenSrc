// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.GraphNode
#include "Pathfinding/GraphNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::GraphNode::$$c__DisplayClass65_0);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::GraphNode::$$c__DisplayClass65_0*, "Pathfinding", "GraphNode/<>c__DisplayClass65_0");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.GraphNode/<>c__DisplayClass65_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GraphNode::$$c__DisplayClass65_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean contains
    // Size: 0x1
    // Offset: 0x10
    bool contains;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: contains and: node
    char __padding0[0x7] = {};
    // public Pathfinding.GraphNode node
    // Size: 0x8
    // Offset: 0x18
    ::Pathfinding::GraphNode* node;
    // Field size check
    static_assert(sizeof(::Pathfinding::GraphNode*) == 0x8);
    public:
    // Get instance field reference: public System.Boolean contains
    [[deprecated("Use field access instead!")]] bool& dyn_contains();
    // Get instance field reference: public Pathfinding.GraphNode node
    [[deprecated("Use field access instead!")]] ::Pathfinding::GraphNode*& dyn_node();
    // public System.Void .ctor()
    // Offset: 0x29B904C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GraphNode::$$c__DisplayClass65_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::GraphNode::$$c__DisplayClass65_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GraphNode::$$c__DisplayClass65_0*, creationType>()));
    }
    // System.Void <ContainsConnection>b__0(Pathfinding.GraphNode neighbour)
    // Offset: 0x29B926C
    void $ContainsConnection$b__0(::Pathfinding::GraphNode* neighbour);
  }; // Pathfinding.GraphNode/<>c__DisplayClass65_0
  #pragma pack(pop)
  static check_size<sizeof(GraphNode::$$c__DisplayClass65_0), 24 + sizeof(::Pathfinding::GraphNode*)> __Pathfinding_GraphNode_$$c__DisplayClass65_0SizeCheck;
  static_assert(sizeof(GraphNode::$$c__DisplayClass65_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::GraphNode::$$c__DisplayClass65_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::GraphNode::$$c__DisplayClass65_0::$ContainsConnection$b__0
// Il2CppName: <ContainsConnection>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphNode::$$c__DisplayClass65_0::*)(::Pathfinding::GraphNode*)>(&Pathfinding::GraphNode::$$c__DisplayClass65_0::$ContainsConnection$b__0)> {
  static const MethodInfo* get() {
    static auto* neighbour = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphNode::$$c__DisplayClass65_0*), "<ContainsConnection>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{neighbour});
  }
};
