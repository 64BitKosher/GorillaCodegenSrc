// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Mathematics.int4
#include "Unity/Mathematics/int4.hpp"
// Including type: UnityEngine.Rendering.Universal.UTess.UTriangle
#include "UnityEngine/Rendering/Universal/UTess/UTriangle.hpp"
// Including type: Unity.Mathematics.int2
#include "Unity/Mathematics/int2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: NativeArray`1<T>
  template<typename T>
  struct NativeArray_1;
  // Forward declaring type: Allocator
  struct Allocator;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Forward declaring type: Smoothen
  struct Smoothen;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UTess::Smoothen, "UnityEngine.Rendering.Universal.UTess", "Smoothen");
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.UTess.Smoothen
  // [TokenAttribute] Offset: FFFFFFFF
  struct Smoothen/*, public ::System::ValueType*/ {
    public:
    // Creating value type constructor for type: Smoothen
    constexpr Smoothen() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static private readonly System.Single kMaxAreaTolerance
    static float _get_kMaxAreaTolerance();
    // Set static field: static private readonly System.Single kMaxAreaTolerance
    static void _set_kMaxAreaTolerance(float value);
    // Get static field: static private readonly System.Single kMaxEdgeTolerance
    static float _get_kMaxEdgeTolerance();
    // Set static field: static private readonly System.Single kMaxEdgeTolerance
    static void _set_kMaxEdgeTolerance(float value);
    // static private System.Void RefineEdges(ref Unity.Collections.NativeArray`1<Unity.Mathematics.int4> refinedEdges, ref Unity.Collections.NativeArray`1<Unity.Mathematics.int4> delaEdges, ref System.Int32 delaEdgeCount, ref Unity.Collections.NativeArray`1<Unity.Mathematics.int4> voronoiEdges)
    // Offset: 0x531DC7C
    static void RefineEdges(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int4>> refinedEdges, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int4>> delaEdges, ByRef<int> delaEdgeCount, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int4>> voronoiEdges);
    // static private System.Void GetAffectingEdges(System.Int32 pointIndex, Unity.Collections.NativeArray`1<Unity.Mathematics.int4> edges, System.Int32 edgeCount, ref Unity.Collections.NativeArray`1<System.Int32> resultSet, ref Unity.Collections.NativeArray`1<System.Int32> checkSet, ref System.Int32 resultCount)
    // Offset: 0x531DDF8
    static void GetAffectingEdges(int pointIndex, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int4> edges, int edgeCount, ByRef<::Unity::Collections::NativeArray_1<int>> resultSet, ByRef<::Unity::Collections::NativeArray_1<int>> checkSet, ByRef<int> resultCount);
    // static private System.Void CentroidByPoints(System.Int32 triIndex, Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.UTess.UTriangle> triangles, ref Unity.Collections.NativeArray`1<System.Int32> centroidTris, ref System.Int32 centroidCount, ref Unity.Mathematics.float2 aggregate, ref Unity.Mathematics.float2 point)
    // Offset: 0x531DE58
    static void CentroidByPoints(int triIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::UTess::UTriangle> triangles, ByRef<::Unity::Collections::NativeArray_1<int>> centroidTris, ByRef<int> centroidCount, ByRef<::Unity::Mathematics::float2> aggregate, ByRef<::Unity::Mathematics::float2> point);
    // static private System.Void CentroidByPolygon(Unity.Mathematics.int4 e, Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.UTess.UTriangle> triangles, ref Unity.Mathematics.float2 centroid, ref System.Single area, ref System.Single distance)
    // Offset: 0x531DEC4
    static void CentroidByPolygon(::Unity::Mathematics::int4 e, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::UTess::UTriangle> triangles, ByRef<::Unity::Mathematics::float2> centroid, ByRef<float> area, ByRef<float> distance);
    // static private System.Boolean ConnectTriangles(ref Unity.Collections.NativeArray`1<Unity.Mathematics.int4> connectedTri, ref Unity.Collections.NativeArray`1<System.Int32> affectEdges, ref Unity.Collections.NativeArray`1<System.Int32> checkSet, Unity.Collections.NativeArray`1<Unity.Mathematics.int4> voronoiEdges, System.Int32 triangleCount)
    // Offset: 0x531DFCC
    static bool ConnectTriangles(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int4>> connectedTri, ByRef<::Unity::Collections::NativeArray_1<int>> affectEdges, ByRef<::Unity::Collections::NativeArray_1<int>> checkSet, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int4> voronoiEdges, int triangleCount);
    // static System.Boolean Condition(Unity.Collections.Allocator allocator, ref Unity.Collections.NativeArray`1<Unity.Mathematics.float2> pgPoints, System.Int32 pgPointCount, Unity.Collections.NativeArray`1<Unity.Mathematics.int2> pgEdges, System.Int32 pgEdgeCount, ref Unity.Collections.NativeArray`1<Unity.Mathematics.float2> vertices, ref System.Int32 vertexCount, ref Unity.Collections.NativeArray`1<System.Int32> indices, ref System.Int32 indexCount)
    // Offset: 0x531E0E4
    static bool Condition(::Unity::Collections::Allocator allocator, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>> pgPoints, int pgPointCount, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2> pgEdges, int pgEdgeCount, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>> vertices, ByRef<int> vertexCount, ByRef<::Unity::Collections::NativeArray_1<int>> indices, ByRef<int> indexCount);
    // static private System.Void .cctor()
    // Offset: 0x531E78C
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.UTess.Smoothen
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::Smoothen::RefineEdges
// Il2CppName: RefineEdges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int4>>, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int4>>, ByRef<int>, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int4>>)>(&UnityEngine::Rendering::Universal::UTess::Smoothen::RefineEdges)> {
  static const MethodInfo* get() {
    static auto* refinedEdges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int4")})->this_arg;
    static auto* delaEdges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int4")})->this_arg;
    static auto* delaEdgeCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* voronoiEdges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int4")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::Smoothen), "RefineEdges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{refinedEdges, delaEdges, delaEdgeCount, voronoiEdges});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::Smoothen::GetAffectingEdges
// Il2CppName: GetAffectingEdges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int4>, int, ByRef<::Unity::Collections::NativeArray_1<int>>, ByRef<::Unity::Collections::NativeArray_1<int>>, ByRef<int>)>(&UnityEngine::Rendering::Universal::UTess::Smoothen::GetAffectingEdges)> {
  static const MethodInfo* get() {
    static auto* pointIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int4")})->byval_arg;
    static auto* edgeCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* resultSet = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->this_arg;
    static auto* checkSet = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->this_arg;
    static auto* resultCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::Smoothen), "GetAffectingEdges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointIndex, edges, edgeCount, resultSet, checkSet, resultCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::Smoothen::CentroidByPoints
// Il2CppName: CentroidByPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::UTess::UTriangle>, ByRef<::Unity::Collections::NativeArray_1<int>>, ByRef<int>, ByRef<::Unity::Mathematics::float2>, ByRef<::Unity::Mathematics::float2>)>(&UnityEngine::Rendering::Universal::UTess::Smoothen::CentroidByPoints)> {
  static const MethodInfo* get() {
    static auto* triIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* triangles = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.UTess", "UTriangle")})->byval_arg;
    static auto* centroidTris = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->this_arg;
    static auto* centroidCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* aggregate = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")->this_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::Smoothen), "CentroidByPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{triIndex, triangles, centroidTris, centroidCount, aggregate, point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::Smoothen::CentroidByPolygon
// Il2CppName: CentroidByPolygon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Mathematics::int4, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::UTess::UTriangle>, ByRef<::Unity::Mathematics::float2>, ByRef<float>, ByRef<float>)>(&UnityEngine::Rendering::Universal::UTess::Smoothen::CentroidByPolygon)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int4")->byval_arg;
    static auto* triangles = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.UTess", "UTriangle")})->byval_arg;
    static auto* centroid = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")->this_arg;
    static auto* area = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::Smoothen), "CentroidByPolygon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e, triangles, centroid, area, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::Smoothen::ConnectTriangles
// Il2CppName: ConnectTriangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int4>>, ByRef<::Unity::Collections::NativeArray_1<int>>, ByRef<::Unity::Collections::NativeArray_1<int>>, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int4>, int)>(&UnityEngine::Rendering::Universal::UTess::Smoothen::ConnectTriangles)> {
  static const MethodInfo* get() {
    static auto* connectedTri = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int4")})->this_arg;
    static auto* affectEdges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->this_arg;
    static auto* checkSet = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->this_arg;
    static auto* voronoiEdges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int4")})->byval_arg;
    static auto* triangleCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::Smoothen), "ConnectTriangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectedTri, affectEdges, checkSet, voronoiEdges, triangleCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::Smoothen::Condition
// Il2CppName: Condition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Collections::Allocator, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>>, int, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>, int, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>>, ByRef<int>, ByRef<::Unity::Collections::NativeArray_1<int>>, ByRef<int>)>(&UnityEngine::Rendering::Universal::UTess::Smoothen::Condition)> {
  static const MethodInfo* get() {
    static auto* allocator = &::il2cpp_utils::GetClassFromName("Unity.Collections", "Allocator")->byval_arg;
    static auto* pgPoints = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")})->this_arg;
    static auto* pgPointCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pgEdges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int2")})->byval_arg;
    static auto* pgEdgeCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")})->this_arg;
    static auto* vertexCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* indices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->this_arg;
    static auto* indexCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::Smoothen), "Condition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{allocator, pgPoints, pgPointCount, pgEdges, pgEdgeCount, vertices, vertexCount, indices, indexCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::Smoothen::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::UTess::Smoothen::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::Smoothen), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
