// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRScenePlaneMeshFilter
#include "GlobalNamespace/OVRScenePlaneMeshFilter.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Jobs.IJob
#include "Unity/Jobs/IJob.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRScenePlaneMeshFilter::TriangulateBoundaryJob, "", "OVRScenePlaneMeshFilter/TriangulateBoundaryJob");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRScenePlaneMeshFilter/TriangulateBoundaryJob
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRScenePlaneMeshFilter::TriangulateBoundaryJob/*, public ::System::ValueType, public ::Unity::Jobs::IJob*/ {
    public:
    // Nested type: ::GlobalNamespace::OVRScenePlaneMeshFilter::TriangulateBoundaryJob::NList
    struct NList;
    public:
    // public Unity.Collections.NativeArray`1<UnityEngine.Vector2> Boundary
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> Boundary;
    // public Unity.Collections.NativeArray`1<System.Int32> Triangles
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::Unity::Collections::NativeArray_1<int> Triangles;
    public:
    // Creating value type constructor for type: TriangulateBoundaryJob
    constexpr TriangulateBoundaryJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> Boundary_ = {}, ::Unity::Collections::NativeArray_1<int> Triangles_ = {}) noexcept : Boundary{Boundary_}, Triangles{Triangles_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Unity::Jobs::IJob
    operator ::Unity::Jobs::IJob() noexcept {
      return *reinterpret_cast<::Unity::Jobs::IJob*>(this);
    }
    // Get instance field reference: public Unity.Collections.NativeArray`1<UnityEngine.Vector2> Boundary
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& dyn_Boundary();
    // Get instance field reference: public Unity.Collections.NativeArray`1<System.Int32> Triangles
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<int>& dyn_Triangles();
    // public System.Void Execute()
    // Offset: 0x4924CDC
    void Execute();
    // static private System.Single Cross(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
    // Offset: 0x492512C
    static float Cross(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);
    // static private System.Boolean PointInTriangle(UnityEngine.Vector2 p, UnityEngine.Vector2 a, UnityEngine.Vector2 b, UnityEngine.Vector2 c)
    // Offset: 0x492513C
    static bool PointInTriangle(::UnityEngine::Vector2 p, ::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::UnityEngine::Vector2 c);
  }; // OVRScenePlaneMeshFilter/TriangulateBoundaryJob
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRScenePlaneMeshFilter::TriangulateBoundaryJob::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScenePlaneMeshFilter::TriangulateBoundaryJob::*)()>(&GlobalNamespace::OVRScenePlaneMeshFilter::TriangulateBoundaryJob::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRScenePlaneMeshFilter::TriangulateBoundaryJob), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRScenePlaneMeshFilter::TriangulateBoundaryJob::Cross
// Il2CppName: Cross
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&GlobalNamespace::OVRScenePlaneMeshFilter::TriangulateBoundaryJob::Cross)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRScenePlaneMeshFilter::TriangulateBoundaryJob), "Cross", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRScenePlaneMeshFilter::TriangulateBoundaryJob::PointInTriangle
// Il2CppName: PointInTriangle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&GlobalNamespace::OVRScenePlaneMeshFilter::TriangulateBoundaryJob::PointInTriangle)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRScenePlaneMeshFilter::TriangulateBoundaryJob), "PointInTriangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, a, b, c});
  }
};
