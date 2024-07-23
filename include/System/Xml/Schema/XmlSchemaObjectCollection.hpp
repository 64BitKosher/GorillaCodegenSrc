// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.CollectionBase
#include "System/Collections/CollectionBase.hpp"
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
  // Forward declaring type: XmlSchemaObjectEnumerator
  class XmlSchemaObjectEnumerator;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaObjectCollection
  class XmlSchemaObjectCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaObjectCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaObjectCollection*, "System.Xml.Schema", "XmlSchemaObjectCollection");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaObjectCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class XmlSchemaObjectCollection : public ::System::Collections::CollectionBase {
    public:
    public:
    // private System.Xml.Schema.XmlSchemaObject parent
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Schema::XmlSchemaObject* parent;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Collections::ArrayList*
    constexpr operator ::System::Collections::ArrayList*() const noexcept = delete;
    // Get instance field reference: private System.Xml.Schema.XmlSchemaObject parent
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaObject*& dyn_parent();
    // public System.Void .ctor()
    // Offset: 0x4D8CC60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaObjectCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaObjectCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaObjectCollection*, creationType>()));
    }
    // public System.Xml.Schema.XmlSchemaObject get_Item(System.Int32 index)
    // Offset: 0x4D94D6C
    ::System::Xml::Schema::XmlSchemaObject* get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Xml.Schema.XmlSchemaObject value)
    // Offset: 0x4D94E6C
    void set_Item(int index, ::System::Xml::Schema::XmlSchemaObject* value);
    // public System.Xml.Schema.XmlSchemaObjectEnumerator GetEnumerator()
    // Offset: 0x4D94F34
    ::System::Xml::Schema::XmlSchemaObjectEnumerator* GetEnumerator();
    // public System.Int32 Add(System.Xml.Schema.XmlSchemaObject item)
    // Offset: 0x4D8E3E8
    int Add(::System::Xml::Schema::XmlSchemaObject* item);
    // public System.Void Insert(System.Int32 index, System.Xml.Schema.XmlSchemaObject item)
    // Offset: 0x4D94FB4
    void Insert(int index, ::System::Xml::Schema::XmlSchemaObject* item);
    // public System.Void Remove(System.Xml.Schema.XmlSchemaObject item)
    // Offset: 0x4D9507C
    void Remove(::System::Xml::Schema::XmlSchemaObject* item);
    // System.Xml.Schema.XmlSchemaObjectCollection Clone()
    // Offset: 0x4D92198
    ::System::Xml::Schema::XmlSchemaObjectCollection* Clone();
    // private System.Void Add(System.Xml.Schema.XmlSchemaObjectCollection collToAdd)
    // Offset: 0x4D951E4
    void Add(::System::Xml::Schema::XmlSchemaObjectCollection* collToAdd);
    // protected override System.Void OnInsert(System.Int32 index, System.Object item)
    // Offset: 0x4D95134
    // Implemented from: System.Collections.CollectionBase
    // Base method: System.Void CollectionBase::OnInsert(System.Int32 index, System.Object item)
    void OnInsert(int index, ::Il2CppObject* item);
    // protected override System.Void OnSet(System.Int32 index, System.Object oldValue, System.Object newValue)
    // Offset: 0x4D95150
    // Implemented from: System.Collections.CollectionBase
    // Base method: System.Void CollectionBase::OnSet(System.Int32 index, System.Object oldValue, System.Object newValue)
    void OnSet(int index, ::Il2CppObject* oldValue, ::Il2CppObject* newValue);
    // protected override System.Void OnClear()
    // Offset: 0x4D951AC
    // Implemented from: System.Collections.CollectionBase
    // Base method: System.Void CollectionBase::OnClear()
    void OnClear();
    // protected override System.Void OnRemove(System.Int32 index, System.Object item)
    // Offset: 0x4D951C8
    // Implemented from: System.Collections.CollectionBase
    // Base method: System.Void CollectionBase::OnRemove(System.Int32 index, System.Object item)
    void OnRemove(int index, ::Il2CppObject* item);
  }; // System.Xml.Schema.XmlSchemaObjectCollection
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaObjectCollection), 24 + sizeof(::System::Xml::Schema::XmlSchemaObject*)> __System_Xml_Schema_XmlSchemaObjectCollectionSizeCheck;
  static_assert(sizeof(XmlSchemaObjectCollection) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObject* (System::Xml::Schema::XmlSchemaObjectCollection::*)(int)>(&System::Xml::Schema::XmlSchemaObjectCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectCollection::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObjectCollection::*)(int, ::System::Xml::Schema::XmlSchemaObject*)>(&System::Xml::Schema::XmlSchemaObjectCollection::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectCollection*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectEnumerator* (System::Xml::Schema::XmlSchemaObjectCollection::*)()>(&System::Xml::Schema::XmlSchemaObjectCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XmlSchemaObjectCollection::*)(::System::Xml::Schema::XmlSchemaObject*)>(&System::Xml::Schema::XmlSchemaObjectCollection::Add)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectCollection::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObjectCollection::*)(int, ::System::Xml::Schema::XmlSchemaObject*)>(&System::Xml::Schema::XmlSchemaObjectCollection::Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectCollection*), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, item});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObjectCollection::*)(::System::Xml::Schema::XmlSchemaObject*)>(&System::Xml::Schema::XmlSchemaObjectCollection::Remove)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectCollection::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (System::Xml::Schema::XmlSchemaObjectCollection::*)()>(&System::Xml::Schema::XmlSchemaObjectCollection::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectCollection*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObjectCollection::*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(&System::Xml::Schema::XmlSchemaObjectCollection::Add)> {
  static const MethodInfo* get() {
    static auto* collToAdd = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObjectCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collToAdd});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectCollection::OnInsert
// Il2CppName: OnInsert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObjectCollection::*)(int, ::Il2CppObject*)>(&System::Xml::Schema::XmlSchemaObjectCollection::OnInsert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectCollection*), "OnInsert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, item});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectCollection::OnSet
// Il2CppName: OnSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObjectCollection::*)(int, ::Il2CppObject*, ::Il2CppObject*)>(&System::Xml::Schema::XmlSchemaObjectCollection::OnSet)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* oldValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* newValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectCollection*), "OnSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, oldValue, newValue});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectCollection::OnClear
// Il2CppName: OnClear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObjectCollection::*)()>(&System::Xml::Schema::XmlSchemaObjectCollection::OnClear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectCollection*), "OnClear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectCollection::OnRemove
// Il2CppName: OnRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObjectCollection::*)(int, ::Il2CppObject*)>(&System::Xml::Schema::XmlSchemaObjectCollection::OnRemove)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectCollection*), "OnRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, item});
  }
};
