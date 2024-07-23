// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Pathfinding.Voxels
namespace Pathfinding::Voxels {
  // Forward declaring type: LinkedVoxelSpan
  struct LinkedVoxelSpan;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Voxels::LinkedVoxelSpan, "Pathfinding.Voxels", "LinkedVoxelSpan");
// Type namespace: Pathfinding.Voxels
namespace Pathfinding::Voxels {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Pathfinding.Voxels.LinkedVoxelSpan
  // [TokenAttribute] Offset: FFFFFFFF
  struct LinkedVoxelSpan/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 bottom
    // Size: 0x4
    // Offset: 0x0
    uint bottom;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 top
    // Size: 0x4
    // Offset: 0x4
    uint top;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Int32 next
    // Size: 0x4
    // Offset: 0x8
    int next;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 area
    // Size: 0x4
    // Offset: 0xC
    int area;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LinkedVoxelSpan
    constexpr LinkedVoxelSpan(uint bottom_ = {}, uint top_ = {}, int next_ = {}, int area_ = {}) noexcept : bottom{bottom_}, top{top_}, next{next_}, area{area_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 bottom
    [[deprecated("Use field access instead!")]] uint& dyn_bottom();
    // Get instance field reference: public System.UInt32 top
    [[deprecated("Use field access instead!")]] uint& dyn_top();
    // Get instance field reference: public System.Int32 next
    [[deprecated("Use field access instead!")]] int& dyn_next();
    // Get instance field reference: public System.Int32 area
    [[deprecated("Use field access instead!")]] int& dyn_area();
    // public System.Void .ctor(System.UInt32 bottom, System.UInt32 top, System.Int32 area)
    // Offset: 0x2A10CD4
    LinkedVoxelSpan(uint bottom, uint top, int area);
    // public System.Void .ctor(System.UInt32 bottom, System.UInt32 top, System.Int32 area, System.Int32 next)
    // Offset: 0x2A103E8
    // ABORTED: conflicts with another method.  LinkedVoxelSpan(uint bottom, uint top, int area, int next);
  }; // Pathfinding.Voxels.LinkedVoxelSpan
  #pragma pack(pop)
  static check_size<sizeof(LinkedVoxelSpan), 12 + sizeof(int)> __Pathfinding_Voxels_LinkedVoxelSpanSizeCheck;
  static_assert(sizeof(LinkedVoxelSpan) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Voxels::LinkedVoxelSpan::LinkedVoxelSpan
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Voxels::LinkedVoxelSpan::LinkedVoxelSpan
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!