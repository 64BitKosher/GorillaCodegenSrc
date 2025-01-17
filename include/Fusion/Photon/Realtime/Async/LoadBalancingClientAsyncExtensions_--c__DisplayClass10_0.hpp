// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Photon.Realtime.Async.LoadBalancingClientAsyncExtensions
#include "Fusion/Photon/Realtime/Async/LoadBalancingClientAsyncExtensions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::Photon::Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: LoadBalancingClient
  class LoadBalancingClient;
}
// Forward declaring namespace: Fusion::Photon::Realtime::Async
namespace Fusion::Photon::Realtime::Async {
  // Forward declaring type: OperationHandler
  class OperationHandler;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::$$c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::$$c__DisplayClass10_0*, "Fusion.Photon.Realtime.Async", "LoadBalancingClientAsyncExtensions/<>c__DisplayClass10_0");
// Type namespace: Fusion.Photon.Realtime.Async
namespace Fusion::Photon::Realtime::Async {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Photon.Realtime.Async.LoadBalancingClientAsyncExtensions/<>c__DisplayClass10_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LoadBalancingClientAsyncExtensions::$$c__DisplayClass10_0 : public ::Il2CppObject {
    public:
    public:
    // public Fusion.Photon.Realtime.LoadBalancingClient client
    // Size: 0x8
    // Offset: 0x10
    ::Fusion::Photon::Realtime::LoadBalancingClient* client;
    // Field size check
    static_assert(sizeof(::Fusion::Photon::Realtime::LoadBalancingClient*) == 0x8);
    // public Fusion.Photon.Realtime.Async.OperationHandler handler
    // Size: 0x8
    // Offset: 0x18
    ::Fusion::Photon::Realtime::Async::OperationHandler* handler;
    // Field size check
    static_assert(sizeof(::Fusion::Photon::Realtime::Async::OperationHandler*) == 0x8);
    public:
    // Get instance field reference: public Fusion.Photon.Realtime.LoadBalancingClient client
    [[deprecated("Use field access instead!")]] ::Fusion::Photon::Realtime::LoadBalancingClient*& dyn_client();
    // Get instance field reference: public Fusion.Photon.Realtime.Async.OperationHandler handler
    [[deprecated("Use field access instead!")]] ::Fusion::Photon::Realtime::Async::OperationHandler*& dyn_handler();
    // public System.Void .ctor()
    // Offset: 0x2AFB044
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoadBalancingClientAsyncExtensions::$$c__DisplayClass10_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::$$c__DisplayClass10_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoadBalancingClientAsyncExtensions::$$c__DisplayClass10_0*, creationType>()));
    }
    // System.Threading.Tasks.Task <CreateOpHandler>b__0(System.Threading.CancellationToken token)
    // Offset: 0x2AFB3FC
    ::System::Threading::Tasks::Task* $CreateOpHandler$b__0(::System::Threading::CancellationToken token);
  }; // Fusion.Photon.Realtime.Async.LoadBalancingClientAsyncExtensions/<>c__DisplayClass10_0
  #pragma pack(pop)
  static check_size<sizeof(LoadBalancingClientAsyncExtensions::$$c__DisplayClass10_0), 24 + sizeof(::Fusion::Photon::Realtime::Async::OperationHandler*)> __Fusion_Photon_Realtime_Async_LoadBalancingClientAsyncExtensions_$$c__DisplayClass10_0SizeCheck;
  static_assert(sizeof(LoadBalancingClientAsyncExtensions::$$c__DisplayClass10_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::$$c__DisplayClass10_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::$$c__DisplayClass10_0::$CreateOpHandler$b__0
// Il2CppName: <CreateOpHandler>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::$$c__DisplayClass10_0::*)(::System::Threading::CancellationToken)>(&Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::$$c__DisplayClass10_0::$CreateOpHandler$b__0)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::$$c__DisplayClass10_0*), "<CreateOpHandler>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
