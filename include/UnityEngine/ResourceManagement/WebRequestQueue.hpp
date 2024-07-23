// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: WebRequestQueueOperation
  class WebRequestQueueOperation;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequestAsyncOperation
  class UnityWebRequestAsyncOperation;
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: WebRequestQueue
  class WebRequestQueue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::WebRequestQueue);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::WebRequestQueue*, "UnityEngine.ResourceManagement", "WebRequestQueue");
// Type namespace: UnityEngine.ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.WebRequestQueue
  // [TokenAttribute] Offset: FFFFFFFF
  class WebRequestQueue : public ::Il2CppObject {
    public:
    // Get static field: static System.Int32 s_MaxRequest
    static int _get_s_MaxRequest();
    // Set static field: static System.Int32 s_MaxRequest
    static void _set_s_MaxRequest(int value);
    // Get static field: static System.Collections.Generic.Queue`1<UnityEngine.ResourceManagement.WebRequestQueueOperation> s_QueuedOperations
    static ::System::Collections::Generic::Queue_1<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>* _get_s_QueuedOperations();
    // Set static field: static System.Collections.Generic.Queue`1<UnityEngine.ResourceManagement.WebRequestQueueOperation> s_QueuedOperations
    static void _set_s_QueuedOperations(::System::Collections::Generic::Queue_1<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>* value);
    // Get static field: static System.Collections.Generic.List`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> s_ActiveRequests
    static ::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>* _get_s_ActiveRequests();
    // Set static field: static System.Collections.Generic.List`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> s_ActiveRequests
    static void _set_s_ActiveRequests(::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>* value);
    // static public System.Void SetMaxConcurrentRequests(System.Int32 maxRequests)
    // Offset: 0x532A0F8
    static void SetMaxConcurrentRequests(int maxRequests);
    // static public UnityEngine.ResourceManagement.WebRequestQueueOperation QueueRequest(UnityEngine.Networking.UnityWebRequest request)
    // Offset: 0x532A1B8
    static ::UnityEngine::ResourceManagement::WebRequestQueueOperation* QueueRequest(::UnityEngine::Networking::UnityWebRequest* request);
    // static public System.Void WaitForRequestToBeActive(UnityEngine.ResourceManagement.WebRequestQueueOperation request, System.Int32 millisecondsTimeout)
    // Offset: 0x532A534
    static void WaitForRequestToBeActive(::UnityEngine::ResourceManagement::WebRequestQueueOperation* request, int millisecondsTimeout);
    // static private System.Void OnWebAsyncOpComplete(UnityEngine.AsyncOperation operation)
    // Offset: 0x532AA50
    static void OnWebAsyncOpComplete(::UnityEngine::AsyncOperation* operation);
    // static private System.Void BeginWebRequest(UnityEngine.ResourceManagement.WebRequestQueueOperation queueOperation)
    // Offset: 0x532A2C4
    static void BeginWebRequest(::UnityEngine::ResourceManagement::WebRequestQueueOperation* queueOperation);
    // static private System.Void .cctor()
    // Offset: 0x532AB8C
    static void _cctor();
  }; // UnityEngine.ResourceManagement.WebRequestQueue
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueue::SetMaxConcurrentRequests
// Il2CppName: SetMaxConcurrentRequests
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::ResourceManagement::WebRequestQueue::SetMaxConcurrentRequests)> {
  static const MethodInfo* get() {
    static auto* maxRequests = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::WebRequestQueue*), "SetMaxConcurrentRequests", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxRequests});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueue::QueueRequest
// Il2CppName: QueueRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::WebRequestQueueOperation* (*)(::UnityEngine::Networking::UnityWebRequest*)>(&UnityEngine::ResourceManagement::WebRequestQueue::QueueRequest)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UnityWebRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::WebRequestQueue*), "QueueRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueue::WaitForRequestToBeActive
// Il2CppName: WaitForRequestToBeActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ResourceManagement::WebRequestQueueOperation*, int)>(&UnityEngine::ResourceManagement::WebRequestQueue::WaitForRequestToBeActive)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "WebRequestQueueOperation")->byval_arg;
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::WebRequestQueue*), "WaitForRequestToBeActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, millisecondsTimeout});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueue::OnWebAsyncOpComplete
// Il2CppName: OnWebAsyncOpComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AsyncOperation*)>(&UnityEngine::ResourceManagement::WebRequestQueue::OnWebAsyncOpComplete)> {
  static const MethodInfo* get() {
    static auto* operation = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::WebRequestQueue*), "OnWebAsyncOpComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{operation});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueue::BeginWebRequest
// Il2CppName: BeginWebRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ResourceManagement::WebRequestQueueOperation*)>(&UnityEngine::ResourceManagement::WebRequestQueue::BeginWebRequest)> {
  static const MethodInfo* get() {
    static auto* queueOperation = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "WebRequestQueueOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::WebRequestQueue*), "BeginWebRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{queueOperation});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueue::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ResourceManagement::WebRequestQueue::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::WebRequestQueue*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
