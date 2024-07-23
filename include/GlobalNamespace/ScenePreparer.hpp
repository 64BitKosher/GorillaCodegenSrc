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
  // Forward declaring type: OVRManager
  class OVRManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ScenePreparer
  class ScenePreparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ScenePreparer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScenePreparer*, "", "ScenePreparer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: ScenePreparer
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultExecutionOrder] Offset: FFFFFFFF
  class ScenePreparer : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public OVRManager ovrManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OVRManager* ovrManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRManager*) == 0x8);
    // public UnityEngine.GameObject[] betaDisableObjects
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::GameObject*> betaDisableObjects;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public UnityEngine.GameObject[] betaEnableObjects
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::GameObject*> betaEnableObjects;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    public:
    // Get instance field reference: public OVRManager ovrManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRManager*& dyn_ovrManager();
    // Get instance field reference: public UnityEngine.GameObject[] betaDisableObjects
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_betaDisableObjects();
    // Get instance field reference: public UnityEngine.GameObject[] betaEnableObjects
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_betaEnableObjects();
    // protected System.Void Awake()
    // Offset: 0x2895D00
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x2895DB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScenePreparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ScenePreparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScenePreparer*, creationType>()));
    }
  }; // ScenePreparer
  #pragma pack(pop)
  static check_size<sizeof(ScenePreparer), 48 + sizeof(::ArrayW<::UnityEngine::GameObject*>)> __GlobalNamespace_ScenePreparerSizeCheck;
  static_assert(sizeof(ScenePreparer) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScenePreparer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScenePreparer::*)()>(&GlobalNamespace::ScenePreparer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScenePreparer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScenePreparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
