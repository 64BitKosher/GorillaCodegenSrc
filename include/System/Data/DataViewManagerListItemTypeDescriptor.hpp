// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.ICustomTypeDescriptor
#include "System/ComponentModel/ICustomTypeDescriptor.hpp"
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
  // Forward declaring type: DataViewManager
  class DataViewManager;
  // Forward declaring type: DataView
  class DataView;
  // Forward declaring type: DataTable
  class DataTable;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
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
  // Forward declaring type: DataViewManagerListItemTypeDescriptor
  class DataViewManagerListItemTypeDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::DataViewManagerListItemTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataViewManagerListItemTypeDescriptor*, "System.Data", "DataViewManagerListItemTypeDescriptor");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataViewManagerListItemTypeDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class DataViewManagerListItemTypeDescriptor : public ::Il2CppObject/*, public ::System::ComponentModel::ICustomTypeDescriptor*/ {
    public:
    public:
    // private System.Data.DataViewManager _dataViewManager
    // Size: 0x8
    // Offset: 0x10
    ::System::Data::DataViewManager* dataViewManager;
    // Field size check
    static_assert(sizeof(::System::Data::DataViewManager*) == 0x8);
    // private System.ComponentModel.PropertyDescriptorCollection _propsCollection
    // Size: 0x8
    // Offset: 0x18
    ::System::ComponentModel::PropertyDescriptorCollection* propsCollection;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::PropertyDescriptorCollection*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ComponentModel::ICustomTypeDescriptor
    operator ::System::ComponentModel::ICustomTypeDescriptor() noexcept {
      return *reinterpret_cast<::System::ComponentModel::ICustomTypeDescriptor*>(this);
    }
    // Get instance field reference: private System.Data.DataViewManager _dataViewManager
    [[deprecated("Use field access instead!")]] ::System::Data::DataViewManager*& dyn__dataViewManager();
    // Get instance field reference: private System.ComponentModel.PropertyDescriptorCollection _propsCollection
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::PropertyDescriptorCollection*& dyn__propsCollection();
    // System.Void .ctor(System.Data.DataViewManager dataViewManager)
    // Offset: 0x4C53D6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataViewManagerListItemTypeDescriptor* New_ctor(::System::Data::DataViewManager* dataViewManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataViewManagerListItemTypeDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataViewManagerListItemTypeDescriptor*, creationType>(dataViewManager)));
    }
    // System.Data.DataView GetDataView(System.Data.DataTable table)
    // Offset: 0x4C54CBC
    ::System::Data::DataView* GetDataView(::System::Data::DataTable* table);
    // private System.ComponentModel.AttributeCollection System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
    // Offset: 0x4C54D3C
    ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();
    // private System.String System.ComponentModel.ICustomTypeDescriptor.GetClassName()
    // Offset: 0x4C54D94
    ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();
    // private System.String System.ComponentModel.ICustomTypeDescriptor.GetComponentName()
    // Offset: 0x4C54D9C
    ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();
    // private System.ComponentModel.TypeConverter System.ComponentModel.ICustomTypeDescriptor.GetConverter()
    // Offset: 0x4C54DA4
    ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();
    // private System.ComponentModel.EventDescriptor System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent()
    // Offset: 0x4C54DAC
    ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();
    // private System.ComponentModel.PropertyDescriptor System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty()
    // Offset: 0x4C54DB4
    ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();
    // private System.Object System.ComponentModel.ICustomTypeDescriptor.GetEditor(System.Type editorBaseType)
    // Offset: 0x4C54DBC
    ::Il2CppObject* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);
    // private System.ComponentModel.EventDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetEvents()
    // Offset: 0x4C54DC4
    ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();
    // private System.ComponentModel.EventDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetEvents(System.Attribute[] attributes)
    // Offset: 0x4C54E1C
    ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*> attributes);
    // private System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties()
    // Offset: 0x4C54E74
    ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();
    // private System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties(System.Attribute[] attributes)
    // Offset: 0x4C54F10
    ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*> attributes);
    // private System.Object System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner(System.ComponentModel.PropertyDescriptor pd)
    // Offset: 0x4C550B4
    ::Il2CppObject* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);
  }; // System.Data.DataViewManagerListItemTypeDescriptor
  #pragma pack(pop)
  static check_size<sizeof(DataViewManagerListItemTypeDescriptor), 24 + sizeof(::System::ComponentModel::PropertyDescriptorCollection*)> __System_Data_DataViewManagerListItemTypeDescriptorSizeCheck;
  static_assert(sizeof(DataViewManagerListItemTypeDescriptor) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataViewManagerListItemTypeDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::DataViewManagerListItemTypeDescriptor::GetDataView
// Il2CppName: GetDataView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataView* (System::Data::DataViewManagerListItemTypeDescriptor::*)(::System::Data::DataTable*)>(&System::Data::DataViewManagerListItemTypeDescriptor::GetDataView)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewManagerListItemTypeDescriptor*), "GetDataView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (System::Data::DataViewManagerListItemTypeDescriptor::*)()>(&System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewManagerListItemTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetClassName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::DataViewManagerListItemTypeDescriptor::*)()>(&System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewManagerListItemTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetComponentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::DataViewManagerListItemTypeDescriptor::*)()>(&System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewManagerListItemTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (System::Data::DataViewManagerListItemTypeDescriptor::*)()>(&System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewManagerListItemTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (System::Data::DataViewManagerListItemTypeDescriptor::*)()>(&System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewManagerListItemTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptor* (System::Data::DataViewManagerListItemTypeDescriptor::*)()>(&System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewManagerListItemTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetEditor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::DataViewManagerListItemTypeDescriptor::*)(::System::Type*)>(&System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  static const MethodInfo* get() {
    static auto* editorBaseType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewManagerListItemTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{editorBaseType});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (System::Data::DataViewManagerListItemTypeDescriptor::*)()>(&System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewManagerListItemTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (System::Data::DataViewManagerListItemTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(&System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  static const MethodInfo* get() {
    static auto* attributes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Attribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewManagerListItemTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::Data::DataViewManagerListItemTypeDescriptor::*)()>(&System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewManagerListItemTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::Data::DataViewManagerListItemTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(&System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  static const MethodInfo* get() {
    static auto* attributes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Attribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewManagerListItemTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::DataViewManagerListItemTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(&System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  static const MethodInfo* get() {
    static auto* pd = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewManagerListItemTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pd});
  }
};
