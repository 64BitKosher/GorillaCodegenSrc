// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.DebugDisplaySettingsVolume
#include "UnityEngine/Rendering/DebugDisplaySettingsVolume.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIContent
  class GUIContent;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplaySettingsVolume::Styles);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplaySettingsVolume::Styles*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/Styles");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.DebugDisplaySettingsVolume/Styles
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugDisplaySettingsVolume::Styles : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.GUIContent none
    static ::UnityEngine::GUIContent* _get_none();
    // Set static field: static public readonly UnityEngine.GUIContent none
    static void _set_none(::UnityEngine::GUIContent* value);
    // Get static field: static public readonly UnityEngine.GUIContent editorCamera
    static ::UnityEngine::GUIContent* _get_editorCamera();
    // Set static field: static public readonly UnityEngine.GUIContent editorCamera
    static void _set_editorCamera(::UnityEngine::GUIContent* value);
    // static private System.Void .cctor()
    // Offset: 0x523F394
    static void _cctor();
  }; // UnityEngine.Rendering.DebugDisplaySettingsVolume/Styles
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugDisplaySettingsVolume::Styles::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::DebugDisplaySettingsVolume::Styles::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugDisplaySettingsVolume::Styles*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
