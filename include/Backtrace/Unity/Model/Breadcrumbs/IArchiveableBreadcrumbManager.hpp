// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Backtrace.Unity.Model.Breadcrumbs
namespace Backtrace::Unity::Model::Breadcrumbs {
  // Forward declaring type: IArchiveableBreadcrumbManager
  class IArchiveableBreadcrumbManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager*, "Backtrace.Unity.Model.Breadcrumbs", "IArchiveableBreadcrumbManager");
// Type namespace: Backtrace.Unity.Model.Breadcrumbs
namespace Backtrace::Unity::Model::Breadcrumbs {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Model.Breadcrumbs.IArchiveableBreadcrumbManager
  // [TokenAttribute] Offset: FFFFFFFF
  class IArchiveableBreadcrumbManager {
    public:
    // public System.String Archive()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW Archive();
  }; // Backtrace.Unity.Model.Breadcrumbs.IArchiveableBreadcrumbManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager::Archive
// Il2CppName: Archive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager::*)()>(&Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager::Archive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager*), "Archive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};