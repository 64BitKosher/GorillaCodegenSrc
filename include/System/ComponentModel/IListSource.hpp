// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IListSource
  class IListSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::IListSource);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IListSource*, "System.ComponentModel", "IListSource");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.IListSource
  // [TokenAttribute] Offset: FFFFFFFF
  // [MergablePropertyAttribute] Offset: FFFFFFFF
  class IListSource {
    public:
    // public System.Boolean get_ContainsListCollection()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_ContainsListCollection();
    // public System.Collections.IList GetList()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IList* GetList();
  }; // System.ComponentModel.IListSource
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::IListSource::get_ContainsListCollection
// Il2CppName: get_ContainsListCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::IListSource::*)()>(&System::ComponentModel::IListSource::get_ContainsListCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IListSource*), "get_ContainsListCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IListSource::GetList
// Il2CppName: GetList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (System::ComponentModel::IListSource::*)()>(&System::ComponentModel::IListSource::GetList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IListSource*), "GetList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
