// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: VolumeStack
  class VolumeStack;
  // Forward declaring type: Volume
  class Volume;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: IVolumeDebugSettings
  class IVolumeDebugSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::IVolumeDebugSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IVolumeDebugSettings*, "UnityEngine.Rendering", "IVolumeDebugSettings");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.IVolumeDebugSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  class IVolumeDebugSettings {
    public:
    // public System.Int32 get_selectedComponent()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_selectedComponent();
    // public System.Void set_selectedComponent(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_selectedComponent(int value);
    // public UnityEngine.Camera get_selectedCamera()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Camera* get_selectedCamera();
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.Camera> get_cameras()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera*>* get_cameras();
    // public System.Void set_selectedCameraIndex(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_selectedCameraIndex(int value);
    // public UnityEngine.Rendering.VolumeStack get_selectedCameraVolumeStack()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Rendering::VolumeStack* get_selectedCameraVolumeStack();
    // public System.Type get_selectedComponentType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Type* get_selectedComponentType();
    // public UnityEngine.Rendering.Volume[] GetVolumes()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::UnityEngine::Rendering::Volume*> GetVolumes();
    // public System.Boolean VolumeHasInfluence(UnityEngine.Rendering.Volume volume)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool VolumeHasInfluence(::UnityEngine::Rendering::Volume* volume);
    // public System.Boolean RefreshVolumes(UnityEngine.Rendering.Volume[] newVolumes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool RefreshVolumes(::ArrayW<::UnityEngine::Rendering::Volume*> newVolumes);
    // public System.Single GetVolumeWeight(UnityEngine.Rendering.Volume volume)
    // Offset: 0xFFFFFFFFFFFFFFFF
    float GetVolumeWeight(::UnityEngine::Rendering::Volume* volume);
  }; // UnityEngine.Rendering.IVolumeDebugSettings
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::IVolumeDebugSettings::get_selectedComponent
// Il2CppName: get_selectedComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::IVolumeDebugSettings::*)()>(&UnityEngine::Rendering::IVolumeDebugSettings::get_selectedComponent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::IVolumeDebugSettings*), "get_selectedComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::IVolumeDebugSettings::set_selectedComponent
// Il2CppName: set_selectedComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::IVolumeDebugSettings::*)(int)>(&UnityEngine::Rendering::IVolumeDebugSettings::set_selectedComponent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::IVolumeDebugSettings*), "set_selectedComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::IVolumeDebugSettings::get_selectedCamera
// Il2CppName: get_selectedCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (UnityEngine::Rendering::IVolumeDebugSettings::*)()>(&UnityEngine::Rendering::IVolumeDebugSettings::get_selectedCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::IVolumeDebugSettings*), "get_selectedCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::IVolumeDebugSettings::get_cameras
// Il2CppName: get_cameras
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera*>* (UnityEngine::Rendering::IVolumeDebugSettings::*)()>(&UnityEngine::Rendering::IVolumeDebugSettings::get_cameras)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::IVolumeDebugSettings*), "get_cameras", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::IVolumeDebugSettings::set_selectedCameraIndex
// Il2CppName: set_selectedCameraIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::IVolumeDebugSettings::*)(int)>(&UnityEngine::Rendering::IVolumeDebugSettings::set_selectedCameraIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::IVolumeDebugSettings*), "set_selectedCameraIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::IVolumeDebugSettings::get_selectedCameraVolumeStack
// Il2CppName: get_selectedCameraVolumeStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::VolumeStack* (UnityEngine::Rendering::IVolumeDebugSettings::*)()>(&UnityEngine::Rendering::IVolumeDebugSettings::get_selectedCameraVolumeStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::IVolumeDebugSettings*), "get_selectedCameraVolumeStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::IVolumeDebugSettings::get_selectedComponentType
// Il2CppName: get_selectedComponentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (UnityEngine::Rendering::IVolumeDebugSettings::*)()>(&UnityEngine::Rendering::IVolumeDebugSettings::get_selectedComponentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::IVolumeDebugSettings*), "get_selectedComponentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::IVolumeDebugSettings::GetVolumes
// Il2CppName: GetVolumes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rendering::Volume*> (UnityEngine::Rendering::IVolumeDebugSettings::*)()>(&UnityEngine::Rendering::IVolumeDebugSettings::GetVolumes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::IVolumeDebugSettings*), "GetVolumes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::IVolumeDebugSettings::VolumeHasInfluence
// Il2CppName: VolumeHasInfluence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::IVolumeDebugSettings::*)(::UnityEngine::Rendering::Volume*)>(&UnityEngine::Rendering::IVolumeDebugSettings::VolumeHasInfluence)> {
  static const MethodInfo* get() {
    static auto* volume = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "Volume")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::IVolumeDebugSettings*), "VolumeHasInfluence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volume});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::IVolumeDebugSettings::RefreshVolumes
// Il2CppName: RefreshVolumes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::IVolumeDebugSettings::*)(::ArrayW<::UnityEngine::Rendering::Volume*>)>(&UnityEngine::Rendering::IVolumeDebugSettings::RefreshVolumes)> {
  static const MethodInfo* get() {
    static auto* newVolumes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "Volume"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::IVolumeDebugSettings*), "RefreshVolumes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newVolumes});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::IVolumeDebugSettings::GetVolumeWeight
// Il2CppName: GetVolumeWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Rendering::IVolumeDebugSettings::*)(::UnityEngine::Rendering::Volume*)>(&UnityEngine::Rendering::IVolumeDebugSettings::GetVolumeWeight)> {
  static const MethodInfo* get() {
    static auto* volume = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "Volume")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::IVolumeDebugSettings*), "GetVolumeWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volume});
  }
};