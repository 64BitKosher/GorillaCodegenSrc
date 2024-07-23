// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.RecastGraph
#include "Pathfinding/RecastGraph.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Voxels
namespace Pathfinding::Voxels {
  // Forward declaring type: Voxelize
  class Voxelize;
  // Forward declaring type: RasterizationMesh
  class RasterizationMesh;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Int2
  struct Int2;
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::RecastGraph::$$c__DisplayClass50_0);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::RecastGraph::$$c__DisplayClass50_0*, "Pathfinding", "RecastGraph/<>c__DisplayClass50_0");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.RecastGraph/<>c__DisplayClass50_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class RecastGraph::$$c__DisplayClass50_0 : public ::Il2CppObject {
    public:
    public:
    // public Pathfinding.Voxels.Voxelize[] voxelizers
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Pathfinding::Voxels::Voxelize*> voxelizers;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::Voxels::Voxelize*>) == 0x8);
    // public System.Collections.Generic.List`1<Pathfinding.Voxels.RasterizationMesh>[] buckets
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*> buckets;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>) == 0x8);
    // public Pathfinding.RecastGraph <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::Pathfinding::RecastGraph* $$4__this;
    // Field size check
    static_assert(sizeof(::Pathfinding::RecastGraph*) == 0x8);
    // public System.UInt32 graphIndex
    // Size: 0x4
    // Offset: 0x28
    uint graphIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Get instance field reference: public Pathfinding.Voxels.Voxelize[] voxelizers
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::Voxels::Voxelize*>& dyn_voxelizers();
    // Get instance field reference: public System.Collections.Generic.List`1<Pathfinding.Voxels.RasterizationMesh>[] buckets
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>& dyn_buckets();
    // Get instance field reference: public Pathfinding.RecastGraph <>4__this
    [[deprecated("Use field access instead!")]] ::Pathfinding::RecastGraph*& dyn_$$4__this();
    // Get instance field reference: public System.UInt32 graphIndex
    [[deprecated("Use field access instead!")]] uint& dyn_graphIndex();
    // public System.Void .ctor()
    // Offset: 0x29E3F80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RecastGraph::$$c__DisplayClass50_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::RecastGraph::$$c__DisplayClass50_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RecastGraph::$$c__DisplayClass50_0*, creationType>()));
    }
    // System.Void <ScanAllTiles>b__0(Pathfinding.Int2 tile, System.Int32 threadIndex)
    // Offset: 0x29E3F88
    void $ScanAllTiles$b__0(::Pathfinding::Int2 tile, int threadIndex);
    // System.Void <ScanAllTiles>b__1(Pathfinding.GraphNode node)
    // Offset: 0x29E40A0
    void $ScanAllTiles$b__1(::Pathfinding::GraphNode* node);
  }; // Pathfinding.RecastGraph/<>c__DisplayClass50_0
  #pragma pack(pop)
  static check_size<sizeof(RecastGraph::$$c__DisplayClass50_0), 40 + sizeof(uint)> __Pathfinding_RecastGraph_$$c__DisplayClass50_0SizeCheck;
  static_assert(sizeof(RecastGraph::$$c__DisplayClass50_0) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::RecastGraph::$$c__DisplayClass50_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::RecastGraph::$$c__DisplayClass50_0::$ScanAllTiles$b__0
// Il2CppName: <ScanAllTiles>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RecastGraph::$$c__DisplayClass50_0::*)(::Pathfinding::Int2, int)>(&Pathfinding::RecastGraph::$$c__DisplayClass50_0::$ScanAllTiles$b__0)> {
  static const MethodInfo* get() {
    static auto* tile = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int2")->byval_arg;
    static auto* threadIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RecastGraph::$$c__DisplayClass50_0*), "<ScanAllTiles>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tile, threadIndex});
  }
};
// Writing MetadataGetter for method: Pathfinding::RecastGraph::$$c__DisplayClass50_0::$ScanAllTiles$b__1
// Il2CppName: <ScanAllTiles>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RecastGraph::$$c__DisplayClass50_0::*)(::Pathfinding::GraphNode*)>(&Pathfinding::RecastGraph::$$c__DisplayClass50_0::$ScanAllTiles$b__1)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RecastGraph::$$c__DisplayClass50_0*), "<ScanAllTiles>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
