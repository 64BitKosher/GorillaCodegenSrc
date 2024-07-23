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
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_64_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_64_0*, "", "OVRPlugin/OVRP_1_64_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_64_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_64_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static public OVRPlugin/Result ovrp_LocateSpace(ref OVRPlugin/Posef location, ref System.UInt64 space, OVRPlugin/TrackingOrigin trackingOrigin)
    // Offset: 0x4913794
    static ::GlobalNamespace::OVRPlugin::Result ovrp_LocateSpace(ByRef<::GlobalNamespace::OVRPlugin::Posef> location, ByRef<uint64_t> space, ::GlobalNamespace::OVRPlugin::TrackingOrigin trackingOrigin);
    // static private System.Void .cctor()
    // Offset: 0x4913828
    static void _cctor();
  }; // OVRPlugin/OVRP_1_64_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_64_0::ovrp_LocateSpace
// Il2CppName: ovrp_LocateSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::Posef>, ByRef<uint64_t>, ::GlobalNamespace::OVRPlugin::TrackingOrigin)>(&GlobalNamespace::OVRPlugin::OVRP_1_64_0::ovrp_LocateSpace)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->this_arg;
    static auto* space = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* trackingOrigin = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/TrackingOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_64_0*), "ovrp_LocateSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location, space, trackingOrigin});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_64_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_64_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_64_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};