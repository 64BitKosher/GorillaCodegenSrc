// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.PhotonHandler
#include "Photon/Pun/PhotonHandler.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
// Including type: UnityEngine.SceneManagement.LoadSceneMode
#include "UnityEngine/SceneManagement/LoadSceneMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`2<T0, T1>
  template<typename T0, typename T1>
  class UnityAction_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::PhotonHandler::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonHandler::$$c*, "Photon.Pun", "PhotonHandler/<>c");
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.PhotonHandler/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PhotonHandler::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Photon.Pun.PhotonHandler/<>c <>9
    static ::Photon::Pun::PhotonHandler::$$c* _get_$$9();
    // Set static field: static public readonly Photon.Pun.PhotonHandler/<>c <>9
    static void _set_$$9(::Photon::Pun::PhotonHandler::$$c* value);
    // Get static field: static public UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> <>9__13_0
    static ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* _get_$$9__13_0();
    // Set static field: static public UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> <>9__13_0
    static void _set_$$9__13_0(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* value);
    // static private System.Void .cctor()
    // Offset: 0x4A2FDD4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x4A2FE3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhotonHandler::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::PhotonHandler::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhotonHandler::$$c*, creationType>()));
    }
    // System.Void <Start>b__13_0(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode loadingMode)
    // Offset: 0x4A2FE44
    void $Start$b__13_0(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode loadingMode);
  }; // Photon.Pun.PhotonHandler/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::PhotonHandler::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Photon::Pun::PhotonHandler::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonHandler::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonHandler::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Pun::PhotonHandler::$$c::$Start$b__13_0
// Il2CppName: <Start>b__13_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonHandler::$$c::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&Photon::Pun::PhotonHandler::$$c::$Start$b__13_0)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* loadingMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonHandler::$$c*), "<Start>b__13_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene, loadingMode});
  }
};
