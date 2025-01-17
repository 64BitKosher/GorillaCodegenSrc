// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle
#include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: UnityEngine.BoneWeight
#include "UnityEngine/BoneWeight.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MB_DynamicGameObject");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0xE8
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MB_DynamicGameObject
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_MeshCombinerSingle::MB_DynamicGameObject : public ::Il2CppObject/*, public ::System::IComparable_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*>*/ {
    public:
    public:
    // public System.Int32 instanceID
    // Size: 0x4
    // Offset: 0x10
    int instanceID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: instanceID and: gameObject
    char __padding0[0x4] = {};
    // public UnityEngine.GameObject gameObject
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.String name
    // Size: 0x8
    // Offset: 0x20
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 vertIdx
    // Size: 0x4
    // Offset: 0x28
    int vertIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 blendShapeIdx
    // Size: 0x4
    // Offset: 0x2C
    int blendShapeIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 numVerts
    // Size: 0x4
    // Offset: 0x30
    int numVerts;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 numBlendShapes
    // Size: 0x4
    // Offset: 0x34
    int numBlendShapes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean isSkinnedMeshWithBones
    // Size: 0x1
    // Offset: 0x38
    bool isSkinnedMeshWithBones;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isSkinnedMeshWithBones and: indexesOfBonesUsed
    char __padding7[0x7] = {};
    // public System.Int32[] indexesOfBonesUsed
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<int> indexesOfBonesUsed;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public System.Int32 lightmapIndex
    // Size: 0x4
    // Offset: 0x48
    int lightmapIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Vector4 lightmapTilingOffset
    // Size: 0x10
    // Offset: 0x4C
    ::UnityEngine::Vector4 lightmapTilingOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector3 meshSize
    // Size: 0xC
    // Offset: 0x5C
    ::UnityEngine::Vector3 meshSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Boolean show
    // Size: 0x1
    // Offset: 0x68
    bool show;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean invertTriangles
    // Size: 0x1
    // Offset: 0x69
    bool invertTriangles;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: invertTriangles and: submeshTriIdxs
    char __padding13[0x6] = {};
    // public System.Int32[] submeshTriIdxs
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<int> submeshTriIdxs;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public System.Int32[] submeshNumTris
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<int> submeshNumTris;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public System.Int32[] targetSubmeshIdxs
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<int> targetSubmeshIdxs;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public UnityEngine.Rect[] uvRects
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::UnityEngine::Rect> uvRects;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Rect>) == 0x8);
    // public UnityEngine.Rect[] encapsulatingRect
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<::UnityEngine::Rect> encapsulatingRect;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Rect>) == 0x8);
    // public UnityEngine.Rect[] sourceMaterialTiling
    // Size: 0x8
    // Offset: 0x98
    ::ArrayW<::UnityEngine::Rect> sourceMaterialTiling;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Rect>) == 0x8);
    // public UnityEngine.Rect[] obUVRects
    // Size: 0x8
    // Offset: 0xA0
    ::ArrayW<::UnityEngine::Rect> obUVRects;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Rect>) == 0x8);
    // public System.Int32[] textureArraySliceIdx
    // Size: 0x8
    // Offset: 0xA8
    ::ArrayW<int> textureArraySliceIdx;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public UnityEngine.Material[] sourceSharedMaterials
    // Size: 0x8
    // Offset: 0xB0
    ::ArrayW<::UnityEngine::Material*> sourceSharedMaterials;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Material*>) == 0x8);
    // public System.Boolean _beingDeleted
    // Size: 0x1
    // Offset: 0xB8
    bool beingDeleted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: beingDeleted and: triangleIdxAdjustment
    char __padding23[0x3] = {};
    // public System.Int32 _triangleIdxAdjustment
    // Size: 0x4
    // Offset: 0xBC
    int triangleIdxAdjustment;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public DigitalOpus.MB.Core.MB3_MeshCombinerSingle/SerializableIntArray[] _tmpSubmeshTris
    // Size: 0x8
    // Offset: 0xC0
    ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SerializableIntArray*> tmpSubmeshTris;
    // Field size check
    static_assert(sizeof(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SerializableIntArray*>) == 0x8);
    // public UnityEngine.Transform[] _tmpSMR_CachedBones
    // Size: 0x8
    // Offset: 0xC8
    ::ArrayW<::UnityEngine::Transform*> tmpSMR_CachedBones;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // public UnityEngine.Matrix4x4[] _tmpSMR_CachedBindposes
    // Size: 0x8
    // Offset: 0xD0
    ::ArrayW<::UnityEngine::Matrix4x4> tmpSMR_CachedBindposes;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Matrix4x4>) == 0x8);
    // public UnityEngine.BoneWeight[] _tmpSMR_CachedBoneWeights
    // Size: 0x8
    // Offset: 0xD8
    ::ArrayW<::UnityEngine::BoneWeight> tmpSMR_CachedBoneWeights;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::BoneWeight>) == 0x8);
    // public System.Int32[] _tmpSMRIndexesOfSourceBonesUsed
    // Size: 0x8
    // Offset: 0xE0
    ::ArrayW<int> tmpSMRIndexesOfSourceBonesUsed;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IComparable_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*>
    operator ::System::IComparable_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*>*>(this);
    }
    // Get instance field reference: public System.Int32 instanceID
    [[deprecated("Use field access instead!")]] int& dyn_instanceID();
    // Get instance field reference: public UnityEngine.GameObject gameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_gameObject();
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public System.Int32 vertIdx
    [[deprecated("Use field access instead!")]] int& dyn_vertIdx();
    // Get instance field reference: public System.Int32 blendShapeIdx
    [[deprecated("Use field access instead!")]] int& dyn_blendShapeIdx();
    // Get instance field reference: public System.Int32 numVerts
    [[deprecated("Use field access instead!")]] int& dyn_numVerts();
    // Get instance field reference: public System.Int32 numBlendShapes
    [[deprecated("Use field access instead!")]] int& dyn_numBlendShapes();
    // Get instance field reference: public System.Boolean isSkinnedMeshWithBones
    [[deprecated("Use field access instead!")]] bool& dyn_isSkinnedMeshWithBones();
    // Get instance field reference: public System.Int32[] indexesOfBonesUsed
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_indexesOfBonesUsed();
    // Get instance field reference: public System.Int32 lightmapIndex
    [[deprecated("Use field access instead!")]] int& dyn_lightmapIndex();
    // Get instance field reference: public UnityEngine.Vector4 lightmapTilingOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_lightmapTilingOffset();
    // Get instance field reference: public UnityEngine.Vector3 meshSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_meshSize();
    // Get instance field reference: public System.Boolean show
    [[deprecated("Use field access instead!")]] bool& dyn_show();
    // Get instance field reference: public System.Boolean invertTriangles
    [[deprecated("Use field access instead!")]] bool& dyn_invertTriangles();
    // Get instance field reference: public System.Int32[] submeshTriIdxs
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_submeshTriIdxs();
    // Get instance field reference: public System.Int32[] submeshNumTris
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_submeshNumTris();
    // Get instance field reference: public System.Int32[] targetSubmeshIdxs
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_targetSubmeshIdxs();
    // Get instance field reference: public UnityEngine.Rect[] uvRects
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Rect>& dyn_uvRects();
    // Get instance field reference: public UnityEngine.Rect[] encapsulatingRect
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Rect>& dyn_encapsulatingRect();
    // Get instance field reference: public UnityEngine.Rect[] sourceMaterialTiling
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Rect>& dyn_sourceMaterialTiling();
    // Get instance field reference: public UnityEngine.Rect[] obUVRects
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Rect>& dyn_obUVRects();
    // Get instance field reference: public System.Int32[] textureArraySliceIdx
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_textureArraySliceIdx();
    // Get instance field reference: public UnityEngine.Material[] sourceSharedMaterials
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Material*>& dyn_sourceSharedMaterials();
    // Get instance field reference: public System.Boolean _beingDeleted
    [[deprecated("Use field access instead!")]] bool& dyn__beingDeleted();
    // Get instance field reference: public System.Int32 _triangleIdxAdjustment
    [[deprecated("Use field access instead!")]] int& dyn__triangleIdxAdjustment();
    // Get instance field reference: public DigitalOpus.MB.Core.MB3_MeshCombinerSingle/SerializableIntArray[] _tmpSubmeshTris
    [[deprecated("Use field access instead!")]] ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SerializableIntArray*>& dyn__tmpSubmeshTris();
    // Get instance field reference: public UnityEngine.Transform[] _tmpSMR_CachedBones
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn__tmpSMR_CachedBones();
    // Get instance field reference: public UnityEngine.Matrix4x4[] _tmpSMR_CachedBindposes
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Matrix4x4>& dyn__tmpSMR_CachedBindposes();
    // Get instance field reference: public UnityEngine.BoneWeight[] _tmpSMR_CachedBoneWeights
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::BoneWeight>& dyn__tmpSMR_CachedBoneWeights();
    // Get instance field reference: public System.Int32[] _tmpSMRIndexesOfSourceBonesUsed
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__tmpSMRIndexesOfSourceBonesUsed();
    // public System.Int32 CompareTo(DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MB_DynamicGameObject b)
    // Offset: 0x43C8A9C
    int CompareTo(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject* b);
    // public System.Void .ctor()
    // Offset: 0x43C8ABC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_MeshCombinerSingle::MB_DynamicGameObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_MeshCombinerSingle::MB_DynamicGameObject*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MB_DynamicGameObject
  #pragma pack(pop)
  static check_size<sizeof(MB3_MeshCombinerSingle::MB_DynamicGameObject), 224 + sizeof(::ArrayW<int>)> __DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_DynamicGameObjectSizeCheck;
  static_assert(sizeof(MB3_MeshCombinerSingle::MB_DynamicGameObject) == 0xE8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject::CompareTo)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MB_DynamicGameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
