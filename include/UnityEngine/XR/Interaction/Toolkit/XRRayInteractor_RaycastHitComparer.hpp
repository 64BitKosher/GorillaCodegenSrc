// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
#include "UnityEngine/XR/Interaction/Toolkit/XRRayInteractor.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::RaycastHitComparer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::RaycastHitComparer*, "UnityEngine.XR.Interaction.Toolkit", "XRRayInteractor/RaycastHitComparer");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class XRRayInteractor::RaycastHitComparer : public ::Il2CppObject/*, public ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>
    operator ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*>(this);
    }
    // public System.Int32 Compare(UnityEngine.RaycastHit a, UnityEngine.RaycastHit b)
    // Offset: 0x53FAC78
    int Compare(::UnityEngine::RaycastHit a, ::UnityEngine::RaycastHit b);
    // public System.Void .ctor()
    // Offset: 0x53FABA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRRayInteractor::RaycastHitComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::RaycastHitComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRRayInteractor::RaycastHitComparer*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::RaycastHitComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::RaycastHitComparer::*)(::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit)>(&UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::RaycastHitComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::RaycastHitComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::RaycastHitComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!