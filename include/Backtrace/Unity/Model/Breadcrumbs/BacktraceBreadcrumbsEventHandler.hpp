// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Backtrace.Unity.Model.Breadcrumbs.BacktraceBreadcrumbType
#include "Backtrace/Unity/Model/Breadcrumbs/BacktraceBreadcrumbType.hpp"
// Including type: UnityEngine.NetworkReachability
#include "UnityEngine/NetworkReachability.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Backtrace::Unity::Model::Breadcrumbs
namespace Backtrace::Unity::Model::Breadcrumbs {
  // Forward declaring type: BacktraceBreadcrumbs
  class BacktraceBreadcrumbs;
  // Forward declaring type: BreadcrumbLevel
  struct BreadcrumbLevel;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
  // Forward declaring type: LoadSceneMode
  struct LoadSceneMode;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LogType
  struct LogType;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Model.Breadcrumbs
namespace Backtrace::Unity::Model::Breadcrumbs {
  // Forward declaring type: BacktraceBreadcrumbsEventHandler
  class BacktraceBreadcrumbsEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*, "Backtrace.Unity.Model.Breadcrumbs", "BacktraceBreadcrumbsEventHandler");
// Type namespace: Backtrace.Unity.Model.Breadcrumbs
namespace Backtrace::Unity::Model::Breadcrumbs {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Model.Breadcrumbs.BacktraceBreadcrumbsEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class BacktraceBreadcrumbsEventHandler : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean <HasRegisteredEvents>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool HasRegisteredEvents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: HasRegisteredEvents and: breadcrumbs
    char __padding0[0x7] = {};
    // private readonly Backtrace.Unity.Model.Breadcrumbs.BacktraceBreadcrumbs _breadcrumbs
    // Size: 0x8
    // Offset: 0x18
    ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs* breadcrumbs;
    // Field size check
    static_assert(sizeof(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*) == 0x8);
    // private Backtrace.Unity.Model.Breadcrumbs.BacktraceBreadcrumbType _registeredLevel
    // Size: 0x4
    // Offset: 0x20
    ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType registeredLevel;
    // Field size check
    static_assert(sizeof(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType) == 0x4);
    // private UnityEngine.NetworkReachability _networkStatus
    // Size: 0x4
    // Offset: 0x24
    ::UnityEngine::NetworkReachability networkStatus;
    // Field size check
    static_assert(sizeof(::UnityEngine::NetworkReachability) == 0x4);
    // private System.Threading.Thread _thread
    // Size: 0x8
    // Offset: 0x28
    ::System::Threading::Thread* thread;
    // Field size check
    static_assert(sizeof(::System::Threading::Thread*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean <HasRegisteredEvents>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$HasRegisteredEvents$k__BackingField();
    // Get instance field reference: private readonly Backtrace.Unity.Model.Breadcrumbs.BacktraceBreadcrumbs _breadcrumbs
    [[deprecated("Use field access instead!")]] ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*& dyn__breadcrumbs();
    // Get instance field reference: private Backtrace.Unity.Model.Breadcrumbs.BacktraceBreadcrumbType _registeredLevel
    [[deprecated("Use field access instead!")]] ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType& dyn__registeredLevel();
    // Get instance field reference: private UnityEngine.NetworkReachability _networkStatus
    [[deprecated("Use field access instead!")]] ::UnityEngine::NetworkReachability& dyn__networkStatus();
    // Get instance field reference: private System.Threading.Thread _thread
    [[deprecated("Use field access instead!")]] ::System::Threading::Thread*& dyn__thread();
    // public System.Boolean get_HasRegisteredEvents()
    // Offset: 0x2A6F568
    bool get_HasRegisteredEvents();
    // public System.Void set_HasRegisteredEvents(System.Boolean value)
    // Offset: 0x2A6F570
    void set_HasRegisteredEvents(bool value);
    // public System.Void .ctor(Backtrace.Unity.Model.Breadcrumbs.BacktraceBreadcrumbs breadcrumbs)
    // Offset: 0x2A6E62C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BacktraceBreadcrumbsEventHandler* New_ctor(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs* breadcrumbs) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BacktraceBreadcrumbsEventHandler*, creationType>(breadcrumbs)));
    }
    // public System.Void Register(Backtrace.Unity.Model.Breadcrumbs.BacktraceBreadcrumbType level)
    // Offset: 0x2A6EB38
    void Register(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType level);
    // public System.Void Unregister()
    // Offset: 0x2A6E694
    void Unregister();
    // private System.Void SceneManager_sceneUnloaded(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x2A6F57C
    void SceneManager_sceneUnloaded(::UnityEngine::SceneManagement::Scene scene);
    // private System.Void SceneManager_sceneLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode loadSceneMode)
    // Offset: 0x2A6F658
    void SceneManager_sceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode);
    // private System.Void HandleSceneChanged(UnityEngine.SceneManagement.Scene sceneFrom, UnityEngine.SceneManagement.Scene sceneTo)
    // Offset: 0x2A6F7A8
    void HandleSceneChanged(::UnityEngine::SceneManagement::Scene sceneFrom, ::UnityEngine::SceneManagement::Scene sceneTo);
    // private System.Void HandleLowMemory()
    // Offset: 0x2A6F948
    void HandleLowMemory();
    // private System.Void HandleApplicationQuitting()
    // Offset: 0x2A6F99C
    void HandleApplicationQuitting();
    // private System.Void HandleBackgroundMessage(System.String condition, System.String stackTrace, UnityEngine.LogType type)
    // Offset: 0x2A6F9F0
    void HandleBackgroundMessage(::StringW condition, ::StringW stackTrace, ::UnityEngine::LogType type);
    // private System.Void HandleMessage(System.String condition, System.String stackTrace, UnityEngine.LogType type)
    // Offset: 0x2A6FA50
    void HandleMessage(::StringW condition, ::StringW stackTrace, ::UnityEngine::LogType type);
    // private System.Void Application_focusChanged(System.Boolean hasFocus)
    // Offset: 0x2A6FB38
    void Application_focusChanged(bool hasFocus);
    // private System.Void Log(System.String message, UnityEngine.LogType level, Backtrace.Unity.Model.Breadcrumbs.BreadcrumbLevel breadcrumbLevel, System.Collections.Generic.IDictionary`2<System.String,System.String> attributes)
    // Offset: 0x2A6F600
    void Log(::StringW message, ::UnityEngine::LogType level, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel breadcrumbLevel, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* attributes);
    // private System.Void LogNewNetworkStatus(UnityEngine.NetworkReachability status)
    // Offset: 0x2A6FC2C
    void LogNewNetworkStatus(::UnityEngine::NetworkReachability status);
    // System.Void Update()
    // Offset: 0x2A6F3E4
    void Update();
  }; // Backtrace.Unity.Model.Breadcrumbs.BacktraceBreadcrumbsEventHandler
  #pragma pack(pop)
  static check_size<sizeof(BacktraceBreadcrumbsEventHandler), 40 + sizeof(::System::Threading::Thread*)> __Backtrace_Unity_Model_Breadcrumbs_BacktraceBreadcrumbsEventHandlerSizeCheck;
  static_assert(sizeof(BacktraceBreadcrumbsEventHandler) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::get_HasRegisteredEvents
// Il2CppName: get_HasRegisteredEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)()>(&Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::get_HasRegisteredEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*), "get_HasRegisteredEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::set_HasRegisteredEvents
// Il2CppName: set_HasRegisteredEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(bool)>(&Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::set_HasRegisteredEvents)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*), "set_HasRegisteredEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType)>(&Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Register)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model.Breadcrumbs", "BacktraceBreadcrumbType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Unregister
// Il2CppName: Unregister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)()>(&Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Unregister)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*), "Unregister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::SceneManager_sceneUnloaded
// Il2CppName: SceneManager_sceneUnloaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(::UnityEngine::SceneManagement::Scene)>(&Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::SceneManager_sceneUnloaded)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*), "SceneManager_sceneUnloaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::SceneManager_sceneLoaded
// Il2CppName: SceneManager_sceneLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::SceneManager_sceneLoaded)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* loadSceneMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*), "SceneManager_sceneLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene, loadSceneMode});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleSceneChanged
// Il2CppName: HandleSceneChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene)>(&Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleSceneChanged)> {
  static const MethodInfo* get() {
    static auto* sceneFrom = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* sceneTo = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*), "HandleSceneChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneFrom, sceneTo});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleLowMemory
// Il2CppName: HandleLowMemory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)()>(&Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleLowMemory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*), "HandleLowMemory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleApplicationQuitting
// Il2CppName: HandleApplicationQuitting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)()>(&Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleApplicationQuitting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*), "HandleApplicationQuitting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleBackgroundMessage
// Il2CppName: HandleBackgroundMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleBackgroundMessage)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* stackTrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*), "HandleBackgroundMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition, stackTrace, type});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleMessage
// Il2CppName: HandleMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleMessage)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* stackTrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*), "HandleMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition, stackTrace, type});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Application_focusChanged
// Il2CppName: Application_focusChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(bool)>(&Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Application_focusChanged)> {
  static const MethodInfo* get() {
    static auto* hasFocus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*), "Application_focusChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hasFocus});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(::StringW, ::UnityEngine::LogType, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Log)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* level = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* breadcrumbLevel = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model.Breadcrumbs", "BreadcrumbLevel")->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, level, breadcrumbLevel, attributes});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::LogNewNetworkStatus
// Il2CppName: LogNewNetworkStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(::UnityEngine::NetworkReachability)>(&Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::LogNewNetworkStatus)> {
  static const MethodInfo* get() {
    static auto* status = &::il2cpp_utils::GetClassFromName("UnityEngine", "NetworkReachability")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*), "LogNewNetworkStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{status});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)()>(&Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};