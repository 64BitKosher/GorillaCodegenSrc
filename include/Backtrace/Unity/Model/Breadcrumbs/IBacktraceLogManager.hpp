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
  // Forward declaring type: BreadcrumbLevel
  struct BreadcrumbLevel;
  // Forward declaring type: UnityEngineLogLevel
  struct UnityEngineLogLevel;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Model.Breadcrumbs
namespace Backtrace::Unity::Model::Breadcrumbs {
  // Forward declaring type: IBacktraceLogManager
  class IBacktraceLogManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*, "Backtrace.Unity.Model.Breadcrumbs", "IBacktraceLogManager");
// Type namespace: Backtrace.Unity.Model.Breadcrumbs
namespace Backtrace::Unity::Model::Breadcrumbs {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Model.Breadcrumbs.IBacktraceLogManager
  // [TokenAttribute] Offset: FFFFFFFF
  class IBacktraceLogManager {
    public:
    // public System.String get_BreadcrumbsFilePath()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_BreadcrumbsFilePath();
    // public System.Boolean Add(System.String message, Backtrace.Unity.Model.Breadcrumbs.BreadcrumbLevel level, Backtrace.Unity.Model.Breadcrumbs.UnityEngineLogLevel type, System.Collections.Generic.IDictionary`2<System.String,System.String> attributes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Add(::StringW message, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel type, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* attributes);
    // public System.Boolean Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Clear();
    // public System.Boolean Enable()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Enable();
    // public System.Int32 Length()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int Length();
    // public System.Double BreadcrumbId()
    // Offset: 0xFFFFFFFFFFFFFFFF
    double BreadcrumbId();
  }; // Backtrace.Unity.Model.Breadcrumbs.IBacktraceLogManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::get_BreadcrumbsFilePath
// Il2CppName: get_BreadcrumbsFilePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::*)()>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::get_BreadcrumbsFilePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*), "get_BreadcrumbsFilePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::*)(::StringW, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::Add)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* level = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model.Breadcrumbs", "BreadcrumbLevel")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model.Breadcrumbs", "UnityEngineLogLevel")->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, level, type, attributes});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::*)()>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::Enable
// Il2CppName: Enable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::*)()>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::Enable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*), "Enable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::Length
// Il2CppName: Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::*)()>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*), "Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::BreadcrumbId
// Il2CppName: BreadcrumbId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::*)()>(&Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager::BreadcrumbId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*), "BreadcrumbId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
