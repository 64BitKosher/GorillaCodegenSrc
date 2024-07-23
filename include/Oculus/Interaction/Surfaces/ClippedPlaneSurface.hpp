// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.Surfaces.IClippedSurface`1
#include "Oculus/Interaction/Surfaces/IClippedSurface_1.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Surfaces
namespace Oculus::Interaction::Surfaces {
  // Forward declaring type: IBoundsClipper
  class IBoundsClipper;
  // Forward declaring type: PlaneSurface
  class PlaneSurface;
  // Skipping declaration: ISurface because it is already included!
  // Forward declaring type: SurfaceHit
  struct SurfaceHit;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Ray
  struct Ray;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Surfaces
namespace Oculus::Interaction::Surfaces {
  // Forward declaring type: ClippedPlaneSurface
  class ClippedPlaneSurface;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Surfaces::ClippedPlaneSurface);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Surfaces::ClippedPlaneSurface*, "Oculus.Interaction.Surfaces", "ClippedPlaneSurface");
// Type namespace: Oculus.Interaction.Surfaces
namespace Oculus::Interaction::Surfaces {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Surfaces.ClippedPlaneSurface
  // [TokenAttribute] Offset: FFFFFFFF
  class ClippedPlaneSurface : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*/ {
    public:
    // Nested type: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface::$$c
    class $$c;
    public:
    // private Oculus.Interaction.Surfaces.PlaneSurface _planeSurface
    // Size: 0x8
    // Offset: 0x20
    ::Oculus::Interaction::Surfaces::PlaneSurface* planeSurface;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Surfaces::PlaneSurface*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Object> _clippers
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::UnityEngine::Object*>* clippers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Object*>*) == 0x8);
    // private System.Collections.Generic.List`1<Oculus.Interaction.Surfaces.IBoundsClipper> <Clippers>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* Clippers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>
    operator ::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*>(this);
    }
    // Get static field: static private readonly UnityEngine.Bounds InfiniteBounds
    static ::UnityEngine::Bounds _get_InfiniteBounds();
    // Set static field: static private readonly UnityEngine.Bounds InfiniteBounds
    static void _set_InfiniteBounds(::UnityEngine::Bounds value);
    // Get static field: static private readonly UnityEngine.Bounds PlaneBounds
    static ::UnityEngine::Bounds _get_PlaneBounds();
    // Set static field: static private readonly UnityEngine.Bounds PlaneBounds
    static void _set_PlaneBounds(::UnityEngine::Bounds value);
    // Get instance field reference: private Oculus.Interaction.Surfaces.PlaneSurface _planeSurface
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Surfaces::PlaneSurface*& dyn__planeSurface();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Object> _clippers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Object*>*& dyn__clippers();
    // Get instance field reference: private System.Collections.Generic.List`1<Oculus.Interaction.Surfaces.IBoundsClipper> <Clippers>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*& dyn_$Clippers$k__BackingField();
    // private System.Collections.Generic.List`1<Oculus.Interaction.Surfaces.IBoundsClipper> get_Clippers()
    // Offset: 0x4801A2C
    ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* get_Clippers();
    // private System.Void set_Clippers(System.Collections.Generic.List`1<Oculus.Interaction.Surfaces.IBoundsClipper> value)
    // Offset: 0x4801A34
    void set_Clippers(::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* value);
    // public Oculus.Interaction.Surfaces.ISurface get_BackingSurface()
    // Offset: 0x4801A3C
    ::Oculus::Interaction::Surfaces::ISurface* get_BackingSurface();
    // public UnityEngine.Transform get_Transform()
    // Offset: 0x4801A44
    ::UnityEngine::Transform* get_Transform();
    // public System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.Surfaces.IBoundsClipper> GetClippers()
    // Offset: 0x4801A60
    ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* GetClippers();
    // protected System.Void Awake()
    // Offset: 0x4801B7C
    void Awake();
    // protected System.Void Start()
    // Offset: 0x4801C90
    void Start();
    // public System.Boolean ClipBounds(in UnityEngine.Bounds bounds, out UnityEngine.Bounds clipped)
    // Offset: 0x4801C94
    bool ClipBounds(ByRef<::UnityEngine::Bounds> bounds, ByRef<::UnityEngine::Bounds> clipped);
    // private UnityEngine.Vector3 ClampPoint(in UnityEngine.Vector3 point, in UnityEngine.Bounds bounds)
    // Offset: 0x4801ED4
    ::UnityEngine::Vector3 ClampPoint(ByRef<::UnityEngine::Vector3> point, ByRef<::UnityEngine::Bounds> bounds);
    // public System.Boolean ClosestSurfacePoint(in UnityEngine.Vector3 point, out Oculus.Interaction.Surfaces.SurfaceHit hit, System.Single maxDistance)
    // Offset: 0x4801FB8
    bool ClosestSurfacePoint(ByRef<::UnityEngine::Vector3> point, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit> hit, float maxDistance);
    // public System.Boolean Raycast(in UnityEngine.Ray ray, out Oculus.Interaction.Surfaces.SurfaceHit hit, System.Single maxDistance)
    // Offset: 0x480224C
    bool Raycast(ByRef<::UnityEngine::Ray> ray, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit> hit, float maxDistance);
    // public System.Void InjectAllClippedPlaneSurface(Oculus.Interaction.Surfaces.PlaneSurface planeSurface, System.Collections.Generic.IEnumerable`1<Oculus.Interaction.Surfaces.IBoundsClipper> clippers)
    // Offset: 0x480241C
    void InjectAllClippedPlaneSurface(::Oculus::Interaction::Surfaces::PlaneSurface* planeSurface, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* clippers);
    // public System.Void InjectPlaneSurface(Oculus.Interaction.Surfaces.PlaneSurface planeSurface)
    // Offset: 0x48025E4
    void InjectPlaneSurface(::Oculus::Interaction::Surfaces::PlaneSurface* planeSurface);
    // public System.Void InjectClippers(System.Collections.Generic.IEnumerable`1<Oculus.Interaction.Surfaces.IBoundsClipper> clippers)
    // Offset: 0x4802448
    void InjectClippers(::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* clippers);
    // public System.Void .ctor()
    // Offset: 0x48025EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClippedPlaneSurface* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Surfaces::ClippedPlaneSurface::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClippedPlaneSurface*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x4802674
    static void _cctor();
    // private System.Boolean Oculus.Interaction.Surfaces.ISurface.Raycast(in UnityEngine.Ray ray, out Oculus.Interaction.Surfaces.SurfaceHit hit, System.Single maxDistance)
    // Offset: 0x48027C4
    bool Oculus_Interaction_Surfaces_ISurface_Raycast(ByRef<::UnityEngine::Ray> ray, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit> hit, float maxDistance);
    // private System.Boolean Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint(in UnityEngine.Vector3 point, out Oculus.Interaction.Surfaces.SurfaceHit hit, System.Single maxDistance)
    // Offset: 0x48027C8
    bool Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint(ByRef<::UnityEngine::Vector3> point, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit> hit, float maxDistance);
  }; // Oculus.Interaction.Surfaces.ClippedPlaneSurface
  #pragma pack(pop)
  static check_size<sizeof(ClippedPlaneSurface), 48 + sizeof(::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*)> __Oculus_Interaction_Surfaces_ClippedPlaneSurfaceSizeCheck;
  static_assert(sizeof(ClippedPlaneSurface) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::get_Clippers
// Il2CppName: get_Clippers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* (Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)()>(&Oculus::Interaction::Surfaces::ClippedPlaneSurface::get_Clippers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::ClippedPlaneSurface*), "get_Clippers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::set_Clippers
// Il2CppName: set_Clippers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*)>(&Oculus::Interaction::Surfaces::ClippedPlaneSurface::set_Clippers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "IBoundsClipper")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::ClippedPlaneSurface*), "set_Clippers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::get_BackingSurface
// Il2CppName: get_BackingSurface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Surfaces::ISurface* (Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)()>(&Oculus::Interaction::Surfaces::ClippedPlaneSurface::get_BackingSurface)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::ClippedPlaneSurface*), "get_BackingSurface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::get_Transform
// Il2CppName: get_Transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)()>(&Oculus::Interaction::Surfaces::ClippedPlaneSurface::get_Transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::ClippedPlaneSurface*), "get_Transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::GetClippers
// Il2CppName: GetClippers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* (Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)()>(&Oculus::Interaction::Surfaces::ClippedPlaneSurface::GetClippers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::ClippedPlaneSurface*), "GetClippers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)()>(&Oculus::Interaction::Surfaces::ClippedPlaneSurface::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::ClippedPlaneSurface*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)()>(&Oculus::Interaction::Surfaces::ClippedPlaneSurface::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::ClippedPlaneSurface*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::ClipBounds
// Il2CppName: ClipBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(ByRef<::UnityEngine::Bounds>, ByRef<::UnityEngine::Bounds>)>(&Oculus::Interaction::Surfaces::ClippedPlaneSurface::ClipBounds)> {
  static const MethodInfo* get() {
    static auto* bounds = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    static auto* clipped = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::ClippedPlaneSurface*), "ClipBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bounds, clipped});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::ClampPoint
// Il2CppName: ClampPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Bounds>)>(&Oculus::Interaction::Surfaces::ClippedPlaneSurface::ClampPoint)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* bounds = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::ClippedPlaneSurface*), "ClampPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, bounds});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::ClosestSurfacePoint
// Il2CppName: ClosestSurfacePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(ByRef<::UnityEngine::Vector3>, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit>, float)>(&Oculus::Interaction::Surfaces::ClippedPlaneSurface::ClosestSurfacePoint)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "SurfaceHit")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::ClippedPlaneSurface*), "ClosestSurfacePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, hit, maxDistance});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(ByRef<::UnityEngine::Ray>, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit>, float)>(&Oculus::Interaction::Surfaces::ClippedPlaneSurface::Raycast)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->this_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "SurfaceHit")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::ClippedPlaneSurface*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, hit, maxDistance});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::InjectAllClippedPlaneSurface
// Il2CppName: InjectAllClippedPlaneSurface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(::Oculus::Interaction::Surfaces::PlaneSurface*, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*)>(&Oculus::Interaction::Surfaces::ClippedPlaneSurface::InjectAllClippedPlaneSurface)> {
  static const MethodInfo* get() {
    static auto* planeSurface = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "PlaneSurface")->byval_arg;
    static auto* clippers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "IBoundsClipper")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::ClippedPlaneSurface*), "InjectAllClippedPlaneSurface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{planeSurface, clippers});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::InjectPlaneSurface
