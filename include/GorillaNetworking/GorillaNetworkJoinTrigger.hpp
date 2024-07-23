// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaTriggerBox
#include "GlobalNamespace/GorillaTriggerBox.hpp"
// Including type: GTZone
#include "GlobalNamespace/GTZone.hpp"
// Including type: GroupJoinZone
#include "GlobalNamespace/GroupJoinZone.hpp"
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
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GorillaFriendCollider
  class GorillaFriendCollider;
  // Forward declaring type: JoinTriggerUI
  class JoinTriggerUI;
}
// Completed forward declares
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Forward declaring type: GorillaNetworkJoinTrigger
  class GorillaNetworkJoinTrigger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaNetworking::GorillaNetworkJoinTrigger);
DEFINE_IL2CPP_ARG_TYPE(::GorillaNetworking::GorillaNetworkJoinTrigger*, "GorillaNetworking", "GorillaNetworkJoinTrigger");
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Size: 0x79
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworking.GorillaNetworkJoinTrigger
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaNetworkJoinTrigger : public ::GlobalNamespace::GorillaTriggerBox {
    public:
    public:
    // public UnityEngine.GameObject[] makeSureThisIsDisabled
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::GameObject*> makeSureThisIsDisabled;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public UnityEngine.GameObject[] makeSureThisIsEnabled
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::GameObject*> makeSureThisIsEnabled;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public GTZone zone
    // Size: 0x4
    // Offset: 0x38
    ::GlobalNamespace::GTZone zone;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GTZone) == 0x4);
    // public GroupJoinZone groupJoinRequiredZones
    // Size: 0x4
    // Offset: 0x3C
    ::GlobalNamespace::GroupJoinZone groupJoinRequiredZones;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GroupJoinZone) == 0x4);
    // public System.String gameModeName
    // Size: 0x8
    // Offset: 0x40
    ::StringW gameModeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String componentTypeToAdd
    // Size: 0x8
    // Offset: 0x48
    ::StringW componentTypeToAdd;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.GameObject componentTarget
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::GameObject* componentTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public GorillaFriendCollider myCollider
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::GorillaFriendCollider* myCollider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaFriendCollider*) == 0x8);
    // public GorillaNetworking.GorillaNetworkJoinTrigger primaryTriggerForMyZone
    // Size: 0x8
    // Offset: 0x60
    ::GorillaNetworking::GorillaNetworkJoinTrigger* primaryTriggerForMyZone;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::GorillaNetworkJoinTrigger*) == 0x8);
    // public System.Boolean ignoredIfInParty
    // Size: 0x1
    // Offset: 0x68
    bool ignoredIfInParty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ignoredIfInParty and: ui
    char __padding9[0x7] = {};
    // private JoinTriggerUI ui
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::JoinTriggerUI* ui;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::JoinTriggerUI*) == 0x8);
    // private System.Boolean didRegisterForCallbacks
    // Size: 0x1
    // Offset: 0x78
    bool didRegisterForCallbacks;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.GameObject[] makeSureThisIsDisabled
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_makeSureThisIsDisabled();
    // Get instance field reference: public UnityEngine.GameObject[] makeSureThisIsEnabled
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_makeSureThisIsEnabled();
    // Get instance field reference: public GTZone zone
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GTZone& dyn_zone();
    // Get instance field reference: public GroupJoinZone groupJoinRequiredZones
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GroupJoinZone& dyn_groupJoinRequiredZones();
    // Get instance field reference: public System.String gameModeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_gameModeName();
    // Get instance field reference: public System.String componentTypeToAdd
    [[deprecated("Use field access instead!")]] ::StringW& dyn_componentTypeToAdd();
    // Get instance field reference: public UnityEngine.GameObject componentTarget
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_componentTarget();
    // Get instance field reference: public GorillaFriendCollider myCollider
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaFriendCollider*& dyn_myCollider();
    // Get instance field reference: public GorillaNetworking.GorillaNetworkJoinTrigger primaryTriggerForMyZone
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::GorillaNetworkJoinTrigger*& dyn_primaryTriggerForMyZone();
    // Get instance field reference: public System.Boolean ignoredIfInParty
    [[deprecated("Use field access instead!")]] bool& dyn_ignoredIfInParty();
    // Get instance field reference: private JoinTriggerUI ui
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::JoinTriggerUI*& dyn_ui();
    // Get instance field reference: private System.Boolean didRegisterForCallbacks
    [[deprecated("Use field access instead!")]] bool& dyn_didRegisterForCallbacks();
    // private System.Void Start()
    // Offset: 0x28534CC
    void Start();
    // public System.Void RegisterUI(JoinTriggerUI ui)
    // Offset: 0x2853730
    void RegisterUI(::GlobalNamespace::JoinTriggerUI* ui);
    // public System.Void UnregisterUI(JoinTriggerUI ui)
    // Offset: 0x2853D20
    void UnregisterUI(::GlobalNamespace::JoinTriggerUI* ui);
    // private System.Void OnDestroy()
    // Offset: 0x2853D2C
    void OnDestroy();
    // private System.Void OnGroupPositionsChanged(GroupJoinZone groupZone)
    // Offset: 0x2853E30
    void OnGroupPositionsChanged(::GlobalNamespace::GroupJoinZone groupZone);
    // public System.Void UpdateUI()
    // Offset: 0x28538D0
    void UpdateUI();
    // private System.String GetCurrentRoomName()
    // Offset: 0x2853E34
    ::StringW GetCurrentRoomName();
    // private System.String GetRoomName()
    // Offset: 0x2853E9C
    ::StringW GetRoomName();
    // public System.Boolean CanPartyJoin()
    // Offset: 0x284D43C
    bool CanPartyJoin();
    // public System.Boolean CanPartyJoin(GroupJoinZone zone)
    // Offset: 0x2853EB8
    bool CanPartyJoin(::GlobalNamespace::GroupJoinZone zone);
    // public override System.Void OnBoxTriggered()
    // Offset: 0x2853EC8
    // Implemented from: GorillaTriggerBox
    // Base method: System.Void GorillaTriggerBox::OnBoxTriggered()
    void OnBoxTriggered();
    // public System.Void .ctor()
    // Offset: 0x28545D0
    // Implemented from: GorillaTriggerBox
    // Base method: System.Void GorillaTriggerBox::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaNetworkJoinTrigger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::GorillaNetworkJoinTrigger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaNetworkJoinTrigger*, creationType>()));
    }
  }; // GorillaNetworking.GorillaNetworkJoinTrigger
  #pragma pack(pop)
  static check_size<sizeof(GorillaNetworkJoinTrigger), 120 + sizeof(bool)> __GorillaNetworking_GorillaNetworkJoinTriggerSizeCheck;
  static_assert(sizeof(GorillaNetworkJoinTrigger) == 0x79);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaNetworking::GorillaNetworkJoinTrigger::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&GorillaNetworking::GorillaNetworkJoinTrigger::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaNetworkJoinTrigger*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::GorillaNetworkJoinTrigger::RegisterUI
