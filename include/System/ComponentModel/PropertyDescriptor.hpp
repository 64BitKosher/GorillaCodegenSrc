// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.MemberDescriptor
#include "System/ComponentModel/MemberDescriptor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: TypeConverter
  class TypeConverter;
  // Forward declaring type: DesignerSerializationVisibility
  struct DesignerSerializationVisibility;
  // Forward declaring type: PropertyDescriptorCollection
  class PropertyDescriptorCollection;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: Attribute
  class Attribute;
  // Forward declaring type: EventArgs
  class EventArgs;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: PropertyDescriptor
  class PropertyDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::PropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyDescriptor*, "System.ComponentModel", "PropertyDescriptor");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x84
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.PropertyDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class PropertyDescriptor : public ::System::ComponentModel::MemberDescriptor {
    public:
    public:
    // private System.ComponentModel.TypeConverter _converter
    // Size: 0x8
    // Offset: 0x60
    ::System::ComponentModel::TypeConverter* converter;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::TypeConverter*) == 0x8);
    // private System.Collections.Hashtable _valueChangedHandlers
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Hashtable* valueChangedHandlers;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Object[] _editors
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::Il2CppObject*> editors;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Type[] _editorTypes
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<::System::Type*> editorTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // private System.Int32 _editorCount
    // Size: 0x4
    // Offset: 0x80
    int editorCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.ComponentModel.TypeConverter _converter
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::TypeConverter*& dyn__converter();
    // Get instance field reference: private System.Collections.Hashtable _valueChangedHandlers
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn__valueChangedHandlers();
    // Get instance field reference: private System.Object[] _editors
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn__editors();
    // Get instance field reference: private System.Type[] _editorTypes
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn__editorTypes();
    // Get instance field reference: private System.Int32 _editorCount
    [[deprecated("Use field access instead!")]] int& dyn__editorCount();
    // public System.Type get_ComponentType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Type* get_ComponentType();
    // public System.ComponentModel.TypeConverter get_Converter()
    // Offset: 0x4F0FBD0
    ::System::ComponentModel::TypeConverter* get_Converter();
    // public System.Boolean get_IsLocalizable()
    // Offset: 0x4F10264
    bool get_IsLocalizable();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsReadOnly();
    // public System.ComponentModel.DesignerSerializationVisibility get_SerializationVisibility()
    // Offset: 0x4F10358
    ::System::ComponentModel::DesignerSerializationVisibility get_SerializationVisibility();
    // public System.Type get_PropertyType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Type* get_PropertyType();
    // public System.Void AddValueChanged(System.Object component, System.EventHandler handler)
    // Offset: 0x4F10438
    void AddValueChanged(::Il2CppObject* component, ::System::EventHandler* handler);
    // public System.Boolean CanResetValue(System.Object component)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool CanResetValue(::Il2CppObject* component);
    // protected System.Object CreateInstance(System.Type type)
    // Offset: 0x4F10040
    ::Il2CppObject* CreateInstance(::System::Type* type);
    // public System.ComponentModel.PropertyDescriptorCollection GetChildProperties()
    // Offset: 0x4F108E4
    ::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties();
    // public System.ComponentModel.PropertyDescriptorCollection GetChildProperties(System.Attribute[] filter)
    // Offset: 0x4F108FC
    ::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties(::ArrayW<::System::Attribute*> filter);
    // public System.ComponentModel.PropertyDescriptorCollection GetChildProperties(System.Object instance)
    // Offset: 0x4F10914
    ::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties(::Il2CppObject* instance);
    // public System.ComponentModel.PropertyDescriptorCollection GetChildProperties(System.Object instance, System.Attribute[] filter)
    // Offset: 0x4F10928
    ::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties(::Il2CppObject* instance, ::ArrayW<::System::Attribute*> filter);
    // public System.Object GetEditor(System.Type editorBaseType)
    // Offset: 0x4F109E0
    ::Il2CppObject* GetEditor(::System::Type* editorBaseType);
    // protected System.Type GetTypeFromName(System.String typeName)
    // Offset: 0x4F0FE44
    ::System::Type* GetTypeFromName(::StringW typeName);
    // public System.Object GetValue(System.Object component)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* GetValue(::Il2CppObject* component);
    // protected System.Void OnValueChanged(System.Object component, System.EventArgs e)
    // Offset: 0x4F11020
    void OnValueChanged(::Il2CppObject* component, ::System::EventArgs* e);
    // public System.Void RemoveValueChanged(System.Object component, System.EventHandler handler)
    // Offset: 0x4F110D0
    void RemoveValueChanged(::Il2CppObject* component, ::System::EventHandler* handler);
    // protected internal System.EventHandler GetValueChangedHandler(System.Object component)
    // Offset: 0x4F11244
    ::System::EventHandler* GetValueChangedHandler(::Il2CppObject* component);
    // public System.Void ResetValue(System.Object component)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ResetValue(::Il2CppObject* component);
    // public System.Void SetValue(System.Object component, System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetValue(::Il2CppObject* component, ::Il2CppObject* value);
    // public System.Boolean ShouldSerializeValue(System.Object component)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ShouldSerializeValue(::Il2CppObject* component);
    // public System.Boolean get_SupportsChangeEvents()
    // Offset: 0x4F112C4
    bool get_SupportsChangeEvents();
    // protected System.Void .ctor(System.String name, System.Attribute[] attrs)
    // Offset: 0x4F0F420
    // Implemented from: System.ComponentModel.MemberDescriptor
    // Base method: System.Void MemberDescriptor::.ctor(System.String name, System.Attribute[] attrs)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyDescriptor* New_ctor(::StringW name, ::ArrayW<::System::Attribute*> attrs) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::PropertyDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyDescriptor*, creationType>(name, attrs)));
    }
    // protected System.Void .ctor(System.ComponentModel.MemberDescriptor descr)
    // Offset: 0x4F0F5FC
    // Implemented from: System.ComponentModel.MemberDescriptor
    // Base method: System.Void MemberDescriptor::.ctor(System.ComponentModel.MemberDescriptor descr)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyDescriptor* New_ctor(::System::ComponentModel::MemberDescriptor* descr) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::PropertyDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyDescriptor*, creationType>(descr)));
    }
    // protected System.Void .ctor(System.ComponentModel.MemberDescriptor descr, System.Attribute[] attrs)
    // Offset: 0x4F0F758
    // Implemented from: System.ComponentModel.MemberDescriptor
    // Base method: System.Void MemberDescriptor::.ctor(System.ComponentModel.MemberDescriptor descr, System.Attribute[] attrs)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyDescriptor* New_ctor(::System::ComponentModel::MemberDescriptor* descr, ::ArrayW<::System::Attribute*> attrs) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::PropertyDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyDescriptor*, creationType>(descr, attrs)));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x4F1059C
    // Implemented from: System.ComponentModel.MemberDescriptor
    // Base method: System.Boolean MemberDescriptor::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // protected override System.Void FillAttributes(System.Collections.IList attributeList)
    // Offset: 0x4F1079C
    // Implemented from: System.ComponentModel.MemberDescriptor
    // Base method: System.Void MemberDescriptor::FillAttributes(System.Collections.IList attributeList)
    void FillAttributes(::System::Collections::IList* attributeList);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4F10DE0
    // Implemented from: System.ComponentModel.MemberDescriptor
    // Base method: System.Int32 MemberDescriptor::GetHashCode()
    int GetHashCode();
    // protected override System.Object GetInvocationTarget(System.Type type, System.Object instance)
    // Offset: 0x4F10E34
    // Implemented from: System.ComponentModel.MemberDescriptor
    // Base method: System.Object MemberDescriptor::GetInvocationTarget(System.Type type, System.Object instance)
    ::Il2CppObject* GetInvocationTarget(::System::Type* type, ::Il2CppObject* instance);
  }; // System.ComponentModel.PropertyDescriptor
  #pragma pack(pop)
  static check_size<sizeof(PropertyDescriptor), 128 + sizeof(int)> __System_ComponentModel_PropertyDescriptorSizeCheck;
  static_assert(sizeof(PropertyDescriptor) == 0x84);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::get_ComponentType
