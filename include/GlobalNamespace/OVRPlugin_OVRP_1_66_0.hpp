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
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_66_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_66_0*, "", "OVRPlugin/OVRP_1_66_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_66_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_66_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static public OVRPlugin/Result ovrp_GetInsightPassthroughInitializationState()
    // Offset: 0x49139B4
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetInsightPassthroughInitializationState();
    // static public OVRPlugin/Result ovrp_Media_IsCastingToRemoteClient(out OVRPlugin/Bool isCasting)
    // Offset: 0x4908CAC
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_IsCastingToRemoteClient(ByRef<::GlobalNamespace::OVRPlugin::Bool> isCasting);
    // static private System.Void .cctor()
    // Offset: 0x4913A1C
    static void _cctor();
  }; // OVRPlugin/OVRP_1_66_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_66_0::ovrp_GetInsightPassthroughInitializationState
// Il2CppName: ovrp_GetInsightPassthroughInitializationState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_66_0::ovrp_GetInsightPassthroughInitializationState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_66_0*), "ovrp_GetInsightPassthroughInitializationState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_66_0::ovrp_Media_IsCastingToRemoteClient
// Il2CppName: ovrp_Media_IsCastingToRemoteClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_66_0::ovrp_Media_IsCastingToRemoteClient)> {
  static const MethodInfo* get() {
    static auto* isCasting = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_66_0*), "ovrp_Media_IsCastingToRemoteClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isCasting});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_66_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_66_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_66_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
