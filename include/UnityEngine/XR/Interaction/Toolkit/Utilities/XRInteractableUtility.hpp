// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: IXRInteractable
  class IXRInteractable;
  // Forward declaring type: DistanceInfo
  struct DistanceInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Utilities
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
  // Forward declaring type: XRInteractableUtility
  class XRInteractableUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "XRInteractableUtility");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Utilities
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Utilities.XRInteractableUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class XRInteractableUtility : public ::Il2CppObject {
    public:
    // static public System.Boolean TryGetClosestCollider(UnityEngine.XR.Interaction.Toolkit.IXRInteractable interactable, UnityEngine.Vector3 position, out UnityEngine.XR.Interaction.Toolkit.DistanceInfo distanceInfo)
    // Offset: 0x5415AF4
    static bool TryGetClosestCollider(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable, ::UnityEngine::Vector3 position, ByRef<::UnityEngine::XR::Interaction::Toolkit::DistanceInfo> distanceInfo);
    // static public System.Boolean TryGetClosestPointOnCollider(UnityEngine.XR.Interaction.Toolkit.IXRInteractable interactable, UnityEngine.Vector3 position, out UnityEngine.XR.Interaction.Toolkit.DistanceInfo distanceInfo)
    // Offset: 0x5415E3C
    static bool TryGetClosestPointOnCollider(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable, ::UnityEngine::Vector3 position, ByRef<::UnityEngine::XR::Interaction::Toolkit::DistanceInfo> distanceInfo);
  }; // UnityEngine.XR.Interaction.Toolkit.Utilities.XRInteractableUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::TryGetClosestCollider
// Il2CppName: TryGetClosestCollider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ByRef<::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>)>(&UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::TryGetClosestCollider)> {
  static const MethodInfo* get() {
    static auto* interactable = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractable")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* distanceInfo = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "DistanceInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*), "TryGetClosestCollider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactable, position, distanceInfo});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::TryGetClosestPointOnCollider
// Il2CppName: TryGetClosestPointOnCollider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ByRef<::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>)>(&UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::TryGetClosestPointOnCollider)> {
  static const MethodInfo* get() {
    static auto* interactable = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractable")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* distanceInfo = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "DistanceInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*), "TryGetClosestPointOnCollider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactable, position, distanceInfo});
  }
};
