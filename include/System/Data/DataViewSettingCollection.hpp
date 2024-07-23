// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataViewManager
  class DataViewManager;
  // Forward declaring type: DataViewSetting
  class DataViewSetting;
  // Forward declaring type: DataTable
  class DataTable;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: DataViewSettingCollection
  class DataViewSettingCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::DataViewSettingCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataViewSettingCollection*, "System.Data", "DataViewSettingCollection");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataViewSettingCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class DataViewSettingCollection : public ::Il2CppObject/*, public ::System::Collections::ICollection*/ {
    public:
    // Nested type: ::System::Data::DataViewSettingCollection::DataViewSettingsEnumerator
    class DataViewSettingsEnumerator;
    public:
    // private readonly System.Data.DataViewManager _dataViewManager
    // Size: 0x8
    // Offset: 0x10
    ::System::Data::DataViewManager* dataViewManager;
    // Field size check
    static_assert(sizeof(::System::Data::DataViewManager*) == 0x8);
    // private readonly System.Collections.Hashtable _list
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Hashtable* list;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Get instance field reference: private readonly System.Data.DataViewManager _dataViewManager
    [[deprecated("Use field access instead!")]] ::System::Data::DataViewManager*& dyn__dataViewManager();
    // Get instance field reference: private readonly System.Collections.Hashtable _list
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn__list();
    // System.Void .ctor(System.Data.DataViewManager dataViewManager)
    // Offset: 0x4C53D9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataViewSettingCollection* New_ctor(::System::Data::DataViewManager* dataViewManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataViewSettingCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataViewSettingCollection*, creationType>(dataViewManager)));
    }
    // public System.Data.DataViewSetting get_Item(System.Data.DataTable table)
    // Offset: 0x4C55188
    ::System::Data::DataViewSetting* get_Item(::System::Data::DataTable* table);
    // public System.Void set_Item(System.Data.DataTable table, System.Data.DataViewSetting value)
    // Offset: 0x4C55280
    void set_Item(::System::Data::DataTable* table, ::System::Data::DataViewSetting* value);
    // public System.Void CopyTo(System.Array ar, System.Int32 index)
    // Offset: 0x4C55330
    void CopyTo(::System::Array* ar, int index);
    // public System.Int32 get_Count()
    // Offset: 0x4C554CC
    int get_Count();
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x4C55470
    ::System::Collections::IEnumerator* GetEnumerator();
    // public System.Boolean get_IsSynchronized()
    // Offset: 0x4C55610
    bool get_IsSynchronized();
    // public System.Object get_SyncRoot()
    // Offset: 0x4C55618
    ::Il2CppObject* get_SyncRoot();
    // System.Void Remove(System.Data.DataTable table)
    // Offset: 0x4C5561C
    void Remove(::System::Data::DataTable* table);
  }; // System.Data.DataViewSettingCollection
  #pragma pack(pop)
  static check_size<sizeof(DataViewSettingCollection), 24 + sizeof(::System::Collections::Hashtable*)> __System_Data_DataViewSettingCollectionSizeCheck;
  static_assert(sizeof(DataViewSettingCollection) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataViewSettingCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::DataViewSettingCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataViewSetting* (System::Data::DataViewSettingCollection::*)(::System::Data::DataTable*)>(&System::Data::DataViewSettingCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewSettingCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewSettingCollection::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewSettingCollection::*)(::System::Data::DataTable*, ::System::Data::DataViewSetting*)>(&System::Data::DataViewSettingCollection::set_Item)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Data", "DataViewSetting")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewSettingCollection*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table, value});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewSettingCollection::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewSettingCollection::*)(::System::Array*, int)>(&System::Data::DataViewSettingCollection::CopyTo)> {
  static const MethodInfo* get() {
    static auto* ar = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewSettingCollection*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ar, index});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewSettingCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::DataViewSettingCollection::*)()>(&System::Data::DataViewSettingCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewSettingCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewSettingCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Data::DataViewSettingCollection::*)()>(&System::Data::DataViewSettingCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewSettingCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewSettingCollection::get_IsSynchronized
// Il2CppName: get_IsSynchronized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::DataViewSettingCollection::*)()>(&System::Data::DataViewSettingCollection::get_IsSynchronized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewSettingCollection*), "get_IsSynchronized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewSettingCollection::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::DataViewSettingCollection::*)()>(&System::Data::DataViewSettingCollection::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewSettingCollection*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewSettingCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewSettingCollection::*)(::System::Data::DataTable*)>(&System::Data::DataViewSettingCollection::Remove)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewSettingCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table});
  }
};