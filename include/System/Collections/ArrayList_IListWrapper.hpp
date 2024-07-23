// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
  // Forward declaring type: ICollection
  class ICollection;
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: IComparer
  class IComparer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::ArrayList::IListWrapper);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ArrayList::IListWrapper*, "System.Collections", "ArrayList/IListWrapper");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.ArrayList/IListWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class ArrayList::IListWrapper : public ::System::Collections::ArrayList {
    public:
    public:
    // private System.Collections.IList _list
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::IList* list;
    // Field size check
    static_assert(sizeof(::System::Collections::IList*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::IList*
    constexpr operator ::System::Collections::IList*() const noexcept {
      return list;
    }
    // Get instance field reference: private System.Collections.IList _list
    [[deprecated("Use field access instead!")]] ::System::Collections::IList*& dyn__list();
    // System.Void .ctor(System.Collections.IList list)
    // Offset: 0x4625570
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayList::IListWrapper* New_ctor(::System::Collections::IList* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ArrayList::IListWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayList::IListWrapper*, creationType>(list)));
    }
    // public override System.Void set_Capacity(System.Int32 value)
    // Offset: 0x46265D4
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::set_Capacity(System.Int32 value)
    void set_Capacity(int value);
    // public override System.Int32 get_Count()
    // Offset: 0x4626664
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Int32 ArrayList::get_Count()
    int get_Count();
    // public override System.Boolean get_IsReadOnly()
    // Offset: 0x4626708
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Boolean ArrayList::get_IsReadOnly()
    bool get_IsReadOnly();
    // public override System.Boolean get_IsFixedSize()
    // Offset: 0x46267AC
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Boolean ArrayList::get_IsFixedSize()
    bool get_IsFixedSize();
    // public override System.Boolean get_IsSynchronized()
    // Offset: 0x4626850
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Boolean ArrayList::get_IsSynchronized()
    bool get_IsSynchronized();
    // public override System.Object get_Item(System.Int32 index)
    // Offset: 0x46268F4
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Object ArrayList::get_Item(System.Int32 index)
    ::Il2CppObject* get_Item(int index);
    // public override System.Void set_Item(System.Int32 index, System.Object value)
    // Offset: 0x462699C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::set_Item(System.Int32 index, System.Object value)
    void set_Item(int index, ::Il2CppObject* value);
    // public override System.Object get_SyncRoot()
    // Offset: 0x4626A68
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Object ArrayList::get_SyncRoot()
    ::Il2CppObject* get_SyncRoot();
    // public override System.Int32 Add(System.Object obj)
    // Offset: 0x4626B0C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Int32 ArrayList::Add(System.Object obj)
    int Add(::Il2CppObject* obj);
    // public override System.Void AddRange(System.Collections.ICollection c)
    // Offset: 0x4626BC8
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::AddRange(System.Collections.ICollection c)
    void AddRange(::System::Collections::ICollection* c);
    // public override System.Void Clear()
    // Offset: 0x4626C10
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::Clear()
    void Clear();
    // public override System.Object Clone()
    // Offset: 0x4626D74
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Object ArrayList::Clone()
    ::Il2CppObject* Clone();
    // public override System.Boolean Contains(System.Object obj)
    // Offset: 0x4626DE0
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Boolean ArrayList::Contains(System.Object obj)
    bool Contains(::Il2CppObject* obj);
    // public override System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x4626E8C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::CopyTo(System.Array array, System.Int32 index)
    void CopyTo(::System::Array* array, int index);
    // public override System.Void CopyTo(System.Int32 index, System.Array array, System.Int32 arrayIndex, System.Int32 count)
    // Offset: 0x4626F44
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::CopyTo(System.Int32 index, System.Array array, System.Int32 arrayIndex, System.Int32 count)
    void CopyTo(int index, ::System::Array* array, int arrayIndex, int count);
    // public override System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x4627278
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Collections.IEnumerator ArrayList::GetEnumerator()
    ::System::Collections::IEnumerator* GetEnumerator();
    // public override System.Int32 IndexOf(System.Object value)
    // Offset: 0x4627318
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Int32 ArrayList::IndexOf(System.Object value)
    int IndexOf(::Il2CppObject* value);
    // public override System.Void Insert(System.Int32 index, System.Object obj)
    // Offset: 0x46273C4
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::Insert(System.Int32 index, System.Object obj)
    void Insert(int index, ::Il2CppObject* obj);
    // public override System.Void InsertRange(System.Int32 index, System.Collections.ICollection c)
    // Offset: 0x4627490
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::InsertRange(System.Int32 index, System.Collections.ICollection c)
    void InsertRange(int index, ::System::Collections::ICollection* c);
    // public override System.Void Remove(System.Object value)
    // Offset: 0x4627858
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::Remove(System.Object value)
    void Remove(::Il2CppObject* value);
    // public override System.Void RemoveAt(System.Int32 index)
    // Offset: 0x4627898
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::RemoveAt(System.Int32 index)
    void RemoveAt(int index);
    // public override System.Void RemoveRange(System.Int32 index, System.Int32 count)
    // Offset: 0x4627954
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::RemoveRange(System.Int32 index, System.Int32 count)
    void RemoveRange(int index, int count);
    // public override System.Void Sort(System.Int32 index, System.Int32 count, System.Collections.IComparer comparer)
    // Offset: 0x4627B6C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::Sort(System.Int32 index, System.Int32 count, System.Collections.IComparer comparer)
    void Sort(int index, int count, ::System::Collections::IComparer* comparer);
    // public override System.Object[] ToArray()
    // Offset: 0x4627E24
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Object[] ArrayList::ToArray()
    ::ArrayW<::Il2CppObject*> ToArray();
    // public override System.Array ToArray(System.Type type)
    // Offset: 0x4627F90
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Array ArrayList::ToArray(System.Type type)
    ::System::Array* ToArray(::System::Type* type);
  }; // System.Collections.ArrayList/IListWrapper
  #pragma pack(pop)
  static check_size<sizeof(ArrayList::IListWrapper), 40 + sizeof(::System::Collections::IList*)> __System_Collections_ArrayList_IListWrapperSizeCheck;
  static_assert(sizeof(ArrayList::IListWrapper) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::set_Capacity
// Il2CppName: set_Capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::IListWrapper::*)(int)>(&System::Collections::ArrayList::IListWrapper::set_Capacity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "set_Capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::ArrayList::IListWrapper::*)()>(&System::Collections::ArrayList::IListWrapper::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::ArrayList::IListWrapper::*)()>(&System::Collections::ArrayList::IListWrapper::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::get_IsFixedSize
// Il2CppName: get_IsFixedSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::ArrayList::IListWrapper::*)()>(&System::Collections::ArrayList::IListWrapper::get_IsFixedSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "get_IsFixedSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::get_IsSynchronized
// Il2CppName: get_IsSynchronized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::ArrayList::IListWrapper::*)()>(&System::Collections::ArrayList::IListWrapper::get_IsSynchronized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "get_IsSynchronized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::ArrayList::IListWrapper::*)(int)>(&System::Collections::ArrayList::IListWrapper::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::IListWrapper::*)(int, ::Il2CppObject*)>(&System::Collections::ArrayList::IListWrapper::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::ArrayList::IListWrapper::*)()>(&System::Collections::ArrayList::IListWrapper::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::ArrayList::IListWrapper::*)(::Il2CppObject*)>(&System::Collections::ArrayList::IListWrapper::Add)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::AddRange
// Il2CppName: AddRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::IListWrapper::*)(::System::Collections::ICollection*)>(&System::Collections::ArrayList::IListWrapper::AddRange)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System.Collections", "ICollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "AddRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::IListWrapper::*)()>(&System::Collections::ArrayList::IListWrapper::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::ArrayList::IListWrapper::*)()>(&System::Collections::ArrayList::IListWrapper::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::ArrayList::IListWrapper::*)(::Il2CppObject*)>(&System::Collections::ArrayList::IListWrapper::Contains)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::IListWrapper::*)(::System::Array*, int)>(&System::Collections::ArrayList::IListWrapper::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::IListWrapper::*)(int, ::System::Array*, int, int)>(&System::Collections::ArrayList::IListWrapper::CopyTo)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, array, arrayIndex, count});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Collections::ArrayList::IListWrapper::*)()>(&System::Collections::ArrayList::IListWrapper::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::ArrayList::IListWrapper::*)(::Il2CppObject*)>(&System::Collections::ArrayList::IListWrapper::IndexOf)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::IListWrapper::*)(int, ::Il2CppObject*)>(&System::Collections::ArrayList::IListWrapper::Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, obj});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::InsertRange
// Il2CppName: InsertRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::IListWrapper::*)(int, ::System::Collections::ICollection*)>(&System::Collections::ArrayList::IListWrapper::InsertRange)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System.Collections", "ICollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "InsertRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, c});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::IListWrapper::*)(::Il2CppObject*)>(&System::Collections::ArrayList::IListWrapper::Remove)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::IListWrapper::*)(int)>(&System::Collections::ArrayList::IListWrapper::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::RemoveRange
// Il2CppName: RemoveRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::IListWrapper::*)(int, int)>(&System::Collections::ArrayList::IListWrapper::RemoveRange)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "RemoveRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, count});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::Sort
// Il2CppName: Sort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::IListWrapper::*)(int, int, ::System::Collections::IComparer*)>(&System::Collections::ArrayList::IListWrapper::Sort)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* comparer = &::il2cpp_utils::GetClassFromName("System.Collections", "IComparer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "Sort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, count, comparer});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::ToArray
// Il2CppName: ToArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Collections::ArrayList::IListWrapper::*)()>(&System::Collections::ArrayList::IListWrapper::ToArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "ToArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IListWrapper::ToArray
// Il2CppName: ToArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (System::Collections::ArrayList::IListWrapper::*)(::System::Type*)>(&System::Collections::ArrayList::IListWrapper::ToArray)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::IListWrapper*), "ToArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
