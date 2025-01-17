// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.VignetteParameters
#include "UnityEngine/XR/Interaction/Toolkit/VignetteParameters.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: System.Boolean
#include "System/Boolean.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters::Defaults);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters::Defaults*, "UnityEngine.XR.Interaction.Toolkit", "VignetteParameters/Defaults");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.VignetteParameters/Defaults
  // [TokenAttribute] Offset: FFFFFFFF
  class VignetteParameters::Defaults : public ::Il2CppObject {
    public:
    // static field const value: static public System.Single apertureSizeMax
    static constexpr const float apertureSizeMax = 1;
    // Get static field: static public System.Single apertureSizeMax
    static float _get_apertureSizeMax();
    // Set static field: static public System.Single apertureSizeMax
    static void _set_apertureSizeMax(float value);
    // static field const value: static public System.Single featheringEffectMax
    static constexpr const float featheringEffectMax = 1;
    // Get static field: static public System.Single featheringEffectMax
    static float _get_featheringEffectMax();
    // Set static field: static public System.Single featheringEffectMax
    static void _set_featheringEffectMax(float value);
    // static field const value: static public System.Single apertureVerticalPositionMax
    static constexpr const float apertureVerticalPositionMax = 0.2;
    // Get static field: static public System.Single apertureVerticalPositionMax
    static float _get_apertureVerticalPositionMax();
    // Set static field: static public System.Single apertureVerticalPositionMax
    static void _set_apertureVerticalPositionMax(float value);
    // static field const value: static public System.Single apertureVerticalPositionMin
    static constexpr const float apertureVerticalPositionMin = -0.2;
    // Get static field: static public System.Single apertureVerticalPositionMin
    static float _get_apertureVerticalPositionMin();
    // Set static field: static public System.Single apertureVerticalPositionMin
    static void _set_apertureVerticalPositionMin(float value);
    // static field const value: static public System.Single apertureSizeDefault
    static constexpr const float apertureSizeDefault = 0.7;
    // Get static field: static public System.Single apertureSizeDefault
    static float _get_apertureSizeDefault();
    // Set static field: static public System.Single apertureSizeDefault
    static void _set_apertureSizeDefault(float value);
    // static field const value: static public System.Single featheringEffectDefault
    static constexpr const float featheringEffectDefault = 0.2;
    // Get static field: static public System.Single featheringEffectDefault
    static float _get_featheringEffectDefault();
    // Set static field: static public System.Single featheringEffectDefault
    static void _set_featheringEffectDefault(float value);
    // static field const value: static public System.Single easeInTimeDefault
    static constexpr const float easeInTimeDefault = 0.3;
    // Get static field: static public System.Single easeInTimeDefault
    static float _get_easeInTimeDefault();
    // Set static field: static public System.Single easeInTimeDefault
    static void _set_easeInTimeDefault(float value);
    // static field const value: static public System.Single easeOutTimeDefault
    static constexpr const float easeOutTimeDefault = 0.3;
    // Get static field: static public System.Single easeOutTimeDefault
    static float _get_easeOutTimeDefault();
    // Set static field: static public System.Single easeOutTimeDefault
    static void _set_easeOutTimeDefault(float value);
    // static field const value: static public System.Boolean easeInTimeLockDefault
    static constexpr const bool easeInTimeLockDefault = false;
    // Get static field: static public System.Boolean easeInTimeLockDefault
    static bool _get_easeInTimeLockDefault();
    // Set static field: static public System.Boolean easeInTimeLockDefault
    static void _set_easeInTimeLockDefault(bool value);
    // static field const value: static public System.Single easeOutDelayTimeDefault
    static constexpr const float easeOutDelayTimeDefault = 0;
    // Get static field: static public System.Single easeOutDelayTimeDefault
    static float _get_easeOutDelayTimeDefault();
    // Set static field: static public System.Single easeOutDelayTimeDefault
    static void _set_easeOutDelayTimeDefault(float value);
    // Get static field: static public readonly UnityEngine.Color vignetteColorDefault
    static ::UnityEngine::Color _get_vignetteColorDefault();
    // Set static field: static public readonly UnityEngine.Color vignetteColorDefault
    static void _set_vignetteColorDefault(::UnityEngine::Color value);
    // Get static field: static public readonly UnityEngine.Color vignetteColorBlendDefault
    static ::UnityEngine::Color _get_vignetteColorBlendDefault();
    // Set static field: static public readonly UnityEngine.Color vignetteColorBlendDefault
    static void _set_vignetteColorBlendDefault(::UnityEngine::Color value);
    // static field const value: static public System.Single apertureVerticalPositionDefault
    static constexpr const float apertureVerticalPositionDefault = 0;
    // Get static field: static public System.Single apertureVerticalPositionDefault
    static float _get_apertureVerticalPositionDefault();
    // Set static field: static public System.Single apertureVerticalPositionDefault
    static void _set_apertureVerticalPositionDefault(float value);
    // Get static field: static public readonly UnityEngine.XR.Interaction.Toolkit.VignetteParameters defaultEffect
    static ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* _get_defaultEffect();
    // Set static field: static public readonly UnityEngine.XR.Interaction.Toolkit.VignetteParameters defaultEffect
    static void _set_defaultEffect(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* value);
    // Get static field: static public readonly UnityEngine.XR.Interaction.Toolkit.VignetteParameters noEffect
    static ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* _get_noEffect();
    // Set static field: static public readonly UnityEngine.XR.Interaction.Toolkit.VignetteParameters noEffect
    static void _set_noEffect(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* value);
    // static private System.Void .cctor()
    // Offset: 0x54116FC
    static void _cctor();
  }; // UnityEngine.XR.Interaction.Toolkit.VignetteParameters/Defaults
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::Defaults::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::Defaults::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters::Defaults*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
