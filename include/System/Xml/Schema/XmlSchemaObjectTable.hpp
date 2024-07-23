// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaObject
  class XmlSchemaObject;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ICollection
  class ICollection;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaObjectTable
  class XmlSchemaObjectTable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaObjectTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaObjectTable*, "System.Xml.Schema", "XmlSchemaObjectTable");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaObjectTable
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class XmlSchemaObjectTable : public ::Il2CppObject {
    public:
    // Nested type: ::System::Xml::Schema::XmlSchemaObjectTable::EnumeratorType
    struct EnumeratorType;
    // Nested type: ::System::Xml::Schema::XmlSchemaObjectTable::XmlSchemaObjectEntry
    struct XmlSchemaObjectEntry;
    // Nested type: ::System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection
    class ValuesCollection;
    // Nested type: ::System::Xml::Schema::XmlSchemaObjectTable::XSOEnumerator
    class XSOEnumerator;
    // Nested type: ::System::Xml::Schema::XmlSchemaObjectTable::XSODictionaryEnumerator
    class XSODictionaryEnumerator;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry
    // [TokenAttribute] Offset: FFFFFFFF
    struct XmlSchemaObjectEntry/*, public ::System::ValueType*/ {
      public:
      public:
      // System.Xml.XmlQualifiedName qname
      // Size: 0x8
      // Offset: 0x0
      ::System::Xml::XmlQualifiedName* qname;
      // Field size check
      static_assert(sizeof(::System::Xml::XmlQualifiedName*) == 0x8);
      // System.Xml.Schema.XmlSchemaObject xso
      // Size: 0x8
      // Offset: 0x8
      ::System::Xml::Schema::XmlSchemaObject* xso;
      // Field size check
      static_assert(sizeof(::System::Xml::Schema::XmlSchemaObject*) == 0x8);
      public:
      // Creating value type constructor for type: XmlSchemaObjectEntry
      constexpr XmlSchemaObjectEntry(::System::Xml::XmlQualifiedName* qname_ = {}, ::System::Xml::Schema::XmlSchemaObject* xso_ = {}) noexcept : qname{qname_}, xso{xso_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: System.Xml.XmlQualifiedName qname
      [[deprecated("Use field access instead!")]] ::System::Xml::XmlQualifiedName*& dyn_qname();
      // Get instance field reference: System.Xml.Schema.XmlSchemaObject xso
      [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaObject*& dyn_xso();
      // public System.Void .ctor(System.Xml.XmlQualifiedName name, System.Xml.Schema.XmlSchemaObject value)
      // Offset: 0x4D957AC
      // ABORTED: conflicts with another method.  XmlSchemaObjectEntry(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value);
    }; // System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry
    #pragma pack(pop)
    static check_size<sizeof(XmlSchemaObjectTable::XmlSchemaObjectEntry), 8 + sizeof(::System::Xml::Schema::XmlSchemaObject*)> __System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntrySizeCheck;
    static_assert(sizeof(XmlSchemaObjectTable::XmlSchemaObjectEntry) == 0x10);
    public:
    // private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.XmlSchemaObject> table
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>* table;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry> entries
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable::XmlSchemaObjectEntry>* entries;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable::XmlSchemaObjectEntry>*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.XmlSchemaObject> table
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>*& dyn_table();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry> entries
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable::XmlSchemaObjectEntry>*& dyn_entries();
    // System.Void .ctor()
    // Offset: 0x4D955B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaObjectTable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaObjectTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaObjectTable*, creationType>()));
    }
    // System.Void Add(System.Xml.XmlQualifiedName name, System.Xml.Schema.XmlSchemaObject value)
    // Offset: 0x4D95694
    void Add(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value);
    // System.Void Insert(System.Xml.XmlQualifiedName name, System.Xml.Schema.XmlSchemaObject value)
    // Offset: 0x4D957DC
    void Insert(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value);
    // System.Void Replace(System.Xml.XmlQualifiedName name, System.Xml.Schema.XmlSchemaObject value)
    // Offset: 0x4D9599C
    void Replace(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value);
    // System.Void Clear()
    // Offset: 0x4D95AAC
    void Clear();
    // System.Void Remove(System.Xml.XmlQualifiedName name)
    // Offset: 0x4D95B40
    void Remove(::System::Xml::XmlQualifiedName* name);
    // private System.Int32 FindIndexByValue(System.Xml.Schema.XmlSchemaObject xso)
    // Offset: 0x4D95900
    int FindIndexByValue(::System::Xml::Schema::XmlSchemaObject* xso);
    // public System.Int32 get_Count()
    // Offset: 0x4D95C10
    int get_Count();
    // public System.Boolean Contains(System.Xml.XmlQualifiedName name)
    // Offset: 0x4D95C60
    bool Contains(::System::Xml::XmlQualifiedName* name);
    // public System.Xml.Schema.XmlSchemaObject get_Item(System.Xml.XmlQualifiedName name)
    // Offset: 0x4D95CB8
    ::System::Xml::Schema::XmlSchemaObject* get_Item(::System::Xml::XmlQualifiedName* name);
    // public System.Collections.ICollection get_Values()
    // Offset: 0x4D95D30
    ::System::Collections::ICollection* get_Values();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x4D95E0C
    ::System::Collections::IDictionaryEnumerator* GetEnumerator();
  }; // System.Xml.Schema.XmlSchemaObjectTable
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaObjectTable), 24 + sizeof(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable::XmlSchemaObjectEntry>*)> __System_Xml_Schema_XmlSchemaObjectTableSizeCheck;
  static_assert(sizeof(XmlSchemaObjectTable) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaObjectTable::XmlSchemaObjectEntry, "System.Xml.Schema", "XmlSchemaObjectTable/XmlSchemaObjectEntry");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectTable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectTable::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*)>(&System::Xml::Schema::XmlSchemaObjectTable::Add)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectTable*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectTable::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*)>(&System::Xml::Schema::XmlSchemaObjectTable::Insert)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectTable*), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectTable::Replace
// Il2CppName: Replace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*)>(&System::Xml::Schema::XmlSchemaObjectTable::Replace)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectTable*), "Replace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectTable::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObjectTable::*)()>(&System::Xml::Schema::XmlSchemaObjectTable::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectTable*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectTable::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::XmlSchemaObjectTable::Remove)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectTable*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectTable::FindIndexByValue
// Il2CppName: FindIndexByValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::Schema::XmlSchemaObject*)>(&System::Xml::Schema::XmlSchemaObjectTable::FindIndexByValue)> {
  static const MethodInfo* get() {
    static auto* xso = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectTable*), "FindIndexByValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xso});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectTable::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XmlSchemaObjectTable::*)()>(&System::Xml::Schema::XmlSchemaObjectTable::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectTable*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectTable::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::XmlSchemaObjectTable::Contains)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectTable*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectTable::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObject* (System::Xml::Schema::XmlSchemaObjectTable::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::XmlSchemaObjectTable::get_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectTable*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectTable::get_Values
// Il2CppName: get_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (System::Xml::Schema::XmlSchemaObjectTable::*)()>(&System::Xml::Schema::XmlSchemaObjectTable::get_Values)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectTable*), "get_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectTable::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionaryEnumerator* (System::Xml::Schema::XmlSchemaObjectTable::*)()>(&System::Xml::Schema::XmlSchemaObjectTable::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectTable*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
