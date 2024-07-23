// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: XSceneRef
#include "GlobalNamespace/XSceneRef.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TransformFollowXScene
  class TransformFollowXScene;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TransformFollowXScene);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TransformFollowXScene*, "", "TransformFollowXScene");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: TransformFollowXScene
  // [TokenAttribute] Offset: FFFFFFFF
  class TransformFollowXScene : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public XSceneRef refToFollow
    // Size: 0x11
    // Offset: 0x20
    ::GlobalNamespace::XSceneRef refToFollow;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::XSceneRef) == 0x11);
    // Padding between fields: refToFollow and: transformToFollow
    char __padding0[0x7] = {};
    // private UnityEngine.Transform transformToFollow
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* transformToFollow;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Vector3 offset
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 prevPos
    // Size: 0xC
    // Offset: 0x4C
    ::UnityEngine::Vector3 prevPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public XSceneRef refToFollow
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::XSceneRef& dyn_refToFollow();
    // Get instance field reference: private UnityEngine.Transform transformToFollow
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_transformToFollow();
    // Get instance field reference: public UnityEngine.Vector3 offset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_offset();
    // Get instance field reference: public UnityEngine.Vector3 prevPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_prevPos();
    // private System.Void Awake()
    // Offset: 0x273307C
    void Awake();
    // private System.Void Start()
    // Offset: 0x27330AC
    void Start();
    // private System.Void LateUpdate()
    // Offset: 0x27330F8
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x27331DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransformFollowXScene* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TransformFollowXScene::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransformFollowXScene*, creationType>()));
    }
  }; // TransformFollowXScene
  #pragma pack(pop)
  static check_size<sizeof(TransformFollowXScene), 76 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_TransformFollowXSceneSizeCheck;
  static_assert(sizeof(TransformFollowXScene) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TransformFollowXScene::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransformFollowXScene::*)()>(&GlobalNamespace::TransformFollowXScene::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransformFollowXScene*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransformFollowXScene::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransformFollowXScene::*)()>(&GlobalNamespace::TransformFollowXScene::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransformFollowXScene*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransformFollowXScene::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransformFollowXScene::*)()>(&GlobalNamespace::TransformFollowXScene::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransformFollowXScene*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransformFollowXScene::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
