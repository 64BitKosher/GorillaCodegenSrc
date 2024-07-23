// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.ICustomTypeDescriptor
#include "System/ComponentModel/ICustomTypeDescriptor.hpp"
// Including type: System.ComponentModel.IEditableObject
#include "System/ComponentModel/IEditableObject.hpp"
// Including type: System.ComponentModel.IDataErrorInfo
#include "System/ComponentModel/IDataErrorInfo.hpp"
// Including type: System.ComponentModel.INotifyPropertyChanged
#include "System/ComponentModel/INotifyPropertyChanged.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataView
  class DataView;
  // Forward declaring type: DataRow
  class DataRow;
  // Forward declaring type: DataRowVersion
  struct DataRowVersion;
  // Forward declaring type: DataColumn
  class DataColumn;
  // Forward declaring type: DataRelation
  class DataRelation;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: PropertyChangedEventHandler
  class PropertyChangedEventHandler;
  // Forward declaring type: PropertyDescriptorCollection
  class PropertyDescriptorCollection;
  // Forward declaring type: AttributeCollection
  class AttributeCollection;
  // Forward declaring type: TypeConverter
  class TypeConverter;
  // Forward declaring type: EventDescriptor
  class EventDescriptor;
  // Forward declaring type: PropertyDescriptor
  class PropertyDescriptor;
  // Forward declaring type: EventDescriptorCollection
  class EventDescriptorCollection;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: DataRowView
  class DataRowView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::DataRowView);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRowView*, "System.Data", "DataRowView");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataRowView
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class DataRowView : public ::Il2CppObject/*, public ::System::ComponentModel::ICustomTypeDescriptor, public ::System::ComponentModel::IEditableObject, public ::System::ComponentModel::IDataErrorInfo, public ::System::ComponentModel::INotifyPropertyChanged*/ {
    public:
    public:
    // private readonly System.Data.DataView _dataView
    // Size: 0x8
    // Offset: 0x10
    ::System::Data::DataView* dataView;
    // Field size check
    static_assert(sizeof(::System::Data::DataView*) == 0x8);
    // private readonly System.Data.DataRow _row
    // Size: 0x8
    // Offset: 0x18
    ::System::Data::DataRow* row;
    // Field size check
    static_assert(sizeof(::System::Data::DataRow*) == 0x8);
    // private System.Boolean _delayBeginEdit
    // Size: 0x1
    // Offset: 0x20
    bool delayBeginEdit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: delayBeginEdit and: PropertyChanged
    char __padding2[0x7] = {};
    // private System.ComponentModel.PropertyChangedEventHandler PropertyChanged
    // Size: 0x8
    // Offset: 0x28
    ::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::PropertyChangedEventHandler*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ComponentModel::ICustomTypeDescriptor
    operator ::System::ComponentModel::ICustomTypeDescriptor() noexcept {
      return *reinterpret_cast<::System::ComponentModel::ICustomTypeDescriptor*>(this);
    }
    // Creating interface conversion operator: operator ::System::ComponentModel::IEditableObject
    operator ::System::ComponentModel::IEditableObject() noexcept {
      return *reinterpret_cast<::System::ComponentModel::IEditableObject*>(this);
    }
    // Creating interface conversion operator: operator ::System::ComponentModel::IDataErrorInfo
    operator ::System::ComponentModel::IDataErrorInfo() noexcept {
      return *reinterpret_cast<::System::ComponentModel::IDataErrorInfo*>(this);
    }
    // Creating interface conversion operator: operator ::System::ComponentModel::INotifyPropertyChanged
    operator ::System::ComponentModel::INotifyPropertyChanged() noexcept {
      return *reinterpret_cast<::System::ComponentModel::INotifyPropertyChanged*>(this);
    }
    // Get static field: static private readonly System.ComponentModel.PropertyDescriptorCollection s_zeroPropertyDescriptorCollection
    static ::System::ComponentModel::PropertyDescriptorCollection* _get_s_zeroPropertyDescriptorCollection();
    // Set static field: static private readonly System.ComponentModel.PropertyDescriptorCollection s_zeroPropertyDescriptorCollection
    static void _set_s_zeroPropertyDescriptorCollection(::System::ComponentModel::PropertyDescriptorCollection* value);
    // Get instance field reference: private readonly System.Data.DataView _dataView
    [[deprecated("Use field access instead!")]] ::System::Data::DataView*& dyn__dataView();
    // Get instance field reference: private readonly System.Data.DataRow _row
    [[deprecated("Use field access instead!")]] ::System::Data::DataRow*& dyn__row();
    // Get instance field reference: private System.Boolean _delayBeginEdit
    [[deprecated("Use field access instead!")]] bool& dyn__delayBeginEdit();
    // Get instance field reference: private System.ComponentModel.PropertyChangedEventHandler PropertyChanged
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::PropertyChangedEventHandler*& dyn_PropertyChanged();
    // System.Void .ctor(System.Data.DataView dataView, System.Data.DataRow row)
    // Offset: 0x4C3E074
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataRowView* New_ctor(::System::Data::DataView* dataView, ::System::Data::DataRow* row) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataRowView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataRowView*, creationType>(dataView, row)));
    }
    // public System.Data.DataView get_DataView()
    // Offset: 0x4C3E0E4
    ::System::Data::DataView* get_DataView();
    // private System.String System.ComponentModel.IDataErrorInfo.get_Item(System.String colName)
    // Offset: 0x4C3E0EC
    ::StringW System_ComponentModel_IDataErrorInfo_get_Item(::StringW colName);
    // private System.String System.ComponentModel.IDataErrorInfo.get_Error()
    // Offset: 0x4C3E114
    ::StringW System_ComponentModel_IDataErrorInfo_get_Error();
    // private System.Data.DataRowVersion get_RowVersionDefault()
    // Offset: 0x4C3E178
    ::System::Data::DataRowVersion get_RowVersionDefault();
    // System.Int32 GetRecord()
    // Offset: 0x4C3E1D0
    int GetRecord();
    // System.Boolean HasRecord()
    // Offset: 0x4C3E1F4
    bool HasRecord();
    // System.Object GetColumnValue(System.Data.DataColumn column)
    // Offset: 0x4C3E218
    ::Il2CppObject* GetColumnValue(::System::Data::DataColumn* column);
    // System.Void SetColumnValue(System.Data.DataColumn column, System.Object value)
    // Offset: 0x4C3E24C
    void SetColumnValue(::System::Data::DataColumn* column, ::Il2CppObject* value);
    // public System.Data.DataView CreateChildView(System.Data.DataRelation relation, System.Boolean followParent)
    // Offset: 0x4C3E2D8
    ::System::Data::DataView* CreateChildView(::System::Data::DataRelation* relation, bool followParent);
    // public System.Data.DataView CreateChildView(System.Data.DataRelation relation)
    // Offset: 0x4C39E90
    ::System::Data::DataView* CreateChildView(::System::Data::DataRelation* relation);
    // public System.Data.DataRow get_Row()
    // Offset: 0x4C3E6CC
    ::System::Data::DataRow* get_Row();
    // public System.Void BeginEdit()
    // Offset: 0x4C3E6D4
    void BeginEdit();
    // public System.Void CancelEdit()
    // Offset: 0x4C3E6E0
    void CancelEdit();
    // public System.Void EndEdit()
    // Offset: 0x4C3E8F4
    void EndEdit();
    // public System.Boolean get_IsNew()
    // Offset: 0x4C3E728
    bool get_IsNew();
    // public System.Void add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler value)
    // Offset: 0x4C3E93C
    void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);
    // public System.Void remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler value)
    // Offset: 0x4C3E9D8
    void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);
    // System.Void RaisePropertyChangedEvent(System.String propName)
    // Offset: 0x4C3EA74
    void RaisePropertyChangedEvent(::StringW propName);
    // private System.ComponentModel.AttributeCollection System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
    // Offset: 0x4C3EB04
    ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();
    // private System.String System.ComponentModel.ICustomTypeDescriptor.GetClassName()
    // Offset: 0x4C3EB5C
    ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();
    // private System.String System.ComponentModel.ICustomTypeDescriptor.GetComponentName()
    // Offset: 0x4C3EB64
    ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();
    // private System.ComponentModel.TypeConverter System.ComponentModel.ICustomTypeDescriptor.GetConverter()
    // Offset: 0x4C3EB6C
    ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();
    // private System.ComponentModel.EventDescriptor System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent()
    // Offset: 0x4C3EB74
    ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();
    // private System.ComponentModel.PropertyDescriptor System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty()
    // Offset: 0x4C3EB7C
    ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();
    // private System.Object System.ComponentModel.ICustomTypeDescriptor.GetEditor(System.Type editorBaseType)
    // Offset: 0x4C3EB84
    ::Il2CppObject* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);
    // private System.ComponentModel.EventDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetEvents()
    // Offset: 0x4C3EB8C
    ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();
    // private System.ComponentModel.EventDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetEvents(System.Attribute[] attributes)
    // Offset: 0x4C3EBE4
    ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*> attributes);
    // private System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties()
    // Offset: 0x4C3EC3C
    ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();
    // private System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties(System.Attribute[] attributes)
    // Offset: 0x4C3ECD8
    ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*> attributes);
    // private System.Object System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner(System.ComponentModel.PropertyDescriptor pd)
    // Offset: 0x4C3ED60
    ::Il2CppObject* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);
    // static private System.Void .cctor()
    // Offset: 0x4C3ED64
    static void _cctor();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x4C3E0B8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4C3E0C4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Data.DataRowView
  #pragma pack(pop)
  static check_size<sizeof(DataRowView), 40 + sizeof(::System::ComponentModel::PropertyChangedEventHandler*)> __System_Data_DataRowViewSizeCheck;
  static_assert(sizeof(DataRowView) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataRowView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::DataRowView::get_DataView
// Il2CppName: get_DataView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataView* (System::Data::DataRowView::*)()>(&System::Data::DataRowView::get_DataView)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "get_DataView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::System_ComponentModel_IDataErrorInfo_get_Item
// Il2CppName: System.ComponentModel.IDataErrorInfo.get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::DataRowView::*)(::StringW)>(&System::Data::DataRowView::System_ComponentModel_IDataErrorInfo_get_Item)> {
  static const MethodInfo* get() {
    static auto* colName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "System.ComponentModel.IDataErrorInfo.get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colName});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::System_ComponentModel_IDataErrorInfo_get_Error
// Il2CppName: System.ComponentModel.IDataErrorInfo.get_Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::DataRowView::*)()>(&System::Data::DataRowView::System_ComponentModel_IDataErrorInfo_get_Error)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "System.ComponentModel.IDataErrorInfo.get_Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::get_RowVersionDefault
// Il2CppName: get_RowVersionDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRowVersion (System::Data::DataRowView::*)()>(&System::Data::DataRowView::get_RowVersionDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "get_RowVersionDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::GetRecord
// Il2CppName: GetRecord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::DataRowView::*)()>(&System::Data::DataRowView::GetRecord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "GetRecord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::HasRecord
// Il2CppName: HasRecord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::DataRowView::*)()>(&System::Data::DataRowView::HasRecord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "HasRecord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::GetColumnValue
// Il2CppName: GetColumnValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::DataRowView::*)(::System::Data::DataColumn*)>(&System::Data::DataRowView::GetColumnValue)> {
  static const MethodInfo* get() {
    static auto* column = &::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "GetColumnValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{column});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::SetColumnValue
// Il2CppName: SetColumnValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRowView::*)(::System::Data::DataColumn*, ::Il2CppObject*)>(&System::Data::DataRowView::SetColumnValue)> {
  static const MethodInfo* get() {
    static auto* column = &::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "SetColumnValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{column, value});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::CreateChildView
// Il2CppName: CreateChildView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataView* (System::Data::DataRowView::*)(::System::Data::DataRelation*, bool)>(&System::Data::DataRowView::CreateChildView)> {
  static const MethodInfo* get() {
    static auto* relation = &::il2cpp_utils::GetClassFromName("System.Data", "DataRelation")->byval_arg;
    static auto* followParent = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "CreateChildView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{relation, followParent});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::CreateChildView
// Il2CppName: CreateChildView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataView* (System::Data::DataRowView::*)(::System::Data::DataRelation*)>(&System::Data::DataRowView::CreateChildView)> {
  static const MethodInfo* get() {
    static auto* relation = &::il2cpp_utils::GetClassFromName("System.Data", "DataRelation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "CreateChildView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{relation});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::get_Row
// Il2CppName: get_Row
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRow* (System::Data::DataRowView::*)()>(&System::Data::DataRowView::get_Row)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "get_Row", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::BeginEdit
// Il2CppName: BeginEdit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRowView::*)()>(&System::Data::DataRowView::BeginEdit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "BeginEdit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::CancelEdit
// Il2CppName: CancelEdit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRowView::*)()>(&System::Data::DataRowView::CancelEdit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "CancelEdit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::EndEdit
// Il2CppName: EndEdit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRowView::*)()>(&System::Data::DataRowView::EndEdit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "EndEdit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::get_IsNew
// Il2CppName: get_IsNew
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::DataRowView::*)()>(&System::Data::DataRowView::get_IsNew)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "get_IsNew", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::add_PropertyChanged
// Il2CppName: add_PropertyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRowView::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&System::Data::DataRowView::add_PropertyChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyChangedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "add_PropertyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::remove_PropertyChanged
// Il2CppName: remove_PropertyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRowView::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&System::Data::DataRowView::remove_PropertyChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyChangedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "remove_PropertyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::RaisePropertyChangedEvent
// Il2CppName: RaisePropertyChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRowView::*)(::StringW)>(&System::Data::DataRowView::RaisePropertyChangedEvent)> {
  static const MethodInfo* get() {
    static auto* propName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "RaisePropertyChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propName});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetAttributes
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (System::Data::DataRowView::*)()>(&System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetClassName
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetClassName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::DataRowView::*)()>(&System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetComponentName
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetComponentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::DataRowView::*)()>(&System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetConverter
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (System::Data::DataRowView::*)()>(&System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (System::Data::DataRowView::*)()>(&System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptor* (System::Data::DataRowView::*)()>(&System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetEditor
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetEditor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::DataRowView::*)(::System::Type*)>(&System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  static const MethodInfo* get() {
    static auto* editorBaseType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{editorBaseType});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetEvents
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (System::Data::DataRowView::*)()>(&System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetEvents
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (System::Data::DataRowView::*)(::ArrayW<::System::Attribute*>)>(&System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  static const MethodInfo* get() {
    static auto* attributes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Attribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetProperties
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::Data::DataRowView::*)()>(&System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetProperties
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::Data::DataRowView::*)(::ArrayW<::System::Attribute*>)>(&System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  static const MethodInfo* get() {
    static auto* attributes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Attribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::DataRowView::*)(::System::ComponentModel::PropertyDescriptor*)>(&System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  static const MethodInfo* get() {
    static auto* pd = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pd});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Data::DataRowView::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::DataRowView::*)(::Il2CppObject*)>(&System::Data::DataRowView::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Data::DataRowView::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::DataRowView::*)()>(&System::Data::DataRowView::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowView*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
