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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ScheduledTimelinePlayer
  class ScheduledTimelinePlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ScheduledTimelinePlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScheduledTimelinePlayer*, "", "ScheduledTimelinePlayer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: ScheduledTimelinePlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class ScheduledTimelinePlayer : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Playables.PlayableDirector timeline
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Playables::PlayableDirector* timeline;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableDirector*) == 0x8);
    // public System.Int32 eventHour
    // Size: 0x4
    // Offset: 0x28
    int eventHour;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 scheduledEventID
    // Size: 0x4
    // Offset: 0x2C
    int scheduledEventID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Playables.PlayableDirector timeline
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableDirector*& dyn_timeline();
    // Get instance field reference: public System.Int32 eventHour
    [[deprecated("Use field access instead!")]] int& dyn_eventHour();
    // Get instance field reference: private System.Int32 scheduledEventID
    [[deprecated("Use field access instead!")]] int& dyn_scheduledEventID();
    // protected System.Void OnEnable()
    // Offset: 0x26A05C0
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x26A0674
    void OnDisable();
    // private System.Void HandleScheduledEvent()
    // Offset: 0x26A06D0
    void HandleScheduledEvent();
    // public System.Void .ctor()
    // Offset: 0x26A06EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScheduledTimelinePlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ScheduledTimelinePlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScheduledTimelinePlayer*, creationType>()));
    }
  }; // ScheduledTimelinePlayer
  #pragma pack(pop)
  static check_size<sizeof(ScheduledTimelinePlayer), 44 + sizeof(int)> __GlobalNamespace_ScheduledTimelinePlayerSizeCheck;
  static_assert(sizeof(ScheduledTimelinePlayer) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScheduledTimelinePlayer::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScheduledTimelinePlayer::*)()>(&GlobalNamespace::ScheduledTimelinePlayer::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScheduledTimelinePlayer*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScheduledTimelinePlayer::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScheduledTimelinePlayer::*)()>(&GlobalNamespace::ScheduledTimelinePlayer::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScheduledTimelinePlayer*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScheduledTimelinePlayer::HandleScheduledEvent
// Il2CppName: HandleScheduledEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScheduledTimelinePlayer::*)()>(&GlobalNamespace::ScheduledTimelinePlayer::HandleScheduledEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScheduledTimelinePlayer*), "HandleScheduledEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScheduledTimelinePlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
