// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.MonoBehaviourPunCallbacks
#include "Photon/Pun/MonoBehaviourPunCallbacks.hpp"
// Including type: Photon.Pun.IPunObservable
#include "Photon/Pun/IPunObservable.hpp"
// Including type: ITickSystemTick
#include "GlobalNamespace/ITickSystemTick.hpp"
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
// Forward declaring namespace: GorillaTagScripts::ObstacleCourse
namespace GorillaTagScripts::ObstacleCourse {
  // Forward declaring type: ObstacleCourse
  class ObstacleCourse;
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonStream
  class PhotonStream;
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
}
// Completed forward declares
// Type namespace: GorillaTagScripts.ObstacleCourse
namespace GorillaTagScripts::ObstacleCourse {
  // Forward declaring type: ObstacleCourseManager
  class ObstacleCourseManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*, "GorillaTagScripts.ObstacleCourse", "ObstacleCourseManager");
// Type namespace: GorillaTagScripts.ObstacleCourse
namespace GorillaTagScripts::ObstacleCourse {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTagScripts.ObstacleCourse.ObstacleCourseManager
  // [TokenAttribute] Offset: FFFFFFFF
  class ObstacleCourseManager : public ::Photon::Pun::MonoBehaviourPunCallbacks/*, public ::Photon::Pun::IPunObservable, public ::GlobalNamespace::ITickSystemTick*/ {
    public:
    public:
    // public System.Collections.Generic.List`1<GorillaTagScripts.ObstacleCourse.ObstacleCourse> allObstaclesCourses
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::GorillaTagScripts::ObstacleCourse::ObstacleCourse*>* allObstaclesCourses;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GorillaTagScripts::ObstacleCourse::ObstacleCourse*>*) == 0x8);
    // private System.Boolean <TickRunning>k__BackingField
    // Size: 0x1
    // Offset: 0x30
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
    // Get static field: static private GorillaTagScripts.ObstacleCourse.ObstacleCourseManager <Instance>k__BackingField
    static ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager* _get_$Instance$k__BackingField();
    // Set static field: static private GorillaTagScripts.ObstacleCourse.ObstacleCourseManager <Instance>k__BackingField
    static void _set_$Instance$k__BackingField(::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager* value);
    // Get instance field reference: public System.Collections.Generic.List`1<GorillaTagScripts.ObstacleCourse.ObstacleCourse> allObstaclesCourses
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GorillaTagScripts::ObstacleCourse::ObstacleCourse*>*& dyn_allObstaclesCourses();
    // Get instance field reference: private System.Boolean <TickRunning>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$TickRunning$k__BackingField();
    // static public GorillaTagScripts.ObstacleCourse.ObstacleCourseManager get_Instance()
    // Offset: 0x2812288
    static ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager* get_Instance();
    // static private System.Void set_Instance(GorillaTagScripts.ObstacleCourse.ObstacleCourseManager value)
    // Offset: 0x28122D0
    static void set_Instance(::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager* value);
    // public System.Boolean get_TickRunning()
    // Offset: 0x2812328
    bool get_TickRunning();
    // public System.Void set_TickRunning(System.Boolean value)
    // Offset: 0x2812330
    void set_TickRunning(bool value);
    // private System.Void Awake()
    // Offset: 0x281233C
    void Awake();
    // public System.Void Tick()
    // Offset: 0x2812484
    void Tick();
    // private System.Void OnDestroy()
    // Offset: 0x28125CC
    void OnDestroy();
    // public System.Void OnPhotonSerializeView(Photon.Pun.PhotonStream stream, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x281263C
    void OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);
    // public System.Void .ctor()
    // Offset: 0x28128F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObstacleCourseManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObstacleCourseManager*, creationType>()));
    }
    // public override System.Void OnEnable()
    // Offset: 0x2812394
    // Implemented from: Photon.Pun.MonoBehaviourPunCallbacks
    // Base method: System.Void MonoBehaviourPunCallbacks::OnEnable()
    void OnEnable();
    // public override System.Void OnDisable()
    // Offset: 0x281240C
    // Implemented from: Photon.Pun.MonoBehaviourPunCallbacks
    // Base method: System.Void MonoBehaviourPunCallbacks::OnDisable()
    void OnDisable();
  }; // GorillaTagScripts.ObstacleCourse.ObstacleCourseManager
  #pragma pack(pop)
  static check_size<sizeof(ObstacleCourseManager), 48 + sizeof(bool)> __GorillaTagScripts_ObstacleCourse_ObstacleCourseManagerSizeCheck;
  static_assert(sizeof(ObstacleCourseManager) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager* (*)()>(&GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::set_Instance
// Il2CppName: set_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*)>(&GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::set_Instance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("GorillaTagScripts.ObstacleCourse", "ObstacleCourseManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*), "set_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::get_TickRunning
// Il2CppName: get_TickRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)()>(&GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::get_TickRunning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*), "get_TickRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::set_TickRunning
// Il2CppName: set_TickRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)(bool)>(&GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::set_TickRunning)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*), "set_TickRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)()>(&GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)()>(&GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)()>(&GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::OnPhotonSerializeView
// Il2CppName: OnPhotonSerializeView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::OnPhotonSerializeView)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*), "OnPhotonSerializeView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, info});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)()>(&GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)()>(&GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
