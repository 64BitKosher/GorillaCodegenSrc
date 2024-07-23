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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GorillaSceneTransform
  class GorillaSceneTransform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaSceneCamera
  class GorillaSceneCamera;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaSceneCamera);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaSceneCamera*, "", "GorillaSceneCamera");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: GorillaSceneCamera
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaSceneCamera : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public GorillaSceneTransform[] sceneTransforms
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::GorillaSceneTransform*> sceneTransforms;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::GorillaSceneTransform*>) == 0x8);
    public:
    // Get instance field reference: public GorillaSceneTransform[] sceneTransforms
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::GorillaSceneTransform*>& dyn_sceneTransforms();
    // public System.Void SetSceneCamera(System.Int32 sceneIndex)
    // Offset: 0x26DE6B8
    void SetSceneCamera(int sceneIndex);
    // public System.Void .ctor()
    // Offset: 0x26DEE20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaSceneCamera* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaSceneCamera::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaSceneCamera*, creationType>()));
    }
  }; // GorillaSceneCamera
  #pragma pack(pop)
  static check_size<sizeof(GorillaSceneCamera), 32 + sizeof(::ArrayW<::GlobalNamespace::GorillaSceneTransform*>)> __GlobalNamespace_GorillaSceneCameraSizeCheck;
  static_assert(sizeof(GorillaSceneCamera) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaSceneCamera::SetSceneCamera
// Il2CppName: SetSceneCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaSceneCamera::*)(int)>(&GlobalNamespace::GorillaSceneCamera::SetSceneCamera)> {
  static const MethodInfo* get() {
    static auto* sceneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaSceneCamera*), "SetSceneCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaSceneCamera::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!