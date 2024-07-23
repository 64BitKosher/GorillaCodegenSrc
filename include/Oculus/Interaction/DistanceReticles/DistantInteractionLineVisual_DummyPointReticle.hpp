// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual
#include "Oculus/Interaction/DistanceReticles/DistantInteractionLineVisual.hpp"
// Including type: Oculus.Interaction.DistanceReticles.IReticleData
#include "Oculus/Interaction/DistanceReticles/IReticleData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle*, "Oculus.Interaction.DistanceReticles", "DistantInteractionLineVisual/DummyPointReticle");
// Type namespace: Oculus.Interaction.DistanceReticles
namespace Oculus::Interaction::DistanceReticles {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle
  // [TokenAttribute] Offset: FFFFFFFF
  class DistantInteractionLineVisual::DummyPointReticle : public ::Il2CppObject/*, public ::Oculus::Interaction::DistanceReticles::IReticleData*/ {
    public:
    public:
    // private UnityEngine.Transform <Target>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* Target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::DistanceReticles::IReticleData
    operator ::Oculus::Interaction::DistanceReticles::IReticleData() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::DistanceReticles::IReticleData*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Transform*
    constexpr operator ::UnityEngine::Transform*() const noexcept {
      return Target;
    }
    // Get instance field reference: private UnityEngine.Transform <Target>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_$Target$k__BackingField();
    // public UnityEngine.Transform get_Target()
    // Offset: 0x483DB88
    ::UnityEngine::Transform* get_Target();
    // public System.Void set_Target(UnityEngine.Transform value)
    // Offset: 0x483DB90
    void set_Target(::UnityEngine::Transform* value);
    // public UnityEngine.Vector3 ProcessHitPoint(UnityEngine.Vector3 hitPoint)
    // Offset: 0x483DB98
    ::UnityEngine::Vector3 ProcessHitPoint(::UnityEngine::Vector3 hitPoint);
    // public System.Void .ctor()
    // Offset: 0x483DB80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DistantInteractionLineVisual::DummyPointReticle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DistantInteractionLineVisual::DummyPointReticle*, creationType>()));
    }
  }; // Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle
  #pragma pack(pop)
  static check_size<sizeof(DistantInteractionLineVisual::DummyPointReticle), 16 + sizeof(::UnityEngine::Transform*)> __Oculus_Interaction_DistanceReticles_DistantInteractionLineVisual_DummyPointReticleSizeCheck;
  static_assert(sizeof(DistantInteractionLineVisual::DummyPointReticle) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle::get_Target
// Il2CppName: get_Target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle::*)()>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle::get_Target)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle*), "get_Target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle::set_Target
// Il2CppName: set_Target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle::*)(::UnityEngine::Transform*)>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle::set_Target)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle*), "set_Target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle::ProcessHitPoint
// Il2CppName: ProcessHitPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle::*)(::UnityEngine::Vector3)>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle::ProcessHitPoint)> {
  static const MethodInfo* get() {
    static auto* hitPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle*), "ProcessHitPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hitPoint});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
