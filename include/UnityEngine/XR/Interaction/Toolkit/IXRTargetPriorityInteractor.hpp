// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.IXRInteractor
#include "UnityEngine/XR/Interaction/Toolkit/IXRInteractor.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: TargetPriorityMode
  struct TargetPriorityMode;
  // Forward declaring type: IXRSelectInteractable
  class IXRSelectInteractable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: IXRTargetPriorityInteractor
  class IXRTargetPriorityInteractor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*, "UnityEngine.XR.Interaction.Toolkit", "IXRTargetPriorityInteractor");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor
  // [TokenAttribute] Offset: FFFFFFFF
  class IXRTargetPriorityInteractor/*, public ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor
    operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor() noexcept {
      return *reinterpret_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>(this);
    }
    // public UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode get_targetPriorityMode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode get_targetPriorityMode();
    // public System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> get_targetsForSelection()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* get_targetsForSelection();
  }; // UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor::get_targetPriorityMode
// Il2CppName: get_targetPriorityMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode (UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor::get_targetPriorityMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*), "get_targetPriorityMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor::get_targetsForSelection
// Il2CppName: get_targetsForSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* (UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor::get_targetsForSelection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*), "get_targetsForSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
