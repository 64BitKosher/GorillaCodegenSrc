// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkSceneManagerDefault
#include "Fusion/NetworkSceneManagerDefault.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkSceneManagerDefault::$$c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkSceneManagerDefault::$$c__DisplayClass5_0*, "Fusion", "NetworkSceneManagerDefault/<>c__DisplayClass5_0");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NetworkSceneManagerDefault::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.SceneManagement.Scene loadedScene
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::SceneManagement::Scene loadedScene;
    // Field size check
    static_assert(sizeof(::UnityEngine::SceneManagement::Scene) == 0x4);
    public:
    // Creating conversion operator: operator ::UnityEngine::SceneManagement::Scene
    constexpr operator ::UnityEngine::SceneManagement::Scene() const noexcept {
      return loadedScene;
    }
    // Get instance field reference: public UnityEngine.SceneManagement.Scene loadedScene
    [[deprecated("Use field access instead!")]] ::UnityEngine::SceneManagement::Scene& dyn_loadedScene();
    // public System.Void .ctor()
    // Offset: 0x28197D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkSceneManagerDefault::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkSceneManagerDefault::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkSceneManagerDefault::$$c__DisplayClass5_0*, creationType>()));
    }
    // System.Void <SwitchSceneSinglePeer>b__0(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x28197D8
    void $SwitchSceneSinglePeer$b__0(::UnityEngine::SceneManagement::Scene scene);
  }; // Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(NetworkSceneManagerDefault::$$c__DisplayClass5_0), 16 + sizeof(::UnityEngine::SceneManagement::Scene)> __Fusion_NetworkSceneManagerDefault_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(NetworkSceneManagerDefault::$$c__DisplayClass5_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDefault::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDefault::$$c__DisplayClass5_0::$SwitchSceneSinglePeer$b__0
// Il2CppName: <SwitchSceneSinglePeer>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkSceneManagerDefault::$$c__DisplayClass5_0::*)(::UnityEngine::SceneManagement::Scene)>(&Fusion::NetworkSceneManagerDefault::$$c__DisplayClass5_0::$SwitchSceneSinglePeer$b__0)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerDefault::$$c__DisplayClass5_0*), "<SwitchSceneSinglePeer>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene});
  }
};
