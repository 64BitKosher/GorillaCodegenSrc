// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ONSPPropagation
#include "GlobalNamespace/ONSPPropagation.hpp"
// Including type: Oculus.Spatializer.Propagation.MeshGroup
#include "Oculus/Spatializer/Propagation/MeshGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: Oculus::Spatializer::Propagation
namespace Oculus::Spatializer::Propagation {
  // Forward declaring type: MaterialProperty
  struct MaterialProperty;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ONSPPropagation::PropagationInterface);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ONSPPropagation::PropagationInterface*, "", "ONSPPropagation/PropagationInterface");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ONSPPropagation/PropagationInterface
  // [TokenAttribute] Offset: FFFFFFFF
  class ONSPPropagation::PropagationInterface {
    public:
    // public System.Int32 SetPropagationQuality(System.Single quality)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int SetPropagationQuality(float quality);
    // public System.Int32 SetPropagationThreadAffinity(System.UInt64 cpuMask)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int SetPropagationThreadAffinity(uint64_t cpuMask);
    // public System.Int32 CreateAudioGeometry(out System.IntPtr geometry)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int CreateAudioGeometry(ByRef<::System::IntPtr> geometry);
    // public System.Int32 DestroyAudioGeometry(System.IntPtr geometry)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int DestroyAudioGeometry(::System::IntPtr geometry);
    // public System.Int32 AudioGeometryUploadMeshArrays(System.IntPtr geometry, System.Single[] vertices, System.Int32 vertexCount, System.Int32[] indices, System.Int32 indexCount, Oculus.Spatializer.Propagation.MeshGroup[] groups, System.Int32 groupCount)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int AudioGeometryUploadMeshArrays(::System::IntPtr geometry, ::ArrayW<float> vertices, int vertexCount, ::ArrayW<int> indices, int indexCount, ::ArrayW<::Oculus::Spatializer::Propagation::MeshGroup> groups, int groupCount);
    // public System.Int32 AudioGeometrySetTransform(System.IntPtr geometry, System.Single[] matrix4x4)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int AudioGeometrySetTransform(::System::IntPtr geometry, ::ArrayW<float> matrix4x4);
    // public System.Int32 AudioGeometryGetTransform(System.IntPtr geometry, out System.Single[] matrix4x4)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int AudioGeometryGetTransform(::System::IntPtr geometry, ByRef<::ArrayW<float>> matrix4x4);
    // public System.Int32 AudioGeometryWriteMeshFile(System.IntPtr geometry, System.String filePath)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int AudioGeometryWriteMeshFile(::System::IntPtr geometry, ::StringW filePath);
    // public System.Int32 AudioGeometryReadMeshFile(System.IntPtr geometry, System.String filePath)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int AudioGeometryReadMeshFile(::System::IntPtr geometry, ::StringW filePath);
    // public System.Int32 AudioGeometryWriteMeshFileObj(System.IntPtr geometry, System.String filePath)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int AudioGeometryWriteMeshFileObj(::System::IntPtr geometry, ::StringW filePath);
    // public System.Int32 AudioMaterialGetFrequency(System.IntPtr material, Oculus.Spatializer.Propagation.MaterialProperty property, System.Single frequency, out System.Single value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int AudioMaterialGetFrequency(::System::IntPtr material, ::Oculus::Spatializer::Propagation::MaterialProperty property, float frequency, ByRef<float> value);
    // public System.Int32 CreateAudioMaterial(out System.IntPtr material)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int CreateAudioMaterial(ByRef<::System::IntPtr> material);
    // public System.Int32 DestroyAudioMaterial(System.IntPtr material)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int DestroyAudioMaterial(::System::IntPtr material);
    // public System.Int32 AudioMaterialSetFrequency(System.IntPtr material, Oculus.Spatializer.Propagation.MaterialProperty property, System.Single frequency, System.Single value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int AudioMaterialSetFrequency(::System::IntPtr material, ::Oculus::Spatializer::Propagation::MaterialProperty property, float frequency, float value);
    // public System.Int32 AudioMaterialReset(System.IntPtr material, Oculus.Spatializer.Propagation.MaterialProperty property)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int AudioMaterialReset(::System::IntPtr material, ::Oculus::Spatializer::Propagation::MaterialProperty property);
  }; // ONSPPropagation/PropagationInterface
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagation::PropagationInterface::SetPropagationQuality
// Il2CppName: SetPropagationQuality
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ONSPPropagation::PropagationInterface::*)(float)>(&GlobalNamespace::ONSPPropagation::PropagationInterface::SetPropagationQuality)> {
  static const MethodInfo* get() {
    static auto* quality = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagation::PropagationInterface*), "SetPropagationQuality", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{quality});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagation::PropagationInterface::SetPropagationThreadAffinity
