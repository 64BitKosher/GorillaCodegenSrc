// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Collections.Generic.IReadOnlyList`1
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Enumerator because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ArraySegment`1<T>
  template<typename T>
  struct ArraySegment_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::ArraySegment_1, "System", "ArraySegment`1");
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.ArraySegment`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  template<typename T>
  struct ArraySegment_1/*, public ::System::ValueType, public ::System::Collections::Generic::IList_1<T>, public ::System::Collections::Generic::IReadOnlyList_1<T>*/ {
    public:
    // Nested type: ::System::ArraySegment_1::Enumerator<T>
    struct Enumerator;
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.ArraySegment`1/Enumerator
    // [TokenAttribute] Offset: FFFFFFFF
    struct Enumerator : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public ::System::ValueType, public ::System::Collections::Generic::IEnumerator_1<T>*/ {
      public:
      using declaring_type = ArraySegment_1<T>;
      static constexpr std::string_view NESTED_NAME = "Enumerator";
      static constexpr bool IS_VALUE_TYPE = true;
      public:
      // private readonly T[] _array
      // Size: 0x8
      // Offset: 0x0
      ::ArrayW<T> array;
      // Field size check
      static_assert(sizeof(::ArrayW<T>) == 0x8);
      // private readonly System.Int32 _start
      // Size: 0x4
      // Offset: 0x0
      int start;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private readonly System.Int32 _end
      // Size: 0x4
      // Offset: 0x0
      int end;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Int32 _current
      // Size: 0x4
      // Offset: 0x0
      int current;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Enumerator
      constexpr Enumerator(::ArrayW<T> array_ = ::ArrayW<T>(static_cast<void*>(nullptr)), int start_ = {}, int end_ = {}, int current_ = {}) noexcept : array{array_}, start{start_}, end{end_}, current{current_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<T>
      operator ::System::Collections::Generic::IEnumerator_1<T>() noexcept {
        return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<T>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private readonly T[] _array
      [[deprecated("Use field access instead!")]] ::ArrayW<T>& dyn__array() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::Enumerator::dyn__array");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_array"))->offset;
        return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private readonly System.Int32 _start
      [[deprecated("Use field access instead!")]] int& dyn__start() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::Enumerator::dyn__start");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_start"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private readonly System.Int32 _end
      [[deprecated("Use field access instead!")]] int& dyn__end() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::Enumerator::dyn__end");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_end"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 _current
      [[deprecated("Use field access instead!")]] int& dyn__current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::Enumerator::dyn__current");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_current"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // System.Void .ctor(System.ArraySegment`1<T> arraySegment)
      // Offset: 0xFFFFFFFFFFFFFFFF
      Enumerator(::System::ArraySegment_1<T> arraySegment) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::Enumerator::.ctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arraySegment)})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, arraySegment);
      }
      // public System.Boolean MoveNext()
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::Enumerator::MoveNext");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::System::ArraySegment_1<T>::Enumerator), -1));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
      }
      // public T get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      T get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::Enumerator::get_Current");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::System::ArraySegment_1<T>::Enumerator), -1));
        return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::Enumerator::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::System::ArraySegment_1<T>::Enumerator), -1));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::Enumerator::System.Collections.IEnumerator.Reset");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::System::ArraySegment_1<T>::Enumerator), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // public System.Void Dispose()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::Enumerator::Dispose");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::System::ArraySegment_1<T>::Enumerator), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
    }; // System.ArraySegment`1/Enumerator
    // Could not write size check! Type: System.ArraySegment`1/Enumerator is generic, or has no fields that are valid for size checks!
    public:
    // private readonly T[] _array
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> array;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    // private readonly System.Int32 _offset
    // Size: 0x4
    // Offset: 0x0
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 _count
    // Size: 0x4
    // Offset: 0x0
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ArraySegment_1
    constexpr ArraySegment_1(::ArrayW<T> array_ = ::ArrayW<T>(static_cast<void*>(nullptr)), int offset_ = {}, int count_ = {}) noexcept : array{array_}, offset{offset_}, count{count_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IList_1<T>
    operator ::System::Collections::Generic::IList_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IList_1<T>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IReadOnlyList_1<T>
    operator ::System::Collections::Generic::IReadOnlyList_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static private readonly System.ArraySegment`1<T> <Empty>k__BackingField
    static ::System::ArraySegment_1<T> _get_$Empty$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::_get_$Empty$k__BackingField");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::ArraySegment_1<T>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySegment_1<T>>::get(), "<Empty>k__BackingField")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.ArraySegment`1<T> <Empty>k__BackingField
    static void _set_$Empty$k__BackingField(::System::ArraySegment_1<T> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::_set_$Empty$k__BackingField");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySegment_1<T>>::get(), "<Empty>k__BackingField", value)));
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly T[] _array
    [[deprecated("Use field access instead!")]] ::ArrayW<T>& dyn__array() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::dyn__array");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_array"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Int32 _offset
    [[deprecated("Use field access instead!")]] int& dyn__offset() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::dyn__offset");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_offset"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Int32 _count
    [[deprecated("Use field access instead!")]] int& dyn__count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::dyn__count");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_count"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // static public System.ArraySegment`1<T> get_Empty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::System::ArraySegment_1<T> get_Empty() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::get_Empty");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySegment_1<T>>::get(), "get_Empty", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::ArraySegment_1<T>, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Void .ctor(T[] array)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ArraySegment_1(::ArrayW<T> array) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array);
    }
    // public System.Void .ctor(T[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // ABORTED: conflicts with another method.  ArraySegment_1(::ArrayW<T> array, int offset, int count)
    // public T[] get_Array()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<T> get_Array() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::get_Array");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Array", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method);
    }
    // public System.Int32 get_Offset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Offset() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::get_Offset");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Offset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::get_Count");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ArraySegment_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.ArraySegment`1/Enumerator<T> GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    typename ::System::ArraySegment_1<T>::Enumerator GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<typename ::System::ArraySegment_1<T>::Enumerator, false>(this, ___internal__method);
    }
    // public System.Void CopyTo(T[] destination, System.Int32 destinationIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CopyTo(::ArrayW<T> destination, int destinationIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::CopyTo");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ArraySegment_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, destination, destinationIndex);
    }
    // public System.Boolean Equals(System.ArraySegment`1<T> obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Equals(::System::ArraySegment_1<T> obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::Equals");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj);
    }
    // private T System.Collections.Generic.IList<T>.get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T System_Collections_Generic_IList$T$_get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::System.Collections.Generic.IList<T>.get_Item");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ArraySegment_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // private System.Void System.Collections.Generic.IList<T>.set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_Generic_IList$T$_set_Item(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::System.Collections.Generic.IList<T>.set_Item");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ArraySegment_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value);
    }
    // private System.Int32 System.Collections.Generic.IList<T>.IndexOf(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_Collections_Generic_IList$T$_IndexOf(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::System.Collections.Generic.IList<T>.IndexOf");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ArraySegment_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, item);
    }
    // private System.Void System.Collections.Generic.IList<T>.Insert(System.Int32 index, T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_Generic_IList$T$_Insert(int index, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::System.Collections.Generic.IList<T>.Insert");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ArraySegment_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, item);
    }
    // private System.Void System.Collections.Generic.IList<T>.RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_Generic_IList$T$_RemoveAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::System.Collections.Generic.IList<T>.RemoveAt");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ArraySegment_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index);
    }
    // private T System.Collections.Generic.IReadOnlyList<T>.get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T System_Collections_Generic_IReadOnlyList$T$_get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::System.Collections.Generic.IReadOnlyList<T>.get_Item");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ArraySegment_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.get_IsReadOnly()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_Generic_ICollection$T$_get_IsReadOnly() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::System.Collections.Generic.ICollection<T>.get_IsReadOnly");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ArraySegment_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.Generic.ICollection<T>.Add(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_Generic_ICollection$T$_Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::System.Collections.Generic.ICollection<T>.Add");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ArraySegment_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // private System.Void System.Collections.Generic.ICollection<T>.Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_Generic_ICollection$T$_Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::System.Collections.Generic.ICollection<T>.Clear");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ArraySegment_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.Contains(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_Generic_ICollection$T$_Contains(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::System.Collections.Generic.ICollection<T>.Contains");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ArraySegment_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.Remove(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_Generic_ICollection$T$_Remove(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::System.Collections.Generic.ICollection<T>.Remove");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ArraySegment_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable$T$_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::System.Collections.Generic.IEnumerable<T>.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ArraySegment_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ArraySegment_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // private System.Void ThrowInvalidOperationIfDefault()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ThrowInvalidOperationIfDefault() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::ThrowInvalidOperationIfDefault");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ThrowInvalidOperationIfDefault", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySegment_1<T>>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySegment_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj);
    }
  }; // System.ArraySegment`1
  // Could not write size check! Type: System.ArraySegment`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
