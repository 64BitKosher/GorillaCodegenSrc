// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.VFX.VFXCameraXRSettings
#include "UnityEngine/VFX/VFXCameraXRSettings.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
  // Forward declaring type: CullingResults
  struct CullingResults;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine.VFX
namespace UnityEngine::VFX {
  // Forward declaring type: VFXManager
  class VFXManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::VFX::VFXManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VFXManager*, "UnityEngine.VFX", "VFXManager");
// Type namespace: UnityEngine.VFX
namespace UnityEngine::VFX {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.VFX.VFXManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  class VFXManager : public ::Il2CppObject {
    public:
    // Get static field: static private readonly UnityEngine.VFX.VFXCameraXRSettings kDefaultCameraXRSettings
    static ::UnityEngine::VFX::VFXCameraXRSettings _get_kDefaultCameraXRSettings();
    // Set static field: static private readonly UnityEngine.VFX.VFXCameraXRSettings kDefaultCameraXRSettings
    static void _set_kDefaultCameraXRSettings(::UnityEngine::VFX::VFXCameraXRSettings value);
    // static public System.Void ProcessCameraCommand(UnityEngine.Camera cam, UnityEngine.Rendering.CommandBuffer cmd, UnityEngine.VFX.VFXCameraXRSettings camXRSettings, UnityEngine.Rendering.CullingResults results)
    // Offset: 0x57109D0
    static void ProcessCameraCommand(::UnityEngine::Camera* cam, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::VFX::VFXCameraXRSettings camXRSettings, ::UnityEngine::Rendering::CullingResults results);
    // static private System.Void Internal_ProcessCameraCommand(UnityEngine.Camera cam, UnityEngine.Rendering.CommandBuffer cmd, UnityEngine.VFX.VFXCameraXRSettings camXRSettings, System.IntPtr cullResults)
    // Offset: 0x5710A54
    static void Internal_ProcessCameraCommand(::UnityEngine::Camera* cam, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::VFX::VFXCameraXRSettings camXRSettings, ::System::IntPtr cullResults);
    // static private System.Void .cctor()
    // Offset: 0x5710B54
    static void _cctor();
    // static private System.Void Internal_ProcessCameraCommand_Injected(UnityEngine.Camera cam, UnityEngine.Rendering.CommandBuffer cmd, ref UnityEngine.VFX.VFXCameraXRSettings camXRSettings, System.IntPtr cullResults)
    // Offset: 0x5710AF8
    static void Internal_ProcessCameraCommand_Injected(::UnityEngine::Camera* cam, ::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::VFX::VFXCameraXRSettings> camXRSettings, ::System::IntPtr cullResults);
  }; // UnityEngine.VFX.VFXManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::VFX::VFXManager::ProcessCameraCommand
// Il2CppName: ProcessCameraCommand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::VFX::VFXCameraXRSettings, ::UnityEngine::Rendering::CullingResults)>(&UnityEngine::VFX::VFXManager::ProcessCameraCommand)> {
  static const MethodInfo* get() {
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* camXRSettings = &::il2cpp_utils::GetClassFromName("UnityEngine.VFX", "VFXCameraXRSettings")->byval_arg;
    static auto* results = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CullingResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VFXManager*), "ProcessCameraCommand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cam, cmd, camXRSettings, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::VFX::VFXManager::Internal_ProcessCameraCommand
// Il2CppName: Internal_ProcessCameraCommand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::VFX::VFXCameraXRSettings, ::System::IntPtr)>(&UnityEngine::VFX::VFXManager::Internal_ProcessCameraCommand)> {
  static const MethodInfo* get() {
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* camXRSettings = &::il2cpp_utils::GetClassFromName("UnityEngine.VFX", "VFXCameraXRSettings")->byval_arg;
    static auto* cullResults = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VFXManager*), "Internal_ProcessCameraCommand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cam, cmd, camXRSettings, cullResults});
  }
};
// Writing MetadataGetter for method: UnityEngine::VFX::VFXManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::VFX::VFXManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VFXManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::VFX::VFXManager::Internal_ProcessCameraCommand_Injected
// Il2CppName: Internal_ProcessCameraCommand_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::VFX::VFXCameraXRSettings>, ::System::IntPtr)>(&UnityEngine::VFX::VFXManager::Internal_ProcessCameraCommand_Injected)> {
  static const MethodInfo* get() {
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* camXRSettings = &::il2cpp_utils::GetClassFromName("UnityEngine.VFX", "VFXCameraXRSettings")->this_arg;
    static auto* cullResults = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VFXManager*), "Internal_ProcessCameraCommand_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cam, cmd, camXRSettings, cullResults});
  }
};
