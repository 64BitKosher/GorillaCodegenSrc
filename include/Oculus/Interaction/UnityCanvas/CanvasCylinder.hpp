// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.UnityCanvas.CanvasMesh
#include "Oculus/Interaction/UnityCanvas/CanvasMesh.hpp"
// Including type: Oculus.Interaction.ICurvedPlane
#include "Oculus/Interaction/ICurvedPlane.hpp"
// Including type: Oculus.Interaction.Surfaces.ICylinderClipper
#include "Oculus/Interaction/Surfaces/ICylinderClipper.hpp"
// Including type: Oculus.Interaction.CylinderOrientation
#include "Oculus/Interaction/CylinderOrientation.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Surfaces
namespace Oculus::Interaction::Surfaces {
  // Forward declaring type: CylinderSegment
  struct CylinderSegment;
}
// Forward declaring namespace: Oculus::Interaction::UnityCanvas
namespace Oculus::Interaction::UnityCanvas {
  // Forward declaring type: CanvasRenderTexture
  class CanvasRenderTexture;
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: Cylinder
  class Cylinder;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Vector2Int
  struct Vector2Int;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.UnityCanvas
namespace Oculus::Interaction::UnityCanvas {
  // Forward declaring type: CanvasCylinder
  class CanvasCylinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::UnityCanvas::CanvasCylinder);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::UnityCanvas::CanvasCylinder*, "Oculus.Interaction.UnityCanvas", "CanvasCylinder");
