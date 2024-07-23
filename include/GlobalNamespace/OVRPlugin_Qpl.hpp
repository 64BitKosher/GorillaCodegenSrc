// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Int64
#include "System/Int64.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::Qpl);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::Qpl*, "", "OVRPlugin/Qpl");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/Qpl
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::Qpl : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::OVRPlugin::Qpl::ResultType
    struct ResultType;
    // static field const value: static public System.Int32 DefaultInstanceKey
    static constexpr const int DefaultInstanceKey = 0;
    // Get static field: static public System.Int32 DefaultInstanceKey
    static int _get_DefaultInstanceKey();
    // Set static field: static public System.Int32 DefaultInstanceKey
    static void _set_DefaultInstanceKey(int value);
    // static field const value: static public System.Int64 AutoSetTimestampMs
    static constexpr const int64_t AutoSetTimestampMs = -1;
    // Get static field: static public System.Int64 AutoSetTimestampMs
    static int64_t _get_AutoSetTimestampMs();
    // Set static field: static public System.Int64 AutoSetTimestampMs
    static void _set_AutoSetTimestampMs(int64_t value);
    // static field const value: static public System.Int32 AutoSetTimeoutMs
    static constexpr const int AutoSetTimeoutMs = 0;
    // Get static field: static public System.Int32 AutoSetTimeoutMs
    static int _get_AutoSetTimeoutMs();
    // Set static field: static public System.Int32 AutoSetTimeoutMs
    static void _set_AutoSetTimeoutMs(int value);
    // static public System.Void MarkerStart(System.Int32 markerId, System.Int32 instanceKey, System.Int64 timestampMs)
    // Offset: 0x490A8A0
    static void MarkerStart(int markerId, int instanceKey, int64_t timestampMs);
    // static public System.Void MarkerEnd(System.Int32 markerId, OVRPlugin/Qpl/ResultType resultTypeId, System.Int32 instanceKey, System.Int64 timestampMs)
    // Offset: 0x490AA10
    static void MarkerEnd(int markerId, ::GlobalNamespace::OVRPlugin::Qpl::ResultType resultTypeId, int instanceKey, int64_t timestampMs);
    // static public System.Void MarkerPointCached(System.Int32 markerId, System.Int32 nameHandle, System.Int32 instanceKey, System.Int64 timestampMs)
    // Offset: 0x490AB9C
    static void MarkerPointCached(int markerId, int nameHandle, int instanceKey, int64_t timestampMs);
    // static public System.Void MarkerAnnotation(System.Int32 markerId, System.String annotationKey, System.String annotationValue, System.Int32 instanceKey)
    // Offset: 0x490AD28
    static void MarkerAnnotation(int markerId, ::StringW annotationKey, ::StringW annotationValue, int instanceKey);
    // static public System.Boolean CreateMarkerHandle(System.String name, out System.Int32 nameHandle)
    // Offset: 0x490AEE0
    static bool CreateMarkerHandle(::StringW name, ByRef<int> nameHandle);
    // static public System.Boolean DestroyMarkerHandle(System.Int32 nameHandle)
    // Offset: 0x490B058
    static bool DestroyMarkerHandle(int nameHandle);
  }; // OVRPlugin/Qpl
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Qpl::MarkerStart
// Il2CppName: MarkerStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int, int64_t)>(&GlobalNamespace::OVRPlugin::Qpl::MarkerStart)> {
  static const MethodInfo* get() {
    static auto* markerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* instanceKey = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* timestampMs = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Qpl*), "MarkerStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{markerId, instanceKey, timestampMs});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Qpl::MarkerEnd
// Il2CppName: MarkerEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::GlobalNamespace::OVRPlugin::Qpl::ResultType, int, int64_t)>(&GlobalNamespace::OVRPlugin::Qpl::MarkerEnd)> {
  static const MethodInfo* get() {
    static auto* markerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* resultTypeId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Qpl/ResultType")->byval_arg;
    static auto* instanceKey = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* timestampMs = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Qpl*), "MarkerEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{markerId, resultTypeId, instanceKey, timestampMs});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Qpl::MarkerPointCached
// Il2CppName: MarkerPointCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int, int, int64_t)>(&GlobalNamespace::OVRPlugin::Qpl::MarkerPointCached)> {
  static const MethodInfo* get() {
    static auto* markerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nameHandle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* instanceKey = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* timestampMs = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Qpl*), "MarkerPointCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{markerId, nameHandle, instanceKey, timestampMs});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Qpl::MarkerAnnotation
// Il2CppName: MarkerAnnotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::StringW, ::StringW, int)>(&GlobalNamespace::OVRPlugin::Qpl::MarkerAnnotation)> {
  static const MethodInfo* get() {
    static auto* markerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* annotationKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* annotationValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* instanceKey = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Qpl*), "MarkerAnnotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{markerId, annotationKey, annotationValue, instanceKey});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Qpl::CreateMarkerHandle
// Il2CppName: CreateMarkerHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<int>)>(&GlobalNamespace::OVRPlugin::Qpl::CreateMarkerHandle)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nameHandle = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Qpl*), "CreateMarkerHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, nameHandle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Qpl::DestroyMarkerHandle
// Il2CppName: DestroyMarkerHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&GlobalNamespace::OVRPlugin::Qpl::DestroyMarkerHandle)> {
  static const MethodInfo* get() {
    static auto* nameHandle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Qpl*), "DestroyMarkerHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nameHandle});
  }
};
