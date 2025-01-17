// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.MonoBehaviourPunCallbacks
#include "Photon/Pun/MonoBehaviourPunCallbacks.hpp"
// Including type: Photon.Pun.IPunInstantiateMagicCallback
#include "Photon/Pun/IPunInstantiateMagicCallback.hpp"
// Including type: Photon.Pun.IOnPhotonViewOwnerChange
#include "Photon/Pun/IOnPhotonViewOwnerChange.hpp"
// Including type: Photon.Pun.IPunObservable
#include "Photon/Pun/IPunObservable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LegacyWorldTargetItem
  class LegacyWorldTargetItem;
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonView
  class PhotonView;
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
  // Forward declaring type: PhotonStream
  class PhotonStream;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Player
  class Player;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LegacyWorldShareableItem
  class LegacyWorldShareableItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LegacyWorldShareableItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LegacyWorldShareableItem*, "", "LegacyWorldShareableItem");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: LegacyWorldShareableItem
  // [TokenAttribute] Offset: FFFFFFFF
  class LegacyWorldShareableItem : public ::Photon::Pun::MonoBehaviourPunCallbacks/*, public ::Photon::Pun::IPunInstantiateMagicCallback, public ::Photon::Pun::IOnPhotonViewOwnerChange, public ::Photon::Pun::IPunObservable*/ {
    public:
    // Nested type: ::GlobalNamespace::LegacyWorldShareableItem::Delegate
    class Delegate;
    // Nested type: ::GlobalNamespace::LegacyWorldShareableItem::OnOwnerChangeDelegate
    class OnOwnerChangeDelegate;
    public:
    // private System.Boolean validShareable
    // Size: 0x1
    // Offset: 0x28
    bool validShareable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: validShareable and: view
    char __padding0[0x7] = {};
    // private Photon.Pun.PhotonView view
    // Size: 0x8
    // Offset: 0x30
    ::Photon::Pun::PhotonView* view;
    // Field size check
    static_assert(sizeof(::Photon::Pun::PhotonView*) == 0x8);
    // private UnityEngine.Transform targetXf
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* targetXf;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private LegacyWorldTargetItem prevTarget
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::LegacyWorldTargetItem* prevTarget;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LegacyWorldTargetItem*) == 0x8);
    // private LegacyWorldTargetItem target
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::LegacyWorldTargetItem* target;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LegacyWorldTargetItem*) == 0x8);
    // public LegacyWorldShareableItem/Delegate rpcCallBack
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::LegacyWorldShareableItem::Delegate* rpcCallBack;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LegacyWorldShareableItem::Delegate*) == 0x8);
    // public LegacyWorldShareableItem/OnOwnerChangeDelegate onOwnerChangeCb
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::LegacyWorldShareableItem::OnOwnerChangeDelegate* onOwnerChangeCb;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LegacyWorldShareableItem::OnOwnerChangeDelegate*) == 0x8);
    // private System.Boolean enableRemoteSync
    // Size: 0x1
    // Offset: 0x60
    bool enableRemoteSync;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IPunInstantiateMagicCallback
    operator ::Photon::Pun::IPunInstantiateMagicCallback() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunInstantiateMagicCallback*>(this);
    }
    // Creating interface conversion operator: operator ::Photon::Pun::IOnPhotonViewOwnerChange
    operator ::Photon::Pun::IOnPhotonViewOwnerChange() noexcept {
      return *reinterpret_cast<::Photon::Pun::IOnPhotonViewOwnerChange*>(this);
    }
    // Creating interface conversion operator: operator ::Photon::Pun::IPunObservable
    operator ::Photon::Pun::IPunObservable() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunObservable*>(this);
    }
    // Get instance field reference: private System.Boolean validShareable
    [[deprecated("Use field access instead!")]] bool& dyn_validShareable();
    // Get instance field reference: private Photon.Pun.PhotonView view
    [[deprecated("Use field access instead!")]] ::Photon::Pun::PhotonView*& dyn_view();
    // Get instance field reference: private UnityEngine.Transform targetXf
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_targetXf();
    // Get instance field reference: private LegacyWorldTargetItem prevTarget
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LegacyWorldTargetItem*& dyn_prevTarget();
    // Get instance field reference: private LegacyWorldTargetItem target
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LegacyWorldTargetItem*& dyn_target();
    // Get instance field reference: public LegacyWorldShareableItem/Delegate rpcCallBack
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LegacyWorldShareableItem::Delegate*& dyn_rpcCallBack();
    // Get instance field reference: public LegacyWorldShareableItem/OnOwnerChangeDelegate onOwnerChangeCb
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LegacyWorldShareableItem::OnOwnerChangeDelegate*& dyn_onOwnerChangeCb();
    // Get instance field reference: private System.Boolean enableRemoteSync
    [[deprecated("Use field access instead!")]] bool& dyn_enableRemoteSync();
    // public LegacyWorldTargetItem get_Target()
    // Offset: 0x296C990
    ::GlobalNamespace::LegacyWorldTargetItem* get_Target();
    // private System.Void Start()
    // Offset: 0x296C998
    void Start();
    // public System.Void OnPhotonInstantiate(Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x296CAAC
    void OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo info);
    // private System.Void Photon.Pun.IOnPhotonViewOwnerChange.OnOwnerChange(Photon.Realtime.Player newOwner, Photon.Realtime.Player previousOwner)
    // Offset: 0x296CE18
    void Photon_Pun_IOnPhotonViewOwnerChange_OnOwnerChange(::Photon::Realtime::Player* newOwner, ::Photon::Realtime::Player* previousOwner);
    // public System.Boolean get_EnableRemoteSync()
    // Offset: 0x296CE34
    bool get_EnableRemoteSync();
    // public System.Void set_EnableRemoteSync(System.Boolean value)
    // Offset: 0x296CE3C
    void set_EnableRemoteSync(bool value);
    // private System.Void Update()
    // Offset: 0x296CE48
    void Update();
    // private System.Boolean ReadTargetFromStream(Photon.Pun.PhotonStream stream)
    // Offset: 0x296CFC4
    bool ReadTargetFromStream(::Photon::Pun::PhotonStream* stream);
    // private System.Void SyncToTarget()
    // Offset: 0x296CC84
    void SyncToTarget();
    // private System.Void Photon.Pun.IPunObservable.OnPhotonSerializeView(Photon.Pun.PhotonStream stream, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x296D14C
    void Photon_Pun_IPunObservable_OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);
    // System.Void RPCWorldShareable(Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x296D150
    void RPCWorldShareable(::Photon::Pun::PhotonMessageInfo info);
    // public System.Void .ctor()
    // Offset: 0x296D234
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LegacyWorldShareableItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LegacyWorldShareableItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LegacyWorldShareableItem*, creationType>()));
    }
    // public override System.Void OnEnable()
    // Offset: 0x296C9F0
    // Implemented from: Photon.Pun.MonoBehaviourPunCallbacks
    // Base method: System.Void MonoBehaviourPunCallbacks::OnEnable()
    void OnEnable();
    // public override System.Void OnDisable()
    // Offset: 0x296CA24
    // Implemented from: Photon.Pun.MonoBehaviourPunCallbacks
    // Base method: System.Void MonoBehaviourPunCallbacks::OnDisable()
    void OnDisable();
    // public override System.Void OnLeftRoom()
    // Offset: 0x296CA58
    // Implemented from: Photon.Pun.MonoBehaviourPunCallbacks
    // Base method: System.Void MonoBehaviourPunCallbacks::OnLeftRoom()
    void OnLeftRoom();
  }; // LegacyWorldShareableItem
  #pragma pack(pop)
  static check_size<sizeof(LegacyWorldShareableItem), 96 + sizeof(bool)> __GlobalNamespace_LegacyWorldShareableItemSizeCheck;
  static_assert(sizeof(LegacyWorldShareableItem) == 0x61);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LegacyWorldShareableItem::get_Target
