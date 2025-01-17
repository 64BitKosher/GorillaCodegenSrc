// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AstarPath
#include "GlobalNamespace/AstarPath.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AstarPath::$$c__DisplayClass144_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AstarPath::$$c__DisplayClass144_0*, "", "AstarPath/<>c__DisplayClass144_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: AstarPath/<>c__DisplayClass144_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AstarPath::$$c__DisplayClass144_0 : public ::Il2CppObject {
    public:
    public:
    // public Pathfinding.NavGraph graph
    // Size: 0x8
    // Offset: 0x10
    ::Pathfinding::NavGraph* graph;
    // Field size check
    static_assert(sizeof(::Pathfinding::NavGraph*) == 0x8);
    public:
    // Creating conversion operator: operator ::Pathfinding::NavGraph*
    constexpr operator ::Pathfinding::NavGraph*() const noexcept {
      return graph;
    }
    // Get instance field reference: public Pathfinding.NavGraph graph
    [[deprecated("Use field access instead!")]] ::Pathfinding::NavGraph*& dyn_graph();
    // public System.Void .ctor()
    // Offset: 0x2986C00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AstarPath::$$c__DisplayClass144_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AstarPath::$$c__DisplayClass144_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AstarPath::$$c__DisplayClass144_0*, creationType>()));
    }
    // System.Void <ScanGraph>b__0(Pathfinding.GraphNode node)
    // Offset: 0x2986C08
    void $ScanGraph$b__0(::Pathfinding::GraphNode* node);
  }; // AstarPath/<>c__DisplayClass144_0
  #pragma pack(pop)
  static check_size<sizeof(AstarPath::$$c__DisplayClass144_0), 16 + sizeof(::Pathfinding::NavGraph*)> __GlobalNamespace_AstarPath_$$c__DisplayClass144_0SizeCheck;
  static_assert(sizeof(AstarPath::$$c__DisplayClass144_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$$c__DisplayClass144_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$$c__DisplayClass144_0::$ScanGraph$b__0
// Il2CppName: <ScanGraph>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AstarPath::$$c__DisplayClass144_0::*)(::Pathfinding::GraphNode*)>(&GlobalNamespace::AstarPath::$$c__DisplayClass144_0::$ScanGraph$b__0)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarPath::$$c__DisplayClass144_0*), "<ScanGraph>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
