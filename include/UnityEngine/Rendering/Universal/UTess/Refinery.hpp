// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Mathematics.float2
#include "Unity/Mathematics/float2.hpp"
// Including type: Unity.Mathematics.int2
#include "Unity/Mathematics/int2.hpp"
// Including type: UnityEngine.Rendering.Universal.UTess.UEncroachingSegment
#include "UnityEngine/Rendering/Universal/UTess/UEncroachingSegment.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal::UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Forward declaring type: UTriangle
  struct UTriangle;
  // Forward declaring type: UCircle
  struct UCircle;
}
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
  // Forward declaring type: Refinery
  struct Refinery;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UTess::Refinery, "UnityEngine.Rendering.Universal.UTess", "Refinery");
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.UTess.Refinery
  // [TokenAttribute] Offset: FFFFFFFF
  struct Refinery/*, public ::System::ValueType*/ {
    public:
    // Creating value type constructor for type: Refinery
    constexpr Refinery() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static private readonly System.Single kMinAreaFactor
    static float _get_kMinAreaFactor();
    // Set static field: static private readonly System.Single kMinAreaFactor
    static void _set_kMinAreaFactor(float value);
    // Get static field: static private readonly System.Single kMaxAreaFactor
    static float _get_kMaxAreaFactor();
    // Set static field: static private readonly System.Single kMaxAreaFactor
    static void _set_kMaxAreaFactor(float value);
    // Get static field: static private readonly System.Int32 kMaxSteinerCount
    static int _get_kMaxSteinerCount();
    // Set static field: static private readonly System.Int32 kMaxSteinerCount
    static void _set_kMaxSteinerCount(int value);
    // static private System.Boolean RequiresRefining(UnityEngine.Rendering.Universal.UTess.UTriangle tri, System.Single maxArea)
    // Offset: 0x531D328
    static bool RequiresRefining(::UnityEngine::Rendering::Universal::UTess::UTriangle tri, float maxArea);
    // static private System.Void FetchEncroachedSegments(Unity.Collections.NativeArray`1<Unity.Mathematics.float2> pgPoints, System.Int32 pgPointCount, Unity.Collections.NativeArray`1<Unity.Mathematics.int2> pgEdges, System.Int32 pgEdgeCount, ref Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.UTess.UEncroachingSegment> encroach, ref System.Int32 encroachCount, UnityEngine.Rendering.Universal.UTess.UCircle c)
    // Offset: 0x531D338
    static void FetchEncroachedSegments(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> pgPoints, int pgPointCount, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2> pgEdges, int pgEdgeCount, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::UTess::UEncroachingSegment>> encroach, ByRef<int> encroachCount, ::UnityEngine::Rendering::Universal::UTess::UCircle c);
    // static private System.Void InsertVertex(ref Unity.Collections.NativeArray`1<Unity.Mathematics.float2> pgPoints, ref System.Int32 pgPointCount, Unity.Mathematics.float2 newVertex, ref System.Int32 nid)
    // Offset: 0x531D4E8
    static void InsertVertex(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>> pgPoints, ByRef<int> pgPointCount, ::Unity::Mathematics::float2 newVertex, ByRef<int> nid);
    // static private System.Int32 FindSegment(Unity.Collections.NativeArray`1<Unity.Mathematics.float2> pgPoints, System.Int32 pgPointCount, Unity.Collections.NativeArray`1<Unity.Mathematics.int2> pgEdges, System.Int32 pgEdgeCount, UnityEngine.Rendering.Universal.UTess.UEncroachingSegment es)
    // Offset: 0x531D50C
    static int FindSegment(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> pgPoints, int pgPointCount, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2> pgEdges, int pgEdgeCount, ::UnityEngine::Rendering::Universal::UTess::UEncroachingSegment es);
    // static private System.Void SplitSegments(ref Unity.Collections.NativeArray`1<Unity.Mathematics.float2> pgPoints, ref System.Int32 pgPointCount, ref Unity.Collections.NativeArray`1<Unity.Mathematics.int2> pgEdges, ref System.Int32 pgEdgeCount, UnityEngine.Rendering.Universal.UTess.UEncroachingSegment es)
    // Offset: 0x531D590
    static void SplitSegments(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>> pgPoints, ByRef<int> pgPointCount, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>> pgEdges, ByRef<int> pgEdgeCount, ::UnityEngine::Rendering::Universal::UTess::UEncroachingSegment es);
    // static System.Boolean Condition(Unity.Collections.Allocator allocator, System.Single factorArea, System.Single targetArea, ref Unity.Collections.NativeArray`1<Unity.Mathematics.float2> pgPoints, ref System.Int32 pgPointCount, ref Unity.Collections.NativeArray`1<Unity.Mathematics.int2> pgEdges, ref System.Int32 pgEdgeCount, ref Unity.Collections.NativeArray`1<Unity.Mathematics.float2> vertices, ref System.Int32 vertexCount, ref Unity.Collections.NativeArray`1<System.Int32> indices, ref System.Int32 indexCount, ref System.Single maxArea)
    // Offset: 0x531D784
    static bool Condition(::Unity::Collections::Allocator allocator, float factorArea, float targetArea, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>> pgPoints, ByRef<int> pgPointCount, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>> pgEdges, ByRef<int> pgEdgeCount, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>> vertices, ByRef<int> vertexCount, ByRef<::Unity::Collections::NativeArray_1<int>> indices, ByRef<int> indexCount, ByRef<float> maxArea);
    // static private System.Void .cctor()
    // Offset: 0x531DC24
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.UTess.Refinery
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::Refinery::RequiresRefining
// Il2CppName: RequiresRefining
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::UTess::UTriangle, float)>(&UnityEngine::Rendering::Universal::UTess::Refinery::RequiresRefining)> {
  static const MethodInfo* get() {
    static auto* tri = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.UTess", "UTriangle")->byval_arg;
    static auto* maxArea = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::Refinery), "RequiresRefining", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tri, maxArea});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::Refinery::FetchEncroachedSegments
