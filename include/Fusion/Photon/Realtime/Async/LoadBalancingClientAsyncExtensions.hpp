// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::Photon::Realtime::Async
namespace Fusion::Photon::Realtime::Async {
  // Forward declaring type: OperationHandler
  class OperationHandler;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: Fusion::Photon::Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: LoadBalancingClient
  class LoadBalancingClient;
  // Forward declaring type: AppSettings
  class AppSettings;
  // Forward declaring type: EnterRoomParams
  class EnterRoomParams;
  // Forward declaring type: OpJoinRandomRoomParams
  class OpJoinRandomRoomParams;
  // Forward declaring type: TypedLobby
  class TypedLobby;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: Fusion.Photon.Realtime.Async
namespace Fusion::Photon::Realtime::Async {
  // Forward declaring type: LoadBalancingClientAsyncExtensions
  class LoadBalancingClientAsyncExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*, "Fusion.Photon.Realtime.Async", "LoadBalancingClientAsyncExtensions");
// Type namespace: Fusion.Photon.Realtime.Async
namespace Fusion::Photon::Realtime::Async {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Photon.Realtime.Async.LoadBalancingClientAsyncExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class LoadBalancingClientAsyncExtensions : public ::Il2CppObject {
    public:
    // Nested type: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    // Nested type: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::$$c__DisplayClass11_0
    class $$c__DisplayClass11_0;
    // Nested type: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // static field const value: static private System.Int32 SERVICE_INTERVAL_MS
    static constexpr const int SERVICE_INTERVAL_MS = 10;
    // Get static field: static private System.Int32 SERVICE_INTERVAL_MS
    static int _get_SERVICE_INTERVAL_MS();
    // Set static field: static private System.Int32 SERVICE_INTERVAL_MS
    static void _set_SERVICE_INTERVAL_MS(int value);
    // static public System.Threading.Tasks.Task ConnectToMasterAsync(Fusion.Photon.Realtime.LoadBalancingClient client, Fusion.Photon.Realtime.AppSettings appSettings, System.Boolean createServiceTask)
    // Offset: 0x2AFA384
    static ::System::Threading::Tasks::Task* ConnectToMasterAsync(::Fusion::Photon::Realtime::LoadBalancingClient* client, ::Fusion::Photon::Realtime::AppSettings* appSettings, bool createServiceTask);
    // static public System.Threading.Tasks.Task ReconnectAndRejoinAsync(Fusion.Photon.Realtime.LoadBalancingClient client, System.Boolean throwOnError, System.Boolean createServiceTask)
    // Offset: 0x2AFA734
    static ::System::Threading::Tasks::Task* ReconnectAndRejoinAsync(::Fusion::Photon::Realtime::LoadBalancingClient* client, bool throwOnError, bool createServiceTask);
    // static public System.Threading.Tasks.Task DisconnectAsync(Fusion.Photon.Realtime.LoadBalancingClient client, System.Boolean createServiceTask)
    // Offset: 0x2AFA850
    static ::System::Threading::Tasks::Task* DisconnectAsync(::Fusion::Photon::Realtime::LoadBalancingClient* client, bool createServiceTask);
    // static public System.Threading.Tasks.Task`1<System.Int16> CreateRoomAsync(Fusion.Photon.Realtime.LoadBalancingClient client, Fusion.Photon.Realtime.EnterRoomParams enterRoomParams, System.Boolean throwOnError, System.Boolean createServiceTask)
    // Offset: 0x2AFAA48
    static ::System::Threading::Tasks::Task_1<int16_t>* CreateRoomAsync(::Fusion::Photon::Realtime::LoadBalancingClient* client, ::Fusion::Photon::Realtime::EnterRoomParams* enterRoomParams, bool throwOnError, bool createServiceTask);
    // static public System.Threading.Tasks.Task`1<System.Int16> CreateOrJoinRoomAsync(Fusion.Photon.Realtime.LoadBalancingClient client, Fusion.Photon.Realtime.EnterRoomParams enterRoomParams, System.Boolean throwOnError, System.Boolean createServiceTask)
    // Offset: 0x2AFAB44
    static ::System::Threading::Tasks::Task_1<int16_t>* CreateOrJoinRoomAsync(::Fusion::Photon::Realtime::LoadBalancingClient* client, ::Fusion::Photon::Realtime::EnterRoomParams* enterRoomParams, bool throwOnError, bool createServiceTask);
    // static public System.Threading.Tasks.Task`1<System.Int16> JoinRoomAsync(Fusion.Photon.Realtime.LoadBalancingClient client, Fusion.Photon.Realtime.EnterRoomParams enterRoomParams, System.Boolean throwOnError, System.Boolean createServiceTask)
    // Offset: 0x2AFAC40
    static ::System::Threading::Tasks::Task_1<int16_t>* JoinRoomAsync(::Fusion::Photon::Realtime::LoadBalancingClient* client, ::Fusion::Photon::Realtime::EnterRoomParams* enterRoomParams, bool throwOnError, bool createServiceTask);
    // static public System.Threading.Tasks.Task`1<System.Int16> JoinRandomOrCreateRoomAsync(Fusion.Photon.Realtime.LoadBalancingClient client, Fusion.Photon.Realtime.OpJoinRandomRoomParams joinRandomRoomParams, Fusion.Photon.Realtime.EnterRoomParams enterRoomParams, System.Boolean throwOnError, System.Boolean createServiceTask)
    // Offset: 0x2AFAD3C
    static ::System::Threading::Tasks::Task_1<int16_t>* JoinRandomOrCreateRoomAsync(::Fusion::Photon::Realtime::LoadBalancingClient* client, ::Fusion::Photon::Realtime::OpJoinRandomRoomParams* joinRandomRoomParams, ::Fusion::Photon::Realtime::EnterRoomParams* enterRoomParams, bool throwOnError, bool createServiceTask);
    // static public System.Threading.Tasks.Task`1<System.Int16> JoinRandomRoomAsync(Fusion.Photon.Realtime.LoadBalancingClient client, Fusion.Photon.Realtime.OpJoinRandomRoomParams joinRandomRoomParams, System.Boolean throwOnError, System.Boolean createServiceTask)
    // Offset: 0x2AFAE4C
    static ::System::Threading::Tasks::Task_1<int16_t>* JoinRandomRoomAsync(::Fusion::Photon::Realtime::LoadBalancingClient* client, ::Fusion::Photon::Realtime::OpJoinRandomRoomParams* joinRandomRoomParams, bool throwOnError, bool createServiceTask);
    // static public System.Threading.Tasks.Task`1<System.Int16> JoinLobbyAsync(Fusion.Photon.Realtime.LoadBalancingClient client, Fusion.Photon.Realtime.TypedLobby lobby, System.Boolean throwOnError, System.Boolean createServiceTask)
    // Offset: 0x2AFAF48
    static ::System::Threading::Tasks::Task_1<int16_t>* JoinLobbyAsync(::Fusion::Photon::Realtime::LoadBalancingClient* client, ::Fusion::Photon::Realtime::TypedLobby* lobby, bool throwOnError, bool createServiceTask);
    // static public Fusion.Photon.Realtime.Async.OperationHandler CreateOpHandler(Fusion.Photon.Realtime.LoadBalancingClient client, System.Boolean throwOnErrors, System.Boolean createServiceTask)
    // Offset: 0x2AFA4B8
    static ::Fusion::Photon::Realtime::Async::OperationHandler* CreateOpHandler(::Fusion::Photon::Realtime::LoadBalancingClient* client, bool throwOnErrors, bool createServiceTask);
    // static public System.Void Service_ClientUpdate(Fusion.Photon.Realtime.LoadBalancingClient client, System.Threading.CancellationToken token, System.Threading.Tasks.TaskCompletionSource`1<System.Int16> completionSource)
    // Offset: 0x2AFB2B0
    static void Service_ClientUpdate(::Fusion::Photon::Realtime::LoadBalancingClient* client, ::System::Threading::CancellationToken token, ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>* completionSource);
  }; // Fusion.Photon.Realtime.Async.LoadBalancingClientAsyncExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::ConnectToMasterAsync
// Il2CppName: ConnectToMasterAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, ::Fusion::Photon::Realtime::AppSettings*, bool)>(&Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::ConnectToMasterAsync)> {
  static const MethodInfo* get() {
    static auto* client = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "LoadBalancingClient")->byval_arg;
    static auto* appSettings = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "AppSettings")->byval_arg;
    static auto* createServiceTask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*), "ConnectToMasterAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{client, appSettings, createServiceTask});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::ReconnectAndRejoinAsync
