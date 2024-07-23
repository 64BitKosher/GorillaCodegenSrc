// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Backtrace::Unity::Model::Breadcrumbs
namespace Backtrace::Unity::Model::Breadcrumbs {
  // Forward declaring type: IBacktraceBreadcrumbs
  class IBacktraceBreadcrumbs;
}
// Forward declaring namespace: Backtrace::Unity::Interfaces
namespace Backtrace::Unity::Interfaces {
  // Forward declaring type: IBacktraceApi
  class IBacktraceApi;
}
// Forward declaring namespace: Backtrace::Unity::Model::Database
namespace Backtrace::Unity::Model::Database {
  // Forward declaring type: BacktraceDatabaseRecord
  class BacktraceDatabaseRecord;
  // Forward declaring type: BacktraceDatabaseSettings
  class BacktraceDatabaseSettings;
}
// Forward declaring namespace: Backtrace::Unity::Model
namespace Backtrace::Unity::Model {
  // Forward declaring type: BacktraceReport
  class BacktraceReport;
  // Forward declaring type: BacktraceData
  class BacktraceData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Backtrace::Unity::Types
namespace Backtrace::Unity::Types {
  // Forward declaring type: MiniDumpType
  struct MiniDumpType;
}
// Forward declaring namespace: Backtrace::Unity::Services
namespace Backtrace::Unity::Services {
  // Forward declaring type: ReportLimitWatcher
  class ReportLimitWatcher;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Interfaces
namespace Backtrace::Unity::Interfaces {
  // Forward declaring type: IBacktraceDatabase
  class IBacktraceDatabase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Interfaces::IBacktraceDatabase);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Interfaces::IBacktraceDatabase*, "Backtrace.Unity.Interfaces", "IBacktraceDatabase");
// Type namespace: Backtrace.Unity.Interfaces
namespace Backtrace::Unity::Interfaces {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Interfaces.IBacktraceDatabase
  // [TokenAttribute] Offset: FFFFFFFF
  class IBacktraceDatabase {
    public:
    // public System.Int32 get_ScreenshotQuality()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_ScreenshotQuality();
    // public System.Void set_ScreenshotQuality(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_ScreenshotQuality(int value);
    // public System.Int32 get_ScreenshotMaxHeight()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_ScreenshotMaxHeight();
    // public System.Void set_ScreenshotMaxHeight(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_ScreenshotMaxHeight(int value);
    // public Backtrace.Unity.Model.Breadcrumbs.IBacktraceBreadcrumbs get_Breadcrumbs()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* get_Breadcrumbs();
    // public System.Void Flush()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Flush();
    // public System.Void SetApi(Backtrace.Unity.Interfaces.IBacktraceApi backtraceApi)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetApi(::Backtrace::Unity::Interfaces::IBacktraceApi* backtraceApi);
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear();
    // public System.Boolean ValidConsistency()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ValidConsistency();
    // public Backtrace.Unity.Model.Database.BacktraceDatabaseRecord Add(Backtrace.Unity.Model.BacktraceReport backtraceReport, System.Collections.Generic.Dictionary`2<System.String,System.String> attributes, Backtrace.Unity.Types.MiniDumpType miniDumpType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Add(::Backtrace::Unity::Model::BacktraceReport* backtraceReport, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* attributes, ::Backtrace::Unity::Types::MiniDumpType miniDumpType);
    // public System.Collections.Generic.IEnumerable`1<Backtrace.Unity.Model.Database.BacktraceDatabaseRecord> Get()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* Get();
    // public System.Void Delete(Backtrace.Unity.Model.Database.BacktraceDatabaseRecord record)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Delete(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* record);
    // public Backtrace.Unity.Model.Database.BacktraceDatabaseSettings GetSettings()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings* GetSettings();
    // public System.Int64 GetDatabaseSize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t GetDatabaseSize();
    // public System.Void SetReportWatcher(Backtrace.Unity.Services.ReportLimitWatcher reportLimitWatcher)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetReportWatcher(::Backtrace::Unity::Services::ReportLimitWatcher* reportLimitWatcher);
    // public System.Void Reload()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Reload();
    // public Backtrace.Unity.Model.Database.BacktraceDatabaseRecord Add(Backtrace.Unity.Model.BacktraceData data, System.Boolean lock)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Add(::Backtrace::Unity::Model::BacktraceData* data, bool lock);
    // public System.Boolean Enabled()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Enabled();
    // public System.Boolean EnableBreadcrumbsSupport()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool EnableBreadcrumbsSupport();
  }; // Backtrace.Unity.Interfaces.IBacktraceDatabase
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::get_ScreenshotQuality
// Il2CppName: get_ScreenshotQuality
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::get_ScreenshotQuality)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "get_ScreenshotQuality", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::set_ScreenshotQuality
// Il2CppName: set_ScreenshotQuality
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)(int)>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::set_ScreenshotQuality)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "set_ScreenshotQuality", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::get_ScreenshotMaxHeight
// Il2CppName: get_ScreenshotMaxHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::get_ScreenshotMaxHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "get_ScreenshotMaxHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::set_ScreenshotMaxHeight
// Il2CppName: set_ScreenshotMaxHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)(int)>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::set_ScreenshotMaxHeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "set_ScreenshotMaxHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::get_Breadcrumbs
// Il2CppName: get_Breadcrumbs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::get_Breadcrumbs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "get_Breadcrumbs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::SetApi
// Il2CppName: SetApi
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)(::Backtrace::Unity::Interfaces::IBacktraceApi*)>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::SetApi)> {
  static const MethodInfo* get() {
    static auto* backtraceApi = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Interfaces", "IBacktraceApi")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "SetApi", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{backtraceApi});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::ValidConsistency
// Il2CppName: ValidConsistency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::ValidConsistency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "ValidConsistency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)(::Backtrace::Unity::Model::BacktraceReport*, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::Backtrace::Unity::Types::MiniDumpType)>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::Add)> {
  static const MethodInfo* get() {
    static auto* backtraceReport = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model", "BacktraceReport")->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* miniDumpType = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Types", "MiniDumpType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{backtraceReport, attributes, miniDumpType});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::Get)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::Delete)> {
  static const MethodInfo* get() {
    static auto* record = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model.Database", "BacktraceDatabaseRecord")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{record});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::GetSettings
// Il2CppName: GetSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings* (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::GetSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "GetSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::GetDatabaseSize
// Il2CppName: GetDatabaseSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::GetDatabaseSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "GetDatabaseSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::SetReportWatcher
// Il2CppName: SetReportWatcher
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)(::Backtrace::Unity::Services::ReportLimitWatcher*)>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::SetReportWatcher)> {
  static const MethodInfo* get() {
    static auto* reportLimitWatcher = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Services", "ReportLimitWatcher")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "SetReportWatcher", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reportLimitWatcher});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::Reload
// Il2CppName: Reload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::Reload)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "Reload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)(::Backtrace::Unity::Model::BacktraceData*, bool)>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::Add)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model", "BacktraceData")->byval_arg;
    static auto* lock = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, lock});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::Enabled
// Il2CppName: Enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::Enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "Enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Interfaces::IBacktraceDatabase::EnableBreadcrumbsSupport
// Il2CppName: EnableBreadcrumbsSupport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&Backtrace::Unity::Interfaces::IBacktraceDatabase::EnableBreadcrumbsSupport)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Interfaces::IBacktraceDatabase*), "EnableBreadcrumbsSupport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};