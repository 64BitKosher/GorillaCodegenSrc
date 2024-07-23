// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable
#include "UnityEngine/XR/Interaction/Toolkit/BaseTeleportationInteractable.hpp"
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
  // Forward declaring type: RaycastHit
  struct RaycastHit;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: IXRInteractor
  class IXRInteractor;
  // Forward declaring type: TeleportRequest
  struct TeleportRequest;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: TeleportationAnchor
  class TeleportationAnchor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor*, "UnityEngine.XR.Interaction.Toolkit", "TeleportationAnchor");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x1E0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.TeleportationAnchor
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  class TeleportationAnchor : public ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable {
    public:
    public:
    // private UnityEngine.Transform m_TeleportAnchorTransform
    // Size: 0x8
    // Offset: 0x1D8
    ::UnityEngine::Transform* m_TeleportAnchorTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Transform m_TeleportAnchorTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_TeleportAnchorTransform();
    // public UnityEngine.Transform get_teleportAnchorTransform()
    // Offset: 0x5410434
    ::UnityEngine::Transform* get_teleportAnchorTransform();
    // public System.Void set_teleportAnchorTransform(UnityEngine.Transform value)
    // Offset: 0x541043C
    void set_teleportAnchorTransform(::UnityEngine::Transform* value);
    // protected System.Void OnValidate()
    // Offset: 0x541044C
    void OnValidate();
    // protected System.Void OnDrawGizmos()
    // Offset: 0x5410500
    void OnDrawGizmos();
    // protected override System.Void Reset()
    // Offset: 0x54104DC
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable
    // Base method: System.Void BaseTeleportationInteractable::Reset()
    void Reset();
    // protected override System.Boolean GenerateTeleportRequest(UnityEngine.XR.Interaction.Toolkit.IXRInteractor interactor, UnityEngine.RaycastHit raycastHit, ref UnityEngine.XR.Interaction.Toolkit.TeleportRequest teleportRequest)
    // Offset: 0x5410ECC
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable
    // Base method: System.Boolean BaseTeleportationInteractable::GenerateTeleportRequest(UnityEngine.XR.Interaction.Toolkit.IXRInteractor interactor, UnityEngine.RaycastHit raycastHit, ref UnityEngine.XR.Interaction.Toolkit.TeleportRequest teleportRequest)
    bool GenerateTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::RaycastHit raycastHit, ByRef<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest> teleportRequest);
    // public System.Void .ctor()
    // Offset: 0x5410F80
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable
    // Base method: System.Void BaseTeleportationInteractable::.ctor()
    // Base method: System.Void XRBaseInteractable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportationAnchor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportationAnchor*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.TeleportationAnchor
  #pragma pack(pop)
  static check_size<sizeof(TeleportationAnchor), 472 + sizeof(::UnityEngine::Transform*)> __UnityEngine_XR_Interaction_Toolkit_TeleportationAnchorSizeCheck;
  static_assert(sizeof(TeleportationAnchor) == 0x1E0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::get_teleportAnchorTransform
// Il2CppName: get_teleportAnchorTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::*)()>(&UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::get_teleportAnchorTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor*), "get_teleportAnchorTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::set_teleportAnchorTransform
// Il2CppName: set_teleportAnchorTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::*)(::UnityEngine::Transform*)>(&UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::set_teleportAnchorTransform)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor*), "set_teleportAnchorTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::*)()>(&UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::*)()>(&UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::*)()>(&UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::GenerateTeleportRequest
// Il2CppName: GenerateTeleportRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityEngine::RaycastHit, ByRef<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest>)>(&UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::GenerateTeleportRequest)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractor")->byval_arg;
    static auto* raycastHit = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->byval_arg;
    static auto* teleportRequest = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "TeleportRequest")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor*), "GenerateTeleportRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor, raycastHit, teleportRequest});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
