// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeePerchPoint
  class BeePerchPoint;
  // Forward declaring type: BeeSwarmManager
  class BeeSwarmManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AnimatedBee
  struct AnimatedBee;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnimatedBee, "", "AnimatedBee");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: AnimatedBee
  // [TokenAttribute] Offset: FFFFFFFF
  struct AnimatedBee/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::GlobalNamespace::AnimatedBee::TimedDestination
    struct TimedDestination;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: AnimatedBee/TimedDestination
    // [TokenAttribute] Offset: FFFFFFFF
    struct TimedDestination/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Single syncTime
      // Size: 0x4
      // Offset: 0x0
      float syncTime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single syncEndTime
      // Size: 0x4
      // Offset: 0x4
      float syncEndTime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public BeePerchPoint destination
      // Size: 0x8
      // Offset: 0x8
      ::GlobalNamespace::BeePerchPoint* destination;
      // Field size check
      static_assert(sizeof(::GlobalNamespace::BeePerchPoint*) == 0x8);
      public:
      // Creating value type constructor for type: TimedDestination
      constexpr TimedDestination(float syncTime_ = {}, float syncEndTime_ = {}, ::GlobalNamespace::BeePerchPoint* destination_ = {}) noexcept : syncTime{syncTime_}, syncEndTime{syncEndTime_}, destination{destination_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Single syncTime
      [[deprecated("Use field access instead!")]] float& dyn_syncTime();
      // Get instance field reference: public System.Single syncEndTime
      [[deprecated("Use field access instead!")]] float& dyn_syncEndTime();
      // Get instance field reference: public BeePerchPoint destination
      [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeePerchPoint*& dyn_destination();
    }; // AnimatedBee/TimedDestination
    #pragma pack(pop)
    static check_size<sizeof(AnimatedBee::TimedDestination), 8 + sizeof(::GlobalNamespace::BeePerchPoint*)> __GlobalNamespace_AnimatedBee_TimedDestinationSizeCheck;
    static_assert(sizeof(AnimatedBee::TimedDestination) == 0x10);
    public:
    // private System.Collections.Generic.List`1<AnimatedBee/TimedDestination> destinationCache
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee::TimedDestination>* destinationCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee::TimedDestination>*) == 0x8);
    // private AnimatedBee/TimedDestination destinationA
    // Size: 0x10
    // Offset: 0x8
    ::GlobalNamespace::AnimatedBee::TimedDestination destinationA;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AnimatedBee::TimedDestination) == 0x10);
    // private AnimatedBee/TimedDestination destinationB
    // Size: 0x10
    // Offset: 0x18
    ::GlobalNamespace::AnimatedBee::TimedDestination destinationB;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AnimatedBee::TimedDestination) == 0x10);
    // private System.Single loopDuration
    // Size: 0x4
    // Offset: 0x28
    float loopDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 oldPosition
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 oldPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 velocity
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 velocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: velocity and: visual
    char __padding5[0x4] = {};
    // public UnityEngine.MeshRenderer visual
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::MeshRenderer* visual;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private System.Single oldSyncTime
    // Size: 0x4
    // Offset: 0x50
    float oldSyncTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: oldSyncTime and: route
    char __padding7[0x4] = {};
    // private System.Collections.Generic.List`1<BeePerchPoint> route
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeePerchPoint*>* route;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::BeePerchPoint*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Single> holdTimes
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<float>* holdTimes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<float>*) == 0x8);
    // private System.Single speed
    // Size: 0x4
    // Offset: 0x68
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single maxTravelTime
    // Size: 0x4
    // Offset: 0x6C
    float maxTravelTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: AnimatedBee
    constexpr AnimatedBee(::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee::TimedDestination>* destinationCache_ = {}, ::GlobalNamespace::AnimatedBee::TimedDestination destinationA_ = {}, ::GlobalNamespace::AnimatedBee::TimedDestination destinationB_ = {}, float loopDuration_ = {}, ::UnityEngine::Vector3 oldPosition_ = {}, ::UnityEngine::Vector3 velocity_ = {}, ::UnityEngine::MeshRenderer* visual_ = {}, float oldSyncTime_ = {}, ::System::Collections::Generic::List_1<::GlobalNamespace::BeePerchPoint*>* route_ = {}, ::System::Collections::Generic::List_1<float>* holdTimes_ = {}, float speed_ = {}, float maxTravelTime_ = {}) noexcept : destinationCache{destinationCache_}, destinationA{destinationA_}, destinationB{destinationB_}, loopDuration{loopDuration_}, oldPosition{oldPosition_}, velocity{velocity_}, visual{visual_}, oldSyncTime{oldSyncTime_}, route{route_}, holdTimes{holdTimes_}, speed{speed_}, maxTravelTime{maxTravelTime_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Collections.Generic.List`1<AnimatedBee/TimedDestination> destinationCache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee::TimedDestination>*& dyn_destinationCache();
    // Get instance field reference: private AnimatedBee/TimedDestination destinationA
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AnimatedBee::TimedDestination& dyn_destinationA();
    // Get instance field reference: private AnimatedBee/TimedDestination destinationB
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AnimatedBee::TimedDestination& dyn_destinationB();
    // Get instance field reference: private System.Single loopDuration
    [[deprecated("Use field access instead!")]] float& dyn_loopDuration();
    // Get instance field reference: private UnityEngine.Vector3 oldPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_oldPosition();
    // Get instance field reference: private UnityEngine.Vector3 velocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_velocity();
    // Get instance field reference: public UnityEngine.MeshRenderer visual
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn_visual();
    // Get instance field reference: private System.Single oldSyncTime
    [[deprecated("Use field access instead!")]] float& dyn_oldSyncTime();
    // Get instance field reference: private System.Collections.Generic.List`1<BeePerchPoint> route
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::BeePerchPoint*>*& dyn_route();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Single> holdTimes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<float>*& dyn_holdTimes();
    // Get instance field reference: private System.Single speed
    [[deprecated("Use field access instead!")]] float& dyn_speed();
    // Get instance field reference: private System.Single maxTravelTime
    [[deprecated("Use field access instead!")]] float& dyn_maxTravelTime();
    // public System.Void UpdateVisual(System.Single syncTime, BeeSwarmManager manager)
    // Offset: 0x26A5540
    void UpdateVisual(float syncTime, ::GlobalNamespace::BeeSwarmManager* manager);
    // public System.Void GetPositionAndDestinationAtTime(System.Single syncTime, out UnityEngine.Vector3 idealPosition, out UnityEngine.Vector3 destination)
    // Offset: 0x26A628C
    void GetPositionAndDestinationAtTime(float syncTime, ByRef<::UnityEngine::Vector3> idealPosition, ByRef<::UnityEngine::Vector3> destination);
    // public System.Void InitVisual(UnityEngine.MeshRenderer prefab, BeeSwarmManager manager)
    // Offset: 0x26A64C4
    void InitVisual(::UnityEngine::MeshRenderer* prefab, ::GlobalNamespace::BeeSwarmManager* manager);
    // public System.Void InitRouteTimestamps()
    // Offset: 0x26A5DAC
    void InitRouteTimestamps();
    // public System.Void InitRoute(System.Collections.Generic.List`1<BeePerchPoint> route, System.Collections.Generic.List`1<System.Single> holdTimes, BeeSwarmManager manager)
    // Offset: 0x26A6570
    void InitRoute(::System::Collections::Generic::List_1<::GlobalNamespace::BeePerchPoint*>* route, ::System::Collections::Generic::List_1<float>* holdTimes, ::GlobalNamespace::BeeSwarmManager* manager);
  }; // AnimatedBee
  #pragma pack(pop)
  static check_size<sizeof(AnimatedBee), 108 + sizeof(float)> __GlobalNamespace_AnimatedBeeSizeCheck;
  static_assert(sizeof(AnimatedBee) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnimatedBee::TimedDestination, "", "AnimatedBee/TimedDestination");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AnimatedBee::UpdateVisual
