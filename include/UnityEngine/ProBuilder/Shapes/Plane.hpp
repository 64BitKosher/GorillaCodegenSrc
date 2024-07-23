// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.Shapes.Shape
#include "UnityEngine/ProBuilder/Shapes/Shape.hpp"
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
  // Forward declaring type: Plane
  class Plane;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Plane);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Plane*, "UnityEngine.ProBuilder.Shapes", "Plane");
// Type namespace: UnityEngine.ProBuilder.Shapes
namespace UnityEngine::ProBuilder::Shapes {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Shapes.Plane
  // [TokenAttribute] Offset: FFFFFFFF
  // [ShapeAttribute] Offset: FFFFFFFF
  class Plane : public ::UnityEngine::ProBuilder::Shapes::Shape {
    public:
    public:
    // private System.Int32 m_HeightSegments
    // Size: 0x4
    // Offset: 0x10
    int m_HeightSegments;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_WidthSegments
    // Size: 0x4
    // Offset: 0x14
    int m_WidthSegments;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 m_HeightSegments
    [[deprecated("Use field access instead!")]] int& dyn_m_HeightSegments();
    // Get instance field reference: private System.Int32 m_WidthSegments
    [[deprecated("Use field access instead!")]] int& dyn_m_WidthSegments();
    // public override System.Void CopyShape(UnityEngine.ProBuilder.Shapes.Shape shape)
    // Offset: 0x51EFE88
    // Implemented from: UnityEngine.ProBuilder.Shapes.Shape
    // Base method: System.Void Shape::CopyShape(UnityEngine.ProBuilder.Shapes.Shape shape)
    void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);
    // public override UnityEngine.Bounds RebuildMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Vector3 size, UnityEngine.Quaternion rotation)
    // Offset: 0x51EFF34
    // Implemented from: UnityEngine.ProBuilder.Shapes.Shape
    // Base method: UnityEngine.Bounds Shape::RebuildMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Vector3 size, UnityEngine.Quaternion rotation)
    ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x51F018C
    // Implemented from: UnityEngine.ProBuilder.Shapes.Shape
    // Base method: System.Void Shape::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Plane* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Shapes::Plane::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Plane*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.Shapes.Plane
  #pragma pack(pop)
  static check_size<sizeof(Plane), 20 + sizeof(int)> __UnityEngine_ProBuilder_Shapes_PlaneSizeCheck;
  static_assert(sizeof(Plane) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Shapes::Plane::CopyShape
// Il2CppName: CopyShape
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Shapes::Plane::*)(::UnityEngine::ProBuilder::Shapes::Shape*)>(&UnityEngine::ProBuilder::Shapes::Plane::CopyShape)> {
  static const MethodInfo* get() {
    static auto* shape = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Shapes", "Shape")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Shapes::Plane*), "CopyShape", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shape});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Shapes::Plane::RebuildMesh
// Il2CppName: RebuildMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (UnityEngine::ProBuilder::Shapes::Plane::*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&UnityEngine::ProBuilder::Shapes::Plane::RebuildMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Shapes::Plane*), "RebuildMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, size, rotation});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Shapes::Plane::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
