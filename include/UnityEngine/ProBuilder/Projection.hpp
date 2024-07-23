// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: AutoUnwrapSettings
  struct AutoUnwrapSettings;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: SortMethod
  struct SortMethod;
  // Forward declaring type: ProjectionAxis
  struct ProjectionAxis;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Plane
  struct Plane;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Projection
  class Projection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::Projection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Projection*, "UnityEngine.ProBuilder", "Projection");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Projection
  // [TokenAttribute] Offset: FFFFFFFF
  class Projection : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::ProBuilder::Projection::$$c
    class $$c;
    // static public UnityEngine.Vector2[] PlanarProject(System.Collections.Generic.IList`1<UnityEngine.Vector3> positions, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x51C63A8
    static ::ArrayW<::UnityEngine::Vector2> PlanarProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::IList_1<int>* indexes);
    // static public UnityEngine.Vector2[] PlanarProject(System.Collections.Generic.IList`1<UnityEngine.Vector3> positions, System.Collections.Generic.IList`1<System.Int32> indexes, UnityEngine.Vector3 direction)
    // Offset: 0x51C6D4C
    static ::ArrayW<::UnityEngine::Vector2> PlanarProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::IList_1<int>* indexes, ::UnityEngine::Vector3 direction);
    // static System.Void PlanarProject(System.Collections.Generic.IList`1<UnityEngine.Vector3> positions, System.Collections.Generic.IList`1<System.Int32> indexes, UnityEngine.Vector3 direction, System.Collections.Generic.List`1<UnityEngine.Vector2> results)
    // Offset: 0x51C6F04
    static void PlanarProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::IList_1<int>* indexes, ::UnityEngine::Vector3 direction, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* results);
    // static System.Void PlanarProject(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 textureGroup, UnityEngine.ProBuilder.AutoUnwrapSettings unwrapSettings)
    // Offset: 0x51C7870
    static void PlanarProject(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int textureGroup, ::UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings);
    // static System.Void PlanarProject(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face, UnityEngine.Vector3 projection)
    // Offset: 0x51C7CAC
    static void PlanarProject(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Vector3 projection);
    // static UnityEngine.Vector2[] SphericalProject(System.Collections.Generic.IList`1<UnityEngine.Vector3> vertices, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x51C807C
    static ::ArrayW<::UnityEngine::Vector2> SphericalProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* vertices, ::System::Collections::Generic::IList_1<int>* indexes);
    // static System.Collections.Generic.IList`1<UnityEngine.Vector2> Sort(System.Collections.Generic.IList`1<UnityEngine.Vector2> verts, UnityEngine.ProBuilder.SortMethod method)
    // Offset: 0x51C8438
    static ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* Sort(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* verts, ::UnityEngine::ProBuilder::SortMethod method);
    // static UnityEngine.Vector3 GetTangentToAxis(UnityEngine.ProBuilder.ProjectionAxis axis)
    // Offset: 0x51C77B4
    static ::UnityEngine::Vector3 GetTangentToAxis(::UnityEngine::ProBuilder::ProjectionAxis axis);
    // static UnityEngine.Vector3 ProjectionAxisToVector(UnityEngine.ProBuilder.ProjectionAxis axis)
    // Offset: 0x51C8920
    static ::UnityEngine::Vector3 ProjectionAxisToVector(::UnityEngine::ProBuilder::ProjectionAxis axis);
    // static UnityEngine.ProBuilder.ProjectionAxis VectorToProjectionAxis(UnityEngine.Vector3 direction)
    // Offset: 0x51C7694
    static ::UnityEngine::ProBuilder::ProjectionAxis VectorToProjectionAxis(::UnityEngine::Vector3 direction);
    // static public UnityEngine.Plane FindBestPlane(System.Collections.Generic.IList`1<UnityEngine.Vector3> points, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x51C63D0
    static ::UnityEngine::Plane FindBestPlane(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, ::System::Collections::Generic::IList_1<int>* indexes);
    // static UnityEngine.Plane FindBestPlane(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 textureGroup)
    // Offset: 0x51C8AC0
    static ::UnityEngine::Plane FindBestPlane(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int textureGroup);
  }; // UnityEngine.ProBuilder.Projection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::PlanarProject
// Il2CppName: PlanarProject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<int>*)>(&UnityEngine::ProBuilder::Projection::PlanarProject)> {
  static const MethodInfo* get() {
    static auto* positions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "PlanarProject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, indexes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::PlanarProject
// Il2CppName: PlanarProject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<int>*, ::UnityEngine::Vector3)>(&UnityEngine::ProBuilder::Projection::PlanarProject)> {
  static const MethodInfo* get() {
    static auto* positions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "PlanarProject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, indexes, direction});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::PlanarProject
// Il2CppName: PlanarProject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<int>*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*)>(&UnityEngine::ProBuilder::Projection::PlanarProject)> {
  static const MethodInfo* get() {
    static auto* positions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* results = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "PlanarProject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, indexes, direction, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::PlanarProject
// Il2CppName: PlanarProject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, int, ::UnityEngine::ProBuilder::AutoUnwrapSettings)>(&UnityEngine::ProBuilder::Projection::PlanarProject)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* textureGroup = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* unwrapSettings = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "AutoUnwrapSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "PlanarProject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, textureGroup, unwrapSettings});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::PlanarProject
// Il2CppName: PlanarProject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3)>(&UnityEngine::ProBuilder::Projection::PlanarProject)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    static auto* projection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "PlanarProject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, face, projection});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::SphericalProject
// Il2CppName: SphericalProject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<int>*)>(&UnityEngine::ProBuilder::Projection::SphericalProject)> {
  static const MethodInfo* get() {
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "SphericalProject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertices, indexes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::Sort
// Il2CppName: Sort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::UnityEngine::ProBuilder::SortMethod)>(&UnityEngine::ProBuilder::Projection::Sort)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "SortMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "Sort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts, method});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::GetTangentToAxis
// Il2CppName: GetTangentToAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::ProBuilder::ProjectionAxis)>(&UnityEngine::ProBuilder::Projection::GetTangentToAxis)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProjectionAxis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "GetTangentToAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::ProjectionAxisToVector
// Il2CppName: ProjectionAxisToVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::ProBuilder::ProjectionAxis)>(&UnityEngine::ProBuilder::Projection::ProjectionAxisToVector)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProjectionAxis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "ProjectionAxisToVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::VectorToProjectionAxis
// Il2CppName: VectorToProjectionAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ProjectionAxis (*)(::UnityEngine::Vector3)>(&UnityEngine::ProBuilder::Projection::VectorToProjectionAxis)> {
  static const MethodInfo* get() {
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "VectorToProjectionAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{direction});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::FindBestPlane
// Il2CppName: FindBestPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Plane (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<int>*)>(&UnityEngine::ProBuilder::Projection::FindBestPlane)> {
  static const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "FindBestPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, indexes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::FindBestPlane
// Il2CppName: FindBestPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Plane (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, int)>(&UnityEngine::ProBuilder::Projection::FindBestPlane)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* textureGroup = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "FindBestPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, textureGroup});
  }
};
