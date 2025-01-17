// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.Shapes.Shape
#include "UnityEngine/ProBuilder/Shapes/Shape.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Bounds
  struct Bounds;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Shapes
namespace UnityEngine::ProBuilder::Shapes {
  // Forward declaring type: Cube
  class Cube;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Cube);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Cube*, "UnityEngine.ProBuilder.Shapes", "Cube");
// Type namespace: UnityEngine.ProBuilder.Shapes
namespace UnityEngine::ProBuilder::Shapes {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Shapes.Cube
  // [TokenAttribute] Offset: FFFFFFFF
  // [ShapeAttribute] Offset: FFFFFFFF
  class Cube : public ::UnityEngine::ProBuilder::Shapes::Shape {
    public:
    // Get static field: static private readonly UnityEngine.Vector3[] k_CubeVertices
    static ::ArrayW<::UnityEngine::Vector3> _get_k_CubeVertices();
    // Set static field: static private readonly UnityEngine.Vector3[] k_CubeVertices
    static void _set_k_CubeVertices(::ArrayW<::UnityEngine::Vector3> value);
    // Get static field: static private readonly System.Int32[] k_CubeTriangles
    static ::ArrayW<int> _get_k_CubeTriangles();
    // Set static field: static private readonly System.Int32[] k_CubeTriangles
    static void _set_k_CubeTriangles(::ArrayW<int> value);
    // static private System.Void .cctor()
    // Offset: 0x51ECB08
    static void _cctor();
    // public override System.Void CopyShape(UnityEngine.ProBuilder.Shapes.Shape shape)
    // Offset: 0x51EC8F0
    // Implemented from: UnityEngine.ProBuilder.Shapes.Shape
    // Base method: System.Void Shape::CopyShape(UnityEngine.ProBuilder.Shapes.Shape shape)
    void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);
    // public override UnityEngine.Bounds RebuildMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Vector3 size, UnityEngine.Quaternion rotation)
    // Offset: 0x51EC8F4
    // Implemented from: UnityEngine.ProBuilder.Shapes.Shape
    // Base method: UnityEngine.Bounds Shape::RebuildMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Vector3 size, UnityEngine.Quaternion rotation)
    ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x51ECB00
    // Implemented from: UnityEngine.ProBuilder.Shapes.Shape
    // Base method: System.Void Shape::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Cube* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Shapes::Cube::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Cube*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.Shapes.Cube
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Shapes::Cube::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::Shapes::Cube::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Shapes::Cube*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Shapes::Cube::CopyShape
// Il2CppName: CopyShape
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Shapes::Cube::*)(::UnityEngine::ProBuilder::Shapes::Shape*)>(&UnityEngine::ProBuilder::Shapes::Cube::CopyShape)> {
  static const MethodInfo* get() {
    static auto* shape = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Shapes", "Shape")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Shapes::Cube*), "CopyShape", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shape});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Shapes::Cube::RebuildMesh
// Il2CppName: RebuildMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (UnityEngine::ProBuilder::Shapes::Cube::*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&UnityEngine::ProBuilder::Shapes::Cube::RebuildMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Shapes::Cube*), "RebuildMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, size, rotation});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Shapes::Cube::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
