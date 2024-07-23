// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: VertexSortingOrder
  struct VertexSortingOrder;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_MeshInfo
  struct TMP_MeshInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_MeshInfo, "TMPro", "TMP_MeshInfo");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x50
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.TMP_MeshInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct TMP_MeshInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Mesh mesh
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // public System.Int32 vertexCount
    // Size: 0x4
    // Offset: 0x8
    int vertexCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: vertexCount and: vertices
    char __padding1[0x4] = {};
    // public UnityEngine.Vector3[] vertices
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::Vector3> vertices;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // public UnityEngine.Vector3[] normals
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Vector3> normals;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // public UnityEngine.Vector4[] tangents
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Vector4> tangents;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    // public UnityEngine.Vector2[] uvs0
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Vector2> uvs0;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector2>) == 0x8);
    // public UnityEngine.Vector2[] uvs2
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Vector2> uvs2;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector2>) == 0x8);
    // public UnityEngine.Color32[] colors32
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::Color32> colors32;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color32>) == 0x8);
    // public System.Int32[] triangles
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<int> triangles;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public UnityEngine.Material material
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Creating value type constructor for type: TMP_MeshInfo
    constexpr TMP_MeshInfo(::UnityEngine::Mesh* mesh_ = {}, int vertexCount_ = {}, ::ArrayW<::UnityEngine::Vector3> vertices_ = ::ArrayW<::UnityEngine::Vector3>(static_cast<void*>(nullptr)), ::ArrayW<::UnityEngine::Vector3> normals_ = ::ArrayW<::UnityEngine::Vector3>(static_cast<void*>(nullptr)), ::ArrayW<::UnityEngine::Vector4> tangents_ = ::ArrayW<::UnityEngine::Vector4>(static_cast<void*>(nullptr)), ::ArrayW<::UnityEngine::Vector2> uvs0_ = ::ArrayW<::UnityEngine::Vector2>(static_cast<void*>(nullptr)), ::ArrayW<::UnityEngine::Vector2> uvs2_ = ::ArrayW<::UnityEngine::Vector2>(static_cast<void*>(nullptr)), ::ArrayW<::UnityEngine::Color32> colors32_ = ::ArrayW<::UnityEngine::Color32>(static_cast<void*>(nullptr)), ::ArrayW<int> triangles_ = ::ArrayW<int>(static_cast<void*>(nullptr)), ::UnityEngine::Material* material_ = {}) noexcept : mesh{mesh_}, vertexCount{vertexCount_}, vertices{vertices_}, normals{normals_}, tangents{tangents_}, uvs0{uvs0_}, uvs2{uvs2_}, colors32{colors32_}, triangles{triangles_}, material{material_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static private readonly UnityEngine.Color32 s_DefaultColor
    static ::UnityEngine::Color32 _get_s_DefaultColor();
    // Set static field: static private readonly UnityEngine.Color32 s_DefaultColor
    static void _set_s_DefaultColor(::UnityEngine::Color32 value);
    // Get static field: static private readonly UnityEngine.Vector3 s_DefaultNormal
    static ::UnityEngine::Vector3 _get_s_DefaultNormal();
    // Set static field: static private readonly UnityEngine.Vector3 s_DefaultNormal
    static void _set_s_DefaultNormal(::UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
    static ::UnityEngine::Vector4 _get_s_DefaultTangent();
    // Set static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
    static void _set_s_DefaultTangent(::UnityEngine::Vector4 value);
    // Get static field: static private readonly UnityEngine.Bounds s_DefaultBounds
    static ::UnityEngine::Bounds _get_s_DefaultBounds();
    // Set static field: static private readonly UnityEngine.Bounds s_DefaultBounds
    static void _set_s_DefaultBounds(::UnityEngine::Bounds value);
    // Get instance field reference: public UnityEngine.Mesh mesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_mesh();
    // Get instance field reference: public System.Int32 vertexCount
    [[deprecated("Use field access instead!")]] int& dyn_vertexCount();
    // Get instance field reference: public UnityEngine.Vector3[] vertices
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_vertices();
    // Get instance field reference: public UnityEngine.Vector3[] normals
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_normals();
    // Get instance field reference: public UnityEngine.Vector4[] tangents
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector4>& dyn_tangents();
    // Get instance field reference: public UnityEngine.Vector2[] uvs0
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector2>& dyn_uvs0();
    // Get instance field reference: public UnityEngine.Vector2[] uvs2
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector2>& dyn_uvs2();
    // Get instance field reference: public UnityEngine.Color32[] colors32
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Color32>& dyn_colors32();
    // Get instance field reference: public System.Int32[] triangles
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_triangles();
    // Get instance field reference: public UnityEngine.Material material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_material();
    // public System.Void .ctor(UnityEngine.Mesh mesh, System.Int32 size)
    // Offset: 0x53999FC
    TMP_MeshInfo(::UnityEngine::Mesh* mesh, int size);
    // public System.Void .ctor(UnityEngine.Mesh mesh, System.Int32 size, System.Boolean isVolumetric)
    // Offset: 0x5399F98
    TMP_MeshInfo(::UnityEngine::Mesh* mesh, int size, bool isVolumetric);
    // public System.Void ResizeMeshInfo(System.Int32 size)
    // Offset: 0x539A7CC
    void ResizeMeshInfo(int size);
    // public System.Void ResizeMeshInfo(System.Int32 size, System.Boolean isVolumetric)
    // Offset: 0x539AC40
    void ResizeMeshInfo(int size, bool isVolumetric);
    // public System.Void Clear()
    // Offset: 0x539B518
    void Clear();
    // public System.Void Clear(System.Boolean uploadChanges)
    // Offset: 0x539B5BC
    void Clear(bool uploadChanges);
    // public System.Void ClearUnusedVertices()
    // Offset: 0x539B6F4
    void ClearUnusedVertices();
    // public System.Void ClearUnusedVertices(System.Int32 startIndex)
    // Offset: 0x539B730
    void ClearUnusedVertices(int startIndex);
    // public System.Void ClearUnusedVertices(System.Int32 startIndex, System.Boolean updateMesh)
    // Offset: 0x539B764
    void ClearUnusedVertices(int startIndex, bool updateMesh);
    // public System.Void SortGeometry(TMPro.VertexSortingOrder order)
    // Offset: 0x539B828
    void SortGeometry(::TMPro::VertexSortingOrder order);
    // public System.Void SortGeometry(System.Collections.Generic.IList`1<System.Int32> sortingOrder)
    // Offset: 0x539BE2C
    void SortGeometry(::System::Collections::Generic::IList_1<int>* sortingOrder);
    // public System.Void SwapVertexData(System.Int32 src, System.Int32 dst)
    // Offset: 0x539B8A0
    void SwapVertexData(int src, int dst);
    // static private System.Void .cctor()
    // Offset: 0x539C000
    static void _cctor();
  }; // TMPro.TMP_MeshInfo
  #pragma pack(pop)
  static check_size<sizeof(TMP_MeshInfo), 72 + sizeof(::UnityEngine::Material*)> __TMPro_TMP_MeshInfoSizeCheck;
  static_assert(sizeof(TMP_MeshInfo) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_MeshInfo::TMP_MeshInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_MeshInfo::TMP_MeshInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_MeshInfo::ResizeMeshInfo
// Il2CppName: ResizeMeshInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_MeshInfo::*)(int)>(&TMPro::TMP_MeshInfo::ResizeMeshInfo)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MeshInfo), "ResizeMeshInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MeshInfo::ResizeMeshInfo
// Il2CppName: ResizeMeshInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_MeshInfo::*)(int, bool)>(&TMPro::TMP_MeshInfo::ResizeMeshInfo)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isVolumetric = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MeshInfo), "ResizeMeshInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size, isVolumetric});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MeshInfo::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_MeshInfo::*)()>(&TMPro::TMP_MeshInfo::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MeshInfo), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MeshInfo::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_MeshInfo::*)(bool)>(&TMPro::TMP_MeshInfo::Clear)> {
  static const MethodInfo* get() {
    static auto* uploadChanges = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MeshInfo), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uploadChanges});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MeshInfo::ClearUnusedVertices