// Il2CppName: InjectPlaneSurface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(::Oculus::Interaction::Surfaces::PlaneSurface*)>(&Oculus::Interaction::Surfaces::ClippedPlaneSurface::InjectPlaneSurface)> {
  static const MethodInfo* get() {
    static auto* planeSurface = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "PlaneSurface")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::ClippedPlaneSurface*), "InjectPlaneSurface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{planeSurface});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::InjectClippers
// Il2CppName: InjectClippers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*)>(&Oculus::Interaction::Surfaces::ClippedPlaneSurface::InjectClippers)> {
  static const MethodInfo* get() {
    static auto* clippers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "IBoundsClipper")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::ClippedPlaneSurface*), "InjectClippers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clippers});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::Surfaces::ClippedPlaneSurface::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::ClippedPlaneSurface*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::Oculus_Interaction_Surfaces_ISurface_Raycast
// Il2CppName: Oculus.Interaction.Surfaces.ISurface.Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(ByRef<::UnityEngine::Ray>, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit>, float)>(&Oculus::Interaction::Surfaces::ClippedPlaneSurface::Oculus_Interaction_Surfaces_ISurface_Raycast)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->this_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "SurfaceHit")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::ClippedPlaneSurface*), "Oculus.Interaction.Surfaces.ISurface.Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, hit, maxDistance});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::ClippedPlaneSurface::Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint
// Il2CppName: Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(ByRef<::UnityEngine::Vector3>, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit>, float)>(&Oculus::Interaction::Surfaces::ClippedPlaneSurface::Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "SurfaceHit")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::ClippedPlaneSurface*), "Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, hit, maxDistance});
  }
};
