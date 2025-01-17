// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: IXROverridesGazeAutoSelect
  class IXROverridesGazeAutoSelect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect*, "UnityEngine.XR.Interaction.Toolkit", "IXROverridesGazeAutoSelect");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.IXROverridesGazeAutoSelect
  // [TokenAttribute] Offset: FFFFFFFF
  class IXROverridesGazeAutoSelect {
    public:
    // public System.Boolean get_overrideGazeTimeToSelect()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_overrideGazeTimeToSelect();
    // public System.Single get_gazeTimeToSelect()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_gazeTimeToSelect();
    // public System.Boolean get_overrideTimeToAutoDeselectGaze()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_overrideTimeToAutoDeselectGaze();
    // public System.Single get_timeToAutoDeselectGaze()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_timeToAutoDeselectGaze();
  }; // UnityEngine.XR.Interaction.Toolkit.IXROverridesGazeAutoSelect
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect::get_overrideGazeTimeToSelect
// Il2CppName: get_overrideGazeTimeToSelect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect::get_overrideGazeTimeToSelect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect*), "get_overrideGazeTimeToSelect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect::get_gazeTimeToSelect
// Il2CppName: get_gazeTimeToSelect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect::get_gazeTimeToSelect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect*), "get_gazeTimeToSelect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect::get_overrideTimeToAutoDeselectGaze
// Il2CppName: get_overrideTimeToAutoDeselectGaze
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect::get_overrideTimeToAutoDeselectGaze)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect*), "get_overrideTimeToAutoDeselectGaze", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect::get_timeToAutoDeselectGaze
// Il2CppName: get_timeToAutoDeselectGaze
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect::get_timeToAutoDeselectGaze)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect*), "get_timeToAutoDeselectGaze", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
