// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
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
  // Forward declaring type: ScriptPlayable`1<T>
  template<typename T>
  struct ScriptPlayable_1;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: DirectorControlPlayable
  class DirectorControlPlayable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::DirectorControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::DirectorControlPlayable*, "UnityEngine.Timeline", "DirectorControlPlayable");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.DirectorControlPlayable
  // [TokenAttribute] Offset: FFFFFFFF
  class DirectorControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
    public:
    public:
    // public UnityEngine.Playables.PlayableDirector director
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Playables::PlayableDirector* director;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableDirector*) == 0x8);
    // private System.Boolean m_SyncTime
    // Size: 0x1
    // Offset: 0x18
    bool m_SyncTime;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_SyncTime and: m_AssetDuration
    char __padding1[0x7] = {};
    // private System.Double m_AssetDuration
    // Size: 0x8
    // Offset: 0x20
    double m_AssetDuration;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Playables.PlayableDirector director
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableDirector*& dyn_director();
    // Get instance field reference: private System.Boolean m_SyncTime
    [[deprecated("Use field access instead!")]] bool& dyn_m_SyncTime();
    // Get instance field reference: private System.Double m_AssetDuration
    [[deprecated("Use field access instead!")]] double& dyn_m_AssetDuration();
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.DirectorControlPlayable> Create(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Playables.PlayableDirector director)
    // Offset: 0x53C1A7C
    static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::DirectorControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::PlayableDirector* director);
    // private System.Void SyncSpeed(System.Double speed)
    // Offset: 0x53C7298
    void SyncSpeed(double speed);
    // private System.Void SyncStart(UnityEngine.Playables.PlayableGraph graph, System.Double time)
    // Offset: 0x53C73C0
    void SyncStart(::UnityEngine::Playables::PlayableGraph graph, double time);
    // private System.Void SyncStop(UnityEngine.Playables.PlayableGraph graph, System.Double time)
    // Offset: 0x53C7B40
    void SyncStop(::UnityEngine::Playables::PlayableGraph graph, double time);
    // private System.Boolean DetectDiscontinuity(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x53C7184
    bool DetectDiscontinuity(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);
    // private System.Boolean DetectOutOfSync(UnityEngine.Playables.Playable playable)
    // Offset: 0x53C785C
    bool DetectOutOfSync(::UnityEngine::Playables::Playable playable);
    // private System.Void UpdateTime(UnityEngine.Playables.Playable playable)
    // Offset: 0x53C79A8
    void UpdateTime(::UnityEngine::Playables::Playable playable);
    // public System.Void .ctor()
    // Offset: 0x53C7C0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectorControlPlayable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::DirectorControlPlayable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectorControlPlayable*, creationType>()));
    }
    // public override System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x53C6F10
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);
    // public override System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x53C6FD0
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x53C7480
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x53C7554
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x53C7654
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
  }; // UnityEngine.Timeline.DirectorControlPlayable
  #pragma pack(pop)
  static check_size<sizeof(DirectorControlPlayable), 32 + sizeof(double)> __UnityEngine_Timeline_DirectorControlPlayableSizeCheck;
  static_assert(sizeof(DirectorControlPlayable) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::DirectorControlPlayable::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::DirectorControlPlayable*> (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::PlayableDirector*)>(&UnityEngine::Timeline::DirectorControlPlayable::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* director = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableDirector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DirectorControlPlayable*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, director});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DirectorControlPlayable::SyncSpeed
// Il2CppName: SyncSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::DirectorControlPlayable::*)(double)>(&UnityEngine::Timeline::DirectorControlPlayable::SyncSpeed)> {
  static const MethodInfo* get() {
    static auto* speed = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DirectorControlPlayable*), "SyncSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{speed});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DirectorControlPlayable::SyncStart
// Il2CppName: SyncStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::PlayableGraph, double)>(&UnityEngine::Timeline::DirectorControlPlayable::SyncStart)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DirectorControlPlayable*), "SyncStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DirectorControlPlayable::SyncStop
// Il2CppName: SyncStop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::PlayableGraph, double)>(&UnityEngine::Timeline::DirectorControlPlayable::SyncStop)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DirectorControlPlayable*), "SyncStop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DirectorControlPlayable::DetectDiscontinuity
// Il2CppName: DetectDiscontinuity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::DirectorControlPlayable::DetectDiscontinuity)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DirectorControlPlayable*), "DetectDiscontinuity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DirectorControlPlayable::DetectOutOfSync
// Il2CppName: DetectOutOfSync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::DirectorControlPlayable::DetectOutOfSync)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DirectorControlPlayable*), "DetectOutOfSync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DirectorControlPlayable::UpdateTime
// Il2CppName: UpdateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::DirectorControlPlayable::UpdateTime)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DirectorControlPlayable*), "UpdateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DirectorControlPlayable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::DirectorControlPlayable::OnPlayableDestroy
// Il2CppName: OnPlayableDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::DirectorControlPlayable::OnPlayableDestroy)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DirectorControlPlayable*), "OnPlayableDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DirectorControlPlayable::PrepareFrame
// Il2CppName: PrepareFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::DirectorControlPlayable::PrepareFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DirectorControlPlayable*), "PrepareFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DirectorControlPlayable::OnBehaviourPlay
// Il2CppName: OnBehaviourPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::DirectorControlPlayable::OnBehaviourPlay)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DirectorControlPlayable*), "OnBehaviourPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DirectorControlPlayable::OnBehaviourPause
// Il2CppName: OnBehaviourPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::DirectorControlPlayable::OnBehaviourPause)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DirectorControlPlayable*), "OnBehaviourPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DirectorControlPlayable::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&UnityEngine::Timeline::DirectorControlPlayable::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DirectorControlPlayable*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
