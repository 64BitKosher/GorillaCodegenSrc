// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: SkinnedMeshRenderer
  class SkinnedMeshRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MB3_BoneWeightCopier
  class MB3_BoneWeightCopier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MB3_BoneWeightCopier);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MB3_BoneWeightCopier*, "", "MB3_BoneWeightCopier");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MB3_BoneWeightCopier
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_BoneWeightCopier : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject inputGameObject
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* inputGameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject outputPrefab
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* outputPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Single radius
    // Size: 0x4
    // Offset: 0x30
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: radius and: seamMesh
    char __padding2[0x4] = {};
    // public UnityEngine.SkinnedMeshRenderer seamMesh
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::SkinnedMeshRenderer* seamMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::SkinnedMeshRenderer*) == 0x8);
    // public System.String outputFolder
    // Size: 0x8
    // Offset: 0x40
    ::StringW outputFolder;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.GameObject inputGameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_inputGameObject();
    // Get instance field reference: public UnityEngine.GameObject outputPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_outputPrefab();
    // Get instance field reference: public System.Single radius
    [[deprecated("Use field access instead!")]] float& dyn_radius();
    // Get instance field reference: public UnityEngine.SkinnedMeshRenderer seamMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::SkinnedMeshRenderer*& dyn_seamMesh();
    // Get instance field reference: public System.String outputFolder
    [[deprecated("Use field access instead!")]] ::StringW& dyn_outputFolder();
    // public System.Void .ctor()
    // Offset: 0x439EF1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_BoneWeightCopier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MB3_BoneWeightCopier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_BoneWeightCopier*, creationType>()));
    }
  }; // MB3_BoneWeightCopier
  #pragma pack(pop)
  static check_size<sizeof(MB3_BoneWeightCopier), 64 + sizeof(::StringW)> __GlobalNamespace_MB3_BoneWeightCopierSizeCheck;
  static_assert(sizeof(MB3_BoneWeightCopier) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MB3_BoneWeightCopier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
