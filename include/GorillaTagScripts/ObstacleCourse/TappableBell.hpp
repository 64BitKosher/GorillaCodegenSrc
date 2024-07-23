// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Tappable
#include "GlobalNamespace/Tappable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GorillaTagScripts::ObstacleCourse
namespace GorillaTagScripts::ObstacleCourse {
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRRig
  class VRRig;
  // Forward declaring type: CallLimiter
  class CallLimiter;
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
}
// Completed forward declares
// Type namespace: GorillaTagScripts.ObstacleCourse
namespace GorillaTagScripts::ObstacleCourse {
  // Forward declaring type: TappableBell
  class TappableBell;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTagScripts::ObstacleCourse::TappableBell);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTagScripts::ObstacleCourse::TappableBell*, "GorillaTagScripts.ObstacleCourse", "TappableBell");
// Type namespace: GorillaTagScripts.ObstacleCourse
namespace GorillaTagScripts::ObstacleCourse {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTagScripts.ObstacleCourse.TappableBell
  // [TokenAttribute] Offset: FFFFFFFF
  class TappableBell : public ::GlobalNamespace::Tappable {
    public:
    // Writing base type padding for base size: 0x44 to desired offset: 0x48
    char ___base_padding[0x4] = {};
    // Nested type: ::GorillaTagScripts::ObstacleCourse::TappableBell::ObstacleCourseTriggerEvent
    class ObstacleCourseTriggerEvent;
    public:
    // private VRRig winnerRig
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::VRRig* winnerRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRig*) == 0x8);
    // private GorillaTagScripts.ObstacleCourse.TappableBell/ObstacleCourseTriggerEvent OnTapped
    // Size: 0x8
    // Offset: 0x50
    ::GorillaTagScripts::ObstacleCourse::TappableBell::ObstacleCourseTriggerEvent* OnTapped;
    // Field size check
    static_assert(sizeof(::GorillaTagScripts::ObstacleCourse::TappableBell::ObstacleCourseTriggerEvent*) == 0x8);
    // public CallLimiter rpcCooldown
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::CallLimiter* rpcCooldown;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CallLimiter*) == 0x8);
    public:
    // Get instance field reference: private VRRig winnerRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRig*& dyn_winnerRig();
    // Get instance field reference: private GorillaTagScripts.ObstacleCourse.TappableBell/ObstacleCourseTriggerEvent OnTapped
    [[deprecated("Use field access instead!")]] ::GorillaTagScripts::ObstacleCourse::TappableBell::ObstacleCourseTriggerEvent*& dyn_OnTapped();
    // Get instance field reference: public CallLimiter rpcCooldown
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CallLimiter*& dyn_rpcCooldown();
    // public System.Void add_OnTapped(GorillaTagScripts.ObstacleCourse.TappableBell/ObstacleCourseTriggerEvent value)
    // Offset: 0x2811350
    void add_OnTapped(::GorillaTagScripts::ObstacleCourse::TappableBell::ObstacleCourseTriggerEvent* value);
    // public System.Void remove_OnTapped(GorillaTagScripts.ObstacleCourse.TappableBell/ObstacleCourseTriggerEvent value)
    // Offset: 0x2811680
    void remove_OnTapped(::GorillaTagScripts::ObstacleCourse::TappableBell::ObstacleCourseTriggerEvent* value);
    // public override System.Void OnTapLocal(System.Single tapStrength, System.Single tapTime, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x2812EDC
    // Implemented from: Tappable
    // Base method: System.Void Tappable::OnTapLocal(System.Single tapStrength, System.Single tapTime, Photon.Pun.PhotonMessageInfo info)
    void OnTapLocal(float tapStrength, float tapTime, ::Photon::Pun::PhotonMessageInfo info);
    // public System.Void .ctor()
    // Offset: 0x2812FC4
    // Implemented from: Tappable
    // Base method: System.Void Tappable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TappableBell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTagScripts::ObstacleCourse::TappableBell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TappableBell*, creationType>()));
    }
  }; // GorillaTagScripts.ObstacleCourse.TappableBell
  #pragma pack(pop)
  static check_size<sizeof(TappableBell), 88 + sizeof(::GlobalNamespace::CallLimiter*)> __GorillaTagScripts_ObstacleCourse_TappableBellSizeCheck;
  static_assert(sizeof(TappableBell) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTagScripts::ObstacleCourse::TappableBell::add_OnTapped
// Il2CppName: add_OnTapped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::ObstacleCourse::TappableBell::*)(::GorillaTagScripts::ObstacleCourse::TappableBell::ObstacleCourseTriggerEvent*)>(&GorillaTagScripts::ObstacleCourse::TappableBell::add_OnTapped)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("GorillaTagScripts.ObstacleCourse", "TappableBell/ObstacleCourseTriggerEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::ObstacleCourse::TappableBell*), "add_OnTapped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::ObstacleCourse::TappableBell::remove_OnTapped
// Il2CppName: remove_OnTapped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::ObstacleCourse::TappableBell::*)(::GorillaTagScripts::ObstacleCourse::TappableBell::ObstacleCourseTriggerEvent*)>(&GorillaTagScripts::ObstacleCourse::TappableBell::remove_OnTapped)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("GorillaTagScripts.ObstacleCourse", "TappableBell/ObstacleCourseTriggerEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::ObstacleCourse::TappableBell*), "remove_OnTapped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::ObstacleCourse::TappableBell::OnTapLocal
// Il2CppName: OnTapLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::ObstacleCourse::TappableBell::*)(float, float, ::Photon::Pun::PhotonMessageInfo)>(&GorillaTagScripts::ObstacleCourse::TappableBell::OnTapLocal)> {
  static const MethodInfo* get() {
    static auto* tapStrength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* tapTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::ObstacleCourse::TappableBell*), "OnTapLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tapStrength, tapTime, info});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::ObstacleCourse::TappableBell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!