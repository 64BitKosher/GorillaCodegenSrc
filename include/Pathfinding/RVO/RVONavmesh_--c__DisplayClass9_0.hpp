// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.RVO.RVONavmesh
#include "Pathfinding/RVO/RVONavmesh.hpp"
// Including type: Pathfinding.Int3
#include "Pathfinding/Int3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::RVO
namespace Pathfinding::RVO {
  // Forward declaring type: Simulator
  class Simulator;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::RVO::RVONavmesh::$$c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::RVO::RVONavmesh::$$c__DisplayClass9_0*, "Pathfinding.RVO", "RVONavmesh/<>c__DisplayClass9_0");
// Type namespace: Pathfinding.RVO
namespace Pathfinding::RVO {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.RVO.RVONavmesh/<>c__DisplayClass9_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class RVONavmesh::$$c__DisplayClass9_0 : public ::Il2CppObject {
    public:
    public:
    // public Pathfinding.RVO.RVONavmesh <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::Pathfinding::RVO::RVONavmesh* $$4__this;
    // Field size check
    static_assert(sizeof(::Pathfinding::RVO::RVONavmesh*) == 0x8);
    // public Pathfinding.RVO.Simulator simulator
    // Size: 0x8
    // Offset: 0x18
    ::Pathfinding::RVO::Simulator* simulator;
    // Field size check
    static_assert(sizeof(::Pathfinding::RVO::Simulator*) == 0x8);
    public:
    // Get instance field reference: public Pathfinding.RVO.RVONavmesh <>4__this
    [[deprecated("Use field access instead!")]] ::Pathfinding::RVO::RVONavmesh*& dyn_$$4__this();
    // Get instance field reference: public Pathfinding.RVO.Simulator simulator
    [[deprecated("Use field access instead!")]] ::Pathfinding::RVO::Simulator*& dyn_simulator();
    // public System.Void .ctor()
    // Offset: 0x2A3B508
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RVONavmesh::$$c__DisplayClass9_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::RVO::RVONavmesh::$$c__DisplayClass9_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RVONavmesh::$$c__DisplayClass9_0*, creationType>()));
    }
    // System.Void <AddGraphObstacles>b__0(System.Collections.Generic.List`1<Pathfinding.Int3> vertices, System.Boolean cycle)
    // Offset: 0x2A3B6B4
    void $AddGraphObstacles$b__0(::System::Collections::Generic::List_1<::Pathfinding::Int3>* vertices, bool cycle);
  }; // Pathfinding.RVO.RVONavmesh/<>c__DisplayClass9_0
  #pragma pack(pop)
  static check_size<sizeof(RVONavmesh::$$c__DisplayClass9_0), 24 + sizeof(::Pathfinding::RVO::Simulator*)> __Pathfinding_RVO_RVONavmesh_$$c__DisplayClass9_0SizeCheck;
  static_assert(sizeof(RVONavmesh::$$c__DisplayClass9_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::RVO::RVONavmesh::$$c__DisplayClass9_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::RVO::RVONavmesh::$$c__DisplayClass9_0::$AddGraphObstacles$b__0
// Il2CppName: <AddGraphObstacles>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVONavmesh::$$c__DisplayClass9_0::*)(::System::Collections::Generic::List_1<::Pathfinding::Int3>*, bool)>(&Pathfinding::RVO::RVONavmesh::$$c__DisplayClass9_0::$AddGraphObstacles$b__0)> {
  static const MethodInfo* get() {
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")})->byval_arg;
    static auto* cycle = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVONavmesh::$$c__DisplayClass9_0*), "<AddGraphObstacles>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertices, cycle});
  }
};