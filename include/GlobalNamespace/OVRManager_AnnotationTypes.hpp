// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AnnotationTypes
  class OVRManager_AnnotationTypes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRManager_AnnotationTypes);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_AnnotationTypes*, "", "OVRTelemetryConstants/OVRManager/AnnotationTypes");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRTelemetryConstants/OVRManager/AnnotationTypes
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRManager_AnnotationTypes : public ::Il2CppObject {
    public:
    // static field const value: static public System.String Origin
    static constexpr const char* Origin = "Origin";
    // Get static field: static public System.String Origin
    static ::StringW _get_Origin();
    // Set static field: static public System.String Origin
    static void _set_Origin(::StringW value);
    // static field const value: static public System.String EngineVersion
    static constexpr const char* EngineVersion = "developer_platform_version";
    // Get static field: static public System.String EngineVersion
    static ::StringW _get_EngineVersion();
    // Set static field: static public System.String EngineVersion
    static void _set_EngineVersion(::StringW value);
  }; // OVRTelemetryConstants/OVRManager/AnnotationTypes
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"