// Il2CppName: get_Target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LegacyWorldTargetItem* (GlobalNamespace::LegacyWorldShareableItem::*)()>(&GlobalNamespace::LegacyWorldShareableItem::get_Target)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegacyWorldShareableItem*), "get_Target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegacyWorldShareableItem::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LegacyWorldShareableItem::*)()>(&GlobalNamespace::LegacyWorldShareableItem::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegacyWorldShareableItem*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegacyWorldShareableItem::OnPhotonInstantiate
// Il2CppName: OnPhotonInstantiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LegacyWorldShareableItem::*)(::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::LegacyWorldShareableItem::OnPhotonInstantiate)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegacyWorldShareableItem*), "OnPhotonInstantiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegacyWorldShareableItem::Photon_Pun_IOnPhotonViewOwnerChange_OnOwnerChange
// Il2CppName: Photon.Pun.IOnPhotonViewOwnerChange.OnOwnerChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LegacyWorldShareableItem::*)(::Photon::Realtime::Player*, ::Photon::Realtime::Player*)>(&GlobalNamespace::LegacyWorldShareableItem::Photon_Pun_IOnPhotonViewOwnerChange_OnOwnerChange)> {
  static const MethodInfo* get() {
    static auto* newOwner = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* previousOwner = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegacyWorldShareableItem*), "Photon.Pun.IOnPhotonViewOwnerChange.OnOwnerChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newOwner, previousOwner});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegacyWorldShareableItem::get_EnableRemoteSync
