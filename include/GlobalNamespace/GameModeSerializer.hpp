// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaSerializerMasterOnly
#include "GlobalNamespace/GorillaSerializerMasterOnly.hpp"
// Including type: Photon.Pun.IOnPhotonViewPreNetDestroy
#include "Photon/Pun/IOnPhotonViewPreNetDestroy.hpp"
// Including type: GorillaGameModes.GameModeType
#include "GorillaGameModes/GameModeType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GorillaGameManager
  class GorillaGameManager;
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonView
  class PhotonView;
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
}
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Player
  class Player;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameModeSerializer
  class GameModeSerializer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameModeSerializer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameModeSerializer*, "", "GameModeSerializer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: GameModeSerializer
  // [TokenAttribute] Offset: FFFFFFFF
  class GameModeSerializer : public ::GlobalNamespace::GorillaSerializerMasterOnly/*, public ::Photon::Pun::IOnPhotonViewPreNetDestroy*/ {
    public:
    public:
    // private GorillaGameModes.GameModeType gameModeKey
    // Size: 0x4
    // Offset: 0x48
    ::GorillaGameModes::GameModeType gameModeKey;
    // Field size check
    static_assert(sizeof(::GorillaGameModes::GameModeType) == 0x4);
    // Padding between fields: gameModeKey and: gameModeInstance
    char __padding0[0x4] = {};
    // private GorillaGameManager gameModeInstance
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::GorillaGameManager* gameModeInstance;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaGameManager*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IOnPhotonViewPreNetDestroy
    operator ::Photon::Pun::IOnPhotonViewPreNetDestroy() noexcept {
      return *reinterpret_cast<::Photon::Pun::IOnPhotonViewPreNetDestroy*>(this);
    }
    // Get instance field reference: private GorillaGameModes.GameModeType gameModeKey
    [[deprecated("Use field access instead!")]] ::GorillaGameModes::GameModeType& dyn_gameModeKey();
    // Get instance field reference: private GorillaGameManager gameModeInstance
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaGameManager*& dyn_gameModeInstance();
    // public GorillaGameManager get_GameModeInstance()
    // Offset: 0x26F67D8
    ::GlobalNamespace::GorillaGameManager* get_GameModeInstance();
    // private System.Void Photon.Pun.IOnPhotonViewPreNetDestroy.OnPreNetDestroy(Photon.Pun.PhotonView rootView)
    // Offset: 0x26F6DA8
    void Photon_Pun_IOnPhotonViewPreNetDestroy_OnPreNetDestroy(::Photon::Pun::PhotonView* rootView);
    // private System.Void ReportTagRPC(Photon.Realtime.Player taggedPlayer, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x26F6E00
    void ReportTagRPC(::Photon::Realtime::Player* taggedPlayer, ::Photon::Pun::PhotonMessageInfo info);
    // private System.Void ReportHitRPC(Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x26F6EB4
    void ReportHitRPC(::Photon::Pun::PhotonMessageInfo info);
    // protected override System.Boolean OnInstantiateSetup(Photon.Pun.PhotonMessageInfo info, out UnityEngine.GameObject outTargetObject, out System.Type outTargetType)
    // Offset: 0x26F67E0
    // Implemented from: GorillaSerializer
    // Base method: System.Boolean GorillaSerializer::OnInstantiateSetup(Photon.Pun.PhotonMessageInfo info, out UnityEngine.GameObject outTargetObject, out System.Type outTargetType)
    bool OnInstantiateSetup(::Photon::Pun::PhotonMessageInfo info, ByRef<::UnityEngine::GameObject*> outTargetObject, ByRef<::System::Type*> outTargetType);
    // protected override System.Void OnSuccessfullInstantiate(Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x26F6D38
    // Implemented from: GorillaSerializer
    // Base method: System.Void GorillaSerializer::OnSuccessfullInstantiate(Photon.Pun.PhotonMessageInfo info)
    void OnSuccessfullInstantiate(::Photon::Pun::PhotonMessageInfo info);
    // public System.Void .ctor()
    // Offset: 0x26F7224
    // Implemented from: GorillaSerializerMasterOnly
    // Base method: System.Void GorillaSerializerMasterOnly::.ctor()
    // Base method: System.Void GorillaSerializer::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameModeSerializer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameModeSerializer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameModeSerializer*, creationType>()));
    }
  }; // GameModeSerializer
  #pragma pack(pop)
  static check_size<sizeof(GameModeSerializer), 80 + sizeof(::GlobalNamespace::GorillaGameManager*)> __GlobalNamespace_GameModeSerializerSizeCheck;
  static_assert(sizeof(GameModeSerializer) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameModeSerializer::get_GameModeInstance
// Il2CppName: get_GameModeInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GorillaGameManager* (GlobalNamespace::GameModeSerializer::*)()>(&GlobalNamespace::GameModeSerializer::get_GameModeInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameModeSerializer*), "get_GameModeInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameModeSerializer::Photon_Pun_IOnPhotonViewPreNetDestroy_OnPreNetDestroy
// Il2CppName: Photon.Pun.IOnPhotonViewPreNetDestroy.OnPreNetDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameModeSerializer::*)(::Photon::Pun::PhotonView*)>(&GlobalNamespace::GameModeSerializer::Photon_Pun_IOnPhotonViewPreNetDestroy_OnPreNetDestroy)> {
  static const MethodInfo* get() {
    static auto* rootView = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameModeSerializer*), "Photon.Pun.IOnPhotonViewPreNetDestroy.OnPreNetDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rootView});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameModeSerializer::ReportTagRPC
// Il2CppName: ReportTagRPC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameModeSerializer::*)(::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::GameModeSerializer::ReportTagRPC)> {
  static const MethodInfo* get() {
    static auto* taggedPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameModeSerializer*), "ReportTagRPC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{taggedPlayer, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameModeSerializer::ReportHitRPC
// Il2CppName: ReportHitRPC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameModeSerializer::*)(::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::GameModeSerializer::ReportHitRPC)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameModeSerializer*), "ReportHitRPC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameModeSerializer::OnInstantiateSetup
// Il2CppName: OnInstantiateSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameModeSerializer::*)(::Photon::Pun::PhotonMessageInfo, ByRef<::UnityEngine::GameObject*>, ByRef<::System::Type*>)>(&GlobalNamespace::GameModeSerializer::OnInstantiateSetup)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    static auto* outTargetObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->this_arg;
    static auto* outTargetType = &::il2cpp_utils::GetClassFromName("System", "Type")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameModeSerializer*), "OnInstantiateSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, outTargetObject, outTargetType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameModeSerializer::OnSuccessfullInstantiate
// Il2CppName: OnSuccessfullInstantiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameModeSerializer::*)(::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::GameModeSerializer::OnSuccessfullInstantiate)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameModeSerializer*), "OnSuccessfullInstantiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameModeSerializer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!