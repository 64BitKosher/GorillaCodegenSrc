// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Backtrace::Unity::Model::Breadcrumbs
namespace Backtrace::Unity::Model::Breadcrumbs {
  // Forward declaring type: IBacktraceBreadcrumbs
  class IBacktraceBreadcrumbs;
}
// Forward declaring namespace: Backtrace::Unity::Model
namespace Backtrace::Unity::Model {
  // Forward declaring type: BacktraceReport
  class BacktraceReport;
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
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Backtrace::Unity::Interfaces
namespace Backtrace::Unity::Interfaces {
  // Forward declaring type: IBacktraceMetrics
  class IBacktraceMetrics;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Interfaces
namespace Backtrace::Unity::Interfaces {
  // Forward declaring type: IBacktraceClient
  class IBacktraceClient;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Interfaces::IBacktraceClient);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Interfaces::IBacktraceClient*, "Backtrace.Unity.Interfaces", "IBacktraceClient");
// Type namespace: Backtrace.Unity.Interfaces
namespace Backtrace::Unity::Interfaces {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Interfaces.IBacktraceClient
  // [TokenAttribute] Offset: FFFFFFFF
  class IBacktraceClient {
    public:
    // public Backtrace.Unity.Model.Breadcrumbs.IBacktraceBreadcrumbs get_Breadcrumbs()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* get_Breadcrumbs();
    // public System.Void Send(Backtrace.Unity.Model.BacktraceReport report, System.Action`1<Backtrace.Unity.Model.BacktraceResult> sendCallback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Send(::Backtrace::Unity::Model::BacktraceReport* report, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* sendCallback);
    // public System.Void Send(System.String message, System.Collections.Generic.List`1<System.String> attachmentPaths, System.Collections.Generic.Dictionary`2<System.String,System.String> attributes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Send(::StringW message, ::System::Collections::Generic::List_1<::StringW>* attachmentPaths, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* attributes);
    // public System.Void Send(System.Exception exception, System.Collections.Generic.List`1<System.String> attachmentPaths, System.Collections.Generic.Dictionary`2<System.String,System.String> attributes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Send(::System::Exception* exception, ::System::Collections::Generic::List_1<::StringW>* attachmentPaths, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* attributes);
    // public System.Void SetClientReportLimit(System.UInt32 reportPerMin)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetClientReportLimit(uint reportPerMin);
    // public System.Void Refresh()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Refresh();
    // public System.Boolean EnableBreadcrumbsSupport()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool EnableBreadcrumbsSupport();
    // public Backtrace.Unity.Interfaces.IBacktraceMetrics get_Metrics()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Backtrace::Unity::Interfaces::IBacktraceMetrics* get_Metrics();
    // public System.Boolean EnableMetrics()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool EnableMetrics();
    // public System.Boolean EnableMetrics(System.String uniqueEventsSubmissionUrl, System.String summedEventsSubmissionUrl, System.UInt32 timeIntervalInSec, System.String uniqueEventName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool EnableMetrics(::StringW uniqueEventsSubmissionUrl, ::StringW summedEventsSubmissionUrl, uint timeIntervalInSec, ::StringW uniqueEventName);
  }; // Backtrace.Unity.Interfaces.IBacktraceClient
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceClient::get_Breadcrumbs
// Il2CppName: get_Breadcrumbs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* (Backtrace::Unity::Interfaces::IBacktraceClient::*)()>(&Backtrace::Unity::Interfaces::IBacktraceClient::get_Breadcrumbs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceClient*), "get_Breadcrumbs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceClient::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Interfaces::IBacktraceClient::*)(::Backtrace::Unity::Model::BacktraceReport*, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&Backtrace::Unity::Interfaces::IBacktraceClient::Send)> {
  static const MethodInfo* get() {
    static auto* report = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model", "BacktraceReport")->byval_arg;
    static auto* sendCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model", "BacktraceResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceClient*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{report, sendCallback});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceClient::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Interfaces::IBacktraceClient::*)(::StringW, ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Interfaces::IBacktraceClient::Send)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attachmentPaths = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceClient*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, attachmentPaths, attributes});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceClient::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Interfaces::IBacktraceClient::*)(::System::Exception*, ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Interfaces::IBacktraceClient::Send)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* attachmentPaths = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceClient*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, attachmentPaths, attributes});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceClient::SetClientReportLimit
// Il2CppName: SetClientReportLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Interfaces::IBacktraceClient::*)(uint)>(&Backtrace::Unity::Interfaces::IBacktraceClient::SetClientReportLimit)> {
  static const MethodInfo* get() {
    static auto* reportPerMin = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceClient*), "SetClientReportLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reportPerMin});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceClient::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Interfaces::IBacktraceClient::*)()>(&Backtrace::Unity::Interfaces::IBacktraceClient::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceClient*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceClient::EnableBreadcrumbsSupport
// Il2CppName: EnableBreadcrumbsSupport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Interfaces::IBacktraceClient::*)()>(&Backtrace::Unity::Interfaces::IBacktraceClient::EnableBreadcrumbsSupport)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceClient*), "EnableBreadcrumbsSupport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceClient::get_Metrics
// Il2CppName: get_Metrics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Backtrace::Unity::Interfaces::IBacktraceMetrics* (Backtrace::Unity::Interfaces::IBacktraceClient::*)()>(&Backtrace::Unity::Interfaces::IBacktraceClient::get_Metrics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceClient*), "get_Metrics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceClient::EnableMetrics
// Il2CppName: EnableMetrics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Interfaces::IBacktraceClient::*)()>(&Backtrace::Unity::Interfaces::IBacktraceClient::EnableMetrics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceClient*), "EnableMetrics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceClient::EnableMetrics
// Il2CppName: EnableMetrics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Interfaces::IBacktraceClient::*)(::StringW, ::StringW, uint, ::StringW)>(&Backtrace::Unity::Interfaces::IBacktraceClient::EnableMetrics)> {
  static const MethodInfo* get() {
    static auto* uniqueEventsSubmissionUrl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* summedEventsSubmissionUrl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* timeIntervalInSec = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* uniqueEventName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceClient*), "EnableMetrics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uniqueEventsSubmissionUrl, summedEventsSubmissionUrl, timeIntervalInSec, uniqueEventName});
  }
};