// Type namespace: Oculus.Interaction.UnityCanvas
namespace Oculus::Interaction::UnityCanvas {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.UnityCanvas.CanvasCylinder
  // [TokenAttribute] Offset: FFFFFFFF
  class CanvasCylinder : public ::Oculus::Interaction::UnityCanvas::CanvasMesh/*, public ::Oculus::Interaction::ICurvedPlane, public ::Oculus::Interaction::Surfaces::ICylinderClipper*/ {
    public:
    // Writing base type padding for base size: 0x39 to desired offset: 0x40
    char ___base_padding[0x7] = {};
    // Nested type: ::Oculus::Interaction::UnityCanvas::CanvasCylinder::MeshGenerationSettings
    struct MeshGenerationSettings;
    // Nested type: ::Oculus::Interaction::UnityCanvas::CanvasCylinder::$$c__DisplayClass31_0
    struct $$c__DisplayClass31_0;
    // Size: 0xC
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Oculus.Interaction.UnityCanvas.CanvasCylinder/MeshGenerationSettings
    // [TokenAttribute] Offset: FFFFFFFF
    struct MeshGenerationSettings/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Single VerticesPerDegree
      // Size: 0x4
      // Offset: 0x0
      float VerticesPerDegree;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Int32 MaxHorizontalResolution
      // Size: 0x4
      // Offset: 0x4
      int MaxHorizontalResolution;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 MaxVerticalResolution
      // Size: 0x4
      // Offset: 0x8
      int MaxVerticalResolution;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: MeshGenerationSettings
      constexpr MeshGenerationSettings(float VerticesPerDegree_ = {}, int MaxHorizontalResolution_ = {}, int MaxVerticalResolution_ = {}) noexcept : VerticesPerDegree{VerticesPerDegree_}, MaxHorizontalResolution{MaxHorizontalResolution_}, MaxVerticalResolution{MaxVerticalResolution_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Single VerticesPerDegree
      [[deprecated("Use field access instead!")]] float& dyn_VerticesPerDegree();
      // Get instance field reference: public System.Int32 MaxHorizontalResolution
      [[deprecated("Use field access instead!")]] int& dyn_MaxHorizontalResolution();
      // Get instance field reference: public System.Int32 MaxVerticalResolution
      [[deprecated("Use field access instead!")]] int& dyn_MaxVerticalResolution();
    }; // Oculus.Interaction.UnityCanvas.CanvasCylinder/MeshGenerationSettings
    #pragma pack(pop)
    static check_size<sizeof(CanvasCylinder::MeshGenerationSettings), 8 + sizeof(int)> __Oculus_Interaction_UnityCanvas_CanvasCylinder_MeshGenerationSettingsSizeCheck;
    static_assert(sizeof(CanvasCylinder::MeshGenerationSettings) == 0xC);
    public:
    // private Oculus.Interaction.Cylinder _cylinder
    // Size: 0x8
    // Offset: 0x40
    ::Oculus::Interaction::Cylinder* cylinder;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Cylinder*) == 0x8);
    // private Oculus.Interaction.CylinderOrientation _orientation
    // Size: 0x4
    // Offset: 0x48
    ::Oculus::Interaction::CylinderOrientation orientation;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::CylinderOrientation) == 0x4);
    // private Oculus.Interaction.UnityCanvas.CanvasCylinder/MeshGenerationSettings _meshGeneration
    // Size: 0xC
    // Offset: 0x4C
    ::Oculus::Interaction::UnityCanvas::CanvasCylinder::MeshGenerationSettings meshGeneration;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::UnityCanvas::CanvasCylinder::MeshGenerationSettings) == 0xC);
    // private System.Single <ArcDegrees>k__BackingField
    // Size: 0x4
    // Offset: 0x58
    float ArcDegrees;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <Rotation>k__BackingField
    // Size: 0x4
    // Offset: 0x5C
    float Rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <Bottom>k__BackingField
    // Size: 0x4
    // Offset: 0x60
    float Bottom;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <Top>k__BackingField
    // Size: 0x4
    // Offset: 0x64
    float Top;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::ICurvedPlane
    operator ::Oculus::Interaction::ICurvedPlane() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::ICurvedPlane*>(this);
    }
    // Creating interface conversion operator: operator ::Oculus::Interaction::Surfaces::ICylinderClipper
    operator ::Oculus::Interaction::Surfaces::ICylinderClipper() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Surfaces::ICylinderClipper*>(this);
    }
    // static field const value: static public System.Int32 MIN_RESOLUTION
    static constexpr const int MIN_RESOLUTION = 2;
    // Get static field: static public System.Int32 MIN_RESOLUTION
    static int _get_MIN_RESOLUTION();
    // Set static field: static public System.Int32 MIN_RESOLUTION
    static void _set_MIN_RESOLUTION(int value);
    // Get instance field reference: private Oculus.Interaction.Cylinder _cylinder
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Cylinder*& dyn__cylinder();
    // Get instance field reference: private Oculus.Interaction.CylinderOrientation _orientation
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::CylinderOrientation& dyn__orientation();
    // Get instance field reference: private Oculus.Interaction.UnityCanvas.CanvasCylinder/MeshGenerationSettings _meshGeneration
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::UnityCanvas::CanvasCylinder::MeshGenerationSettings& dyn__meshGeneration();
    // Get instance field reference: private System.Single <ArcDegrees>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$ArcDegrees$k__BackingField();
    // Get instance field reference: private System.Single <Rotation>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$Rotation$k__BackingField();
    // Get instance field reference: private System.Single <Bottom>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$Bottom$k__BackingField();
    // Get instance field reference: private System.Single <Top>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$Top$k__BackingField();
    // public System.Single get_Radius()
    // Offset: 0x47DD690
    float get_Radius();
    // public Oculus.Interaction.Cylinder get_Cylinder()
    // Offset: 0x47DD6AC
    ::Oculus::Interaction::Cylinder* get_Cylinder();
    // public System.Single get_ArcDegrees()
    // Offset: 0x47DD6B4
    float get_ArcDegrees();
    // private System.Void set_ArcDegrees(System.Single value)
    // Offset: 0x47DD6BC
    void set_ArcDegrees(float value);
    // public System.Single get_Rotation()
    // Offset: 0x47DD6C4
    float get_Rotation();
    // private System.Void set_Rotation(System.Single value)
    // Offset: 0x47DD6CC
    void set_Rotation(float value);
    // public System.Single get_Bottom()
    // Offset: 0x47DD6D4
    float get_Bottom();
    // private System.Void set_Bottom(System.Single value)
    // Offset: 0x47DD6DC
    void set_Bottom(float value);
    // public System.Single get_Top()
    // Offset: 0x47DD6E4
    float get_Top();
    // private System.Void set_Top(System.Single value)
    // Offset: 0x47DD6EC
    void set_Top(float value);
    // private System.Single get_CylinderRelativeScale()
    // Offset: 0x47DD6F4
    float get_CylinderRelativeScale();
    // public System.Boolean GetCylinderSegment(out Oculus.Interaction.Surfaces.CylinderSegment segment)
    // Offset: 0x47DD74C
    bool GetCylinderSegment(ByRef<::Oculus::Interaction::Surfaces::CylinderSegment> segment);
    // private System.Void UpdateMeshPosition()
    // Offset: 0x47DDA28
    void UpdateMeshPosition();
    // private UnityEngine.Vector2 GetWorldSize()
    // Offset: 0x47DE6AC
    ::UnityEngine::Vector2 GetWorldSize();
    // private System.Void UpdateCurvedPlane()
    // Offset: 0x47DDFD0
    void UpdateCurvedPlane();
    // public System.Void InjectAllCanvasCylinder(Oculus.Interaction.UnityCanvas.CanvasRenderTexture canvasRenderTexture, UnityEngine.MeshFilter meshFilter, Oculus.Interaction.Cylinder cylinder, Oculus.Interaction.CylinderOrientation orientation)
    // Offset: 0x47DEBA8
    void InjectAllCanvasCylinder(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture* canvasRenderTexture, ::UnityEngine::MeshFilter* meshFilter, ::Oculus::Interaction::Cylinder* cylinder, ::Oculus::Interaction::CylinderOrientation orientation);
    // public System.Void InjectCylinder(Oculus.Interaction.Cylinder cylinder)
    // Offset: 0x47DEC30
    void InjectCylinder(::Oculus::Interaction::Cylinder* cylinder);
    // public System.Void InjectOrientation(Oculus.Interaction.CylinderOrientation orientation)
    // Offset: 0x47DEC38
    void InjectOrientation(::Oculus::Interaction::CylinderOrientation orientation);
    // private System.Void <Start>b__28_0()
    // Offset: 0x47DEC68
    void $Start$b__28_0();
    // private UnityEngine.Vector2Int <GenerateMesh>g__GetClampedResolution|31_0(System.Single arcMax, System.Single axisMax, ref Oculus.Interaction.UnityCanvas.CanvasCylinder/<>c__DisplayClass31_0 )
    // Offset: 0x47DE8D8
    ::UnityEngine::Vector2Int $GenerateMesh$g__GetClampedResolution_31_0(float arcMax, float axisMax, ByRef<::Oculus::Interaction::UnityCanvas::CanvasCylinder::$$c__DisplayClass31_0> param_2);
    // private UnityEngine.Vector3 <GenerateMesh>g__GetCurvedPoint|31_1(System.Single u, System.Single v, ref Oculus.Interaction.UnityCanvas.CanvasCylinder/<>c__DisplayClass31_0 )
    // Offset: 0x47DEAD4
    ::UnityEngine::Vector3 $GenerateMesh$g__GetCurvedPoint_31_1(float u, float v, ByRef<::Oculus::Interaction::UnityCanvas::CanvasCylinder::$$c__DisplayClass31_0> param_2);
    // protected override System.Void Start()
    // Offset: 0x47DD7B0
    // Implemented from: Oculus.Interaction.UnityCanvas.CanvasMesh
    // Base method: System.Void CanvasMesh::Start()
    void Start();
    // protected override System.Void UpdateImposter()
    // Offset: 0x47DD84C
    // Implemented from: Oculus.Interaction.UnityCanvas.CanvasMesh
    // Base method: System.Void CanvasMesh::UpdateImposter()
    void UpdateImposter();
    // protected override UnityEngine.Vector3 MeshInverseTransform(UnityEngine.Vector3 localPosition)
    // Offset: 0x47DE0B8
    // Implemented from: Oculus.Interaction.UnityCanvas.CanvasMesh
    // Base method: UnityEngine.Vector3 CanvasMesh::MeshInverseTransform(UnityEngine.Vector3 localPosition)
    ::UnityEngine::Vector3 MeshInverseTransform(::UnityEngine::Vector3 localPosition);
    // protected override System.Void GenerateMesh(out System.Collections.Generic.List`1<UnityEngine.Vector3> verts, out System.Collections.Generic.List`1<System.Int32> tris, out System.Collections.Generic.List`1<UnityEngine.Vector2> uvs)
    // Offset: 0x47DE0F4
    // Implemented from: Oculus.Interaction.UnityCanvas.CanvasMesh
    // Base method: System.Void CanvasMesh::GenerateMesh(out System.Collections.Generic.List`1<UnityEngine.Vector3> verts, out System.Collections.Generic.List`1<System.Int32> tris, out System.Collections.Generic.List`1<UnityEngine.Vector2> uvs)
    void GenerateMesh(ByRef<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> verts, ByRef<::System::Collections::Generic::List_1<int>*> tris, ByRef<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*> uvs);
    // public System.Void .ctor()
    // Offset: 0x47DEC40
    // Implemented from: Oculus.Interaction.UnityCanvas.CanvasMesh
    // Base method: System.Void CanvasMesh::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CanvasCylinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::UnityCanvas::CanvasCylinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CanvasCylinder*, creationType>()));
    }
  }; // Oculus.Interaction.UnityCanvas.CanvasCylinder
  #pragma pack(pop)
  static check_size<sizeof(CanvasCylinder), 100 + sizeof(float)> __Oculus_Interaction_UnityCanvas_CanvasCylinderSizeCheck;
  static_assert(sizeof(CanvasCylinder) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::UnityCanvas::CanvasCylinder::MeshGenerationSettings, "Oculus.Interaction.UnityCanvas", "CanvasCylinder/MeshGenerationSettings");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Radius
