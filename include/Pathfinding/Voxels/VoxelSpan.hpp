// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Pathfinding.Voxels
namespace Pathfinding::Voxels {
  // Forward declaring type: VoxelSpan
  class VoxelSpan;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Voxels::VoxelSpan);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Voxels::VoxelSpan*, "Pathfinding.Voxels", "VoxelSpan");
// Type namespace: Pathfinding.Voxels
namespace Pathfinding::Voxels {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Voxels.VoxelSpan
  // [TokenAttribute] Offset: FFFFFFFF
  class VoxelSpan : public ::Il2CppObject {
    public:
    public:
    // public System.UInt32 bottom
    // Size: 0x4
    // Offset: 0x10
    uint bottom;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 top
    // Size: 0x4
    // Offset: 0x14
    uint top;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public Pathfinding.Voxels.VoxelSpan next
    // Size: 0x8
    // Offset: 0x18
    ::Pathfinding::Voxels::VoxelSpan* next;
    // Field size check
    static_assert(sizeof(::Pathfinding::Voxels::VoxelSpan*) == 0x8);
    // public System.Int32 area
    // Size: 0x4
    // Offset: 0x20
    int area;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.UInt32 bottom
    [[deprecated("Use field access instead!")]] uint& dyn_bottom();
    // Get instance field reference: public System.UInt32 top
    [[deprecated("Use field access instead!")]] uint& dyn_top();
    // Get instance field reference: public Pathfinding.Voxels.VoxelSpan next
    [[deprecated("Use field access instead!")]] ::Pathfinding::Voxels::VoxelSpan*& dyn_next();
    // Get instance field reference: public System.Int32 area
    [[deprecated("Use field access instead!")]] int& dyn_area();
    // public System.Void .ctor(System.UInt32 b, System.UInt32 t, System.Int32 area)
    // Offset: 0x2A112B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoxelSpan* New_ctor(uint b, uint t, int area) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Voxels::VoxelSpan::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoxelSpan*, creationType>(b, t, area)));
    }
  }; // Pathfinding.Voxels.VoxelSpan
  #pragma pack(pop)
  static check_size<sizeof(VoxelSpan), 32 + sizeof(int)> __Pathfinding_Voxels_VoxelSpanSizeCheck;
  static_assert(sizeof(VoxelSpan) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Voxels::VoxelSpan::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!