// Il2CppName: ReconnectAndRejoinAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, bool, bool)>(&Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::ReconnectAndRejoinAsync)> {
  static const MethodInfo* get() {
    static auto* client = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "LoadBalancingClient")->byval_arg;
    static auto* throwOnError = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* createServiceTask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*), "ReconnectAndRejoinAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{client, throwOnError, createServiceTask});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::DisconnectAsync
// Il2CppName: DisconnectAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, bool)>(&Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::DisconnectAsync)> {
  static const MethodInfo* get() {
    static auto* client = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "LoadBalancingClient")->byval_arg;
    static auto* createServiceTask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*), "DisconnectAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{client, createServiceTask});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::CreateRoomAsync
// Il2CppName: CreateRoomAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int16_t>* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, ::Fusion::Photon::Realtime::EnterRoomParams*, bool, bool)>(&Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::CreateRoomAsync)> {
  static const MethodInfo* get() {
    static auto* client = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "LoadBalancingClient")->byval_arg;
    static auto* enterRoomParams = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "EnterRoomParams")->byval_arg;
    static auto* throwOnError = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* createServiceTask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*), "CreateRoomAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{client, enterRoomParams, throwOnError, createServiceTask});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::CreateOrJoinRoomAsync
// Il2CppName: CreateOrJoinRoomAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int16_t>* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, ::Fusion::Photon::Realtime::EnterRoomParams*, bool, bool)>(&Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::CreateOrJoinRoomAsync)> {
  static const MethodInfo* get() {
    static auto* client = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "LoadBalancingClient")->byval_arg;
    static auto* enterRoomParams = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "EnterRoomParams")->byval_arg;
    static auto* throwOnError = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* createServiceTask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*), "CreateOrJoinRoomAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{client, enterRoomParams, throwOnError, createServiceTask});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::JoinRoomAsync
