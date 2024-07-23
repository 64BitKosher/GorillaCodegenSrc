// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: IXRHoverInteractor
  class IXRHoverInteractor;
  // Forward declaring type: IXRHoverInteractable
  class IXRHoverInteractable;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Filtering
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
  // Forward declaring type: IXRHoverFilter
  class IXRHoverFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "IXRHoverFilter");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Filtering
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class IXRHoverFilter {
    public:
    // public System.Boolean get_canProcess()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_canProcess();
    // public System.Boolean Process(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor interactor, UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable interactable)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Process(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);
  }; // UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter::get_canProcess
// Il2CppName: get_canProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter::*)()>(&UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter::get_canProcess)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*), "get_canProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter::*)(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*)>(&UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter::Process)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRHoverInteractor")->byval_arg;
    static auto* interactable = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRHoverInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor, interactable});
  }
};