// Il2CppName: RegisterUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::GorillaNetworkJoinTrigger::*)(::GlobalNamespace::JoinTriggerUI*)>(&GorillaNetworking::GorillaNetworkJoinTrigger::RegisterUI)> {
  static const MethodInfo* get() {
    static auto* ui = &::il2cpp_utils::GetClassFromName("", "JoinTriggerUI")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaNetworkJoinTrigger*), "RegisterUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ui});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::GorillaNetworkJoinTrigger::UnregisterUI
// Il2CppName: UnregisterUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::GorillaNetworkJoinTrigger::*)(::GlobalNamespace::JoinTriggerUI*)>(&GorillaNetworking::GorillaNetworkJoinTrigger::UnregisterUI)> {
  static const MethodInfo* get() {
    static auto* ui = &::il2cpp_utils::GetClassFromName("", "JoinTriggerUI")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaNetworkJoinTrigger*), "UnregisterUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ui});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::GorillaNetworkJoinTrigger::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&GorillaNetworking::GorillaNetworkJoinTrigger::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaNetworkJoinTrigger*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::GorillaNetworkJoinTrigger::OnGroupPositionsChanged
// Il2CppName: OnGroupPositionsChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::GorillaNetworkJoinTrigger::*)(::GlobalNamespace::GroupJoinZone)>(&GorillaNetworking::GorillaNetworkJoinTrigger::OnGroupPositionsChanged)> {
  static const MethodInfo* get() {
    static auto* groupZone = &::il2cpp_utils::GetClassFromName("", "GroupJoinZone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaNetworkJoinTrigger*), "OnGroupPositionsChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupZone});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::GorillaNetworkJoinTrigger::UpdateUI
// Il2CppName: UpdateUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&GorillaNetworking::GorillaNetworkJoinTrigger::UpdateUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaNetworkJoinTrigger*), "UpdateUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::GorillaNetworkJoinTrigger::GetCurrentRoomName
// Il2CppName: GetCurrentRoomName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&GorillaNetworking::GorillaNetworkJoinTrigger::GetCurrentRoomName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaNetworkJoinTrigger*), "GetCurrentRoomName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::GorillaNetworkJoinTrigger::GetRoomName
// Il2CppName: GetRoomName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&GorillaNetworking::GorillaNetworkJoinTrigger::GetRoomName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaNetworkJoinTrigger*), "GetRoomName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::GorillaNetworkJoinTrigger::CanPartyJoin
// Il2CppName: CanPartyJoin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&GorillaNetworking::GorillaNetworkJoinTrigger::CanPartyJoin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaNetworkJoinTrigger*), "CanPartyJoin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::GorillaNetworkJoinTrigger::CanPartyJoin
// Il2CppName: CanPartyJoin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GorillaNetworking::GorillaNetworkJoinTrigger::*)(::GlobalNamespace::GroupJoinZone)>(&GorillaNetworking::GorillaNetworkJoinTrigger::CanPartyJoin)> {
  static const MethodInfo* get() {
    static auto* zone = &::il2cpp_utils::GetClassFromName("", "GroupJoinZone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaNetworkJoinTrigger*), "CanPartyJoin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{zone});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::GorillaNetworkJoinTrigger::OnBoxTriggered
// Il2CppName: OnBoxTriggered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::GorillaNetworkJoinTrigger::*)()>(&GorillaNetworking::GorillaNetworkJoinTrigger::OnBoxTriggered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaNetworkJoinTrigger*), "OnBoxTriggered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::GorillaNetworkJoinTrigger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
