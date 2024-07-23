// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.DebugUI
#include "UnityEngine/Rendering/DebugUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: IDebugDisplaySettingsPanel
  class IDebugDisplaySettingsPanel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::IDebugDisplaySettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IDebugDisplaySettingsPanel*, "UnityEngine.Rendering", "IDebugDisplaySettingsPanel");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.IDebugDisplaySettingsPanel
  // [TokenAttribute] Offset: FFFFFFFF
  class IDebugDisplaySettingsPanel {
    public:
    // public System.String get_PanelName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_PanelName();
    // public UnityEngine.Rendering.DebugUI/Widget[] get_Widgets()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::UnityEngine::Rendering::DebugUI::Widget*> get_Widgets();
    // public UnityEngine.Rendering.DebugUI/Flags get_Flags()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Rendering::DebugUI::Flags get_Flags();
  }; // UnityEngine.Rendering.IDebugDisplaySettingsPanel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::IDebugDisplaySettingsPanel::get_PanelName
// Il2CppName: get_PanelName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Rendering::IDebugDisplaySettingsPanel::*)()>(&UnityEngine::Rendering::IDebugDisplaySettingsPanel::get_PanelName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::IDebugDisplaySettingsPanel*), "get_PanelName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::IDebugDisplaySettingsPanel::get_Widgets
// Il2CppName: get_Widgets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rendering::DebugUI::Widget*> (UnityEngine::Rendering::IDebugDisplaySettingsPanel::*)()>(&UnityEngine::Rendering::IDebugDisplaySettingsPanel::get_Widgets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::IDebugDisplaySettingsPanel*), "get_Widgets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::IDebugDisplaySettingsPanel::get_Flags
// Il2CppName: get_Flags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::DebugUI::Flags (UnityEngine::Rendering::IDebugDisplaySettingsPanel::*)()>(&UnityEngine::Rendering::IDebugDisplaySettingsPanel::get_Flags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::IDebugDisplaySettingsPanel*), "get_Flags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
