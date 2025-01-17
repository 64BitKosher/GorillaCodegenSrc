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
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_76_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_76_0*, "", "OVRPlugin/OVRP_1_76_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_76_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_76_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static public OVRPlugin/Result ovrp_GetNodePoseStateAtTime(System.Double time, OVRPlugin/Node nodeId, out OVRPlugin/PoseStatef nodePoseState)
    // Offset: 0x4915644
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetNodePoseStateAtTime(double time, ::GlobalNamespace::OVRPlugin::Node nodeId, ByRef<::GlobalNamespace::OVRPlugin::PoseStatef> nodePoseState);
    // static private System.Void .cctor()
    // Offset: 0x49156D8
    static void _cctor();
  }; // OVRPlugin/OVRP_1_76_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_76_0::ovrp_GetNodePoseStateAtTime
// Il2CppName: ovrp_GetNodePoseStateAtTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(double, ::GlobalNamespace::OVRPlugin::Node, ByRef<::GlobalNamespace::OVRPlugin::PoseStatef>)>(&GlobalNamespace::OVRPlugin::OVRP_1_76_0::ovrp_GetNodePoseStateAtTime)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* nodeId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Node")->byval_arg;
    static auto* nodePoseState = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/PoseStatef")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_76_0*), "ovrp_GetNodePoseStateAtTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, nodeId, nodePoseState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_76_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_76_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_76_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
