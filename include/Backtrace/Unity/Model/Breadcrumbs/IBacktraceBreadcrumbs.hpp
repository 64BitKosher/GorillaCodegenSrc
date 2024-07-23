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
  // Forward declaring type: BacktraceBreadcrumbType
  struct BacktraceBreadcrumbType;
  // Forward declaring type: UnityEngineLogLevel
  struct UnityEngineLogLevel;
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: Backtrace::Unity::Model
namespace Backtrace::Unity::Model {
  // Forward declaring type: BacktraceReport
  class BacktraceReport;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Model.Breadcrumbs
namespace Backtrace::Unity::Model::Breadcrumbs {
  // Forward declaring type: IBacktraceBreadcrumbs
  class IBacktraceBreadcrumbs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*, "Backtrace.Unity.Model.Breadcrumbs", "IBacktraceBreadcrumbs");
// Type namespace: Backtrace.Unity.Model.Breadcrumbs
namespace Backtrace::Unity::Model::Breadcrumbs {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Model.Breadcrumbs.IBacktraceBreadcrumbs
  // [TokenAttribute] Offset: FFFFFFFF
  class IBacktraceBreadcrumbs {
    public:
    // public Backtrace.Unity.Model.Breadcrumbs.BacktraceBreadcrumbType get_BreadcrumbsLevel()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType get_BreadcrumbsLevel();
    // public System.Boolean EnableBreadcrumbs()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool EnableBreadcrumbs();
    // public System.Boolean EnableBreadcrumbs(Backtrace.Unity.Model.Breadcrumbs.BacktraceBreadcrumbType level, Backtrace.Unity.Model.Breadcrumbs.UnityEngineLogLevel unityLogLevel)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool EnableBreadcrumbs(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel unityLogLevel);
    // public System.Boolean ClearBreadcrumbs()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ClearBreadcrumbs();
    // public System.Boolean Log(System.String message, UnityEngine.LogType type, System.Collections.Generic.IDictionary`2<System.String,System.String> attributes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Log(::StringW message, ::UnityEngine::LogType type, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* attributes);
    // public System.Boolean Log(System.String message, UnityEngine.LogType type)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Log(::StringW message, ::UnityEngine::LogType type);
    // public System.Boolean Debug(System.String message)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Debug(::StringW message);
    // public System.Boolean Debug(System.String message, System.Collections.Generic.IDictionary`2<System.String,System.String> attributes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Debug(::StringW message, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* attributes);
    // public System.Boolean Info(System.String message)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Info(::StringW message);
    // public System.Boolean Info(System.String message, System.Collections.Generic.IDictionary`2<System.String,System.String> attributes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Info(::StringW message, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* attributes);
    // public System.Boolean Warning(System.String message)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Warning(::StringW message);
    // public System.Boolean Warning(System.String message, System.Collections.Generic.IDictionary`2<System.String,System.String> attributes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Warning(::StringW message, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* attributes);
    // public System.Boolean Exception(System.Exception exception)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Exception(::System::Exception* exception);
    // public System.Boolean Exception(System.Exception exception, System.Collections.Generic.IDictionary`2<System.String,System.String> attributes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Exception(::System::Exception* exception, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* attributes);
    // public System.Boolean Exception(System.String message)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Exception(::StringW message);
    // public System.Boolean Exception(System.String message, System.Collections.Generic.IDictionary`2<System.String,System.String> attributes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Exception(::StringW message, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* attributes);
    // public System.Boolean FromBacktrace(Backtrace.Unity.Model.BacktraceReport report)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool FromBacktrace(::Backtrace::Unity::Model::BacktraceReport* report);
    // public System.Boolean FromMonoBehavior(System.String message, UnityEngine.LogType type, System.Collections.Generic.IDictionary`2<System.String,System.String> attributes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool FromMonoBehavior(::StringW message, ::UnityEngine::LogType type, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* attributes);
    // public System.String GetBreadcrumbLogPath()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW GetBreadcrumbLogPath();
    // public System.Double BreadcrumbId()
    // Offset: 0xFFFFFFFFFFFFFFFF
    double BreadcrumbId();
    // public System.Void UnregisterEvents()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UnregisterEvents();
    // public System.Void Update()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Update();
    // public System.String Archive()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW Archive();
  }; // Backtrace.Unity.Model.Breadcrumbs.IBacktraceBreadcrumbs
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::get_BreadcrumbsLevel
// Il2CppName: get_BreadcrumbsLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)()>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::get_BreadcrumbsLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "get_BreadcrumbsLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::EnableBreadcrumbs
// Il2CppName: EnableBreadcrumbs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)()>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::EnableBreadcrumbs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "EnableBreadcrumbs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::EnableBreadcrumbs
// Il2CppName: EnableBreadcrumbs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel)>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::EnableBreadcrumbs)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model.Breadcrumbs", "BacktraceBreadcrumbType")->byval_arg;
    static auto* unityLogLevel = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model.Breadcrumbs", "UnityEngineLogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "EnableBreadcrumbs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, unityLogLevel});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::ClearBreadcrumbs
// Il2CppName: ClearBreadcrumbs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)()>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::ClearBreadcrumbs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "ClearBreadcrumbs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)(::StringW, ::UnityEngine::LogType, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Log)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, type, attributes});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)(::StringW, ::UnityEngine::LogType)>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Log)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, type});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Debug
// Il2CppName: Debug
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)(::StringW)>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Debug)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "Debug", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Debug
// Il2CppName: Debug
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)(::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Debug)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "Debug", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, attributes});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Info
// Il2CppName: Info
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)(::StringW)>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Info)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "Info", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Info
// Il2CppName: Info
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)(::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Info)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "Info", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, attributes});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Warning
// Il2CppName: Warning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)(::StringW)>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Warning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "Warning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Warning
// Il2CppName: Warning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)(::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Warning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "Warning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, attributes});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Exception
// Il2CppName: Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)(::System::Exception*)>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Exception)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Exception
// Il2CppName: Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)(::System::Exception*, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Exception)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, attributes});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Exception
// Il2CppName: Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)(::StringW)>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Exception)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Exception
// Il2CppName: Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)(::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Exception)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, attributes});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::FromBacktrace
// Il2CppName: FromBacktrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)(::Backtrace::Unity::Model::BacktraceReport*)>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::FromBacktrace)> {
  static const MethodInfo* get() {
    static auto* report = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model", "BacktraceReport")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "FromBacktrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{report});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::FromMonoBehavior
// Il2CppName: FromMonoBehavior
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)(::StringW, ::UnityEngine::LogType, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::FromMonoBehavior)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "FromMonoBehavior", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, type, attributes});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::GetBreadcrumbLogPath
// Il2CppName: GetBreadcrumbLogPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)()>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::GetBreadcrumbLogPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "GetBreadcrumbLogPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::BreadcrumbId
// Il2CppName: BreadcrumbId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)()>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::BreadcrumbId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "BreadcrumbId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::UnregisterEvents
// Il2CppName: UnregisterEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)()>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::UnregisterEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "UnregisterEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)()>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Archive
// Il2CppName: Archive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::*)()>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs::Archive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*), "Archive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