// Il2CppName: get_Radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Radius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "get_Radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Cylinder
// Il2CppName: get_Cylinder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Cylinder* (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Cylinder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "get_Cylinder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::get_ArcDegrees
// Il2CppName: get_ArcDegrees
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::get_ArcDegrees)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "get_ArcDegrees", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::set_ArcDegrees
// Il2CppName: set_ArcDegrees
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(float)>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::set_ArcDegrees)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "set_ArcDegrees", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Rotation
// Il2CppName: get_Rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "get_Rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::set_Rotation
// Il2CppName: set_Rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(float)>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::set_Rotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "set_Rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Bottom
// Il2CppName: get_Bottom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Bottom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "get_Bottom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::set_Bottom
// Il2CppName: set_Bottom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(float)>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::set_Bottom)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "set_Bottom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Top
// Il2CppName: get_Top
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Top)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "get_Top", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::set_Top
// Il2CppName: set_Top
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(float)>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::set_Top)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "set_Top", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::get_CylinderRelativeScale
// Il2CppName: get_CylinderRelativeScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::get_CylinderRelativeScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "get_CylinderRelativeScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::GetCylinderSegment
// Il2CppName: GetCylinderSegment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(ByRef<::Oculus::Interaction::Surfaces::CylinderSegment>)>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::GetCylinderSegment)> {
  static const MethodInfo* get() {
    static auto* segment = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "CylinderSegment")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "GetCylinderSegment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segment});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::UpdateMeshPosition
