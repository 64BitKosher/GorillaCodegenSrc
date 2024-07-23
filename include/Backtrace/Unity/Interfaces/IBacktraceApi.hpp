// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: Backtrace::Unity::Model
namespace Backtrace::Unity::Model {
  // Forward declaring type: BacktraceData
  class BacktraceData;
  // Forward declaring type: BacktraceResult
  class BacktraceResult;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Interfaces
namespace Backtrace::Unity::Interfaces {
  // Forward declaring type: IBacktraceApi
  class IBacktraceApi;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Interfaces::IBacktraceApi);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Interfaces::IBacktraceApi*, "Backtrace.Unity.Interfaces", "IBacktraceApi");
// Type namespace: Backtrace.Unity.Interfaces
namespace Backtrace::Unity::Interfaces {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Interfaces.IBacktraceApi
  // [TokenAttribute] Offset: FFFFFFFF
  class IBacktraceApi {
    public:
    // public System.String get_ServerUrl()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_ServerUrl();
    // public System.Collections.IEnumerator Send(Backtrace.Unity.Model.BacktraceData data, System.Action`1<Backtrace.Unity.Model.BacktraceResult> callback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* Send(::Backtrace::Unity::Model::BacktraceData* data, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* callback);
    // public System.Collections.IEnumerator Send(System.String json, System.Collections.Generic.IEnumerable`1<System.String> attachments, System.Int32 deduplication, System.Action`1<Backtrace.Unity.Model.BacktraceResult> callback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* Send(::StringW json, ::System::Collections::Generic::IEnumerable_1<::StringW>* attachments, int deduplication, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* callback);
    // public System.Collections.IEnumerator Send(System.String json, System.Collections.Generic.IEnumerable`1<System.String> attachments, System.Collections.Generic.Dictionary`2<System.String,System.String> queryAttributes, System.Action`1<Backtrace.Unity.Model.BacktraceResult> callback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* Send(::StringW json, ::System::Collections::Generic::IEnumerable_1<::StringW>* attachments, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* queryAttributes, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* callback);
    // public System.Action`1<System.Exception> get_OnServerError()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Action_1<::System::Exception*>* get_OnServerError();
    // public System.Void set_OnServerError(System.Action`1<System.Exception> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_OnServerError(::System::Action_1<::System::Exception*>* value);
    // public System.Action`1<Backtrace.Unity.Model.BacktraceResult> get_OnServerResponse()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* get_OnServerResponse();
    // public System.Void set_OnServerResponse(System.Action`1<Backtrace.Unity.Model.BacktraceResult> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_OnServerResponse(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* value);
    // public System.Func`3<System.String,Backtrace.Unity.Model.BacktraceData,Backtrace.Unity.Model.BacktraceResult> get_RequestHandler()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Func_3<::StringW, ::Backtrace::Unity::Model::BacktraceData*, ::Backtrace::Unity::Model::BacktraceResult*>* get_RequestHandler();
    // public System.Void set_RequestHandler(System.Func`3<System.String,Backtrace.Unity.Model.BacktraceData,Backtrace.Unity.Model.BacktraceResult> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_RequestHandler(::System::Func_3<::StringW, ::Backtrace::Unity::Model::BacktraceData*, ::Backtrace::Unity::Model::BacktraceResult*>* value);
    // public System.Collections.IEnumerator SendMinidump(System.String minidumpPath, System.Collections.Generic.IEnumerable`1<System.String> attachments, System.Collections.Generic.IDictionary`2<System.String,System.String> queryAttributes, System.Action`1<Backtrace.Unity.Model.BacktraceResult> callback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* SendMinidump(::StringW minidumpPath, ::System::Collections::Generic::IEnumerable_1<::StringW>* attachments, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* queryAttributes, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* callback);
    // public System.Boolean get_EnablePerformanceStatistics()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_EnablePerformanceStatistics();
    // public System.Void set_EnablePerformanceStatistics(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_EnablePerformanceStatistics(bool value);
  }; // Backtrace.Unity.Interfaces.IBacktraceApi
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceApi::get_ServerUrl
// Il2CppName: get_ServerUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Interfaces::IBacktraceApi::*)()>(&Backtrace::Unity::Interfaces::IBacktraceApi::get_ServerUrl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceApi*), "get_ServerUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceApi::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Backtrace::Unity::Interfaces::IBacktraceApi::*)(::Backtrace::Unity::Model::BacktraceData*, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&Backtrace::Unity::Interfaces::IBacktraceApi::Send)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model", "BacktraceData")->byval_arg;
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model", "BacktraceResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceApi*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, callback});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceApi::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Backtrace::Unity::Interfaces::IBacktraceApi::*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, int, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&Backtrace::Unity::Interfaces::IBacktraceApi::Send)> {
  static const MethodInfo* get() {
    static auto* json = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attachments = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* deduplication = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model", "BacktraceResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceApi*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{json, attachments, deduplication, callback});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceApi::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Backtrace::Unity::Interfaces::IBacktraceApi::*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&Backtrace::Unity::Interfaces::IBacktraceApi::Send)> {
  static const MethodInfo* get() {
    static auto* json = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attachments = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* queryAttributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model", "BacktraceResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceApi*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{json, attachments, queryAttributes, callback});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceApi::get_OnServerError
// Il2CppName: get_OnServerError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::System::Exception*>* (Backtrace::Unity::Interfaces::IBacktraceApi::*)()>(&Backtrace::Unity::Interfaces::IBacktraceApi::get_OnServerError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceApi*), "get_OnServerError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceApi::set_OnServerError
// Il2CppName: set_OnServerError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Interfaces::IBacktraceApi::*)(::System::Action_1<::System::Exception*>*)>(&Backtrace::Unity::Interfaces::IBacktraceApi::set_OnServerError)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Exception")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceApi*), "set_OnServerError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceApi::get_OnServerResponse
// Il2CppName: get_OnServerResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* (Backtrace::Unity::Interfaces::IBacktraceApi::*)()>(&Backtrace::Unity::Interfaces::IBacktraceApi::get_OnServerResponse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceApi*), "get_OnServerResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceApi::set_OnServerResponse
// Il2CppName: set_OnServerResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Interfaces::IBacktraceApi::*)(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&Backtrace::Unity::Interfaces::IBacktraceApi::set_OnServerResponse)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model", "BacktraceResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceApi*), "set_OnServerResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceApi::get_RequestHandler
// Il2CppName: get_RequestHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::StringW, ::Backtrace::Unity::Model::BacktraceData*, ::Backtrace::Unity::Model::BacktraceResult*>* (Backtrace::Unity::Interfaces::IBacktraceApi::*)()>(&Backtrace::Unity::Interfaces::IBacktraceApi::get_RequestHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceApi*), "get_RequestHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceApi::set_RequestHandler
// Il2CppName: set_RequestHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Interfaces::IBacktraceApi::*)(::System::Func_3<::StringW, ::Backtrace::Unity::Model::BacktraceData*, ::Backtrace::Unity::Model::BacktraceResult*>*)>(&Backtrace::Unity::Interfaces::IBacktraceApi::set_RequestHandler)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model", "BacktraceData"), ::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model", "BacktraceResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceApi*), "set_RequestHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceApi::SendMinidump
// Il2CppName: SendMinidump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Backtrace::Unity::Interfaces::IBacktraceApi::*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&Backtrace::Unity::Interfaces::IBacktraceApi::SendMinidump)> {
  static const MethodInfo* get() {
    static auto* minidumpPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attachments = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* queryAttributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model", "BacktraceResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceApi*), "SendMinidump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minidumpPath, attachments, queryAttributes, callback});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceApi::get_EnablePerformanceStatistics
// Il2CppName: get_EnablePerformanceStatistics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Interfaces::IBacktraceApi::*)()>(&Backtrace::Unity::Interfaces::IBacktraceApi::get_EnablePerformanceStatistics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceApi*), "get_EnablePerformanceStatistics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceApi::set_EnablePerformanceStatistics
// Il2CppName: set_EnablePerformanceStatistics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Interfaces::IBacktraceApi::*)(bool)>(&Backtrace::Unity::Interfaces::IBacktraceApi::set_EnablePerformanceStatistics)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceApi*), "set_EnablePerformanceStatistics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};