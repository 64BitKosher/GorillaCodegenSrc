// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.HashSet`1/Enumerator
#include "System/Collections/Generic/HashSet_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Interaction.Collections
namespace Oculus::Interaction::Collections {
  // Forward declaring type: IEnumerableHashSet`1<T>
  template<typename T>
  class IEnumerableHashSet_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Interaction::Collections::IEnumerableHashSet_1, "Oculus.Interaction.Collections", "IEnumerableHashSet`1");
// Type namespace: Oculus.Interaction.Collections
namespace Oculus::Interaction::Collections {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.Collections.IEnumerableHashSet`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class IEnumerableHashSet_1/*, public ::System::Collections::Generic::IEnumerable_1<T>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<T>
    operator ::System::Collections::Generic::IEnumerable_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<T>*>(this);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Collections::IEnumerableHashSet_1::get_Count");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.HashSet`1/Enumerator<T> GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    typename ::System::Collections::Generic::HashSet_1<T>::Enumerator GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Collections::IEnumerableHashSet_1::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<typename ::System::Collections::Generic::HashSet_1<T>::Enumerator, false>(this, ___internal__method);
    }
    // public System.Boolean Contains(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Contains(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Collections::IEnumerableHashSet_1::Contains");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Boolean IsProperSubsetOf(System.Collections.Generic.IEnumerable`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsProperSubsetOf(::System::Collections::Generic::IEnumerable_1<T>* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Collections::IEnumerableHashSet_1::IsProperSubsetOf");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // public System.Boolean IsProperSupersetOf(System.Collections.Generic.IEnumerable`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsProperSupersetOf(::System::Collections::Generic::IEnumerable_1<T>* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Collections::IEnumerableHashSet_1::IsProperSupersetOf");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // public System.Boolean IsSubsetOf(System.Collections.Generic.IEnumerable`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsSubsetOf(::System::Collections::Generic::IEnumerable_1<T>* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Collections::IEnumerableHashSet_1::IsSubsetOf");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // public System.Boolean IsSupersetOf(System.Collections.Generic.IEnumerable`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsSupersetOf(::System::Collections::Generic::IEnumerable_1<T>* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Collections::IEnumerableHashSet_1::IsSupersetOf");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // public System.Boolean Overlaps(System.Collections.Generic.IEnumerable`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Overlaps(::System::Collections::Generic::IEnumerable_1<T>* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Collections::IEnumerableHashSet_1::Overlaps");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // public System.Boolean SetEquals(System.Collections.Generic.IEnumerable`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool SetEquals(::System::Collections::Generic::IEnumerable_1<T>* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Collections::IEnumerableHashSet_1::SetEquals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
  }; // Oculus.Interaction.Collections.IEnumerableHashSet`1
  // Could not write size check! Type: Oculus.Interaction.Collections.IEnumerableHashSet`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
