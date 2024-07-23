// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Technie::PhysicsCreator
namespace Technie::PhysicsCreator {
  // Forward declaring type: Sphere
  class Sphere;
}
// Forward declaring namespace: Technie::PhysicsCreator::Rigid
namespace Technie::PhysicsCreator::Rigid {
  // Forward declaring type: Hull
  class Hull;
}
// Completed forward declares
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Forward declaring type: SphereFitter
  class SphereFitter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Technie::PhysicsCreator::SphereFitter);
DEFINE_IL2CPP_ARG_TYPE(::Technie::PhysicsCreator::SphereFitter*, "Technie.PhysicsCreator", "SphereFitter");
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Technie.PhysicsCreator.SphereFitter
  // [TokenAttribute] Offset: FFFFFFFF
  class SphereFitter : public ::Il2CppObject {
    public:
    // public Technie.PhysicsCreator.Sphere Fit(Technie.PhysicsCreator.Rigid.Hull hull, UnityEngine.Vector3[] meshVertices, System.Int32[] meshIndices)
    // Offset: 0x50276B8
    ::Technie::PhysicsCreator::Sphere* Fit(::Technie::PhysicsCreator::Rigid::Hull* hull, ::ArrayW<::UnityEngine::Vector3> meshVertices, ::ArrayW<int> meshIndices);
    // public Technie.PhysicsCreator.Sphere Fit(UnityEngine.Vector3[] hullVertices, System.Int32[] hullIndices)
    // Offset: 0x5027B00
    ::Technie::PhysicsCreator::Sphere* Fit(::ArrayW<::UnityEngine::Vector3> hullVertices, ::ArrayW<int> hullIndices);
    // private System.Boolean CalculateBoundingSphere(Technie.PhysicsCreator.Rigid.Hull hull, UnityEngine.Vector3[] meshVertices, System.Int32[] meshIndices, out UnityEngine.Vector3 sphereCenter, out System.Single sphereRadius)
    // Offset: 0x50277D0
    bool CalculateBoundingSphere(::Technie::PhysicsCreator::Rigid::Hull* hull, ::ArrayW<::UnityEngine::Vector3> meshVertices, ::ArrayW<int> meshIndices, ByRef<::UnityEngine::Vector3> sphereCenter, ByRef<float> sphereRadius);
    // public System.Void .ctor()
    // Offset: 0x5027DE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SphereFitter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Technie::PhysicsCreator::SphereFitter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SphereFitter*, creationType>()));
    }
  }; // Technie.PhysicsCreator.SphereFitter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Technie::PhysicsCreator::SphereFitter::Fit
// Il2CppName: Fit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Technie::PhysicsCreator::Sphere* (Technie::PhysicsCreator::SphereFitter::*)(::Technie::PhysicsCreator::Rigid::Hull*, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int>)>(&Technie::PhysicsCreator::SphereFitter::Fit)> {
  static const MethodInfo* get() {
    static auto* hull = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator.Rigid", "Hull")->byval_arg;
    static auto* meshVertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* meshIndices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::SphereFitter*), "Fit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hull, meshVertices, meshIndices});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::SphereFitter::Fit
// Il2CppName: Fit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Technie::PhysicsCreator::Sphere* (Technie::PhysicsCreator::SphereFitter::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int>)>(&Technie::PhysicsCreator::SphereFitter::Fit)> {
  static const MethodInfo* get() {
    static auto* hullVertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* hullIndices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::SphereFitter*), "Fit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hullVertices, hullIndices});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::SphereFitter::CalculateBoundingSphere
// Il2CppName: CalculateBoundingSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Technie::PhysicsCreator::SphereFitter::*)(::Technie::PhysicsCreator::Rigid::Hull*, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int>, ByRef<::UnityEngine::Vector3>, ByRef<float>)>(&Technie::PhysicsCreator::SphereFitter::CalculateBoundingSphere)> {
  static const MethodInfo* get() {
    static auto* hull = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator.Rigid", "Hull")->byval_arg;
    static auto* meshVertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* meshIndices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* sphereCenter = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* sphereRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::SphereFitter*), "CalculateBoundingSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hull, meshVertices, meshIndices, sphereCenter, sphereRadius});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::SphereFitter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