// Il2CppName: SetPropagationThreadAffinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ONSPPropagation::PropagationInterface::*)(uint64_t)>(&GlobalNamespace::ONSPPropagation::PropagationInterface::SetPropagationThreadAffinity)> {
  static const MethodInfo* get() {
    static auto* cpuMask = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagation::PropagationInterface*), "SetPropagationThreadAffinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cpuMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagation::PropagationInterface::CreateAudioGeometry
// Il2CppName: CreateAudioGeometry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ONSPPropagation::PropagationInterface::*)(ByRef<::System::IntPtr>)>(&GlobalNamespace::ONSPPropagation::PropagationInterface::CreateAudioGeometry)> {
  static const MethodInfo* get() {
    static auto* geometry = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagation::PropagationInterface*), "CreateAudioGeometry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{geometry});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagation::PropagationInterface::DestroyAudioGeometry
// Il2CppName: DestroyAudioGeometry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ONSPPropagation::PropagationInterface::*)(::System::IntPtr)>(&GlobalNamespace::ONSPPropagation::PropagationInterface::DestroyAudioGeometry)> {
  static const MethodInfo* get() {
    static auto* geometry = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagation::PropagationInterface*), "DestroyAudioGeometry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{geometry});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagation::PropagationInterface::AudioGeometryUploadMeshArrays
