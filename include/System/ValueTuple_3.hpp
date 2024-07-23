// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Collections.IStructuralEquatable
#include "System/Collections/IStructuralEquatable.hpp"
// Including type: System.Collections.IStructuralComparable
#include "System/Collections/IStructuralComparable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IValueTupleInternal
#include "System/IValueTupleInternal.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
  // Forward declaring type: IComparer
  class IComparer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ValueTuple`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  struct ValueTuple_3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::ValueTuple_3, "System", "ValueTuple`3");
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.ValueTuple`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1, typename T2, typename T3>
  struct ValueTuple_3/*, public ::System::ValueType, public ::System::IEquatable_1<::System::ValueTuple_3<T1, T2, T3>>, public ::System::Collections::IStructuralEquatable, public ::System::Collections::IStructuralComparable, public ::System::IComparable, public ::System::IComparable_1<::System::ValueTuple_3<T1, T2, T3>>, public ::System::IValueTupleInternal*/ {
    public:
    public:
    // public T1 Item1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T1 Item1;
    // public T2 Item2
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T2 Item2;
    // public T3 Item3
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T3 Item3;
    public:
    // Creating value type constructor for type: ValueTuple_3
    constexpr ValueTuple_3(T1 Item1_ = {}, T2 Item2_ = {}, T3 Item3_ = {}) noexcept : Item1{Item1_}, Item2{Item2_}, Item3{Item3_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::ValueTuple_3<T1, T2, T3>>
    operator ::System::IEquatable_1<::System::ValueTuple_3<T1, T2, T3>>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::ValueTuple_3<T1, T2, T3>>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IStructuralEquatable
    operator ::System::Collections::IStructuralEquatable() noexcept {
      return *reinterpret_cast<::System::Collections::IStructuralEquatable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IStructuralComparable
    operator ::System::Collections::IStructuralComparable() noexcept {
      return *reinterpret_cast<::System::Collections::IStructuralComparable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::System::ValueTuple_3<T1, T2, T3>>
    operator ::System::IComparable_1<::System::ValueTuple_3<T1, T2, T3>>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::System::ValueTuple_3<T1, T2, T3>>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IValueTupleInternal
    operator ::System::IValueTupleInternal() noexcept {
      return *reinterpret_cast<::System::IValueTupleInternal*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public T1 Item1
    [[deprecated("Use field access instead!")]] T1& dyn_Item1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_3::dyn_Item1");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Item1"))->offset;
      return *reinterpret_cast<T1*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T2 Item2
    [[deprecated("Use field access instead!")]] T2& dyn_Item2() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_3::dyn_Item2");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Item2"))->offset;
      return *reinterpret_cast<T2*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T3 Item3
    [[deprecated("Use field access instead!")]] T3& dyn_Item3() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_3::dyn_Item3");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Item3"))->offset;
      return *reinterpret_cast<T3*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(T1 item1, T2 item2, T3 item3)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // ABORTED: conflicts with another method.  ValueTuple_3(T1 item1, T2 item2, T3 item3)
    // public System.Boolean Equals(System.ValueTuple`3<T1,T2,T3> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Equals(::System::ValueTuple_3<T1, T2, T3> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_3::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueTuple_3<T1, T2, T3>), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // private System.Boolean System.Collections.IStructuralEquatable.Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_IStructuralEquatable_Equals(::Il2CppObject* other, ::System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_3::System.Collections.IStructuralEquatable.Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueTuple_3<T1, T2, T3>), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other, comparer);
    }
    // private System.Int32 System.IComparable.CompareTo(System.Object other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_IComparable_CompareTo(::Il2CppObject* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_3::System.IComparable.CompareTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueTuple_3<T1, T2, T3>), -1)));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, other);
    }
    // public System.Int32 CompareTo(System.ValueTuple`3<T1,T2,T3> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int CompareTo(::System::ValueTuple_3<T1, T2, T3> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_3::CompareTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueTuple_3<T1, T2, T3>), -1)));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, other);
    }
    // private System.Int32 System.Collections.IStructuralComparable.CompareTo(System.Object other, System.Collections.IComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_Collections_IStructuralComparable_CompareTo(::Il2CppObject* other, ::System::Collections::IComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_3::System.Collections.IStructuralComparable.CompareTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueTuple_3<T1, T2, T3>), -1)));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, other, comparer);
    }
    // private System.Int32 System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_3::System.Collections.IStructuralEquatable.GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueTuple_3<T1, T2, T3>), -1)));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, comparer);
    }
    // private System.Int32 GetHashCodeCore(System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetHashCodeCore(::System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_3::GetHashCodeCore");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetHashCodeCore", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(comparer)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, comparer);
    }
    // private System.Int32 System.IValueTupleInternal.GetHashCode(System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_3::System.IValueTupleInternal.GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueTuple_3<T1, T2, T3>), -1)));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, comparer);
    }
    // private System.String System.IValueTupleInternal.ToStringEnd()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW System_IValueTupleInternal_ToStringEnd() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_3::System.IValueTupleInternal.ToStringEnd");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueTuple_3<T1, T2, T3>), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // private System.Int32 System.Runtime.CompilerServices.ITuple.get_Length()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_Runtime_CompilerServices_ITuple_get_Length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_3::System.Runtime.CompilerServices.ITuple.get_Length");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueTuple_3<T1, T2, T3>), -1)));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_3::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_3::GetHashCode");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ValueTuple_3::ToString");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
  }; // System.ValueTuple`3
  // Could not write size check! Type: System.ValueTuple`3 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
