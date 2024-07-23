// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_87_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_87_0*, "", "OVRPlugin/OVRP_1_87_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_87_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_87_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static public OVRPlugin/Result ovrp_GetPassthroughPreferences(out OVRPlugin/PassthroughPreferences preferences)
    // Offset: 0x4917800
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetPassthroughPreferences(ByRef<::GlobalNamespace::OVRPlugin::PassthroughPreferences> preferences);
    // static public OVRPlugin/Result ovrp_SetEyeBufferSharpenType(OVRPlugin/LayerSharpenType sharpenType)
    // Offset: 0x491787C
    static ::GlobalNamespace::OVRPlugin::Result ovrp_SetEyeBufferSharpenType(::GlobalNamespace::OVRPlugin::LayerSharpenType sharpenType);
    // static public OVRPlugin/Result ovrp_SetControllerDrivenHandPosesAreNatural(OVRPlugin/Bool controllerDrivenHandPosesAreNatural)
    // Offset: 0x49178F8
    static ::GlobalNamespace::OVRPlugin::Result ovrp_SetControllerDrivenHandPosesAreNatural(::GlobalNamespace::OVRPlugin::Bool controllerDrivenHandPosesAreNatural);
    // static public OVRPlugin/Result ovrp_AreControllerDrivenHandPosesNatural(ref OVRPlugin/Bool natural)
    // Offset: 0x4917974
    static ::GlobalNamespace::OVRPlugin::Result ovrp_AreControllerDrivenHandPosesNatural(ByRef<::GlobalNamespace::OVRPlugin::Bool> natural);
    // static private System.Void .cctor()
    // Offset: 0x49179F0
    static void _cctor();
  }; // OVRPlugin/OVRP_1_87_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_87_0::ovrp_GetPassthroughPreferences
// Il2CppName: ovrp_GetPassthroughPreferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::PassthroughPreferences>)>(&GlobalNamespace::OVRPlugin::OVRP_1_87_0::ovrp_GetPassthroughPreferences)> {
  static const MethodInfo* get() {
    static auto* preferences = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/PassthroughPreferences")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_87_0*), "ovrp_GetPassthroughPreferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{preferences});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_87_0::ovrp_SetEyeBufferSharpenType
// Il2CppName: ovrp_SetEyeBufferSharpenType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::LayerSharpenType)>(&GlobalNamespace::OVRPlugin::OVRP_1_87_0::ovrp_SetEyeBufferSharpenType)> {
  static const MethodInfo* get() {
    static auto* sharpenType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/LayerSharpenType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_87_0*), "ovrp_SetEyeBufferSharpenType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sharpenType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_87_0::ovrp_SetControllerDrivenHandPosesAreNatural
// Il2CppName: ovrp_SetControllerDrivenHandPosesAreNatural
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::Bool)>(&GlobalNamespace::OVRPlugin::OVRP_1_87_0::ovrp_SetControllerDrivenHandPosesAreNatural)> {
  static const MethodInfo* get() {
    static auto* controllerDrivenHandPosesAreNatural = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_87_0*), "ovrp_SetControllerDrivenHandPosesAreNatural", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controllerDrivenHandPosesAreNatural});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_87_0::ovrp_AreControllerDrivenHandPosesNatural
// Il2CppName: ovrp_AreControllerDrivenHandPosesNatural
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_87_0::ovrp_AreControllerDrivenHandPosesNatural)> {
  static const MethodInfo* get() {
    static auto* natural = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_87_0*), "ovrp_AreControllerDrivenHandPosesNatural", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{natural});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_87_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_87_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_87_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