// Il2CppName: JoinRoomAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int16_t>* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, ::Fusion::Photon::Realtime::EnterRoomParams*, bool, bool)>(&Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::JoinRoomAsync)> {
  static const MethodInfo* get() {
    static auto* client = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "LoadBalancingClient")->byval_arg;
    static auto* enterRoomParams = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "EnterRoomParams")->byval_arg;
    static auto* throwOnError = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* createServiceTask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*), "JoinRoomAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{client, enterRoomParams, throwOnError, createServiceTask});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::JoinRandomOrCreateRoomAsync
// Il2CppName: JoinRandomOrCreateRoomAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int16_t>* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, ::Fusion::Photon::Realtime::OpJoinRandomRoomParams*, ::Fusion::Photon::Realtime::EnterRoomParams*, bool, bool)>(&Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::JoinRandomOrCreateRoomAsync)> {
  static const MethodInfo* get() {
    static auto* client = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "LoadBalancingClient")->byval_arg;
    static auto* joinRandomRoomParams = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "OpJoinRandomRoomParams")->byval_arg;
    static auto* enterRoomParams = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "EnterRoomParams")->byval_arg;
    static auto* throwOnError = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* createServiceTask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*), "JoinRandomOrCreateRoomAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{client, joinRandomRoomParams, enterRoomParams, throwOnError, createServiceTask});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::JoinRandomRoomAsync
// Il2CppName: JoinRandomRoomAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int16_t>* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, ::Fusion::Photon::Realtime::OpJoinRandomRoomParams*, bool, bool)>(&Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::JoinRandomRoomAsync)> {
  static const MethodInfo* get() {
    static auto* client = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "LoadBalancingClient")->byval_arg;
    static auto* joinRandomRoomParams = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "OpJoinRandomRoomParams")->byval_arg;
    static auto* throwOnError = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* createServiceTask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*), "JoinRandomRoomAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{client, joinRandomRoomParams, throwOnError, createServiceTask});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::JoinLobbyAsync
// Il2CppName: JoinLobbyAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int16_t>* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, ::Fusion::Photon::Realtime::TypedLobby*, bool, bool)>(&Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::JoinLobbyAsync)> {
  static const MethodInfo* get() {
    static auto* client = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "LoadBalancingClient")->byval_arg;
    static auto* lobby = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "TypedLobby")->byval_arg;
    static auto* throwOnError = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* createServiceTask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*), "JoinLobbyAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{client, lobby, throwOnError, createServiceTask});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::CreateOpHandler
// Il2CppName: CreateOpHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Photon::Realtime::Async::OperationHandler* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, bool, bool)>(&Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::CreateOpHandler)> {
  static const MethodInfo* get() {
    static auto* client = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "LoadBalancingClient")->byval_arg;
    static auto* throwOnErrors = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* createServiceTask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*), "CreateOpHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{client, throwOnErrors, createServiceTask});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::Service_ClientUpdate
// Il2CppName: Service_ClientUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*)>(&Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::Service_ClientUpdate)> {
  static const MethodInfo* get() {
    static auto* client = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "LoadBalancingClient")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    static auto* completionSource = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "TaskCompletionSource`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int16")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*), "Service_ClientUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{client, token, completionSource});
  }
};
