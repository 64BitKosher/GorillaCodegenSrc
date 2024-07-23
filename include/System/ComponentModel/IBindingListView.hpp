// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.IBindingList
#include "System/ComponentModel/IBindingList.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ListSortDescriptionCollection
  class ListSortDescriptionCollection;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IBindingListView
  class IBindingListView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::IBindingListView);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IBindingListView*, "System.ComponentModel", "IBindingListView");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.IBindingListView
  // [TokenAttribute] Offset: FFFFFFFF
  class IBindingListView/*, public ::System::ComponentModel::IBindingList*/ {
    public:
    // Creating interface conversion operator: operator ::System::ComponentModel::IBindingList
    operator ::System::ComponentModel::IBindingList() noexcept {
      return *reinterpret_cast<::System::ComponentModel::IBindingList*>(this);
    }
    // public System.Void ApplySort(System.ComponentModel.ListSortDescriptionCollection sorts)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ApplySort(::System::ComponentModel::ListSortDescriptionCollection* sorts);
    // public System.String get_Filter()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Filter();
    // public System.Void set_Filter(System.String value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Filter(::StringW value);
    // public System.ComponentModel.ListSortDescriptionCollection get_SortDescriptions()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ComponentModel::ListSortDescriptionCollection* get_SortDescriptions();
    // public System.Void RemoveFilter()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveFilter();
    // public System.Boolean get_SupportsAdvancedSorting()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_SupportsAdvancedSorting();
    // public System.Boolean get_SupportsFiltering()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_SupportsFiltering();
  }; // System.ComponentModel.IBindingListView
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::IBindingListView::ApplySort
// Il2CppName: ApplySort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::IBindingListView::*)(::System::ComponentModel::ListSortDescriptionCollection*)>(&System::ComponentModel::IBindingListView::ApplySort)> {
  static const MethodInfo* get() {
    static auto* sorts = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ListSortDescriptionCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingListView*), "ApplySort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sorts});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingListView::get_Filter
// Il2CppName: get_Filter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::IBindingListView::*)()>(&System::ComponentModel::IBindingListView::get_Filter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingListView*), "get_Filter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingListView::set_Filter
// Il2CppName: set_Filter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::IBindingListView::*)(::StringW)>(&System::ComponentModel::IBindingListView::set_Filter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingListView*), "set_Filter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingListView::get_SortDescriptions
// Il2CppName: get_SortDescriptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ListSortDescriptionCollection* (System::ComponentModel::IBindingListView::*)()>(&System::ComponentModel::IBindingListView::get_SortDescriptions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingListView*), "get_SortDescriptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingListView::RemoveFilter
// Il2CppName: RemoveFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::IBindingListView::*)()>(&System::ComponentModel::IBindingListView::RemoveFilter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingListView*), "RemoveFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingListView::get_SupportsAdvancedSorting
// Il2CppName: get_SupportsAdvancedSorting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::IBindingListView::*)()>(&System::ComponentModel::IBindingListView::get_SupportsAdvancedSorting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingListView*), "get_SupportsAdvancedSorting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingListView::get_SupportsFiltering
// Il2CppName: get_SupportsFiltering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::IBindingListView::*)()>(&System::ComponentModel::IBindingListView::get_SupportsFiltering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingListView*), "get_SupportsFiltering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};