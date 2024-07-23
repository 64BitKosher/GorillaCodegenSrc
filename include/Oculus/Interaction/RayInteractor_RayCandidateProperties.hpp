// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.RayInteractor
#include "Oculus/Interaction/RayInteractor.hpp"
// Including type: Oculus.Interaction.ICandidatePosition
#include "Oculus/Interaction/ICandidatePosition.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: RayInteractable
  class RayInteractable;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::RayInteractor::RayCandidateProperties);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::RayInteractor::RayCandidateProperties*, "Oculus.Interaction", "RayInteractor/RayCandidateProperties");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.RayInteractor/RayCandidateProperties
  // [TokenAttribute] Offset: FFFFFFFF
  class RayInteractor::RayCandidateProperties : public ::Il2CppObject/*, public ::Oculus::Interaction::ICandidatePosition*/ {
    public:
    public:
    // private readonly Oculus.Interaction.RayInteractable <ClosestInteractable>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Oculus::Interaction::RayInteractable* ClosestInteractable;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::RayInteractable*) == 0x8);
    // private readonly UnityEngine.Vector3 <CandidatePosition>k__BackingField
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 CandidatePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::ICandidatePosition
    operator ::Oculus::Interaction::ICandidatePosition() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::ICandidatePosition*>(this);
    }
    // Get instance field reference: private readonly Oculus.Interaction.RayInteractable <ClosestInteractable>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::RayInteractable*& dyn_$ClosestInteractable$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.Vector3 <CandidatePosition>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_$CandidatePosition$k__BackingField();
    // public Oculus.Interaction.RayInteractable get_ClosestInteractable()
    // Offset: 0x47B52B4
    ::Oculus::Interaction::RayInteractable* get_ClosestInteractable();
    // public UnityEngine.Vector3 get_CandidatePosition()
    // Offset: 0x47B52BC
    ::UnityEngine::Vector3 get_CandidatePosition();
    // public System.Void .ctor(Oculus.Interaction.RayInteractable closestInteractable, UnityEngine.Vector3 candidatePosition)
    // Offset: 0x47B45A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RayInteractor::RayCandidateProperties* New_ctor(::Oculus::Interaction::RayInteractable* closestInteractable, ::UnityEngine::Vector3 candidatePosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::RayInteractor::RayCandidateProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RayInteractor::RayCandidateProperties*, creationType>(closestInteractable, candidatePosition)));
    }
  }; // Oculus.Interaction.RayInteractor/RayCandidateProperties
  #pragma pack(pop)
  static check_size<sizeof(RayInteractor::RayCandidateProperties), 24 + sizeof(::UnityEngine::Vector3)> __Oculus_Interaction_RayInteractor_RayCandidatePropertiesSizeCheck;
  static_assert(sizeof(RayInteractor::RayCandidateProperties) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractor::RayCandidateProperties::get_ClosestInteractable
// Il2CppName: get_ClosestInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::RayInteractable* (Oculus::Interaction::RayInteractor::RayCandidateProperties::*)()>(&Oculus::Interaction::RayInteractor::RayCandidateProperties::get_ClosestInteractable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RayInteractor::RayCandidateProperties*), "get_ClosestInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractor::RayCandidateProperties::get_CandidatePosition
// Il2CppName: get_CandidatePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::RayInteractor::RayCandidateProperties::*)()>(&Oculus::Interaction::RayInteractor::RayCandidateProperties::get_CandidatePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RayInteractor::RayCandidateProperties*), "get_CandidatePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractor::RayCandidateProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!