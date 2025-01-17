// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.RenderTargetIdentifier
#include "UnityEngine/Rendering/RenderTargetIdentifier.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CameraCaptureBridge
  class CameraCaptureBridge;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::CameraCaptureBridge);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraCaptureBridge*, "UnityEngine.Rendering", "CameraCaptureBridge");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.CameraCaptureBridge
  // [TokenAttribute] Offset: FFFFFFFF
  class CameraCaptureBridge : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Collections.Generic.HashSet`1<System.Action`2<UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.CommandBuffer>>> actionDict
    static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::System::Collections::Generic::HashSet_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*>* _get_actionDict();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Collections.Generic.HashSet`1<System.Action`2<UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.CommandBuffer>>> actionDict
    static void _set_actionDict(::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::System::Collections::Generic::HashSet_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*>* value);
    // Get static field: static private System.Boolean _enabled
    static bool _get__enabled();
    // Set static field: static private System.Boolean _enabled
    static void _set__enabled(bool value);
    // static public System.Void set_enabled(System.Boolean value)
    // Offset: 0x525B1B0
    static void set_enabled(bool value);
    // static public System.Collections.Generic.IEnumerator`1<System.Action`2<UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.CommandBuffer>> GetCaptureActions(UnityEngine.Camera camera)
    // Offset: 0x525B210
    static ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* GetCaptureActions(::UnityEngine::Camera* camera);
    // static private System.Void .cctor()
    // Offset: 0x525B31C
    static void _cctor();
  }; // UnityEngine.Rendering.CameraCaptureBridge
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::CameraCaptureBridge::set_enabled
// Il2CppName: set_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::Rendering::CameraCaptureBridge::set_enabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CameraCaptureBridge*), "set_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CameraCaptureBridge::GetCaptureActions
// Il2CppName: GetCaptureActions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* (*)(::UnityEngine::Camera*)>(&UnityEngine::Rendering::CameraCaptureBridge::GetCaptureActions)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CameraCaptureBridge*), "GetCaptureActions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CameraCaptureBridge::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::CameraCaptureBridge::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CameraCaptureBridge*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
