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
// Including type: ITickSystemTick
#include "GlobalNamespace/ITickSystemTick.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonStream
  class PhotonStream;
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RandomTimedSeedManager
  class RandomTimedSeedManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RandomTimedSeedManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomTimedSeedManager*, "", "RandomTimedSeedManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: RandomTimedSeedManager
  // [TokenAttribute] Offset: FFFFFFFF
  class RandomTimedSeedManager : public ::Photon::Pun::MonoBehaviourPun/*, public ::Photon::Pun::IPunObservable, public ::GlobalNamespace::ITickSystemTick*/ {
    public:
    public:
    // private System.Collections.Generic.List`1<System.Action> callbacksOnSeedChanged
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::System::Action*>* callbacksOnSeedChanged;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Action*>*) == 0x8);
    // private System.Int32 <seed>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    int seed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single idealSyncTime
    // Size: 0x4
    // Offset: 0x34
    float idealSyncTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <currentSyncTime>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    float currentSyncTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 cachedSeed
    // Size: 0x4
    // Offset: 0x3C
    int cachedSeed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <ITickSystemTick.TickRunning>k__BackingField
    // Size: 0x1
    // Offset: 0x40
    bool TickRunning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IPunObservable
    operator ::Photon::Pun::IPunObservable() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunObservable*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::ITickSystemTick
    operator ::GlobalNamespace::ITickSystemTick() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ITickSystemTick*>(this);
    }
    // Get static field: static private RandomTimedSeedManager <instance>k__BackingField
    static ::GlobalNamespace::RandomTimedSeedManager* _get_$instance$k__BackingField();
    // Set static field: static private RandomTimedSeedManager <instance>k__BackingField
    static void _set_$instance$k__BackingField(::GlobalNamespace::RandomTimedSeedManager* value);
    // static field const value: static private System.Int32 SeedMin
    static constexpr const int SeedMin = -1000000;
    // Get static field: static private System.Int32 SeedMin
    static int _get_SeedMin();
    // Set static field: static private System.Int32 SeedMin
    static void _set_SeedMin(int value);
    // static field const value: static private System.Int32 SeedMax
    static constexpr const int SeedMax = -1000000;
    // Get static field: static private System.Int32 SeedMax
    static int _get_SeedMax();
    // Set static field: static private System.Int32 SeedMax
    static void _set_SeedMax(int value);
    // static field const value: static private System.Single MaxSyncTime
    static constexpr const float MaxSyncTime = 1e+09;
    // Get static field: static private System.Single MaxSyncTime
    static float _get_MaxSyncTime();
    // Set static field: static private System.Single MaxSyncTime
    static void _set_MaxSyncTime(float value);
    // Get instance field reference: private System.Collections.Generic.List`1<System.Action> callbacksOnSeedChanged
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Action*>*& dyn_callbacksOnSeedChanged();
    // Get instance field reference: private System.Int32 <seed>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$seed$k__BackingField();
    // Get instance field reference: private System.Single idealSyncTime
    [[deprecated("Use field access instead!")]] float& dyn_idealSyncTime();
    // Get instance field reference: private System.Single <currentSyncTime>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$currentSyncTime$k__BackingField();
    // Get instance field reference: private System.Int32 cachedSeed
    [[deprecated("Use field access instead!")]] int& dyn_cachedSeed();
    // Get instance field reference: private System.Boolean <ITickSystemTick.TickRunning>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$ITickSystemTick_TickRunning$k__BackingField();
    // static public RandomTimedSeedManager get_instance()
    // Offset: 0x2890ED8
    static ::GlobalNamespace::RandomTimedSeedManager* get_instance();
    // static private System.Void set_instance(RandomTimedSeedManager value)
    // Offset: 0x2890F20
    static void set_instance(::GlobalNamespace::RandomTimedSeedManager* value);
    // public System.Int32 get_seed()
    // Offset: 0x2890F78
    int get_seed();
    // private System.Void set_seed(System.Int32 value)
    // Offset: 0x2890F80
    void set_seed(int value);
    // public System.Single get_currentSyncTime()
    // Offset: 0x2890F88
    float get_currentSyncTime();
    // private System.Void set_currentSyncTime(System.Single value)
    // Offset: 0x2890F90
    void set_currentSyncTime(float value);
    // private System.Void Awake()
    // Offset: 0x2890F98
    void Awake();
    // public System.Void AddCallbackOnSeedChanged(System.Action callback)
    // Offset: 0x2891068
    void AddCallbackOnSeedChanged(::System::Action* callback);
    // public System.Void RemoveCallbackOnSeedChanged(System.Action callback)
    // Offset: 0x2891114
    void RemoveCallbackOnSeedChanged(::System::Action* callback);
    // private System.Boolean ITickSystemTick.get_TickRunning()
    // Offset: 0x289116C
    bool ITickSystemTick_get_TickRunning();
    // private System.Void ITickSystemTick.set_TickRunning(System.Boolean value)
    // Offset: 0x2891174
    void ITickSystemTick_set_TickRunning(bool value);
    // private System.Void ITickSystemTick.Tick()
    // Offset: 0x2891180
    void ITickSystemTick_Tick();
    // private System.Void Photon.Pun.IPunObservable.OnPhotonSerializeView(Photon.Pun.PhotonStream stream, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x2891288
    void Photon_Pun_IPunObservable_OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);
    // public System.Void .ctor()
    // Offset: 0x2891580
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RandomTimedSeedManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RandomTimedSeedManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RandomTimedSeedManager*, creationType>()));
    }
  }; // RandomTimedSeedManager
  #pragma pack(pop)
  static check_size<sizeof(RandomTimedSeedManager), 64 + sizeof(bool)> __GlobalNamespace_RandomTimedSeedManagerSizeCheck;
  static_assert(sizeof(RandomTimedSeedManager) == 0x41);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RandomTimedSeedManager::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::RandomTimedSeedManager* (*)()>(&GlobalNamespace::RandomTimedSeedManager::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomTimedSeedManager*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RandomTimedSeedManager::set_instance
// Il2CppName: set_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::RandomTimedSeedManager*)>(&GlobalNamespace::RandomTimedSeedManager::set_instance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "RandomTimedSeedManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomTimedSeedManager*), "set_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RandomTimedSeedManager::get_seed
// Il2CppName: get_seed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::RandomTimedSeedManager::*)()>(&GlobalNamespace::RandomTimedSeedManager::get_seed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomTimedSeedManager*), "get_seed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RandomTimedSeedManager::set_seed
// Il2CppName: set_seed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomTimedSeedManager::*)(int)>(&GlobalNamespace::RandomTimedSeedManager::set_seed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomTimedSeedManager*), "set_seed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RandomTimedSeedManager::get_currentSyncTime
// Il2CppName: get_currentSyncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::RandomTimedSeedManager::*)()>(&GlobalNamespace::RandomTimedSeedManager::get_currentSyncTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomTimedSeedManager*), "get_currentSyncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RandomTimedSeedManager::set_currentSyncTime
// Il2CppName: set_currentSyncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomTimedSeedManager::*)(float)>(&GlobalNamespace::RandomTimedSeedManager::set_currentSyncTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomTimedSeedManager*), "set_currentSyncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RandomTimedSeedManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomTimedSeedManager::*)()>(&GlobalNamespace::RandomTimedSeedManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomTimedSeedManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RandomTimedSeedManager::AddCallbackOnSeedChanged
// Il2CppName: AddCallbackOnSeedChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomTimedSeedManager::*)(::System::Action*)>(&GlobalNamespace::RandomTimedSeedManager::AddCallbackOnSeedChanged)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomTimedSeedManager*), "AddCallbackOnSeedChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RandomTimedSeedManager::RemoveCallbackOnSeedChanged
// Il2CppName: RemoveCallbackOnSeedChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomTimedSeedManager::*)(::System::Action*)>(&GlobalNamespace::RandomTimedSeedManager::RemoveCallbackOnSeedChanged)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomTimedSeedManager*), "RemoveCallbackOnSeedChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RandomTimedSeedManager::ITickSystemTick_get_TickRunning
// Il2CppName: ITickSystemTick.get_TickRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::RandomTimedSeedManager::*)()>(&GlobalNamespace::RandomTimedSeedManager::ITickSystemTick_get_TickRunning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomTimedSeedManager*), "ITickSystemTick.get_TickRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RandomTimedSeedManager::ITickSystemTick_set_TickRunning
// Il2CppName: ITickSystemTick.set_TickRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomTimedSeedManager::*)(bool)>(&GlobalNamespace::RandomTimedSeedManager::ITickSystemTick_set_TickRunning)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomTimedSeedManager*), "ITickSystemTick.set_TickRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RandomTimedSeedManager::ITickSystemTick_Tick
// Il2CppName: ITickSystemTick.Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomTimedSeedManager::*)()>(&GlobalNamespace::RandomTimedSeedManager::ITickSystemTick_Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomTimedSeedManager*), "ITickSystemTick.Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RandomTimedSeedManager::Photon_Pun_IPunObservable_OnPhotonSerializeView
// Il2CppName: Photon.Pun.IPunObservable.OnPhotonSerializeView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomTimedSeedManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::RandomTimedSeedManager::Photon_Pun_IPunObservable_OnPhotonSerializeView)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomTimedSeedManager*), "Photon.Pun.IPunObservable.OnPhotonSerializeView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RandomTimedSeedManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