// Il2CppName: ClearUnusedVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_MeshInfo::*)()>(&TMPro::TMP_MeshInfo::ClearUnusedVertices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MeshInfo), "ClearUnusedVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MeshInfo::ClearUnusedVertices
// Il2CppName: ClearUnusedVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_MeshInfo::*)(int)>(&TMPro::TMP_MeshInfo::ClearUnusedVertices)> {
  static const MethodInfo* get() {
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MeshInfo), "ClearUnusedVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startIndex});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MeshInfo::ClearUnusedVertices
// Il2CppName: ClearUnusedVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_MeshInfo::*)(int, bool)>(&TMPro::TMP_MeshInfo::ClearUnusedVertices)> {
  static const MethodInfo* get() {
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* updateMesh = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MeshInfo), "ClearUnusedVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startIndex, updateMesh});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MeshInfo::SortGeometry
// Il2CppName: SortGeometry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_MeshInfo::*)(::TMPro::VertexSortingOrder)>(&TMPro::TMP_MeshInfo::SortGeometry)> {
  static const MethodInfo* get() {
    static auto* order = &::il2cpp_utils::GetClassFromName("TMPro", "VertexSortingOrder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MeshInfo), "SortGeometry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{order});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MeshInfo::SortGeometry
// Il2CppName: SortGeometry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_MeshInfo::*)(::System::Collections::Generic::IList_1<int>*)>(&TMPro::TMP_MeshInfo::SortGeometry)> {
  static const MethodInfo* get() {
    static auto* sortingOrder = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MeshInfo), "SortGeometry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sortingOrder});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MeshInfo::SwapVertexData
// Il2CppName: SwapVertexData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_MeshInfo::*)(int, int)>(&TMPro::TMP_MeshInfo::SwapVertexData)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dst = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MeshInfo), "SwapVertexData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MeshInfo::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_MeshInfo::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MeshInfo), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
