// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.SerializableDictionary
#include "Fusion/SerializableDictionary.hpp"
// Including type: System.Collections.Generic.IDictionary`2
#include "System/Collections/Generic/IDictionary_2.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Skipping declaration: Entry because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Skipping declaration: IEnumerator`1 because it is already included!
  // Skipping declaration: ICollection`1 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: SerializableDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class SerializableDictionary_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Fusion::SerializableDictionary_2, "Fusion", "SerializableDictionary`2");
// Type namespace: Fusion
namespace Fusion {
  // WARNING Size may be invalid!
  // Autogenerated type: Fusion.SerializableDictionary`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  template<typename TKey, typename TValue>
  class SerializableDictionary_2 : public ::Fusion::SerializableDictionary/*, public ::System::Collections::Generic::IDictionary_2<TKey, TValue>, public ::UnityEngine::ISerializationCallbackReceiver*/ {
    public:
    // Nested type: ::Fusion::SerializableDictionary_2::Entry<TKey, TValue>
    struct Entry;
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Fusion.SerializableDictionary`2/Entry
    // [TokenAttribute] Offset: FFFFFFFF
    struct Entry : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public ::System::ValueType*/ {
      public:
      using declaring_type = SerializableDictionary_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "Entry";
      static constexpr bool IS_VALUE_TYPE = true;
      public:
      // public TKey Key
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TKey Key;
      // public TValue Value
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TValue Value;
      public:
      // Creating value type constructor for type: Entry
      constexpr Entry(TKey Key_ = {}, TValue Value_ = {}) noexcept : Key{Key_}, Value{Value_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: public TKey Key
      [[deprecated("Use field access instead!")]] TKey& dyn_Key() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::Entry::dyn_Key");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Key"))->offset;
        return *reinterpret_cast<TKey*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public TValue Value
      [[deprecated("Use field access instead!")]] TValue& dyn_Value() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::Entry::dyn_Value");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Value"))->offset;
        return *reinterpret_cast<TValue*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
    }; // Fusion.SerializableDictionary`2/Entry
    // Could not write size check! Type: Fusion.SerializableDictionary`2/Entry is generic, or has no fields that are valid for size checks!
    public:
    // private Fusion.SerializableDictionary`2/Entry<TKey,TValue>[] _items
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<typename ::Fusion::SerializableDictionary_2<TKey, TValue>::Entry> items;
    // Field size check
    static_assert(sizeof(::ArrayW<typename ::Fusion::SerializableDictionary_2<TKey, TValue>::Entry>) == 0x8);
    // private System.Collections.Generic.List`1<System.ValueTuple`2<Fusion.SerializableDictionary`2/Entry<TKey,TValue>,System.Int32>> _duplicatesAndNulls
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<typename ::Fusion::SerializableDictionary_2<TKey, TValue>::Entry, int>>* duplicatesAndNulls;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::ValueTuple_2<typename ::Fusion::SerializableDictionary_2<TKey, TValue>::Entry, int>>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<TKey,TValue> _dictionary
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<TKey, TValue>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>
    operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::ISerializationCallbackReceiver
    operator ::UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static public System.String ItemsPropertyPath
    static ::StringW _get_ItemsPropertyPath() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::_get_ItemsPropertyPath");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::StringW>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SerializableDictionary_2<TKey, TValue>*>::get(), "ItemsPropertyPath")));
    }
    // Autogenerated static field setter
    // Set static field: static public System.String ItemsPropertyPath
    static void _set_ItemsPropertyPath(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::_set_ItemsPropertyPath");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SerializableDictionary_2<TKey, TValue>*>::get(), "ItemsPropertyPath", value)));
    }
    // Autogenerated static field getter
    // Get static field: static public System.String EntryKeyPropertyPath
    static ::StringW _get_EntryKeyPropertyPath() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::_get_EntryKeyPropertyPath");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::StringW>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SerializableDictionary_2<TKey, TValue>*>::get(), "EntryKeyPropertyPath")));
    }
    // Autogenerated static field setter
    // Set static field: static public System.String EntryKeyPropertyPath
    static void _set_EntryKeyPropertyPath(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::_set_EntryKeyPropertyPath");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SerializableDictionary_2<TKey, TValue>*>::get(), "EntryKeyPropertyPath", value)));
    }
    // Autogenerated instance field getter
    // Get instance field: private Fusion.SerializableDictionary`2/Entry<TKey,TValue>[] _items
    [[deprecated("Use field access instead!")]] ::ArrayW<typename ::Fusion::SerializableDictionary_2<TKey, TValue>::Entry>& dyn__items() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::dyn__items");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_items"))->offset;
      return *reinterpret_cast<::ArrayW<typename ::Fusion::SerializableDictionary_2<TKey, TValue>::Entry>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.List`1<System.ValueTuple`2<Fusion.SerializableDictionary`2/Entry<TKey,TValue>,System.Int32>> _duplicatesAndNulls
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::ValueTuple_2<typename ::Fusion::SerializableDictionary_2<TKey, TValue>::Entry, int>>*& dyn__duplicatesAndNulls() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::dyn__duplicatesAndNulls");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_duplicatesAndNulls"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<::System::ValueTuple_2<typename ::Fusion::SerializableDictionary_2<TKey, TValue>::Entry, int>>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.Dictionary`2<TKey,TValue> _dictionary
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<TKey, TValue>*& dyn__dictionary() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::dyn__dictionary");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_dictionary"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<TKey, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private System.Collections.Generic.Dictionary`2<TKey,TValue> get_Inner()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::Dictionary_2<TKey, TValue>* get_Inner() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::get_Inner");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Inner", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> get_DictionaryAsCollection()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* get_DictionaryAsCollection() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::get_DictionaryAsCollection");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_DictionaryAsCollection", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*, false>(this, ___internal__method);
    }
    // static public Fusion.SerializableDictionary`2<TKey,TValue> Wrap(System.Collections.Generic.Dictionary`2<TKey,TValue> dictionary)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Fusion::SerializableDictionary_2<TKey, TValue>* Wrap(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::Wrap");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SerializableDictionary_2<TKey, TValue>*>::get(), "Wrap", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(dictionary)})));
      return ::il2cpp_utils::RunMethodRethrow<::Fusion::SerializableDictionary_2<TKey, TValue>*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, dictionary);
    }
    // public TValue get_Item(TKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TValue get_Item(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::get_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, key);
    }
    // public System.Void set_Item(TKey key, TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item(TKey key, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::set_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, key, value);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::get_Count");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Boolean get_IsReadOnly()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsReadOnly() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::get_IsReadOnly");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Void Add(TKey key, TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(TKey key, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::Add");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, key, value);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::Clear");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Boolean ContainsKey(TKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ContainsKey(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::ContainsKey");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, key);
    }
    // public System.Boolean Remove(TKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Remove(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::Remove");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, key);
    }
    // public System.Boolean TryGetValue(TKey key, out TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryGetValue(TKey key, ByRef<TValue> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::TryGetValue");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, key, byref(value));
    }
    // public System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> get_Keys()
    // Offset: 0xFFFFFFFFFFFFFFFF
    typename ::System::Collections::Generic::Dictionary_2<TKey, TValue>::KeyCollection* get_Keys() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::get_Keys");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Keys", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<typename ::System::Collections::Generic::Dictionary_2<TKey, TValue>::KeyCollection*, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> get_Values()
    // Offset: 0xFFFFFFFFFFFFFFFF
    typename ::System::Collections::Generic::Dictionary_2<TKey, TValue>::ValueCollection* get_Values() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::get_Values");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Values", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<typename ::System::Collections::Generic::Dictionary_2<TKey, TValue>::ValueCollection*, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    typename ::System::Collections::Generic::Dictionary_2<TKey, TValue>::Enumerator GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<typename ::System::Collections::Generic::Dictionary_2<TKey, TValue>::Enumerator, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* System_Collections_Generic_IEnumerable$System_Collections_Generic_KeyValuePair$TKey_TValue$$_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::ICollection_1<TKey>* System_Collections_Generic_IDictionary$TKey_TValue$_get_Keys() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::ICollection_1<TValue>* System_Collections_Generic_IDictionary$TKey_TValue$_get_Values() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TValue>*, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue> item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_Generic_ICollection$System_Collections_Generic_KeyValuePair$TKey_TValue$$_Add(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // private System.Boolean System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue> item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_Generic_ICollection$System_Collections_Generic_KeyValuePair$TKey_TValue$$_Contains(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // private System.Void System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] array, System.Int32 arrayIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_Generic_ICollection$System_Collections_Generic_KeyValuePair$TKey_TValue$$_CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> array, int arrayIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array, arrayIndex);
    }
    // private System.Boolean System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue> item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_Generic_ICollection$System_Collections_Generic_KeyValuePair$TKey_TValue$$_Remove(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.Dictionary`2<TKey,TValue> CreateDictionary()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::Dictionary_2<TKey, TValue>* CreateDictionary() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::CreateDictionary");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateDictionary", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, false>(this, ___internal__method);
    }
    // public System.Void Reset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Reset() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::Reset");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void Store()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Store() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::Store");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Store", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::SerializableDictionary_2<TKey, TValue>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Fusion.SerializableDictionary
    // Base method: System.Void SerializableDictionary::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializableDictionary_2<TKey, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SerializableDictionary_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializableDictionary_2<TKey, TValue>*, creationType>()));
    }
  }; // Fusion.SerializableDictionary`2
  // Could not write size check! Type: Fusion.SerializableDictionary`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
