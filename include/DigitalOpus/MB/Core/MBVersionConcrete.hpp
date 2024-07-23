// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MBVersionInterface
#include "DigitalOpus/MB/Core/MBVersionInterface.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB2_LogLevel
  struct MB2_LogLevel;
  // Forward declaring type: ShaderTextureProperty
  class ShaderTextureProperty;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Object because it is already included!
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: ColorSpace
  struct ColorSpace;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MBVersionConcrete
  class MBVersionConcrete;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MBVersionConcrete);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MBVersionConcrete*, "DigitalOpus.MB.Core", "MBVersionConcrete");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MBVersionConcrete
  // [TokenAttribute] Offset: FFFFFFFF
  class MBVersionConcrete : public ::Il2CppObject/*, public ::DigitalOpus::MB::Core::MBVersionInterface*/ {
    public:
    // Nested type: ::DigitalOpus::MB::Core::MBVersionConcrete::$$c
    class $$c;
    // Nested type: ::DigitalOpus::MB::Core::MBVersionConcrete::$FindRuntimeMaterialsFromAddresses$d__30
    class $FindRuntimeMaterialsFromAddresses$d__30;
    public:
    // private UnityEngine.Vector2 _HALF_UV
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Vector2 HALF_UV;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Creating interface conversion operator: operator ::DigitalOpus::MB::Core::MBVersionInterface
    operator ::DigitalOpus::MB::Core::MBVersionInterface() noexcept {
      return *reinterpret_cast<::DigitalOpus::MB::Core::MBVersionInterface*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Vector2
    constexpr operator ::UnityEngine::Vector2() const noexcept {
      return HALF_UV;
    }
    // Get instance field reference: private UnityEngine.Vector2 _HALF_UV
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__HALF_UV();
    // public System.String version()
    // Offset: 0x43FF988
    ::StringW version();
    // public System.Int32 GetMajorVersion()
    // Offset: 0x43FF9C8
    int GetMajorVersion();
    // public System.Int32 GetMinorVersion()
    // Offset: 0x43FFA88
    int GetMinorVersion();
    // public System.Boolean GetActive(UnityEngine.GameObject go)
    // Offset: 0x43FFB4C
    bool GetActive(::UnityEngine::GameObject* go);
    // public System.Void SetActive(UnityEngine.GameObject go, System.Boolean isActive)
    // Offset: 0x43FFB64
    void SetActive(::UnityEngine::GameObject* go, bool isActive);
    // public System.Void SetActiveRecursively(UnityEngine.GameObject go, System.Boolean isActive)
    // Offset: 0x43FFB84
    void SetActiveRecursively(::UnityEngine::GameObject* go, bool isActive);
    // public UnityEngine.Object[] FindSceneObjectsOfType(System.Type t)
    // Offset: 0x43FFBA4
    ::ArrayW<::UnityEngine::Object*> FindSceneObjectsOfType(::System::Type* t);
    // public System.Void OptimizeMesh(UnityEngine.Mesh m)
    // Offset: 0x43FFBFC
    void OptimizeMesh(::UnityEngine::Mesh* m);
    // public System.Boolean IsRunningAndMeshNotReadWriteable(UnityEngine.Mesh m)
    // Offset: 0x43FFC00
    bool IsRunningAndMeshNotReadWriteable(::UnityEngine::Mesh* m);
    // public UnityEngine.Vector2[] GetMeshUV1s(UnityEngine.Mesh m, DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL)
    // Offset: 0x43FFC80
    ::ArrayW<::UnityEngine::Vector2> GetMeshUV1s(::UnityEngine::Mesh* m, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL);
    // public UnityEngine.Vector2[] GetMeshUVChannel(System.Int32 channel, UnityEngine.Mesh m, DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL)
    // Offset: 0x43FFF14
    ::ArrayW<::UnityEngine::Vector2> GetMeshUVChannel(int channel, ::UnityEngine::Mesh* m, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL);
    // public System.Void MeshClear(UnityEngine.Mesh m, System.Boolean t)
    // Offset: 0x44002D8
    void MeshClear(::UnityEngine::Mesh* m, bool t);
    // public System.Void MeshAssignUVChannel(System.Int32 channel, UnityEngine.Mesh m, UnityEngine.Vector2[] uvs)
    // Offset: 0x44002F8
    void MeshAssignUVChannel(int channel, ::UnityEngine::Mesh* m, ::ArrayW<::UnityEngine::Vector2> uvs);
    // public UnityEngine.Vector4 GetLightmapTilingOffset(UnityEngine.Renderer r)
    // Offset: 0x44004CC
    ::UnityEngine::Vector4 GetLightmapTilingOffset(::UnityEngine::Renderer* r);
    // public UnityEngine.Transform[] GetBones(UnityEngine.Renderer r, System.Boolean isSkinnedMeshWithBones)
    // Offset: 0x44004E4
    ::ArrayW<::UnityEngine::Transform*> GetBones(::UnityEngine::Renderer* r, bool isSkinnedMeshWithBones);
    // public System.Int32 GetBlendShapeFrameCount(UnityEngine.Mesh m, System.Int32 shapeIndex)
    // Offset: 0x44006B4
    int GetBlendShapeFrameCount(::UnityEngine::Mesh* m, int shapeIndex);
    // public System.Single GetBlendShapeFrameWeight(UnityEngine.Mesh m, System.Int32 shapeIndex, System.Int32 frameIndex)
    // Offset: 0x44006D0
    float GetBlendShapeFrameWeight(::UnityEngine::Mesh* m, int shapeIndex, int frameIndex);
    // public System.Void GetBlendShapeFrameVertices(UnityEngine.Mesh m, System.Int32 shapeIndex, System.Int32 frameIndex, UnityEngine.Vector3[] vs, UnityEngine.Vector3[] ns, UnityEngine.Vector3[] ts)
    // Offset: 0x44006F0
    void GetBlendShapeFrameVertices(::UnityEngine::Mesh* m, int shapeIndex, int frameIndex, ::ArrayW<::UnityEngine::Vector3> vs, ::ArrayW<::UnityEngine::Vector3> ns, ::ArrayW<::UnityEngine::Vector3> ts);
    // public System.Void ClearBlendShapes(UnityEngine.Mesh m)
    // Offset: 0x440071C
    void ClearBlendShapes(::UnityEngine::Mesh* m);
    // public System.Void AddBlendShapeFrame(UnityEngine.Mesh m, System.String nm, System.Single wt, UnityEngine.Vector3[] vs, UnityEngine.Vector3[] ns, UnityEngine.Vector3[] ts)
    // Offset: 0x4400734
    void AddBlendShapeFrame(::UnityEngine::Mesh* m, ::StringW nm, float wt, ::ArrayW<::UnityEngine::Vector3> vs, ::ArrayW<::UnityEngine::Vector3> ns, ::ArrayW<::UnityEngine::Vector3> ts);
    // public System.Int32 MaxMeshVertexCount()
    // Offset: 0x440075C
    int MaxMeshVertexCount();
    // public System.Void SetMeshIndexFormatAndClearMesh(UnityEngine.Mesh m, System.Int32 numVerts, System.Boolean vertices, System.Boolean justClearTriangles)
    // Offset: 0x4400764
    void SetMeshIndexFormatAndClearMesh(::UnityEngine::Mesh* m, int numVerts, bool vertices, bool justClearTriangles);
    // public System.Boolean GraphicsUVStartsAtTop()
    // Offset: 0x4400820
    bool GraphicsUVStartsAtTop();
    // public System.Boolean IsTextureReadable(UnityEngine.Texture2D tex)
    // Offset: 0x4400828
    bool IsTextureReadable(::UnityEngine::Texture2D* tex);
    // public System.Boolean CollectPropertyNames(System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty> texPropertyNames, DigitalOpus.MB.Core.ShaderTextureProperty[] shaderTexPropertyNames, System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty> _customShaderPropNames, UnityEngine.Material resultMaterial, DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL)
    // Offset: 0x440084C
    bool CollectPropertyNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* texPropertyNames, ::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*> shaderTexPropertyNames, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* _customShaderPropNames, ::UnityEngine::Material* resultMaterial, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL);
    // public System.Void DoSpecialRenderPipeline_TexturePackerFastSetup(UnityEngine.GameObject cameraGameObject)
    // Offset: 0x440109C
    void DoSpecialRenderPipeline_TexturePackerFastSetup(::UnityEngine::GameObject* cameraGameObject);
    // public UnityEngine.ColorSpace GetProjectColorSpace()
    // Offset: 0x44010A0
    ::UnityEngine::ColorSpace GetProjectColorSpace();
    // public DigitalOpus.MB.Core.MBVersion/PipelineType DetectPipeline()
    // Offset: 0x4400F6C
    ::DigitalOpus::MB::Core::MBVersion::PipelineType DetectPipeline();
    // public System.String UnescapeURL(System.String url)
    // Offset: 0x4401298
    ::StringW UnescapeURL(::StringW url);
    // public System.Collections.IEnumerator FindRuntimeMaterialsFromAddresses(MB2_TextureBakeResults texBakeResult, MB2_TextureBakeResults/CoroutineResult isComplete)
    // Offset: 0x44012A4
    ::System::Collections::IEnumerator* FindRuntimeMaterialsFromAddresses(::GlobalNamespace::MB2_TextureBakeResults* texBakeResult, ::GlobalNamespace::MB2_TextureBakeResults::CoroutineResult* isComplete);
    // public System.Void .ctor()
    // Offset: 0x4401338
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MBVersionConcrete* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MBVersionConcrete::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MBVersionConcrete*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MBVersionConcrete
  #pragma pack(pop)
  static check_size<sizeof(MBVersionConcrete), 16 + sizeof(::UnityEngine::Vector2)> __DigitalOpus_MB_Core_MBVersionConcreteSizeCheck;
  static_assert(sizeof(MBVersionConcrete) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::version
// Il2CppName: version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (DigitalOpus::MB::Core::MBVersionConcrete::*)()>(&DigitalOpus::MB::Core::MBVersionConcrete::version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::GetMajorVersion
// Il2CppName: GetMajorVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MBVersionConcrete::*)()>(&DigitalOpus::MB::Core::MBVersionConcrete::GetMajorVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "GetMajorVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::GetMinorVersion
// Il2CppName: GetMinorVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MBVersionConcrete::*)()>(&DigitalOpus::MB::Core::MBVersionConcrete::GetMinorVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "GetMinorVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::GetActive
// Il2CppName: GetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::GameObject*)>(&DigitalOpus::MB::Core::MBVersionConcrete::GetActive)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "GetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::GameObject*, bool)>(&DigitalOpus::MB::Core::MBVersionConcrete::SetActive)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* isActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go, isActive});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::SetActiveRecursively
// Il2CppName: SetActiveRecursively
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::GameObject*, bool)>(&DigitalOpus::MB::Core::MBVersionConcrete::SetActiveRecursively)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* isActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "SetActiveRecursively", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go, isActive});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::FindSceneObjectsOfType
// Il2CppName: FindSceneObjectsOfType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Object*> (DigitalOpus::MB::Core::MBVersionConcrete::*)(::System::Type*)>(&DigitalOpus::MB::Core::MBVersionConcrete::FindSceneObjectsOfType)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "FindSceneObjectsOfType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::OptimizeMesh
// Il2CppName: OptimizeMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MBVersionConcrete::OptimizeMesh)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "OptimizeMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::IsRunningAndMeshNotReadWriteable
// Il2CppName: IsRunningAndMeshNotReadWriteable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MBVersionConcrete::IsRunningAndMeshNotReadWriteable)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "IsRunningAndMeshNotReadWriteable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::GetMeshUV1s
// Il2CppName: GetMeshUV1s
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&DigitalOpus::MB::Core::MBVersionConcrete::GetMeshUV1s)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* LOG_LEVEL = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "GetMeshUV1s", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, LOG_LEVEL});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::GetMeshUVChannel
// Il2CppName: GetMeshUVChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (DigitalOpus::MB::Core::MBVersionConcrete::*)(int, ::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&DigitalOpus::MB::Core::MBVersionConcrete::GetMeshUVChannel)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* LOG_LEVEL = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "GetMeshUVChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, m, LOG_LEVEL});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::MeshClear
// Il2CppName: MeshClear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*, bool)>(&DigitalOpus::MB::Core::MBVersionConcrete::MeshClear)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "MeshClear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, t});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::MeshAssignUVChannel
// Il2CppName: MeshAssignUVChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionConcrete::*)(int, ::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::Vector2>)>(&DigitalOpus::MB::Core::MBVersionConcrete::MeshAssignUVChannel)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* uvs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "MeshAssignUVChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, m, uvs});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::GetLightmapTilingOffset
// Il2CppName: GetLightmapTilingOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Renderer*)>(&DigitalOpus::MB::Core::MBVersionConcrete::GetLightmapTilingOffset)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "GetLightmapTilingOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::GetBones
// Il2CppName: GetBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform*> (DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Renderer*, bool)>(&DigitalOpus::MB::Core::MBVersionConcrete::GetBones)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    static auto* isSkinnedMeshWithBones = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "GetBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, isSkinnedMeshWithBones});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::GetBlendShapeFrameCount
// Il2CppName: GetBlendShapeFrameCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*, int)>(&DigitalOpus::MB::Core::MBVersionConcrete::GetBlendShapeFrameCount)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* shapeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "GetBlendShapeFrameCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, shapeIndex});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::GetBlendShapeFrameWeight
// Il2CppName: GetBlendShapeFrameWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*, int, int)>(&DigitalOpus::MB::Core::MBVersionConcrete::GetBlendShapeFrameWeight)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* shapeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frameIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "GetBlendShapeFrameWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, shapeIndex, frameIndex});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::GetBlendShapeFrameVertices
// Il2CppName: GetBlendShapeFrameVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*, int, int, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>)>(&DigitalOpus::MB::Core::MBVersionConcrete::GetBlendShapeFrameVertices)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* shapeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frameIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* vs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* ns = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* ts = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "GetBlendShapeFrameVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, shapeIndex, frameIndex, vs, ns, ts});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::ClearBlendShapes
// Il2CppName: ClearBlendShapes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MBVersionConcrete::ClearBlendShapes)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "ClearBlendShapes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::AddBlendShapeFrame
// Il2CppName: AddBlendShapeFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*, ::StringW, float, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>)>(&DigitalOpus::MB::Core::MBVersionConcrete::AddBlendShapeFrame)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* nm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* wt = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* vs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* ns = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* ts = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "AddBlendShapeFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, nm, wt, vs, ns, ts});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::MaxMeshVertexCount
// Il2CppName: MaxMeshVertexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MBVersionConcrete::*)()>(&DigitalOpus::MB::Core::MBVersionConcrete::MaxMeshVertexCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "MaxMeshVertexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::SetMeshIndexFormatAndClearMesh
// Il2CppName: SetMeshIndexFormatAndClearMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*, int, bool, bool)>(&DigitalOpus::MB::Core::MBVersionConcrete::SetMeshIndexFormatAndClearMesh)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* numVerts = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* vertices = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* justClearTriangles = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "SetMeshIndexFormatAndClearMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, numVerts, vertices, justClearTriangles});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::GraphicsUVStartsAtTop
// Il2CppName: GraphicsUVStartsAtTop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MBVersionConcrete::*)()>(&DigitalOpus::MB::Core::MBVersionConcrete::GraphicsUVStartsAtTop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "GraphicsUVStartsAtTop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::IsTextureReadable
// Il2CppName: IsTextureReadable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Texture2D*)>(&DigitalOpus::MB::Core::MBVersionConcrete::IsTextureReadable)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "IsTextureReadable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::CollectPropertyNames
// Il2CppName: CollectPropertyNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MBVersionConcrete::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&DigitalOpus::MB::Core::MBVersionConcrete::CollectPropertyNames)> {
  static const MethodInfo* get() {
    static auto* texPropertyNames = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ShaderTextureProperty")})->byval_arg;
    static auto* shaderTexPropertyNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ShaderTextureProperty"), 1)->byval_arg;
    static auto* _customShaderPropNames = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ShaderTextureProperty")})->byval_arg;
    static auto* resultMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* LOG_LEVEL = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "CollectPropertyNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texPropertyNames, shaderTexPropertyNames, _customShaderPropNames, resultMaterial, LOG_LEVEL});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::DoSpecialRenderPipeline_TexturePackerFastSetup
// Il2CppName: DoSpecialRenderPipeline_TexturePackerFastSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::GameObject*)>(&DigitalOpus::MB::Core::MBVersionConcrete::DoSpecialRenderPipeline_TexturePackerFastSetup)> {
  static const MethodInfo* get() {
    static auto* cameraGameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "DoSpecialRenderPipeline_TexturePackerFastSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraGameObject});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::GetProjectColorSpace
// Il2CppName: GetProjectColorSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ColorSpace (DigitalOpus::MB::Core::MBVersionConcrete::*)()>(&DigitalOpus::MB::Core::MBVersionConcrete::GetProjectColorSpace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "GetProjectColorSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::DetectPipeline
// Il2CppName: DetectPipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::MBVersion::PipelineType (DigitalOpus::MB::Core::MBVersionConcrete::*)()>(&DigitalOpus::MB::Core::MBVersionConcrete::DetectPipeline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "DetectPipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::UnescapeURL
// Il2CppName: UnescapeURL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (DigitalOpus::MB::Core::MBVersionConcrete::*)(::StringW)>(&DigitalOpus::MB::Core::MBVersionConcrete::UnescapeURL)> {
  static const MethodInfo* get() {
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "UnescapeURL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{url});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::FindRuntimeMaterialsFromAddresses
// Il2CppName: FindRuntimeMaterialsFromAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (DigitalOpus::MB::Core::MBVersionConcrete::*)(::GlobalNamespace::MB2_TextureBakeResults*, ::GlobalNamespace::MB2_TextureBakeResults::CoroutineResult*)>(&DigitalOpus::MB::Core::MBVersionConcrete::FindRuntimeMaterialsFromAddresses)> {
  static const MethodInfo* get() {
    static auto* texBakeResult = &::il2cpp_utils::GetClassFromName("", "MB2_TextureBakeResults")->byval_arg;
    static auto* isComplete = &::il2cpp_utils::GetClassFromName("", "MB2_TextureBakeResults/CoroutineResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionConcrete*), "FindRuntimeMaterialsFromAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texBakeResult, isComplete});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionConcrete::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