// Il2CppName: FetchEncroachedSegments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>, int, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>, int, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::UTess::UEncroachingSegment>>, ByRef<int>, ::UnityEngine::Rendering::Universal::UTess::UCircle)>(&UnityEngine::Rendering::Universal::UTess::Refinery::FetchEncroachedSegments)> {
  static const MethodInfo* get() {
    static auto* pgPoints = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")})->byval_arg;
    static auto* pgPointCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pgEdges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int2")})->byval_arg;
    static auto* pgEdgeCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* encroach = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.UTess", "UEncroachingSegment")})->this_arg;
    static auto* encroachCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.UTess", "UCircle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::Refinery), "FetchEncroachedSegments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pgPoints, pgPointCount, pgEdges, pgEdgeCount, encroach, encroachCount, c});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::Refinery::InsertVertex
// Il2CppName: InsertVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>>, ByRef<int>, ::Unity::Mathematics::float2, ByRef<int>)>(&UnityEngine::Rendering::Universal::UTess::Refinery::InsertVertex)> {
  static const MethodInfo* get() {
    static auto* pgPoints = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")})->this_arg;
    static auto* pgPointCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* newVertex = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")->byval_arg;
    static auto* nid = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::Refinery), "InsertVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pgPoints, pgPointCount, newVertex, nid});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::Refinery::FindSegment
// Il2CppName: FindSegment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>, int, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>, int, ::UnityEngine::Rendering::Universal::UTess::UEncroachingSegment)>(&UnityEngine::Rendering::Universal::UTess::Refinery::FindSegment)> {
  static const MethodInfo* get() {
    static auto* pgPoints = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")})->byval_arg;
    static auto* pgPointCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pgEdges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int2")})->byval_arg;
    static auto* pgEdgeCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* es = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.UTess", "UEncroachingSegment")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::Refinery), "FindSegment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pgPoints, pgPointCount, pgEdges, pgEdgeCount, es});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::Refinery::SplitSegments
// Il2CppName: SplitSegments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>>, ByRef<int>, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>>, ByRef<int>, ::UnityEngine::Rendering::Universal::UTess::UEncroachingSegment)>(&UnityEngine::Rendering::Universal::UTess::Refinery::SplitSegments)> {
  static const MethodInfo* get() {
    static auto* pgPoints = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")})->this_arg;
    static auto* pgPointCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pgEdges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int2")})->this_arg;
    static auto* pgEdgeCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* es = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.UTess", "UEncroachingSegment")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::Refinery), "SplitSegments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pgPoints, pgPointCount, pgEdges, pgEdgeCount, es});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::Refinery::Condition
// Il2CppName: Condition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Collections::Allocator, float, float, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>>, ByRef<int>, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>>, ByRef<int>, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>>, ByRef<int>, ByRef<::Unity::Collections::NativeArray_1<int>>, ByRef<int>, ByRef<float>)>(&UnityEngine::Rendering::Universal::UTess::Refinery::Condition)> {
  static const MethodInfo* get() {
    static auto* allocator = &::il2cpp_utils::GetClassFromName("Unity.Collections", "Allocator")->byval_arg;
    static auto* factorArea = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* targetArea = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pgPoints = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")})->this_arg;
    static auto* pgPointCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pgEdges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int2")})->this_arg;
    static auto* pgEdgeCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")})->this_arg;
    static auto* vertexCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* indices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->this_arg;
    static auto* indexCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* maxArea = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::Refinery), "Condition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{allocator, factorArea, targetArea, pgPoints, pgPointCount, pgEdges, pgEdgeCount, vertices, vertexCount, indices, indexCount, maxArea});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::Refinery::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::UTess::Refinery::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::Refinery), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};