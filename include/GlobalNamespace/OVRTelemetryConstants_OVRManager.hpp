// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRTelemetryConstants
#include "GlobalNamespace/OVRTelemetryConstants.hpp"
// Including type: OVRTelemetry/MarkerPoint
#include "GlobalNamespace/OVRTelemetry_MarkerPoint.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRTelemetryConstants::OVRManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTelemetryConstants::OVRManager*, "", "OVRTelemetryConstants/OVRManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRTelemetryConstants/OVRManager
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRTelemetryConstants::OVRManager : public ::Il2CppObject {
    public:
    // Get static field: static public readonly OVRTelemetry/MarkerPoint InitializeInsightPassthrough
    static ::GlobalNamespace::OVRTelemetry::MarkerPoint _get_InitializeInsightPassthrough();
    // Set static field: static public readonly OVRTelemetry/MarkerPoint InitializeInsightPassthrough
    static void _set_InitializeInsightPassthrough(::GlobalNamespace::OVRTelemetry::MarkerPoint value);
    // Get static field: static public readonly OVRTelemetry/MarkerPoint InitPermissionRequest
    static ::GlobalNamespace::OVRTelemetry::MarkerPoint _get_InitPermissionRequest();
    // Set static field: static public readonly OVRTelemetry/MarkerPoint InitPermissionRequest
    static void _set_InitPermissionRequest(::GlobalNamespace::OVRTelemetry::MarkerPoint value);
    // static private System.Void .cctor()
    // Offset: 0x492F854
    static void _cctor();
  }; // OVRTelemetryConstants/OVRManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRTelemetryConstants::OVRManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRTelemetryConstants::OVRManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTelemetryConstants::OVRManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};