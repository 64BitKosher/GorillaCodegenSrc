// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Backtrace.Unity.Model.BacktraceHttpClient
#include "Backtrace/Unity/Model/BacktraceHttpClient.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Model::BacktraceHttpClient::$$c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Model::BacktraceHttpClient::$$c__DisplayClass6_0*, "Backtrace.Unity.Model", "BacktraceHttpClient/<>c__DisplayClass6_0");
// Type namespace: Backtrace.Unity.Model
namespace Backtrace::Unity::Model {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Model.BacktraceHttpClient/<>c__DisplayClass6_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BacktraceHttpClient::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Networking.UnityWebRequest request
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Networking::UnityWebRequest* request;
    // Field size check
    static_assert(sizeof(::UnityEngine::Networking::UnityWebRequest*) == 0x8);
    // public System.Action`3<System.Int64,System.Boolean,System.String> onComplete
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_3<int64_t, bool, ::StringW>* onComplete;
    // Field size check
    static_assert(sizeof(::System::Action_3<int64_t, bool, ::StringW>*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Networking.UnityWebRequest request
    [[deprecated("Use field access instead!")]] ::UnityEngine::Networking::UnityWebRequest*& dyn_request();
    // Get instance field reference: public System.Action`3<System.Int64,System.Boolean,System.String> onComplete
    [[deprecated("Use field access instead!")]] ::System::Action_3<int64_t, bool, ::StringW>*& dyn_onComplete();
    // public System.Void .ctor()
    // Offset: 0x2A629E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BacktraceHttpClient::$$c__DisplayClass6_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::BacktraceHttpClient::$$c__DisplayClass6_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BacktraceHttpClient::$$c__DisplayClass6_0*, creationType>()));
    }
    // System.Void <Post>b__0(UnityEngine.AsyncOperation operation)
    // Offset: 0x2A63680
    void $Post$b__0(::UnityEngine::AsyncOperation* operation);
  }; // Backtrace.Unity.Model.BacktraceHttpClient/<>c__DisplayClass6_0
  #pragma pack(pop)
  static check_size<sizeof(BacktraceHttpClient::$$c__DisplayClass6_0), 24 + sizeof(::System::Action_3<int64_t, bool, ::StringW>*)> __Backtrace_Unity_Model_BacktraceHttpClient_$$c__DisplayClass6_0SizeCheck;
  static_assert(sizeof(BacktraceHttpClient::$$c__DisplayClass6_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceHttpClient::$$c__DisplayClass6_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceHttpClient::$$c__DisplayClass6_0::$Post$b__0
// Il2CppName: <Post>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::BacktraceHttpClient::$$c__DisplayClass6_0::*)(::UnityEngine::AsyncOperation*)>(&Backtrace::Unity::Model::BacktraceHttpClient::$$c__DisplayClass6_0::$Post$b__0)> {
  static const MethodInfo* get() {
    static auto* operation = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceHttpClient::$$c__DisplayClass6_0*), "<Post>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{operation});
  }
};
