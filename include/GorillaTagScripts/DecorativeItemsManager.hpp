// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.MonoBehaviourPun
#include "Photon/Pun/MonoBehaviourPun.hpp"
// Including type: Photon.Pun.IPunObservable
#include "Photon/Pun/IPunObservable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GorillaTagScripts
namespace GorillaTagScripts {
  // Forward declaring type: DecorativeItem
  class DecorativeItem;
  // Forward declaring type: AttachPoint
  class AttachPoint;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ZoneBasedObject
  class ZoneBasedObject;
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
  // Forward declaring type: PhotonStream
  class PhotonStream;
}
// Completed forward declares
// Type namespace: GorillaTagScripts
namespace GorillaTagScripts {
  // Forward declaring type: DecorativeItemsManager
  class DecorativeItemsManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTagScripts::DecorativeItemsManager);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTagScripts::DecorativeItemsManager*, "GorillaTagScripts", "DecorativeItemsManager");
// Type namespace: GorillaTagScripts
namespace GorillaTagScripts {
  // Size: 0x71
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTagScripts.DecorativeItemsManager
  // [TokenAttribute] Offset: FFFFFFFF
  class DecorativeItemsManager : public ::Photon::Pun::MonoBehaviourPun/*, public ::Photon::Pun::IPunObservable*/ {
    public:
    public:
    // public UnityEngine.GameObject decorativeItemsContainer
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* decorativeItemsContainer;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject respawnableHooksContainer
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* respawnableHooksContainer;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> nonRespawnableHooksContainer
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* nonRespawnableHooksContainer;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<GorillaTagScripts.DecorativeItem> itemsList
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::GorillaTagScripts::DecorativeItem*>* itemsList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GorillaTagScripts::DecorativeItem*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<GorillaTagScripts.AttachPoint> respawnableHooks
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::GorillaTagScripts::AttachPoint*>* respawnableHooks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GorillaTagScripts::AttachPoint*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<GorillaTagScripts.AttachPoint> allHooks
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::GorillaTagScripts::AttachPoint*>* allHooks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GorillaTagScripts::AttachPoint*>*) == 0x8);
    // private System.Int32 lastIndex
    // Size: 0x4
    // Offset: 0x58
    int lastIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 currentIndex
    // Size: 0x4
    // Offset: 0x5C
    int currentIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 arrayIndex
    // Size: 0x4
    // Offset: 0x60
    int arrayIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean shouldRunUpdate
    // Size: 0x1
    // Offset: 0x64
    bool shouldRunUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: shouldRunUpdate and: zone
    char __padding9[0x3] = {};
    // private ZoneBasedObject zone
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::ZoneBasedObject* zone;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ZoneBasedObject*) == 0x8);
    // private System.Boolean wasInZone
    // Size: 0x1
    // Offset: 0x70
    bool wasInZone;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IPunObservable
    operator ::Photon::Pun::IPunObservable() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunObservable*>(this);
    }
    // Get static field: static private GorillaTagScripts.DecorativeItemsManager _instance
    static ::GorillaTagScripts::DecorativeItemsManager* _get__instance();
    // Set static field: static private GorillaTagScripts.DecorativeItemsManager _instance
    static void _set__instance(::GorillaTagScripts::DecorativeItemsManager* value);
    // Get instance field reference: public UnityEngine.GameObject decorativeItemsContainer
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_decorativeItemsContainer();
    // Get instance field reference: public UnityEngine.GameObject respawnableHooksContainer
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_respawnableHooksContainer();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.GameObject> nonRespawnableHooksContainer
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn_nonRespawnableHooksContainer();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<GorillaTagScripts.DecorativeItem> itemsList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GorillaTagScripts::DecorativeItem*>*& dyn_itemsList();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<GorillaTagScripts.AttachPoint> respawnableHooks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GorillaTagScripts::AttachPoint*>*& dyn_respawnableHooks();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<GorillaTagScripts.AttachPoint> allHooks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GorillaTagScripts::AttachPoint*>*& dyn_allHooks();
    // Get instance field reference: private System.Int32 lastIndex
    [[deprecated("Use field access instead!")]] int& dyn_lastIndex();
    // Get instance field reference: private System.Int32 currentIndex
    [[deprecated("Use field access instead!")]] int& dyn_currentIndex();
    // Get instance field reference: private System.Int32 arrayIndex
    [[deprecated("Use field access instead!")]] int& dyn_arrayIndex();
    // Get instance field reference: private System.Boolean shouldRunUpdate
    [[deprecated("Use field access instead!")]] bool& dyn_shouldRunUpdate();
    // Get instance field reference: private ZoneBasedObject zone
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ZoneBasedObject*& dyn_zone();
    // Get instance field reference: private System.Boolean wasInZone
    [[deprecated("Use field access instead!")]] bool& dyn_wasInZone();
    // static public GorillaTagScripts.DecorativeItemsManager get_Instance()
    // Offset: 0x2804BFC
    static ::GorillaTagScripts::DecorativeItemsManager* get_Instance();
    // private System.Void Awake()
    // Offset: 0x2804C44
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x2805290
    void OnDestroy();
    // private System.Void Update()
    // Offset: 0x280559C
    void Update();
    // private System.Void SpawnItem(System.Int32 index)
    // Offset: 0x2805848
    void SpawnItem(int index);
    // private System.Void RespawnItemRPC(System.Int32 index, UnityEngine.Vector3 _transformPos, UnityEngine.Quaternion _transformRot, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x2805D98
    void RespawnItemRPC(int index, ::UnityEngine::Vector3 _transformPos, ::UnityEngine::Quaternion _transformRot, ::Photon::Pun::PhotonMessageInfo info);
    // private UnityEngine.Transform RandomSpawn()
    // Offset: 0x2805C5C
    ::UnityEngine::Transform* RandomSpawn();
    // private System.Int32 UpdateListPerFrame()
    // Offset: 0x2805BF4
    int UpdateListPerFrame();
    // private System.Void OnRequestToRespawn(GorillaTagScripts.DecorativeItem item)
    // Offset: 0x2806024
    void OnRequestToRespawn(::GorillaTagScripts::DecorativeItem* item);
    // public GorillaTagScripts.AttachPoint getCurrentAttachPointByPosition(UnityEngine.Vector3 _attachPoint)
    // Offset: 0x2804430
    ::GorillaTagScripts::AttachPoint* getCurrentAttachPointByPosition(::UnityEngine::Vector3 _attachPoint);
    // private System.Void Photon.Pun.IPunObservable.OnPhotonSerializeView(Photon.Pun.PhotonStream stream, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x28060E4
    void Photon_Pun_IPunObservable_OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);
    // public System.Void .ctor()
    // Offset: 0x28061EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecorativeItemsManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTagScripts::DecorativeItemsManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecorativeItemsManager*, creationType>()));
    }
  }; // GorillaTagScripts.DecorativeItemsManager
  #pragma pack(pop)
  static check_size<sizeof(DecorativeItemsManager), 112 + sizeof(bool)> __GorillaTagScripts_DecorativeItemsManagerSizeCheck;
  static_assert(sizeof(DecorativeItemsManager) == 0x71);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTagScripts::DecorativeItemsManager::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GorillaTagScripts::DecorativeItemsManager* (*)()>(&GorillaTagScripts::DecorativeItemsManager::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::DecorativeItemsManager*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::DecorativeItemsManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::DecorativeItemsManager::*)()>(&GorillaTagScripts::DecorativeItemsManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::DecorativeItemsManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::DecorativeItemsManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::DecorativeItemsManager::*)()>(&GorillaTagScripts::DecorativeItemsManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::DecorativeItemsManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::DecorativeItemsManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::DecorativeItemsManager::*)()>(&GorillaTagScripts::DecorativeItemsManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::DecorativeItemsManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::DecorativeItemsManager::SpawnItem
// Il2CppName: SpawnItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::DecorativeItemsManager::*)(int)>(&GorillaTagScripts::DecorativeItemsManager::SpawnItem)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::DecorativeItemsManager*), "SpawnItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::DecorativeItemsManager::RespawnItemRPC
// Il2CppName: RespawnItemRPC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::DecorativeItemsManager::*)(int, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Photon::Pun::PhotonMessageInfo)>(&GorillaTagScripts::DecorativeItemsManager::RespawnItemRPC)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* _transformPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* _transformRot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::DecorativeItemsManager*), "RespawnItemRPC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, _transformPos, _transformRot, info});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::DecorativeItemsManager::RandomSpawn
// Il2CppName: RandomSpawn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GorillaTagScripts::DecorativeItemsManager::*)()>(&GorillaTagScripts::DecorativeItemsManager::RandomSpawn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::DecorativeItemsManager*), "RandomSpawn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::DecorativeItemsManager::UpdateListPerFrame
// Il2CppName: UpdateListPerFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GorillaTagScripts::DecorativeItemsManager::*)()>(&GorillaTagScripts::DecorativeItemsManager::UpdateListPerFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::DecorativeItemsManager*), "UpdateListPerFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::DecorativeItemsManager::OnRequestToRespawn
// Il2CppName: OnRequestToRespawn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::DecorativeItemsManager::*)(::GorillaTagScripts::DecorativeItem*)>(&GorillaTagScripts::DecorativeItemsManager::OnRequestToRespawn)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("GorillaTagScripts", "DecorativeItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::DecorativeItemsManager*), "OnRequestToRespawn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::DecorativeItemsManager::getCurrentAttachPointByPosition
// Il2CppName: getCurrentAttachPointByPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GorillaTagScripts::AttachPoint* (GorillaTagScripts::DecorativeItemsManager::*)(::UnityEngine::Vector3)>(&GorillaTagScripts::DecorativeItemsManager::getCurrentAttachPointByPosition)> {
  static const MethodInfo* get() {
    static auto* _attachPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::DecorativeItemsManager*), "getCurrentAttachPointByPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_attachPoint});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::DecorativeItemsManager::Photon_Pun_IPunObservable_OnPhotonSerializeView
// Il2CppName: Photon.Pun.IPunObservable.OnPhotonSerializeView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::DecorativeItemsManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&GorillaTagScripts::DecorativeItemsManager::Photon_Pun_IPunObservable_OnPhotonSerializeView)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::DecorativeItemsManager*), "Photon.Pun.IPunObservable.OnPhotonSerializeView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, info});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::DecorativeItemsManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!