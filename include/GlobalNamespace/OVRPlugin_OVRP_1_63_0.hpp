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
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_63_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_63_0*, "", "OVRPlugin/OVRP_1_63_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_63_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_63_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static public OVRPlugin/Result ovrp_InitializeInsightPassthrough()
    // Offset: 0x4913254
    static ::GlobalNamespace::OVRPlugin::Result ovrp_InitializeInsightPassthrough();
    // static public OVRPlugin/Result ovrp_ShutdownInsightPassthrough()
    // Offset: 0x49132BC
    static ::GlobalNamespace::OVRPlugin::Result ovrp_ShutdownInsightPassthrough();
    // static public OVRPlugin/Bool ovrp_GetInsightPassthroughInitialized()
    // Offset: 0x4913324
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetInsightPassthroughInitialized();
    // static public OVRPlugin/Result ovrp_SetInsightPassthroughStyle(System.Int32 layerId, OVRPlugin/InsightPassthroughStyle style)
    // Offset: 0x491338C
    static ::GlobalNamespace::OVRPlugin::Result ovrp_SetInsightPassthroughStyle(int layerId, ::GlobalNamespace::OVRPlugin::InsightPassthroughStyle style);
    // static public OVRPlugin/Result ovrp_CreateInsightTriangleMesh(System.Int32 layerId, System.IntPtr vertices, System.Int32 vertexCount, System.IntPtr triangles, System.Int32 triangleCount, out System.UInt64 meshHandle)
    // Offset: 0x4913420
    static ::GlobalNamespace::OVRPlugin::Result ovrp_CreateInsightTriangleMesh(int layerId, ::System::IntPtr vertices, int vertexCount, ::System::IntPtr triangles, int triangleCount, ByRef<uint64_t> meshHandle);
    // static public OVRPlugin/Result ovrp_DestroyInsightTriangleMesh(System.UInt64 meshHandle)
    // Offset: 0x49134D4
    static ::GlobalNamespace::OVRPlugin::Result ovrp_DestroyInsightTriangleMesh(uint64_t meshHandle);
    // static public OVRPlugin/Result ovrp_AddInsightPassthroughSurfaceGeometry(System.Int32 layerId, System.UInt64 meshHandle, UnityEngine.Matrix4x4 T_world_model, out System.UInt64 geometryInstanceHandle)
    // Offset: 0x4913550
    static ::GlobalNamespace::OVRPlugin::Result ovrp_AddInsightPassthroughSurfaceGeometry(int layerId, uint64_t meshHandle, ::UnityEngine::Matrix4x4 T_world_model, ByRef<uint64_t> geometryInstanceHandle);
    // static public OVRPlugin/Result ovrp_DestroyInsightPassthroughGeometryInstance(System.UInt64 geometryInstanceHandle)
    // Offset: 0x49135FC
    static ::GlobalNamespace::OVRPlugin::Result ovrp_DestroyInsightPassthroughGeometryInstance(uint64_t geometryInstanceHandle);
    // static public OVRPlugin/Result ovrp_UpdateInsightPassthroughGeometryTransform(System.UInt64 geometryInstanceHandle, UnityEngine.Matrix4x4 T_world_model)
    // Offset: 0x4913678
    static ::GlobalNamespace::OVRPlugin::Result ovrp_UpdateInsightPassthroughGeometryTransform(uint64_t geometryInstanceHandle, ::UnityEngine::Matrix4x4 T_world_model);
    // static private System.Void .cctor()
    // Offset: 0x491370C
    static void _cctor();
  }; // OVRPlugin/OVRP_1_63_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_InitializeInsightPassthrough
// Il2CppName: ovrp_InitializeInsightPassthrough
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_InitializeInsightPassthrough)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_63_0*), "ovrp_InitializeInsightPassthrough", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_ShutdownInsightPassthrough
// Il2CppName: ovrp_ShutdownInsightPassthrough
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_ShutdownInsightPassthrough)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_63_0*), "ovrp_ShutdownInsightPassthrough", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_GetInsightPassthroughInitialized
// Il2CppName: ovrp_GetInsightPassthroughInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_GetInsightPassthroughInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_63_0*), "ovrp_GetInsightPassthroughInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_SetInsightPassthroughStyle
// Il2CppName: ovrp_SetInsightPassthroughStyle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(int, ::GlobalNamespace::OVRPlugin::InsightPassthroughStyle)>(&GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_SetInsightPassthroughStyle)> {
  static const MethodInfo* get() {
    static auto* layerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/InsightPassthroughStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_63_0*), "ovrp_SetInsightPassthroughStyle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerId, style});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_CreateInsightTriangleMesh
// Il2CppName: ovrp_CreateInsightTriangleMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(int, ::System::IntPtr, int, ::System::IntPtr, int, ByRef<uint64_t>)>(&GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_CreateInsightTriangleMesh)> {
  static const MethodInfo* get() {
    static auto* layerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* vertices = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* vertexCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* triangles = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* triangleCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* meshHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_63_0*), "ovrp_CreateInsightTriangleMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerId, vertices, vertexCount, triangles, triangleCount, meshHandle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_DestroyInsightTriangleMesh
// Il2CppName: ovrp_DestroyInsightTriangleMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(uint64_t)>(&GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_DestroyInsightTriangleMesh)> {
  static const MethodInfo* get() {
    static auto* meshHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_63_0*), "ovrp_DestroyInsightTriangleMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{meshHandle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_AddInsightPassthroughSurfaceGeometry
// Il2CppName: ovrp_AddInsightPassthroughSurfaceGeometry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(int, uint64_t, ::UnityEngine::Matrix4x4, ByRef<uint64_t>)>(&GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_AddInsightPassthroughSurfaceGeometry)> {
  static const MethodInfo* get() {
    static auto* layerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* meshHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* T_world_model = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* geometryInstanceHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_63_0*), "ovrp_AddInsightPassthroughSurfaceGeometry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerId, meshHandle, T_world_model, geometryInstanceHandle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_DestroyInsightPassthroughGeometryInstance
// Il2CppName: ovrp_DestroyInsightPassthroughGeometryInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(uint64_t)>(&GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_DestroyInsightPassthroughGeometryInstance)> {
  static const MethodInfo* get() {
    static auto* geometryInstanceHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_63_0*), "ovrp_DestroyInsightPassthroughGeometryInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{geometryInstanceHandle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_UpdateInsightPassthroughGeometryTransform
// Il2CppName: ovrp_UpdateInsightPassthroughGeometryTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(uint64_t, ::UnityEngine::Matrix4x4)>(&GlobalNamespace::OVRPlugin::OVRP_1_63_0::ovrp_UpdateInsightPassthroughGeometryTransform)> {
  static const MethodInfo* get() {
    static auto* geometryInstanceHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* T_world_model = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_63_0*), "ovrp_UpdateInsightPassthroughGeometryTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{geometryInstanceHandle, T_world_model});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_63_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_63_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_63_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