// Il2CppName: UpdateVisual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnimatedBee::*)(float, ::GlobalNamespace::BeeSwarmManager*)>(&GlobalNamespace::AnimatedBee::UpdateVisual)> {
  static const MethodInfo* get() {
    static auto* syncTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* manager = &::il2cpp_utils::GetClassFromName("", "BeeSwarmManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnimatedBee), "UpdateVisual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{syncTime, manager});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnimatedBee::GetPositionAndDestinationAtTime
// Il2CppName: GetPositionAndDestinationAtTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnimatedBee::*)(float, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&GlobalNamespace::AnimatedBee::GetPositionAndDestinationAtTime)> {
  static const MethodInfo* get() {
    static auto* syncTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* idealPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* destination = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnimatedBee), "GetPositionAndDestinationAtTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{syncTime, idealPosition, destination});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnimatedBee::InitVisual
// Il2CppName: InitVisual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnimatedBee::*)(::UnityEngine::MeshRenderer*, ::GlobalNamespace::BeeSwarmManager*)>(&GlobalNamespace::AnimatedBee::InitVisual)> {
  static const MethodInfo* get() {
    static auto* prefab = &::il2cpp_utils::GetClassFromName("UnityEngine", "MeshRenderer")->byval_arg;
    static auto* manager = &::il2cpp_utils::GetClassFromName("", "BeeSwarmManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnimatedBee), "InitVisual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefab, manager});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnimatedBee::InitRouteTimestamps
// Il2CppName: InitRouteTimestamps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnimatedBee::*)()>(&GlobalNamespace::AnimatedBee::InitRouteTimestamps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnimatedBee), "InitRouteTimestamps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnimatedBee::InitRoute
// Il2CppName: InitRoute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnimatedBee::*)(::System::Collections::Generic::List_1<::GlobalNamespace::BeePerchPoint*>*, ::System::Collections::Generic::List_1<float>*, ::GlobalNamespace::BeeSwarmManager*)>(&GlobalNamespace::AnimatedBee::InitRoute)> {
  static const MethodInfo* get() {
    static auto* route = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeePerchPoint")})->byval_arg;
    static auto* holdTimes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    static auto* manager = &::il2cpp_utils::GetClassFromName("", "BeeSwarmManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnimatedBee), "InitRoute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{route, holdTimes, manager});
  }
};
