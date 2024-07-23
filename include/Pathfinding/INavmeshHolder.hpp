// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.ITransformedGraph
#include "Pathfinding/ITransformedGraph.hpp"
// Including type: Pathfinding.INavmesh
#include "Pathfinding/INavmesh.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Int3
  struct Int3;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: INavmeshHolder
  class INavmeshHolder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::INavmeshHolder);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::INavmeshHolder*, "Pathfinding", "INavmeshHolder");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.INavmeshHolder
  // [TokenAttribute] Offset: FFFFFFFF
  class INavmeshHolder/*, public ::Pathfinding::ITransformedGraph, public ::Pathfinding::INavmesh*/ {
    public:
    // Creating interface conversion operator: operator ::Pathfinding::ITransformedGraph
    operator ::Pathfinding::ITransformedGraph() noexcept {
      return *reinterpret_cast<::Pathfinding::ITransformedGraph*>(this);
    }
    // Creating interface conversion operator: operator ::Pathfinding::INavmesh
    operator ::Pathfinding::INavmesh() noexcept {
      return *reinterpret_cast<::Pathfinding::INavmesh*>(this);
    }
    // public Pathfinding.Int3 GetVertex(System.Int32 i)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Pathfinding::Int3 GetVertex(int i);
    // public Pathfinding.Int3 GetVertexInGraphSpace(System.Int32 i)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Pathfinding::Int3 GetVertexInGraphSpace(int i);
    // public System.Int32 GetVertexArrayIndex(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetVertexArrayIndex(int index);
    // public System.Void GetTileCoordinates(System.Int32 tileIndex, out System.Int32 x, out System.Int32 z)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GetTileCoordinates(int tileIndex, ByRef<int> x, ByRef<int> z);
  }; // Pathfinding.INavmeshHolder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::INavmeshHolder::GetVertex
// Il2CppName: GetVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Int3 (Pathfinding::INavmeshHolder::*)(int)>(&Pathfinding::INavmeshHolder::GetVertex)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::INavmeshHolder*), "GetVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Pathfinding::INavmeshHolder::GetVertexInGraphSpace
// Il2CppName: GetVertexInGraphSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Int3 (Pathfinding::INavmeshHolder::*)(int)>(&Pathfinding::INavmeshHolder::GetVertexInGraphSpace)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::INavmeshHolder*), "GetVertexInGraphSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Pathfinding::INavmeshHolder::GetVertexArrayIndex
// Il2CppName: GetVertexArrayIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::INavmeshHolder::*)(int)>(&Pathfinding::INavmeshHolder::GetVertexArrayIndex)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::INavmeshHolder*), "GetVertexArrayIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Pathfinding::INavmeshHolder::GetTileCoordinates
// Il2CppName: GetTileCoordinates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::INavmeshHolder::*)(int, ByRef<int>, ByRef<int>)>(&Pathfinding::INavmeshHolder::GetTileCoordinates)> {
  static const MethodInfo* get() {
    static auto* tileIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::INavmeshHolder*), "GetTileCoordinates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tileIndex, x, z});
  }
};