// Il2CppName: get_EnableRemoteSync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LegacyWorldShareableItem::*)()>(&GlobalNamespace::LegacyWorldShareableItem::get_EnableRemoteSync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegacyWorldShareableItem*), "get_EnableRemoteSync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegacyWorldShareableItem::set_EnableRemoteSync
// Il2CppName: set_EnableRemoteSync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LegacyWorldShareableItem::*)(bool)>(&GlobalNamespace::LegacyWorldShareableItem::set_EnableRemoteSync)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegacyWorldShareableItem*), "set_EnableRemoteSync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegacyWorldShareableItem::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LegacyWorldShareableItem::*)()>(&GlobalNamespace::LegacyWorldShareableItem::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegacyWorldShareableItem*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegacyWorldShareableItem::ReadTargetFromStream
// Il2CppName: ReadTargetFromStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LegacyWorldShareableItem::*)(::Photon::Pun::PhotonStream*)>(&GlobalNamespace::LegacyWorldShareableItem::ReadTargetFromStream)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegacyWorldShareableItem*), "ReadTargetFromStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegacyWorldShareableItem::SyncToTarget
// Il2CppName: SyncToTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LegacyWorldShareableItem::*)()>(&GlobalNamespace::LegacyWorldShareableItem::SyncToTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegacyWorldShareableItem*), "SyncToTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegacyWorldShareableItem::Photon_Pun_IPunObservable_OnPhotonSerializeView
// Il2CppName: Photon.Pun.IPunObservable.OnPhotonSerializeView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LegacyWorldShareableItem::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::LegacyWorldShareableItem::Photon_Pun_IPunObservable_OnPhotonSerializeView)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegacyWorldShareableItem*), "Photon.Pun.IPunObservable.OnPhotonSerializeView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegacyWorldShareableItem::RPCWorldShareable
// Il2CppName: RPCWorldShareable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LegacyWorldShareableItem::*)(::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::LegacyWorldShareableItem::RPCWorldShareable)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegacyWorldShareableItem*), "RPCWorldShareable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegacyWorldShareableItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LegacyWorldShareableItem::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LegacyWorldShareableItem::*)()>(&GlobalNamespace::LegacyWorldShareableItem::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegacyWorldShareableItem*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegacyWorldShareableItem::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LegacyWorldShareableItem::*)()>(&GlobalNamespace::LegacyWorldShareableItem::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegacyWorldShareableItem*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegacyWorldShareableItem::OnLeftRoom
// Il2CppName: OnLeftRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LegacyWorldShareableItem::*)()>(&GlobalNamespace::LegacyWorldShareableItem::OnLeftRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegacyWorldShareableItem*), "OnLeftRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
