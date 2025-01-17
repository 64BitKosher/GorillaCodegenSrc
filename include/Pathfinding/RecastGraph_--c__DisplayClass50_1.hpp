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
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Int2
  struct Int2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::RecastGraph::$$c__DisplayClass50_1);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::RecastGraph::$$c__DisplayClass50_1*, "Pathfinding", "RecastGraph/<>c__DisplayClass50_1");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.RecastGraph/<>c__DisplayClass50_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class RecastGraph::$$c__DisplayClass50_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 direction
    // Size: 0x4
    // Offset: 0x10
    int direction;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: direction and: CS$$$8__locals1
    char __padding0[0x4] = {};
    // public Pathfinding.RecastGraph/<>c__DisplayClass50_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::Pathfinding::RecastGraph::$$c__DisplayClass50_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::Pathfinding::RecastGraph::$$c__DisplayClass50_0*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 direction
    [[deprecated("Use field access instead!")]] int& dyn_direction();
    // Get instance field reference: public Pathfinding.RecastGraph/<>c__DisplayClass50_0 CS$<>8__locals1
    [[deprecated("Use field access instead!")]] ::Pathfinding::RecastGraph::$$c__DisplayClass50_0*& dyn_CS$$$8__locals1();
    // public System.Void .ctor()
    // Offset: 0x29E40C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RecastGraph::$$c__DisplayClass50_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::RecastGraph::$$c__DisplayClass50_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RecastGraph::$$c__DisplayClass50_1*, creationType>()));
    }
    // System.Void <ScanAllTiles>b__2(Pathfinding.Int2 tile, System.Int32 threadIndex)
    // Offset: 0x29E40CC
    void $ScanAllTiles$b__2(::Pathfinding::Int2 tile, int threadIndex);
  }; // Pathfinding.RecastGraph/<>c__DisplayClass50_1
  #pragma pack(pop)
  static check_size<sizeof(RecastGraph::$$c__DisplayClass50_1), 24 + sizeof(::Pathfinding::RecastGraph::$$c__DisplayClass50_0*)> __Pathfinding_RecastGraph_$$c__DisplayClass50_1SizeCheck;
  static_assert(sizeof(RecastGraph::$$c__DisplayClass50_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::RecastGraph::$$c__DisplayClass50_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::RecastGraph::$$c__DisplayClass50_1::$ScanAllTiles$b__2
// Il2CppName: <ScanAllTiles>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RecastGraph::$$c__DisplayClass50_1::*)(::Pathfinding::Int2, int)>(&Pathfinding::RecastGraph::$$c__DisplayClass50_1::$ScanAllTiles$b__2)> {
  static const MethodInfo* get() {
    static auto* tile = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int2")->byval_arg;
    static auto* threadIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RecastGraph::$$c__DisplayClass50_1*), "<ScanAllTiles>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tile, threadIndex});
  }
};