// Il2CppName: AudioGeometryUploadMeshArrays
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ONSPPropagation::PropagationInterface::*)(::System::IntPtr, ::ArrayW<float>, int, ::ArrayW<int>, int, ::ArrayW<::Oculus::Spatializer::Propagation::MeshGroup>, int)>(&GlobalNamespace::ONSPPropagation::PropagationInterface::AudioGeometryUploadMeshArrays)> {
  static const MethodInfo* get() {
    static auto* geometry = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* vertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* vertexCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* indices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* indexCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* groups = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Oculus.Spatializer.Propagation", "MeshGroup"), 1)->byval_arg;
    static auto* groupCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagation::PropagationInterface*), "AudioGeometryUploadMeshArrays", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{geometry, vertices, vertexCount, indices, indexCount, groups, groupCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagation::PropagationInterface::AudioGeometrySetTransform
// Il2CppName: AudioGeometrySetTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ONSPPropagation::PropagationInterface::*)(::System::IntPtr, ::ArrayW<float>)>(&GlobalNamespace::ONSPPropagation::PropagationInterface::AudioGeometrySetTransform)> {
  static const MethodInfo* get() {
    static auto* geometry = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* matrix4x4 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagation::PropagationInterface*), "AudioGeometrySetTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{geometry, matrix4x4});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagation::PropagationInterface::AudioGeometryGetTransform
// Il2CppName: AudioGeometryGetTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ONSPPropagation::PropagationInterface::*)(::System::IntPtr, ByRef<::ArrayW<float>>)>(&GlobalNamespace::ONSPPropagation::PropagationInterface::AudioGeometryGetTransform)> {
  static const MethodInfo* get() {
    static auto* geometry = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* matrix4x4 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagation::PropagationInterface*), "AudioGeometryGetTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{geometry, matrix4x4});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagation::PropagationInterface::AudioGeometryWriteMeshFile
// Il2CppName: AudioGeometryWriteMeshFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ONSPPropagation::PropagationInterface::*)(::System::IntPtr, ::StringW)>(&GlobalNamespace::ONSPPropagation::PropagationInterface::AudioGeometryWriteMeshFile)> {
  static const MethodInfo* get() {
    static auto* geometry = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagation::PropagationInterface*), "AudioGeometryWriteMeshFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{geometry, filePath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagation::PropagationInterface::AudioGeometryReadMeshFile
// Il2CppName: AudioGeometryReadMeshFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ONSPPropagation::PropagationInterface::*)(::System::IntPtr, ::StringW)>(&GlobalNamespace::ONSPPropagation::PropagationInterface::AudioGeometryReadMeshFile)> {
  static const MethodInfo* get() {
    static auto* geometry = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagation::PropagationInterface*), "AudioGeometryReadMeshFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{geometry, filePath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagation::PropagationInterface::AudioGeometryWriteMeshFileObj
// Il2CppName: AudioGeometryWriteMeshFileObj
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ONSPPropagation::PropagationInterface::*)(::System::IntPtr, ::StringW)>(&GlobalNamespace::ONSPPropagation::PropagationInterface::AudioGeometryWriteMeshFileObj)> {
  static const MethodInfo* get() {
    static auto* geometry = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagation::PropagationInterface*), "AudioGeometryWriteMeshFileObj", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{geometry, filePath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagation::PropagationInterface::AudioMaterialGetFrequency
// Il2CppName: AudioMaterialGetFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ONSPPropagation::PropagationInterface::*)(::System::IntPtr, ::Oculus::Spatializer::Propagation::MaterialProperty, float, ByRef<float>)>(&GlobalNamespace::ONSPPropagation::PropagationInterface::AudioMaterialGetFrequency)> {
  static const MethodInfo* get() {
    static auto* material = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("Oculus.Spatializer.Propagation", "MaterialProperty")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagation::PropagationInterface*), "AudioMaterialGetFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{material, property, frequency, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagation::PropagationInterface::CreateAudioMaterial
// Il2CppName: CreateAudioMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ONSPPropagation::PropagationInterface::*)(ByRef<::System::IntPtr>)>(&GlobalNamespace::ONSPPropagation::PropagationInterface::CreateAudioMaterial)> {
  static const MethodInfo* get() {
    static auto* material = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagation::PropagationInterface*), "CreateAudioMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{material});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagation::PropagationInterface::DestroyAudioMaterial
// Il2CppName: DestroyAudioMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ONSPPropagation::PropagationInterface::*)(::System::IntPtr)>(&GlobalNamespace::ONSPPropagation::PropagationInterface::DestroyAudioMaterial)> {
  static const MethodInfo* get() {
    static auto* material = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagation::PropagationInterface*), "DestroyAudioMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{material});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagation::PropagationInterface::AudioMaterialSetFrequency
// Il2CppName: AudioMaterialSetFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ONSPPropagation::PropagationInterface::*)(::System::IntPtr, ::Oculus::Spatializer::Propagation::MaterialProperty, float, float)>(&GlobalNamespace::ONSPPropagation::PropagationInterface::AudioMaterialSetFrequency)> {
  static const MethodInfo* get() {
    static auto* material = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("Oculus.Spatializer.Propagation", "MaterialProperty")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagation::PropagationInterface*), "AudioMaterialSetFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{material, property, frequency, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagation::PropagationInterface::AudioMaterialReset
// Il2CppName: AudioMaterialReset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ONSPPropagation::PropagationInterface::*)(::System::IntPtr, ::Oculus::Spatializer::Propagation::MaterialProperty)>(&GlobalNamespace::ONSPPropagation::PropagationInterface::AudioMaterialReset)> {
  static const MethodInfo* get() {
    static auto* material = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("Oculus.Spatializer.Propagation", "MaterialProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagation::PropagationInterface*), "AudioMaterialReset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{material, property});
  }
};
