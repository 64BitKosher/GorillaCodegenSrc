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
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_0_1_3);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_0_1_3*, "", "OVRPlugin/OVRP_0_1_3");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_0_1_3
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_0_1_3 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static public OVRPlugin/Posef ovrp_GetNodeVelocity(OVRPlugin/Node nodeId)
    // Offset: 0x490B5AC
    static ::GlobalNamespace::OVRPlugin::Posef ovrp_GetNodeVelocity(::GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Posef ovrp_GetNodeAcceleration(OVRPlugin/Node nodeId)
    // Offset: 0x490B630
    static ::GlobalNamespace::OVRPlugin::Posef ovrp_GetNodeAcceleration(::GlobalNamespace::OVRPlugin::Node nodeId);
    // static private System.Void .cctor()
    // Offset: 0x490B6B4
    static void _cctor();
  }; // OVRPlugin/OVRP_0_1_3
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_0_1_3::ovrp_GetNodeVelocity
// Il2CppName: ovrp_GetNodeVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Posef (*)(::GlobalNamespace::OVRPlugin::Node)>(&GlobalNamespace::OVRPlugin::OVRP_0_1_3::ovrp_GetNodeVelocity)> {
  static const MethodInfo* get() {
    static auto* nodeId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Node")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_0_1_3*), "ovrp_GetNodeVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_0_1_3::ovrp_GetNodeAcceleration
// Il2CppName: ovrp_GetNodeAcceleration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Posef (*)(::GlobalNamespace::OVRPlugin::Node)>(&GlobalNamespace::OVRPlugin::OVRP_0_1_3::ovrp_GetNodeAcceleration)> {
  static const MethodInfo* get() {
    static auto* nodeId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Node")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_0_1_3*), "ovrp_GetNodeAcceleration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_0_1_3::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_0_1_3::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_0_1_3*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
