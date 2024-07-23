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
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Bounds
  struct Bounds;
  // Forward declaring type: Vector3
  struct Vector3;
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
  // Forward declaring type: Shape
  class Shape;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Shape);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Shape*, "UnityEngine.ProBuilder.Shapes", "Shape");
// Type namespace: UnityEngine.ProBuilder.Shapes
namespace UnityEngine::ProBuilder::Shapes {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Shapes.Shape
  // [TokenAttribute] Offset: FFFFFFFF
  class Shape : public ::Il2CppObject {
    public:
    // public UnityEngine.Bounds UpdateBounds(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Vector3 size, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
    // Offset: 0x51F18B0
    ::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds);
    // public UnityEngine.Bounds RebuildMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Vector3 size, UnityEngine.Quaternion rotation)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);
    // public System.Void CopyShape(UnityEngine.ProBuilder.Shapes.Shape shape)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);
    // protected System.Void .ctor()
    // Offset: 0x51EBA70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Shape* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Shapes::Shape::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Shape*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.Shapes.Shape
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Shapes::Shape::UpdateBounds
// Il2CppName: UpdateBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (UnityEngine::ProBuilder::Shapes::Shape::*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds)>(&UnityEngine::ProBuilder::Shapes::Shape::UpdateBounds)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* bounds = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Shapes::Shape*), "UpdateBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, size, rotation, bounds});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Shapes::Shape::RebuildMesh
// Il2CppName: RebuildMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (UnityEngine::ProBuilder::Shapes::Shape::*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&UnityEngine::ProBuilder::Shapes::Shape::RebuildMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Shapes::Shape*), "RebuildMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, size, rotation});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Shapes::Shape::CopyShape
// Il2CppName: CopyShape
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Shapes::Shape::*)(::UnityEngine::ProBuilder::Shapes::Shape*)>(&UnityEngine::ProBuilder::Shapes::Shape::CopyShape)> {
  static const MethodInfo* get() {
    static auto* shape = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Shapes", "Shape")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Shapes::Shape*), "CopyShape", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shape});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Shapes::Shape::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!