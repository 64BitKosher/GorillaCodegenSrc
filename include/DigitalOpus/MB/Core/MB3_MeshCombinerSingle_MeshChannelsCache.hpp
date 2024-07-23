// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle
#include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle.hpp"
// Including type: DigitalOpus.MB.Core.MB2_LogLevel
#include "DigitalOpus/MB/Core/MB2_LogLevel.hpp"
// Including type: DigitalOpus.MB.Core.MB2_LightmapOptions
#include "DigitalOpus/MB/Core/MB2_LightmapOptions.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: UnityEngine.BoneWeight
#include "UnityEngine/BoneWeight.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MeshChannelsCache");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MeshChannelsCache
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_MeshCombinerSingle::MeshChannelsCache : public ::Il2CppObject {
    public:
    public:
    // private DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL
    // Size: 0x4
    // Offset: 0x10
    ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB2_LogLevel) == 0x4);
    // private DigitalOpus.MB.Core.MB2_LightmapOptions lightmapOption
    // Size: 0x4
    // Offset: 0x14
    ::DigitalOpus::MB::Core::MB2_LightmapOptions lightmapOption;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB2_LightmapOptions) == 0x4);
    // protected System.Collections.Generic.Dictionary`2<System.Int32,DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MeshChannels> meshID2MeshChannels
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<int, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannels*>* meshID2MeshChannels;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannels*>*) == 0x8);
    // private UnityEngine.Vector2 _HALF_UV
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Vector2 HALF_UV;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Get instance field reference: private DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB2_LogLevel& dyn_LOG_LEVEL();
    // Get instance field reference: private DigitalOpus.MB.Core.MB2_LightmapOptions lightmapOption
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB2_LightmapOptions& dyn_lightmapOption();
    // Get instance field reference: protected System.Collections.Generic.Dictionary`2<System.Int32,DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MeshChannels> meshID2MeshChannels
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannels*>*& dyn_meshID2MeshChannels();
    // Get instance field reference: private UnityEngine.Vector2 _HALF_UV
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__HALF_UV();
    // public System.Void .ctor(DigitalOpus.MB.Core.MB2_LogLevel ll, DigitalOpus.MB.Core.MB2_LightmapOptions lo)
    // Offset: 0x43C8B98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_MeshCombinerSingle::MeshChannelsCache* New_ctor(::DigitalOpus::MB::Core::MB2_LogLevel ll, ::DigitalOpus::MB::Core::MB2_LightmapOptions lo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_MeshCombinerSingle::MeshChannelsCache*, creationType>(ll, lo)));
    }
    // UnityEngine.Vector3[] GetVertices(UnityEngine.Mesh m)
    // Offset: 0x43C8C40
    ::ArrayW<::UnityEngine::Vector3> GetVertices(::UnityEngine::Mesh* m);
    // UnityEngine.Vector3[] GetNormals(UnityEngine.Mesh m)
    // Offset: 0x43C8D68
    ::ArrayW<::UnityEngine::Vector3> GetNormals(::UnityEngine::Mesh* m);
    // UnityEngine.Vector4[] GetTangents(UnityEngine.Mesh m)
    // Offset: 0x43C90B0
    ::ArrayW<::UnityEngine::Vector4> GetTangents(::UnityEngine::Mesh* m);
    // UnityEngine.Vector2[] GetUv0Raw(UnityEngine.Mesh m)
    // Offset: 0x43C9454
    ::ArrayW<::UnityEngine::Vector2> GetUv0Raw(::UnityEngine::Mesh* m);
    // UnityEngine.Vector2[] GetUv0Modified(UnityEngine.Mesh m)
    // Offset: 0x43C963C
    ::ArrayW<::UnityEngine::Vector2> GetUv0Modified(::UnityEngine::Mesh* m);
    // UnityEngine.Vector2[] GetUv2Modified(UnityEngine.Mesh m)
    // Offset: 0x43C9754
    ::ArrayW<::UnityEngine::Vector2> GetUv2Modified(::UnityEngine::Mesh* m);
    // UnityEngine.Vector2[] GetUVChannel(System.Int32 channel, UnityEngine.Mesh m)
    // Offset: 0x43C9968
    ::ArrayW<::UnityEngine::Vector2> GetUVChannel(int channel, ::UnityEngine::Mesh* m);
    // UnityEngine.Color[] GetColors(UnityEngine.Mesh m)
    // Offset: 0x43C9D48
    ::ArrayW<::UnityEngine::Color> GetColors(::UnityEngine::Mesh* m);
    // UnityEngine.Matrix4x4[] GetBindposes(UnityEngine.Renderer r, out System.Boolean isSkinnedMeshWithBones)
    // Offset: 0x43CA090
    ::ArrayW<::UnityEngine::Matrix4x4> GetBindposes(::UnityEngine::Renderer* r, ByRef<bool> isSkinnedMeshWithBones);
    // UnityEngine.BoneWeight[] GetBoneWeights(UnityEngine.Renderer r, System.Int32 numVertsInMeshBeingAdded, System.Boolean isSkinnedMeshWithBones)
    // Offset: 0x43CA670
    ::ArrayW<::UnityEngine::BoneWeight> GetBoneWeights(::UnityEngine::Renderer* r, int numVertsInMeshBeingAdded, bool isSkinnedMeshWithBones);
    // System.Int32[] GetTriangles(UnityEngine.Mesh m)
    // Offset: 0x43CAA20
    ::ArrayW<int> GetTriangles(::UnityEngine::Mesh* m);
    // DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MBBlendShape[] GetBlendShapes(UnityEngine.Mesh m, System.Int32 gameObjectID, UnityEngine.GameObject gameObject)
    // Offset: 0x43CAB48
    ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MBBlendShape*> GetBlendShapes(::UnityEngine::Mesh* m, int gameObjectID, ::UnityEngine::GameObject* gameObject);
    // private UnityEngine.Color[] _getMeshColors(UnityEngine.Mesh m)
    // Offset: 0x43C9E70
    ::ArrayW<::UnityEngine::Color> _getMeshColors(::UnityEngine::Mesh* m);
    // private UnityEngine.Vector3[] _getMeshNormals(UnityEngine.Mesh m)
    // Offset: 0x43C8E90
    ::ArrayW<::UnityEngine::Vector3> _getMeshNormals(::UnityEngine::Mesh* m);
    // private UnityEngine.Vector4[] _getMeshTangents(UnityEngine.Mesh m)
    // Offset: 0x43C91D8
    ::ArrayW<::UnityEngine::Vector4> _getMeshTangents(::UnityEngine::Mesh* m);
    // private UnityEngine.Vector2[] _getMeshUVs(UnityEngine.Mesh m)
    // Offset: 0x43C957C
    ::ArrayW<::UnityEngine::Vector2> _getMeshUVs(::UnityEngine::Mesh* m);
    // private UnityEngine.Vector2[] _getMeshUV2s(UnityEngine.Mesh m, ref UnityEngine.Vector2[] uv2modified)
    // Offset: 0x43C9888
    ::ArrayW<::UnityEngine::Vector2> _getMeshUV2s(::UnityEngine::Mesh* m, ByRef<::ArrayW<::UnityEngine::Vector2>> uv2modified);
    // static public UnityEngine.Matrix4x4[] _getBindPoses(UnityEngine.Renderer r, out System.Boolean isSkinnedMeshWithBones)
    // Offset: 0x43CA36C
    static ::ArrayW<::UnityEngine::Matrix4x4> _getBindPoses(::UnityEngine::Renderer* r, ByRef<bool> isSkinnedMeshWithBones);
    // static public UnityEngine.BoneWeight[] _getBoneWeights(UnityEngine.Renderer r, System.Int32 numVertsInMeshBeingAdded, System.Boolean isSkinnedMeshWithBones)
    // Offset: 0x43CA7C0
    static ::ArrayW<::UnityEngine::BoneWeight> _getBoneWeights(::UnityEngine::Renderer* r, int numVertsInMeshBeingAdded, bool isSkinnedMeshWithBones);
    // private System.Void _generateTangents(System.Int32[] triangles, UnityEngine.Vector3[] verts, UnityEngine.Vector2[] uvs, UnityEngine.Vector3[] normals, UnityEngine.Vector4[] outTangents)
    // Offset: 0x43CAC08
    void _generateTangents(::ArrayW<int> triangles, ::ArrayW<::UnityEngine::Vector3> verts, ::ArrayW<::UnityEngine::Vector2> uvs, ::ArrayW<::UnityEngine::Vector3> normals, ::ArrayW<::UnityEngine::Vector4> outTangents);
  }; // DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MeshChannelsCache
  #pragma pack(pop)
  static check_size<sizeof(MB3_MeshCombinerSingle::MeshChannelsCache), 32 + sizeof(::UnityEngine::Vector2)> __DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MeshChannelsCacheSizeCheck;
  static_assert(sizeof(MB3_MeshCombinerSingle::MeshChannelsCache) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetVertices
// Il2CppName: GetVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3> (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetVertices)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "GetVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetNormals
// Il2CppName: GetNormals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3> (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetNormals)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "GetNormals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetTangents
// Il2CppName: GetTangents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector4> (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetTangents)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "GetTangents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetUv0Raw
// Il2CppName: GetUv0Raw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetUv0Raw)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "GetUv0Raw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetUv0Modified
// Il2CppName: GetUv0Modified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetUv0Modified)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "GetUv0Modified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetUv2Modified
// Il2CppName: GetUv2Modified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetUv2Modified)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "GetUv2Modified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetUVChannel
// Il2CppName: GetUVChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(int, ::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetUVChannel)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "GetUVChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetColors
// Il2CppName: GetColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color> (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetColors)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "GetColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetBindposes
// Il2CppName: GetBindposes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(::UnityEngine::Renderer*, ByRef<bool>)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetBindposes)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    static auto* isSkinnedMeshWithBones = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "GetBindposes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, isSkinnedMeshWithBones});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetBoneWeights
// Il2CppName: GetBoneWeights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::BoneWeight> (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(::UnityEngine::Renderer*, int, bool)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetBoneWeights)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    static auto* numVertsInMeshBeingAdded = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isSkinnedMeshWithBones = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "GetBoneWeights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, numVertsInMeshBeingAdded, isSkinnedMeshWithBones});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetTriangles
// Il2CppName: GetTriangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetTriangles)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "GetTriangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetBlendShapes
// Il2CppName: GetBlendShapes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MBBlendShape*> (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(::UnityEngine::Mesh*, int, ::UnityEngine::GameObject*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::GetBlendShapes)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* gameObjectID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "GetBlendShapes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, gameObjectID, gameObject});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::_getMeshColors
// Il2CppName: _getMeshColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color> (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::_getMeshColors)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "_getMeshColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::_getMeshNormals
// Il2CppName: _getMeshNormals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3> (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::_getMeshNormals)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "_getMeshNormals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::_getMeshTangents
// Il2CppName: _getMeshTangents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector4> (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::_getMeshTangents)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "_getMeshTangents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::_getMeshUVs
// Il2CppName: _getMeshUVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::_getMeshUVs)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "_getMeshUVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::_getMeshUV2s
// Il2CppName: _getMeshUV2s
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(::UnityEngine::Mesh*, ByRef<::ArrayW<::UnityEngine::Vector2>>)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::_getMeshUV2s)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* uv2modified = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "_getMeshUV2s", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, uv2modified});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::_getBindPoses
// Il2CppName: _getBindPoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (*)(::UnityEngine::Renderer*, ByRef<bool>)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::_getBindPoses)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    static auto* isSkinnedMeshWithBones = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "_getBindPoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, isSkinnedMeshWithBones});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::_getBoneWeights
// Il2CppName: _getBoneWeights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::BoneWeight> (*)(::UnityEngine::Renderer*, int, bool)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::_getBoneWeights)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    static auto* numVertsInMeshBeingAdded = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isSkinnedMeshWithBones = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "_getBoneWeights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, numVertsInMeshBeingAdded, isSkinnedMeshWithBones});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::_generateTangents
// Il2CppName: _generateTangents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::*)(::ArrayW<int>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector2>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector4>)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache::_generateTangents)> {
  static const MethodInfo* get() {
    static auto* triangles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* verts = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* uvs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->byval_arg;
    static auto* normals = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* outTangents = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*), "_generateTangents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{triangles, verts, uvs, normals, outTangents});
  }
};
