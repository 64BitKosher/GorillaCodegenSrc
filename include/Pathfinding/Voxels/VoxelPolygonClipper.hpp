// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: Pathfinding.Voxels
namespace Pathfinding::Voxels {
  // Forward declaring type: VoxelPolygonClipper
  struct VoxelPolygonClipper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Voxels::VoxelPolygonClipper, "Pathfinding.Voxels", "VoxelPolygonClipper");
// Type namespace: Pathfinding.Voxels
namespace Pathfinding::Voxels {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Pathfinding.Voxels.VoxelPolygonClipper
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  struct VoxelPolygonClipper/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single[] x
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<float> x;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] y
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<float> y;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] z
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<float> z;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Int32 n
    // Size: 0x4
    // Offset: 0x18
    int n;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VoxelPolygonClipper
    constexpr VoxelPolygonClipper(::ArrayW<float> x_ = ::ArrayW<float>(static_cast<void*>(nullptr)), ::ArrayW<float> y_ = ::ArrayW<float>(static_cast<void*>(nullptr)), ::ArrayW<float> z_ = ::ArrayW<float>(static_cast<void*>(nullptr)), int n_ = {}) noexcept : x{x_}, y{y_}, z{z_}, n{n_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single[] x
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_x();
    // Get instance field reference: public System.Single[] y
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_y();
    // Get instance field reference: public System.Single[] z
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_z();
    // Get instance field reference: public System.Int32 n
    [[deprecated("Use field access instead!")]] int& dyn_n();
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0x2A1A464
    VoxelPolygonClipper(int capacity);
    // public System.Void set_Item(System.Int32 i, UnityEngine.Vector3 value)
    // Offset: 0x2A1A508
    void set_Item(int i, ::UnityEngine::Vector3 value);
    // public System.Void ClipPolygonAlongX(ref Pathfinding.Voxels.VoxelPolygonClipper result, System.Single multi, System.Single offset)
    // Offset: 0x2A1A574
    void ClipPolygonAlongX(ByRef<::Pathfinding::Voxels::VoxelPolygonClipper> result, float multi, float offset);
    // public System.Void ClipPolygonAlongZWithYZ(ref Pathfinding.Voxels.VoxelPolygonClipper result, System.Single multi, System.Single offset)
    // Offset: 0x2A1A7A8
    void ClipPolygonAlongZWithYZ(ByRef<::Pathfinding::Voxels::VoxelPolygonClipper> result, float multi, float offset);
    // public System.Void ClipPolygonAlongZWithY(ref Pathfinding.Voxels.VoxelPolygonClipper result, System.Single multi, System.Single offset)
    // Offset: 0x2A1A954
    void ClipPolygonAlongZWithY(ByRef<::Pathfinding::Voxels::VoxelPolygonClipper> result, float multi, float offset);
  }; // Pathfinding.Voxels.VoxelPolygonClipper
  #pragma pack(pop)
  static check_size<sizeof(VoxelPolygonClipper), 24 + sizeof(int)> __Pathfinding_Voxels_VoxelPolygonClipperSizeCheck;
  static_assert(sizeof(VoxelPolygonClipper) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Voxels::VoxelPolygonClipper::VoxelPolygonClipper
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Voxels::VoxelPolygonClipper::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Voxels::VoxelPolygonClipper::*)(int, ::UnityEngine::Vector3)>(&Pathfinding::Voxels::VoxelPolygonClipper::set_Item)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Voxels::VoxelPolygonClipper), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, value});
  }
};
// Writing MetadataGetter for method: Pathfinding::Voxels::VoxelPolygonClipper::ClipPolygonAlongX
// Il2CppName: ClipPolygonAlongX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Voxels::VoxelPolygonClipper::*)(ByRef<::Pathfinding::Voxels::VoxelPolygonClipper>, float, float)>(&Pathfinding::Voxels::VoxelPolygonClipper::ClipPolygonAlongX)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("Pathfinding.Voxels", "VoxelPolygonClipper")->this_arg;
    static auto* multi = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Voxels::VoxelPolygonClipper), "ClipPolygonAlongX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, multi, offset});
  }
};
// Writing MetadataGetter for method: Pathfinding::Voxels::VoxelPolygonClipper::ClipPolygonAlongZWithYZ
// Il2CppName: ClipPolygonAlongZWithYZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Voxels::VoxelPolygonClipper::*)(ByRef<::Pathfinding::Voxels::VoxelPolygonClipper>, float, float)>(&Pathfinding::Voxels::VoxelPolygonClipper::ClipPolygonAlongZWithYZ)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("Pathfinding.Voxels", "VoxelPolygonClipper")->this_arg;
    static auto* multi = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Voxels::VoxelPolygonClipper), "ClipPolygonAlongZWithYZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, multi, offset});
  }
};
// Writing MetadataGetter for method: Pathfinding::Voxels::VoxelPolygonClipper::ClipPolygonAlongZWithY
// Il2CppName: ClipPolygonAlongZWithY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Voxels::VoxelPolygonClipper::*)(ByRef<::Pathfinding::Voxels::VoxelPolygonClipper>, float, float)>(&Pathfinding::Voxels::VoxelPolygonClipper::ClipPolygonAlongZWithY)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("Pathfinding.Voxels", "VoxelPolygonClipper")->this_arg;
    static auto* multi = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Voxels::VoxelPolygonClipper), "ClipPolygonAlongZWithY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, multi, offset});
  }
};