// Il2CppName: get_ComponentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::PropertyDescriptor::*)()>(&System::ComponentModel::PropertyDescriptor::get_ComponentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "get_ComponentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::get_Converter
// Il2CppName: get_Converter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (System::ComponentModel::PropertyDescriptor::*)()>(&System::ComponentModel::PropertyDescriptor::get_Converter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "get_Converter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::get_IsLocalizable
// Il2CppName: get_IsLocalizable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::PropertyDescriptor::*)()>(&System::ComponentModel::PropertyDescriptor::get_IsLocalizable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "get_IsLocalizable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::PropertyDescriptor::*)()>(&System::ComponentModel::PropertyDescriptor::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::get_SerializationVisibility
// Il2CppName: get_SerializationVisibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::DesignerSerializationVisibility (System::ComponentModel::PropertyDescriptor::*)()>(&System::ComponentModel::PropertyDescriptor::get_SerializationVisibility)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "get_SerializationVisibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::get_PropertyType
// Il2CppName: get_PropertyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::PropertyDescriptor::*)()>(&System::ComponentModel::PropertyDescriptor::get_PropertyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "get_PropertyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::AddValueChanged
// Il2CppName: AddValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::PropertyDescriptor::*)(::Il2CppObject*, ::System::EventHandler*)>(&System::ComponentModel::PropertyDescriptor::AddValueChanged)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "AddValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, handler});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::CanResetValue
// Il2CppName: CanResetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::PropertyDescriptor::*)(::Il2CppObject*)>(&System::ComponentModel::PropertyDescriptor::CanResetValue)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "CanResetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::PropertyDescriptor::*)(::System::Type*)>(&System::ComponentModel::PropertyDescriptor::CreateInstance)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::GetChildProperties
// Il2CppName: GetChildProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::PropertyDescriptor::*)()>(&System::ComponentModel::PropertyDescriptor::GetChildProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "GetChildProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::GetChildProperties
// Il2CppName: GetChildProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::PropertyDescriptor::*)(::ArrayW<::System::Attribute*>)>(&System::ComponentModel::PropertyDescriptor::GetChildProperties)> {
  static const MethodInfo* get() {
    static auto* filter = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Attribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "GetChildProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filter});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::GetChildProperties
// Il2CppName: GetChildProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::PropertyDescriptor::*)(::Il2CppObject*)>(&System::ComponentModel::PropertyDescriptor::GetChildProperties)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "GetChildProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::GetChildProperties
// Il2CppName: GetChildProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::PropertyDescriptor::*)(::Il2CppObject*, ::ArrayW<::System::Attribute*>)>(&System::ComponentModel::PropertyDescriptor::GetChildProperties)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* filter = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Attribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "GetChildProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance, filter});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::GetEditor
// Il2CppName: GetEditor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::PropertyDescriptor::*)(::System::Type*)>(&System::ComponentModel::PropertyDescriptor::GetEditor)> {
  static const MethodInfo* get() {
    static auto* editorBaseType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "GetEditor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{editorBaseType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::GetTypeFromName
// Il2CppName: GetTypeFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::PropertyDescriptor::*)(::StringW)>(&System::ComponentModel::PropertyDescriptor::GetTypeFromName)> {
  static const MethodInfo* get() {
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "GetTypeFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeName});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::PropertyDescriptor::*)(::Il2CppObject*)>(&System::ComponentModel::PropertyDescriptor::GetValue)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::OnValueChanged
// Il2CppName: OnValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::PropertyDescriptor::*)(::Il2CppObject*, ::System::EventArgs*)>(&System::ComponentModel::PropertyDescriptor::OnValueChanged)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "EventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "OnValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, e});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::RemoveValueChanged
// Il2CppName: RemoveValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::PropertyDescriptor::*)(::Il2CppObject*, ::System::EventHandler*)>(&System::ComponentModel::PropertyDescriptor::RemoveValueChanged)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "RemoveValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, handler});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::GetValueChangedHandler
// Il2CppName: GetValueChangedHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::EventHandler* (System::ComponentModel::PropertyDescriptor::*)(::Il2CppObject*)>(&System::ComponentModel::PropertyDescriptor::GetValueChangedHandler)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "GetValueChangedHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::ResetValue
// Il2CppName: ResetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::PropertyDescriptor::*)(::Il2CppObject*)>(&System::ComponentModel::PropertyDescriptor::ResetValue)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "ResetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::PropertyDescriptor::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::ComponentModel::PropertyDescriptor::SetValue)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::ShouldSerializeValue
// Il2CppName: ShouldSerializeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::PropertyDescriptor::*)(::Il2CppObject*)>(&System::ComponentModel::PropertyDescriptor::ShouldSerializeValue)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "ShouldSerializeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::get_SupportsChangeEvents
// Il2CppName: get_SupportsChangeEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::PropertyDescriptor::*)()>(&System::ComponentModel::PropertyDescriptor::get_SupportsChangeEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "get_SupportsChangeEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::PropertyDescriptor::*)(::Il2CppObject*)>(&System::ComponentModel::PropertyDescriptor::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::FillAttributes
// Il2CppName: FillAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::PropertyDescriptor::*)(::System::Collections::IList*)>(&System::ComponentModel::PropertyDescriptor::FillAttributes)> {
  static const MethodInfo* get() {
    static auto* attributeList = &::il2cpp_utils::GetClassFromName("System.Collections", "IList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "FillAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeList});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::PropertyDescriptor::*)()>(&System::ComponentModel::PropertyDescriptor::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptor::GetInvocationTarget
// Il2CppName: GetInvocationTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::PropertyDescriptor::*)(::System::Type*, ::Il2CppObject*)>(&System::ComponentModel::PropertyDescriptor::GetInvocationTarget)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptor*), "GetInvocationTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, instance});
  }
};