// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Map`2<T1, T2>
  template<typename T1, typename T2>
  class Map_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::Map_2, "", "Map`2");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: Map`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1, typename T2>
  class Map_2 : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.Dictionary`2<T1,T2> fwdDict
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<T1, T2>* fwdDict;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<T1, T2>*) == 0x8);
    // public System.Collections.Generic.Dictionary`2<T2,T1> revDict
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<T2, T1>* revDict;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<T2, T1>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public System.Collections.Generic.Dictionary`2<T1,T2> fwdDict
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<T1, T2>*& dyn_fwdDict() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Map_2::dyn_fwdDict");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "fwdDict"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<T1, T2>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Collections.Generic.Dictionary`2<T2,T1> revDict
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<T2, T1>*& dyn_revDict() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Map_2::dyn_revDict");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "revDict"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<T2, T1>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Map_2<T1, T2>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Map_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Map_2<T1, T2>*, creationType>()));
    }
    // public System.Void Add(T1 t0, T2 t1)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(T1 t0, T2 t1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Map_2::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t0), ::il2cpp_utils::ExtractType(t1)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, t0, t1);
    }
    // public System.Void Remove(T1 t0)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Remove(T1 t0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Map_2::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t0)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, t0);
    }
    // public System.Void Remove(T2 t1)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Remove(T2 t1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Map_2::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t1)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, t1);
    }
    // public T2 Lookup(T1 t0)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T2 Lookup(T1 t0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Map_2::Lookup");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Lookup", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t0)})));
      return ::il2cpp_utils::RunMethodRethrow<T2, false>(this, ___internal__method, t0);
    }
    // public T1 Lookup(T2 t1)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T1 Lookup(T2 t1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Map_2::Lookup");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Lookup", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t1)})));
      return ::il2cpp_utils::RunMethodRethrow<T1, false>(this, ___internal__method, t1);
    }
  }; // Map`2
  // Could not write size check! Type: Map`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