// Il2CppName: UpdateMeshPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::UpdateMeshPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "UpdateMeshPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::GetWorldSize
// Il2CppName: GetWorldSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::GetWorldSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "GetWorldSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::UpdateCurvedPlane
// Il2CppName: UpdateCurvedPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::UpdateCurvedPlane)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "UpdateCurvedPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::InjectAllCanvasCylinder
// Il2CppName: InjectAllCanvasCylinder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*, ::UnityEngine::MeshFilter*, ::Oculus::Interaction::Cylinder*, ::Oculus::Interaction::CylinderOrientation)>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::InjectAllCanvasCylinder)> {
  static const MethodInfo* get() {
    static auto* canvasRenderTexture = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.UnityCanvas", "CanvasRenderTexture")->byval_arg;
    static auto* meshFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "MeshFilter")->byval_arg;
    static auto* cylinder = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "Cylinder")->byval_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "CylinderOrientation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "InjectAllCanvasCylinder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canvasRenderTexture, meshFilter, cylinder, orientation});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::InjectCylinder
// Il2CppName: InjectCylinder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(::Oculus::Interaction::Cylinder*)>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::InjectCylinder)> {
  static const MethodInfo* get() {
    static auto* cylinder = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "Cylinder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "InjectCylinder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cylinder});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::InjectOrientation
// Il2CppName: InjectOrientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(::Oculus::Interaction::CylinderOrientation)>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::InjectOrientation)> {
  static const MethodInfo* get() {
    static auto* orientation = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "CylinderOrientation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "InjectOrientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{orientation});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::$Start$b__28_0
// Il2CppName: <Start>b__28_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::$Start$b__28_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "<Start>b__28_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::$GenerateMesh$g__GetClampedResolution_31_0
// Il2CppName: <GenerateMesh>g__GetClampedResolution|31_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(float, float, ByRef<::Oculus::Interaction::UnityCanvas::CanvasCylinder::$$c__DisplayClass31_0>)>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::$GenerateMesh$g__GetClampedResolution_31_0)> {
  static const MethodInfo* get() {
    static auto* arcMax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* axisMax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* param_2 = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.UnityCanvas", "CanvasCylinder/<>c__DisplayClass31_0")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "<GenerateMesh>g__GetClampedResolution|31_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arcMax, axisMax, param_2});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::$GenerateMesh$g__GetCurvedPoint_31_1
// Il2CppName: <GenerateMesh>g__GetCurvedPoint|31_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(float, float, ByRef<::Oculus::Interaction::UnityCanvas::CanvasCylinder::$$c__DisplayClass31_0>)>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::$GenerateMesh$g__GetCurvedPoint_31_1)> {
  static const MethodInfo* get() {
    static auto* u = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* param_2 = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.UnityCanvas", "CanvasCylinder/<>c__DisplayClass31_0")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "<GenerateMesh>g__GetCurvedPoint|31_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u, v, param_2});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::UpdateImposter
// Il2CppName: UpdateImposter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::UpdateImposter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "UpdateImposter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::MeshInverseTransform
// Il2CppName: MeshInverseTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(::UnityEngine::Vector3)>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::MeshInverseTransform)> {
  static const MethodInfo* get() {
    static auto* localPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "MeshInverseTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localPosition});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::GenerateMesh
// Il2CppName: GenerateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(ByRef<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>, ByRef<::System::Collections::Generic::List_1<int>*>, ByRef<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>)>(&Oculus::Interaction::UnityCanvas::CanvasCylinder::GenerateMesh)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->this_arg;
    static auto* tris = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->this_arg;
    static auto* uvs = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasCylinder*), "GenerateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts, tris, uvs});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasCylinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
