// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Pathfinding.Int3
#include "Pathfinding/Int3.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Pathfinding.Voxels
namespace Pathfinding::Voxels {
  // Forward declaring type: VoxelMesh
  struct VoxelMesh;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Voxels::VoxelMesh, "Pathfinding.Voxels", "VoxelMesh");
// Type namespace: Pathfinding.Voxels
namespace Pathfinding::Voxels {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Pathfinding.Voxels.VoxelMesh
  // [TokenAttribute] Offset: FFFFFFFF
  struct VoxelMesh/*, public ::System::ValueType*/ {
    public:
    public:
    // public Pathfinding.Int3[] verts
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::Pathfinding::Int3> verts;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::Int3>) == 0x8);
    // public System.Int32[] tris
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<int> tris;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public System.Int32[] areas
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> areas;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Creating value type constructor for type: VoxelMesh
    constexpr VoxelMesh(::ArrayW<::Pathfinding::Int3> verts_ = ::ArrayW<::Pathfinding::Int3>(static_cast<void*>(nullptr)), ::ArrayW<int> tris_ = ::ArrayW<int>(static_cast<void*>(nullptr)), ::ArrayW<int> areas_ = ::ArrayW<int>(static_cast<void*>(nullptr))) noexcept : verts{verts_}, tris{tris_}, areas{areas_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Pathfinding.Int3[] verts
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::Int3>& dyn_verts();
    // Get instance field reference: public System.Int32[] tris
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_tris();
    // Get instance field reference: public System.Int32[] areas
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_areas();
  }; // Pathfinding.Voxels.VoxelMesh
  #pragma pack(pop)
  static check_size<sizeof(VoxelMesh), 16 + sizeof(::ArrayW<int>)> __Pathfinding_Voxels_VoxelMeshSizeCheck;
  static_assert(sizeof(VoxelMesh) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
