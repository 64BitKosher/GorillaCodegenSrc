// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.GraphMask
#include "Pathfinding/GraphMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: NavGraph
  class NavGraph;
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: NNConstraint
  class NNConstraint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::NNConstraint);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::NNConstraint*, "Pathfinding", "NNConstraint");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.NNConstraint
  // [TokenAttribute] Offset: FFFFFFFF
  class NNConstraint : public ::Il2CppObject {
    public:
    public:
    // public Pathfinding.GraphMask graphMask
    // Size: 0x4
    // Offset: 0x10
    ::Pathfinding::GraphMask graphMask;
    // Field size check
    static_assert(sizeof(::Pathfinding::GraphMask) == 0x4);
    // public System.Boolean constrainArea
    // Size: 0x1
    // Offset: 0x14
    bool constrainArea;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: constrainArea and: area
    char __padding1[0x3] = {};
    // public System.Int32 area
    // Size: 0x4
    // Offset: 0x18
    int area;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean constrainWalkability
    // Size: 0x1
    // Offset: 0x1C
    bool constrainWalkability;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean walkable
    // Size: 0x1
    // Offset: 0x1D
    bool walkable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean distanceXZ
    // Size: 0x1
    // Offset: 0x1E
    bool distanceXZ;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean constrainTags
    // Size: 0x1
    // Offset: 0x1F
    bool constrainTags;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Int32 tags
    // Size: 0x4
    // Offset: 0x20
    int tags;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean constrainDistance
    // Size: 0x1
    // Offset: 0x24
    bool constrainDistance;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public Pathfinding.GraphMask graphMask
    [[deprecated("Use field access instead!")]] ::Pathfinding::GraphMask& dyn_graphMask();
    // Get instance field reference: public System.Boolean constrainArea
    [[deprecated("Use field access instead!")]] bool& dyn_constrainArea();
    // Get instance field reference: public System.Int32 area
    [[deprecated("Use field access instead!")]] int& dyn_area();
    // Get instance field reference: public System.Boolean constrainWalkability
    [[deprecated("Use field access instead!")]] bool& dyn_constrainWalkability();
    // Get instance field reference: public System.Boolean walkable
    [[deprecated("Use field access instead!")]] bool& dyn_walkable();
    // Get instance field reference: public System.Boolean distanceXZ
    [[deprecated("Use field access instead!")]] bool& dyn_distanceXZ();
    // Get instance field reference: public System.Boolean constrainTags
    [[deprecated("Use field access instead!")]] bool& dyn_constrainTags();
    // Get instance field reference: public System.Int32 tags
    [[deprecated("Use field access instead!")]] int& dyn_tags();
    // Get instance field reference: public System.Boolean constrainDistance
    [[deprecated("Use field access instead!")]] bool& dyn_constrainDistance();
    // public System.Boolean SuitableGraph(System.Int32 graphIndex, Pathfinding.NavGraph graph)
    // Offset: 0x2998CD4
    bool SuitableGraph(int graphIndex, ::Pathfinding::NavGraph* graph);
    // public System.Boolean Suitable(Pathfinding.GraphNode node)
    // Offset: 0x2998CF4
    bool Suitable(::Pathfinding::GraphNode* node);
    // static public Pathfinding.NNConstraint get_Default()
    // Offset: 0x2998D9C
    static ::Pathfinding::NNConstraint* get_Default();
    // static public Pathfinding.NNConstraint get_None()
    // Offset: 0x2998E40
    static ::Pathfinding::NNConstraint* get_None();
    // public System.Void .ctor()
    // Offset: 0x2998E14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NNConstraint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::NNConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NNConstraint*, creationType>()));
    }
  }; // Pathfinding.NNConstraint
  #pragma pack(pop)
  static check_size<sizeof(NNConstraint), 36 + sizeof(bool)> __Pathfinding_NNConstraintSizeCheck;
  static_assert(sizeof(NNConstraint) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::NNConstraint::SuitableGraph
// Il2CppName: SuitableGraph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::NNConstraint::*)(int, ::Pathfinding::NavGraph*)>(&Pathfinding::NNConstraint::SuitableGraph)> {
  static const MethodInfo* get() {
    static auto* graphIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* graph = &::il2cpp_utils::GetClassFromName("Pathfinding", "NavGraph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NNConstraint*), "SuitableGraph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graphIndex, graph});
  }
};
// Writing MetadataGetter for method: Pathfinding::NNConstraint::Suitable
// Il2CppName: Suitable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::NNConstraint::*)(::Pathfinding::GraphNode*)>(&Pathfinding::NNConstraint::Suitable)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NNConstraint*), "Suitable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Pathfinding::NNConstraint::get_Default
// Il2CppName: get_Default
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::NNConstraint* (*)()>(&Pathfinding::NNConstraint::get_Default)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NNConstraint*), "get_Default", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NNConstraint::get_None
// Il2CppName: get_None
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::NNConstraint* (*)()>(&Pathfinding::NNConstraint::get_None)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NNConstraint*), "get_None", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NNConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
