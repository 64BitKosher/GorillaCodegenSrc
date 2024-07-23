// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequestAsyncOperation
  class UnityWebRequestAsyncOperation;
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: WebRequestQueueOperation
  class WebRequestQueueOperation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::WebRequestQueueOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::WebRequestQueueOperation*, "UnityEngine.ResourceManagement", "WebRequestQueueOperation");
// Type namespace: UnityEngine.ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.WebRequestQueueOperation
  // [TokenAttribute] Offset: FFFFFFFF
  class WebRequestQueueOperation : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean m_Completed
    // Size: 0x1
    // Offset: 0x10
    bool m_Completed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_Completed and: Result
    char __padding0[0x7] = {};
    // public UnityEngine.Networking.UnityWebRequestAsyncOperation Result
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Networking::UnityWebRequestAsyncOperation* Result;
    // Field size check
    static_assert(sizeof(::UnityEngine::Networking::UnityWebRequestAsyncOperation*) == 0x8);
    // public System.Action`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> OnComplete
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>* OnComplete;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>*) == 0x8);
    // UnityEngine.Networking.UnityWebRequest m_WebRequest
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Networking::UnityWebRequest* m_WebRequest;
    // Field size check
    static_assert(sizeof(::UnityEngine::Networking::UnityWebRequest*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean m_Completed
    [[deprecated("Use field access instead!")]] bool& dyn_m_Completed();
    // Get instance field reference: public UnityEngine.Networking.UnityWebRequestAsyncOperation Result
    [[deprecated("Use field access instead!")]] ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& dyn_Result();
    // Get instance field reference: public System.Action`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> OnComplete
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>*& dyn_OnComplete();
    // Get instance field reference: UnityEngine.Networking.UnityWebRequest m_WebRequest
    [[deprecated("Use field access instead!")]] ::UnityEngine::Networking::UnityWebRequest*& dyn_m_WebRequest();
    // public System.Boolean get_IsDone()
    // Offset: 0x532A054
    bool get_IsDone();
    // public UnityEngine.Networking.UnityWebRequest get_WebRequest()
    // Offset: 0x532A074
    ::UnityEngine::Networking::UnityWebRequest* get_WebRequest();
    // System.Void set_WebRequest(UnityEngine.Networking.UnityWebRequest value)
    // Offset: 0x532A07C
    void set_WebRequest(::UnityEngine::Networking::UnityWebRequest* value);
    // public System.Void .ctor(UnityEngine.Networking.UnityWebRequest request)
    // Offset: 0x532A084
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebRequestQueueOperation* New_ctor(::UnityEngine::Networking::UnityWebRequest* request) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::WebRequestQueueOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebRequestQueueOperation*, creationType>(request)));
    }
    // System.Void Complete(UnityEngine.Networking.UnityWebRequestAsyncOperation asyncOp)
    // Offset: 0x532A0B4
    void Complete(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp);
  }; // UnityEngine.ResourceManagement.WebRequestQueueOperation
  #pragma pack(pop)
  static check_size<sizeof(WebRequestQueueOperation), 40 + sizeof(::UnityEngine::Networking::UnityWebRequest*)> __UnityEngine_ResourceManagement_WebRequestQueueOperationSizeCheck;
  static_assert(sizeof(WebRequestQueueOperation) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueueOperation::get_IsDone
// Il2CppName: get_IsDone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::WebRequestQueueOperation::*)()>(&UnityEngine::ResourceManagement::WebRequestQueueOperation::get_IsDone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::WebRequestQueueOperation*), "get_IsDone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueueOperation::get_WebRequest
// Il2CppName: get_WebRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (UnityEngine::ResourceManagement::WebRequestQueueOperation::*)()>(&UnityEngine::ResourceManagement::WebRequestQueueOperation::get_WebRequest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::WebRequestQueueOperation*), "get_WebRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueueOperation::set_WebRequest
// Il2CppName: set_WebRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::WebRequestQueueOperation::*)(::UnityEngine::Networking::UnityWebRequest*)>(&UnityEngine::ResourceManagement::WebRequestQueueOperation::set_WebRequest)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UnityWebRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::WebRequestQueueOperation*), "set_WebRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueueOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueueOperation::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::WebRequestQueueOperation::*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&UnityEngine::ResourceManagement::WebRequestQueueOperation::Complete)> {
  static const MethodInfo* get() {
    static auto* asyncOp = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UnityWebRequestAsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::WebRequestQueueOperation*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncOp});
  }
};