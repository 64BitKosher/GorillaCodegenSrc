// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.XRTintInteractableVisual
#include "UnityEngine/XR/Interaction/Toolkit/XRTintInteractableVisual.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::ShaderPropertyLookup, "UnityEngine.XR.Interaction.Toolkit", "XRTintInteractableVisual/ShaderPropertyLookup");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.XRTintInteractableVisual/ShaderPropertyLookup
  // [TokenAttribute] Offset: FFFFFFFF
  struct XRTintInteractableVisual::ShaderPropertyLookup/*, public ::System::ValueType*/ {
    public:
    // Creating value type constructor for type: ShaderPropertyLookup
    constexpr ShaderPropertyLookup() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public readonly System.Int32 emissionColor
    static int _get_emissionColor();
    // Set static field: static public readonly System.Int32 emissionColor
    static void _set_emissionColor(int value);
    // static private System.Void .cctor()
    // Offset: 0x53D82BC
    static void _cctor();
  }; // UnityEngine.XR.Interaction.Toolkit.XRTintInteractableVisual/ShaderPropertyLookup
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::ShaderPropertyLookup::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::ShaderPropertyLookup::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::ShaderPropertyLookup), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};