// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.TunnelingVignetteController
#include "UnityEngine/XR/Interaction/Toolkit/TunnelingVignetteController.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ShaderPropertyLookup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ShaderPropertyLookup*, "UnityEngine.XR.Interaction.Toolkit", "TunnelingVignetteController/ShaderPropertyLookup");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.TunnelingVignetteController/ShaderPropertyLookup
  // [TokenAttribute] Offset: FFFFFFFF
  class TunnelingVignetteController::ShaderPropertyLookup : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Int32 apertureSize
    static int _get_apertureSize();
    // Set static field: static public readonly System.Int32 apertureSize
    static void _set_apertureSize(int value);
    // Get static field: static public readonly System.Int32 featheringEffect
    static int _get_featheringEffect();
    // Set static field: static public readonly System.Int32 featheringEffect
    static void _set_featheringEffect(int value);
    // Get static field: static public readonly System.Int32 vignetteColor
    static int _get_vignetteColor();
    // Set static field: static public readonly System.Int32 vignetteColor
    static void _set_vignetteColor(int value);
    // Get static field: static public readonly System.Int32 vignetteColorBlend
    static int _get_vignetteColorBlend();
    // Set static field: static public readonly System.Int32 vignetteColorBlend
    static void _set_vignetteColorBlend(int value);
    // static private System.Void .cctor()
    // Offset: 0x5412EEC
    static void _cctor();
  }; // UnityEngine.XR.Interaction.Toolkit.TunnelingVignetteController/ShaderPropertyLookup
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ShaderPropertyLookup::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ShaderPropertyLookup::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ShaderPropertyLookup*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
