// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebClient
#include "System/Net/WebClient.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AsyncCompletedEventHandler
  class AsyncCompletedEventHandler;
  // Forward declaring type: AsyncCompletedEventArgs
  class AsyncCompletedEventArgs;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebClient::$$c__DisplayClass206_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebClient::$$c__DisplayClass206_0*, "System.Net", "WebClient/<>c__DisplayClass206_0");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebClient/<>c__DisplayClass206_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class WebClient::$$c__DisplayClass206_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Net.WebClient <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::WebClient* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::WebClient*) == 0x8);
    // public System.Threading.Tasks.TaskCompletionSource`1<System.Object> tcs
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::Tasks::TaskCompletionSource_1<::Il2CppObject*>* tcs;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::Il2CppObject*>*) == 0x8);
    // public System.ComponentModel.AsyncCompletedEventHandler handler
    // Size: 0x8
    // Offset: 0x20
    ::System::ComponentModel::AsyncCompletedEventHandler* handler;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::AsyncCompletedEventHandler*) == 0x8);
    public:
    // Get instance field reference: public System.Net.WebClient <>4__this
    [[deprecated("Use field access instead!")]] ::System::Net::WebClient*& dyn_$$4__this();
    // Get instance field reference: public System.Threading.Tasks.TaskCompletionSource`1<System.Object> tcs
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::TaskCompletionSource_1<::Il2CppObject*>*& dyn_tcs();
    // Get instance field reference: public System.ComponentModel.AsyncCompletedEventHandler handler
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::AsyncCompletedEventHandler*& dyn_handler();
    // public System.Void .ctor()
    // Offset: 0x4FC992C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebClient::$$c__DisplayClass206_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebClient::$$c__DisplayClass206_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebClient::$$c__DisplayClass206_0*, creationType>()));
    }
    // System.Void <DownloadFileTaskAsync>b__0(System.Object sender, System.ComponentModel.AsyncCompletedEventArgs e)
    // Offset: 0x4FCEDB4
    void $DownloadFileTaskAsync$b__0(::Il2CppObject* sender, ::System::ComponentModel::AsyncCompletedEventArgs* e);
  }; // System.Net.WebClient/<>c__DisplayClass206_0
  #pragma pack(pop)
  static check_size<sizeof(WebClient::$$c__DisplayClass206_0), 32 + sizeof(::System::ComponentModel::AsyncCompletedEventHandler*)> __System_Net_WebClient_$$c__DisplayClass206_0SizeCheck;
  static_assert(sizeof(WebClient::$$c__DisplayClass206_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebClient::$$c__DisplayClass206_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebClient::$$c__DisplayClass206_0::$DownloadFileTaskAsync$b__0
// Il2CppName: <DownloadFileTaskAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebClient::$$c__DisplayClass206_0::*)(::Il2CppObject*, ::System::ComponentModel::AsyncCompletedEventArgs*)>(&System::Net::WebClient::$$c__DisplayClass206_0::$DownloadFileTaskAsync$b__0)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "AsyncCompletedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c__DisplayClass206_0*), "<DownloadFileTaskAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
