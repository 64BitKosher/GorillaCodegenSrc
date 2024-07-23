// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <initializer_list>
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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Skipping declaration: Enumerator because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEqualityComparer`1<T>
  template<typename T>
  class IEqualityComparer_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: InlinedArray`1<TValue>
  template<typename TValue>
  struct InlinedArray_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::InlinedArray_1, "UnityEngine.InputSystem.Utilities", "InlinedArray`1");
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.Utilities.InlinedArray`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  template<typename TValue>
  struct InlinedArray_1/*, public ::System::ValueType, public ::System::Collections::Generic::IEnumerable_1<TValue>*/ {
    public:
    // Nested type: ::UnityEngine::InputSystem::Utilities::InlinedArray_1::Enumerator<TValue>
    struct Enumerator;
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.InputSystem.Utilities.InlinedArray`1/Enumerator
    // [TokenAttribute] Offset: FFFFFFFF
    struct Enumerator : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public ::System::ValueType, public ::System::Collections::Generic::IEnumerator_1<TValue>*/ {
      public:
      using declaring_type = InlinedArray_1<TValue>;
      static constexpr std::string_view NESTED_NAME = "Enumerator";
      static constexpr bool IS_VALUE_TYPE = true;
      public:
      // public UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue> array
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array;
      // public System.Int32 index
      // Size: 0x4
      // Offset: 0x0
      int index;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Enumerator
      constexpr Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array_ = {}, int index_ = {}) noexcept : array{array_}, index{index_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<TValue>
      operator ::System::Collections::Generic::IEnumerator_1<TValue>() noexcept {
        return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: public UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue> array
      [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>& dyn_array() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::Enumerator::dyn_array");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "array"))->offset;
        return *reinterpret_cast<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Int32 index
      [[deprecated("Use field access instead!")]] int& dyn_index() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::Enumerator::dyn_index");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "index"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Boolean MoveNext()
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::Enumerator::MoveNext");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::Enumerator), -1));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
      }
      // public System.Void Reset()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::Enumerator::Reset");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::Enumerator), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // public TValue get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      TValue get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::Enumerator::get_Current");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::Enumerator), -1));
        return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::Enumerator::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::Enumerator), -1));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // public System.Void Dispose()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::Enumerator::Dispose");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(typename ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>::Enumerator), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
    }; // UnityEngine.InputSystem.Utilities.InlinedArray`1/Enumerator
    // Could not write size check! Type: UnityEngine.InputSystem.Utilities.InlinedArray`1/Enumerator is generic, or has no fields that are valid for size checks!
    public:
    // public System.Int32 length
    // Size: 0x4
    // Offset: 0x0
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public TValue firstValue
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TValue firstValue;
    // public TValue[] additionalValues
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<TValue> additionalValues;
    // Field size check
    static_assert(sizeof(::ArrayW<TValue>) == 0x8);
    public:
    // Creating value type constructor for type: InlinedArray_1
    constexpr InlinedArray_1(int length_ = {}, TValue firstValue_ = {}, ::ArrayW<TValue> additionalValues_ = ::ArrayW<TValue>(static_cast<void*>(nullptr))) noexcept : length{length_}, firstValue{firstValue_}, additionalValues{additionalValues_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<TValue>
    operator ::System::Collections::Generic::IEnumerable_1<TValue>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Int32 length
    [[deprecated("Use field access instead!")]] int& dyn_length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::dyn_length");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "length"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public TValue firstValue
    [[deprecated("Use field access instead!")]] TValue& dyn_firstValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::dyn_firstValue");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "firstValue"))->offset;
      return *reinterpret_cast<TValue*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public TValue[] additionalValues
    [[deprecated("Use field access instead!")]] ::ArrayW<TValue>& dyn_additionalValues() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::dyn_additionalValues");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "additionalValues"))->offset;
      return *reinterpret_cast<::ArrayW<TValue>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Capacity()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Capacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::get_Capacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Capacity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Void .ctor(TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    InlinedArray_1(TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor(TValue firstValue, params TValue[] additionalValues)
    // Offset: 0xFFFFFFFFFFFFFFFF
    InlinedArray_1(TValue firstValue, ::ArrayW<TValue> additionalValues) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(firstValue), ::il2cpp_utils::ExtractType(additionalValues)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, firstValue, additionalValues);
    }
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<TValue> values)
    // Offset: 0xFFFFFFFFFFFFFFFF
    InlinedArray_1(::System::Collections::Generic::IEnumerable_1<TValue>* values) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(values)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, values);
    }
    // public TValue get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TValue get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, index);
    }
    // public System.Void set_Item(System.Int32 index, TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item(int index, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::set_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void ClearWithCapacity()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ClearWithCapacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::ClearWithCapacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ClearWithCapacity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue> Clone()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> Clone() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::Clone");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Clone", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>, false>(this, ___internal__method);
    }
    // public System.Void SetLength(System.Int32 size)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetLength(int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::SetLength");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "SetLength", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(size)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, size);
    }
    // public TValue[] ToArray()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<TValue> ToArray() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::ToArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ToArray", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<TValue>, false>(this, ___internal__method);
    }
    // public TOther[] ToArray(System.Func`2<TValue,TOther> mapFunction)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TOther>
    ::ArrayW<TOther> ToArray(::System::Func_2<TValue, TOther>* mapFunction) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::ToArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ToArray", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOther>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(mapFunction)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOther>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<TOther>, false>(this, ___generic__method, mapFunction);
    }
    // public System.Int32 IndexOf(TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int IndexOf(TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::IndexOf");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "IndexOf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, value);
    }
    // public System.Int32 Append(TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int Append(TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::Append");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Append", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, value);
    }
    // public System.Int32 AppendWithCapacity(TValue value, System.Int32 capacityIncrement)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int AppendWithCapacity(TValue value, int capacityIncrement) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::AppendWithCapacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "AppendWithCapacity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(capacityIncrement)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, value, capacityIncrement);
    }
    // public System.Void AssignWithCapacity(UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue> values)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> values) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::AssignWithCapacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "AssignWithCapacity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(values)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, values);
    }
    // public System.Void Append(System.Collections.Generic.IEnumerable`1<TValue> values)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Append(::System::Collections::Generic::IEnumerable_1<TValue>* values) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::Append");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Append", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(values)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, values);
    }
    // public System.Void Remove(TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Remove(TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void RemoveAtWithCapacity(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveAtWithCapacity(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::RemoveAtWithCapacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "RemoveAtWithCapacity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index);
    }
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::RemoveAt");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "RemoveAt", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index);
    }
    // public System.Void RemoveAtByMovingTailWithCapacity(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveAtByMovingTailWithCapacity(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::RemoveAtByMovingTailWithCapacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "RemoveAtByMovingTailWithCapacity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index);
    }
    // public System.Boolean RemoveByMovingTailWithCapacity(TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool RemoveByMovingTailWithCapacity(TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::RemoveByMovingTailWithCapacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "RemoveByMovingTailWithCapacity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, value);
    }
    // public System.Boolean Contains(TValue value, System.Collections.Generic.IEqualityComparer`1<TValue> comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Contains(TValue value, ::System::Collections::Generic::IEqualityComparer_1<TValue>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::Contains");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Contains", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(comparer)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, value, comparer);
    }
    // public System.Void Merge(UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::Merge");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Merge", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(other)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, other);
    }
    // public System.Collections.Generic.IEnumerator`1<TValue> GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<TValue>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TValue>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InlinedArray_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
  }; // UnityEngine.InputSystem.Utilities.InlinedArray`1
  // Could not write size check! Type: UnityEngine.InputSystem.Utilities.InlinedArray`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
