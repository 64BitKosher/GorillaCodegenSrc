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
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_84_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_84_0*, "", "OVRPlugin/OVRP_1_84_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_84_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_84_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static public OVRPlugin/Result ovrp_CreatePassthroughColorLut(OVRPlugin/PassthroughColorLutChannels channels, System.UInt32 resolution, OVRPlugin/PassthroughColorLutData data, out System.UInt64 colorLut)
    // Offset: 0x4916EA8
    static ::GlobalNamespace::OVRPlugin::Result ovrp_CreatePassthroughColorLut(::GlobalNamespace::OVRPlugin::PassthroughColorLutChannels channels, uint resolution, ::GlobalNamespace::OVRPlugin::PassthroughColorLutData data, ByRef<uint64_t> colorLut);
    // static public OVRPlugin/Result ovrp_DestroyPassthroughColorLut(System.UInt64 colorLut)
    // Offset: 0x4916F54
    static ::GlobalNamespace::OVRPlugin::Result ovrp_DestroyPassthroughColorLut(uint64_t colorLut);
    // static public OVRPlugin/Result ovrp_UpdatePassthroughColorLut(System.UInt64 colorLut, OVRPlugin/PassthroughColorLutData data)
    // Offset: 0x4916FD0
    static ::GlobalNamespace::OVRPlugin::Result ovrp_UpdatePassthroughColorLut(uint64_t colorLut, ::GlobalNamespace::OVRPlugin::PassthroughColorLutData data);
    // static public OVRPlugin/Result ovrp_SetInsightPassthroughStyle2(System.Int32 layerId, in OVRPlugin/InsightPassthroughStyle2 style)
    // Offset: 0x4917064
    static ::GlobalNamespace::OVRPlugin::Result ovrp_SetInsightPassthroughStyle2(int layerId, ByRef<::GlobalNamespace::OVRPlugin::InsightPassthroughStyle2> style);
    // static public OVRPlugin/Result ovrp_GetLayerRecommendedResolution(System.Int32 layerId, out OVRPlugin/Sizei recommendedDimensions)
    // Offset: 0x49170E8
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetLayerRecommendedResolution(int layerId, ByRef<::GlobalNamespace::OVRPlugin::Sizei> recommendedDimensions);
    // static public OVRPlugin/Result ovrp_GetEyeLayerRecommendedResolution(out OVRPlugin/Sizei recommendedDimensions)
    // Offset: 0x491716C
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetEyeLayerRecommendedResolution(ByRef<::GlobalNamespace::OVRPlugin::Sizei> recommendedDimensions);
    // static private System.Void .cctor()
    // Offset: 0x49171E8
    static void _cctor();
  }; // OVRPlugin/OVRP_1_84_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_84_0::ovrp_CreatePassthroughColorLut
// Il2CppName: ovrp_CreatePassthroughColorLut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::PassthroughColorLutChannels, uint, ::GlobalNamespace::OVRPlugin::PassthroughColorLutData, ByRef<uint64_t>)>(&GlobalNamespace::OVRPlugin::OVRP_1_84_0::ovrp_CreatePassthroughColorLut)> {
  static const MethodInfo* get() {
    static auto* channels = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/PassthroughColorLutChannels")->byval_arg;
    static auto* resolution = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/PassthroughColorLutData")->byval_arg;
    static auto* colorLut = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_84_0*), "ovrp_CreatePassthroughColorLut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channels, resolution, data, colorLut});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_84_0::ovrp_DestroyPassthroughColorLut
// Il2CppName: ovrp_DestroyPassthroughColorLut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(uint64_t)>(&GlobalNamespace::OVRPlugin::OVRP_1_84_0::ovrp_DestroyPassthroughColorLut)> {
  static const MethodInfo* get() {
    static auto* colorLut = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_84_0*), "ovrp_DestroyPassthroughColorLut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorLut});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_84_0::ovrp_UpdatePassthroughColorLut
// Il2CppName: ovrp_UpdatePassthroughColorLut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(uint64_t, ::GlobalNamespace::OVRPlugin::PassthroughColorLutData)>(&GlobalNamespace::OVRPlugin::OVRP_1_84_0::ovrp_UpdatePassthroughColorLut)> {
  static const MethodInfo* get() {
    static auto* colorLut = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/PassthroughColorLutData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_84_0*), "ovrp_UpdatePassthroughColorLut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorLut, data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_84_0::ovrp_SetInsightPassthroughStyle2
// Il2CppName: ovrp_SetInsightPassthroughStyle2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(int, ByRef<::GlobalNamespace::OVRPlugin::InsightPassthroughStyle2>)>(&GlobalNamespace::OVRPlugin::OVRP_1_84_0::ovrp_SetInsightPassthroughStyle2)> {
  static const MethodInfo* get() {
    static auto* layerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/InsightPassthroughStyle2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_84_0*), "ovrp_SetInsightPassthroughStyle2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerId, style});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_84_0::ovrp_GetLayerRecommendedResolution
// Il2CppName: ovrp_GetLayerRecommendedResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(int, ByRef<::GlobalNamespace::OVRPlugin::Sizei>)>(&GlobalNamespace::OVRPlugin::OVRP_1_84_0::ovrp_GetLayerRecommendedResolution)> {
  static const MethodInfo* get() {
    static auto* layerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* recommendedDimensions = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Sizei")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_84_0*), "ovrp_GetLayerRecommendedResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerId, recommendedDimensions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_84_0::ovrp_GetEyeLayerRecommendedResolution
// Il2CppName: ovrp_GetEyeLayerRecommendedResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::Sizei>)>(&GlobalNamespace::OVRPlugin::OVRP_1_84_0::ovrp_GetEyeLayerRecommendedResolution)> {
  static const MethodInfo* get() {
    static auto* recommendedDimensions = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Sizei")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_84_0*), "ovrp_GetEyeLayerRecommendedResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recommendedDimensions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_84_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_84_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_84_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
