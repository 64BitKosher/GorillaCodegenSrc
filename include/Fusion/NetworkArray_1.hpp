// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
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
  // Skipping declaration: DebuggerProxy because it is already included!
  // Skipping declaration: Enumerator because it is already included!
  // Forward declaring type: IElementReaderWriter`1<T>
  template<typename T>
  class IElementReaderWriter_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Lazy`1<T>
  template<typename T>
  class Lazy_1;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkArray`1<T>
  template<typename T>
  struct NetworkArray_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Fusion::NetworkArray_1, "Fusion", "NetworkArray`1");
// Type namespace: Fusion
namespace Fusion {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.NetworkArray`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  template<typename T>
  struct NetworkArray_1/*, public ::System::ValueType, public ::System::Collections::Generic::IEnumerable_1<T>*/ {
    public:
    // Nested type: ::Fusion::NetworkArray_1::DebuggerProxy<T>
    class DebuggerProxy;
    // Nested type: ::Fusion::NetworkArray_1::Enumerator<T>
    struct Enumerator;
    // WARNING Size may be invalid!
    // Autogenerated type: Fusion.NetworkArray`1/DebuggerProxy
    // [TokenAttribute] Offset: FFFFFFFF
    class DebuggerProxy : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = NetworkArray_1<T>;
      static constexpr std::string_view NESTED_NAME = "DebuggerProxy";
      static constexpr bool IS_VALUE_TYPE = false;
      // Nested type: ::Fusion::NetworkArray_1::DebuggerProxy::$$c__DisplayClass0_0<T>
      class $$c__DisplayClass0_0;
      // WARNING Size may be invalid!
      // Autogenerated type: Fusion.NetworkArray`1/DebuggerProxy/<>c__DisplayClass0_0
      // [TokenAttribute] Offset: FFFFFFFF
      // [CompilerGeneratedAttribute] Offset: FFFFFFFF
      class $$c__DisplayClass0_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
        public:
        using declaring_type = typename NetworkArray_1<T>::DebuggerProxy*;
        static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass0_0";
        static constexpr bool IS_VALUE_TYPE = false;
        public:
        // public Fusion.NetworkArray`1<T> array
        // Size: 0xFFFFFFFF
        // Offset: 0x0
        ::Fusion::NetworkArray_1<T> array;
        public:
        // Creating conversion operator: operator ::Fusion::NetworkArray_1<T>
        constexpr operator ::Fusion::NetworkArray_1<T>() const noexcept {
          return array;
        }
        // Autogenerated instance field getter
        // Get instance field: public Fusion.NetworkArray`1<T> array
        [[deprecated("Use field access instead!")]] ::Fusion::NetworkArray_1<T>& dyn_array() {
          static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::DebuggerProxy::$$c__DisplayClass0_0::dyn_array");
          auto ___internal__instance = this;
          static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "array"))->offset;
          return *reinterpret_cast<::Fusion::NetworkArray_1<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
        }
        // public System.Void .ctor()
        // Offset: 0xFFFFFFFFFFFFFFFF
        template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
        static typename NetworkArray_1<T>::DebuggerProxy::$$c__DisplayClass0_0* New_ctor() {
          static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::DebuggerProxy::$$c__DisplayClass0_0::.ctor");
          return THROW_UNLESS((::il2cpp_utils::New<typename NetworkArray_1<T>::DebuggerProxy::$$c__DisplayClass0_0*, creationType>()));
        }
        // T[] <.ctor>b__0()
        // Offset: 0xFFFFFFFFFFFFFFFF
        ::ArrayW<T> $_ctor$b__0() {
          static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::DebuggerProxy::$$c__DisplayClass0_0::<.ctor>b__0");
          static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<.ctor>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
          return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method);
        }
      }; // Fusion.NetworkArray`1/DebuggerProxy/<>c__DisplayClass0_0
      // Could not write size check! Type: Fusion.NetworkArray`1/DebuggerProxy/<>c__DisplayClass0_0 is generic, or has no fields that are valid for size checks!
      public:
      // public System.Lazy`1<T[]> _items
      // Size: 0x8
      // Offset: 0x0
      ::System::Lazy_1<::ArrayW<T>>* items;
      // Field size check
      static_assert(sizeof(::System::Lazy_1<::ArrayW<T>>*) == 0x8);
      public:
      // Creating conversion operator: operator ::System::Lazy_1<::ArrayW<T>>*
      constexpr operator ::System::Lazy_1<::ArrayW<T>>*() const noexcept {
        return items;
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Lazy`1<T[]> _items
      [[deprecated("Use field access instead!")]] ::System::Lazy_1<::ArrayW<T>>*& dyn__items() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::DebuggerProxy::dyn__items");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_items"))->offset;
        return *reinterpret_cast<::System::Lazy_1<::ArrayW<T>>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor(Fusion.NetworkArray`1<T> array)
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename NetworkArray_1<T>::DebuggerProxy* New_ctor(::Fusion::NetworkArray_1<T> array) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::DebuggerProxy::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename NetworkArray_1<T>::DebuggerProxy*, creationType>(array)));
      }
      // public T[] get_Items()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::ArrayW<T> get_Items() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::DebuggerProxy::get_Items");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Items", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method);
      }
    }; // Fusion.NetworkArray`1/DebuggerProxy
    // Could not write size check! Type: Fusion.NetworkArray`1/DebuggerProxy is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Fusion.NetworkArray`1/Enumerator
    // [TokenAttribute] Offset: FFFFFFFF
    struct Enumerator : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public ::System::ValueType, public ::System::Collections::Generic::IEnumerator_1<T>*/ {
      public:
      using declaring_type = NetworkArray_1<T>;
      static constexpr std::string_view NESTED_NAME = "Enumerator";
      static constexpr bool IS_VALUE_TYPE = true;
      public:
      // private System.Int32 _index
      // Size: 0x4
      // Offset: 0x0
      int index;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private Fusion.NetworkArray`1<T> _array
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      ::Fusion::NetworkArray_1<T> array;
      public:
      // Creating value type constructor for type: Enumerator
      constexpr Enumerator(int index_ = {}, ::Fusion::NetworkArray_1<T> array_ = {}) noexcept : index{index_}, array{array_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<T>
      operator ::System::Collections::Generic::IEnumerator_1<T>() noexcept {
        return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<T>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 _index
      [[deprecated("Use field access instead!")]] int& dyn__index() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::Enumerator::dyn__index");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_index"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private Fusion.NetworkArray`1<T> _array
      [[deprecated("Use field access instead!")]] ::Fusion::NetworkArray_1<T>& dyn__array() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::Enumerator::dyn__array");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_array"))->offset;
        return *reinterpret_cast<::Fusion::NetworkArray_1<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public T get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      T get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::Enumerator::get_Current");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::Fusion::NetworkArray_1<T>::Enumerator), -1));
        return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::Enumerator::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::Fusion::NetworkArray_1<T>::Enumerator), -1));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // public System.Void .ctor(Fusion.NetworkArray`1<T> array)
      // Offset: 0xFFFFFFFFFFFFFFFF
      Enumerator(::Fusion::NetworkArray_1<T> array) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::Enumerator::.ctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array)})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array);
      }
      // public System.Boolean MoveNext()
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::Enumerator::MoveNext");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::Fusion::NetworkArray_1<T>::Enumerator), -1));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
      }
      // public System.Void Reset()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::Enumerator::Reset");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::Fusion::NetworkArray_1<T>::Enumerator), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // public System.Void Dispose()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::Enumerator::Dispose");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::Fusion::NetworkArray_1<T>::Enumerator), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
    }; // Fusion.NetworkArray`1/Enumerator
    // Could not write size check! Type: Fusion.NetworkArray`1/Enumerator is generic, or has no fields that are valid for size checks!
    public:
    // private System.Byte* _array
    // Size: 0x8
    // Offset: 0x0
    uint8_t* array;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Int32 _length
    // Size: 0x4
    // Offset: 0x0
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Fusion.IElementReaderWriter`1<T> _readerWriter
    // Size: 0x8
    // Offset: 0x0
    ::Fusion::IElementReaderWriter_1<T>* readerWriter;
    // Field size check
    static_assert(sizeof(::Fusion::IElementReaderWriter_1<T>*) == 0x8);
    public:
    // Creating value type constructor for type: NetworkArray_1
    constexpr NetworkArray_1(uint8_t* array_ = {}, int length_ = {}, ::Fusion::IElementReaderWriter_1<T>* readerWriter_ = {}) noexcept : array{array_}, length{length_}, readerWriter{readerWriter_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<T>
    operator ::System::Collections::Generic::IEnumerable_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<T>*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static private System.Text.StringBuilder _stringBuilderCached
    static ::System::Text::StringBuilder* _get__stringBuilderCached() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::_get__stringBuilderCached");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::System::Text::StringBuilder*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetworkArray_1<T>>::get(), "_stringBuilderCached"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Text.StringBuilder _stringBuilderCached
    static void _set__stringBuilderCached(::System::Text::StringBuilder* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::_set__stringBuilderCached");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetworkArray_1<T>>::get(), "_stringBuilderCached", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Byte* _array
    [[deprecated("Use field access instead!")]] uint8_t*& dyn__array() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::dyn__array");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_array"))->offset;
      return *reinterpret_cast<uint8_t**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _length
    [[deprecated("Use field access instead!")]] int& dyn__length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::dyn__length");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_length"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Fusion.IElementReaderWriter`1<T> _readerWriter
    [[deprecated("Use field access instead!")]] ::Fusion::IElementReaderWriter_1<T>*& dyn__readerWriter() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::dyn__readerWriter");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_readerWriter"))->offset;
      return *reinterpret_cast<::Fusion::IElementReaderWriter_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Length()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::get_Length");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Length", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public System.Void set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::set_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value);
    }
    // public System.Void .ctor(System.Byte* array, System.Int32 length, Fusion.IElementReaderWriter`1<T> readerWriter)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // ABORTED: conflicts with another method.  NetworkArray_1(uint8_t* array, int length, ::Fusion::IElementReaderWriter_1<T>* readerWriter)
    // public Fusion.NetworkArray`1<T> Remap(System.Void* array)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Fusion::NetworkArray_1<T> Remap(void* array) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::Remap");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Remap", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array)})));
      return ::il2cpp_utils::RunMethodRethrow<::Fusion::NetworkArray_1<T>, false>(this, ___internal__method, array);
    }
    // public T Get(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Get(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Get", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public T Set(System.Int32 index, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Set(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::Set");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Set", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index, value);
    }
    // T GetRef(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T GetRef(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::GetRef");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetRef", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public T[] ToArray()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<T> ToArray() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::ToArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ToArray", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method);
    }
    // public System.Void CopyTo(System.Collections.Generic.List`1<T> list)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CopyTo(::System::Collections::Generic::List_1<T>* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::CopyTo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "CopyTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, list);
    }
    // public System.Void CopyTo(T[] array, System.Boolean throwIfOverflow)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CopyTo(::ArrayW<T> array, bool throwIfOverflow) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::CopyTo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "CopyTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(throwIfOverflow)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array, throwIfOverflow);
    }
    // public Fusion.NetworkArray`1/Enumerator<T> GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    typename ::Fusion::NetworkArray_1<T>::Enumerator GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<typename ::Fusion::NetworkArray_1<T>::Enumerator, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable$T$_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::System.Collections.Generic.IEnumerable<T>.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Fusion::NetworkArray_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Fusion::NetworkArray_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // public System.Void CopyFrom(T[] source, System.Int32 sourceOffset, System.Int32 sourceCount)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CopyFrom(::ArrayW<T> source, int sourceOffset, int sourceCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::CopyFrom");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "CopyFrom", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source), ::il2cpp_utils::ExtractType(sourceOffset), ::il2cpp_utils::ExtractType(sourceCount)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, source, sourceOffset, sourceCount);
    }
    // public System.Void CopyFrom(System.Collections.Generic.List`1<T> source, System.Int32 sourceOffset, System.Int32 sourceCount)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CopyFrom(::System::Collections::Generic::List_1<T>* source, int sourceOffset, int sourceCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::CopyFrom");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "CopyFrom", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source), ::il2cpp_utils::ExtractType(sourceOffset), ::il2cpp_utils::ExtractType(sourceCount)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, source, sourceOffset, sourceCount);
    }
    // private System.String ToListString()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW ToListString() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::ToListString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ToListString", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkArray_1::ToString");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
  }; // Fusion.NetworkArray`1
  // Could not write size check! Type: Fusion.NetworkArray`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
