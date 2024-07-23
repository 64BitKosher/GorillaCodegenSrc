// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.EqualityComparer`1
#include "System/Collections/Generic/EqualityComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: ObjectEqualityComparer`1<T>
  template<typename T>
  class ObjectEqualityComparer_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::ObjectEqualityComparer_1, "System.Collections.Generic", "ObjectEqualityComparer`1");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.ObjectEqualityComparer`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ObjectEqualityComparer_1 : public ::System::Collections::Generic::EqualityComparer_1<T> {
    public:
    // public override System.Boolean Equals(T x, T y)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Boolean EqualityComparer_1::Equals(T x, T y)
    bool Equals(T x, T y) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ObjectEqualityComparer_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::Generic::EqualityComparer_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, x, y);
    }
    // public override System.Int32 GetHashCode(T obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Int32 EqualityComparer_1::GetHashCode(T obj)
    int GetHashCode(T obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ObjectEqualityComparer_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::Generic::EqualityComparer_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, obj);
    }
    // override System.Int32 IndexOf(T[] array, T value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Int32 EqualityComparer_1::IndexOf(T[] array, T value, System.Int32 startIndex, System.Int32 count)
    int IndexOf(::ArrayW<T> array, T value, int startIndex, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ObjectEqualityComparer_1::IndexOf");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::Generic::EqualityComparer_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, array, value, startIndex, count);
    }
    // override System.Int32 LastIndexOf(T[] array, T value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Int32 EqualityComparer_1::LastIndexOf(T[] array, T value, System.Int32 startIndex, System.Int32 count)
    int LastIndexOf(::ArrayW<T> array, T value, int startIndex, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ObjectEqualityComparer_1::LastIndexOf");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::Generic::EqualityComparer_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, array, value, startIndex, count);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ObjectEqualityComparer_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Il2CppObject*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ObjectEqualityComparer_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Il2CppObject*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Void EqualityComparer_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectEqualityComparer_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ObjectEqualityComparer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectEqualityComparer_1<T>*, creationType>()));
    }
  }; // System.Collections.Generic.ObjectEqualityComparer`1
  // Could not write size check! Type: System.Collections.Generic.ObjectEqualityComparer`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
