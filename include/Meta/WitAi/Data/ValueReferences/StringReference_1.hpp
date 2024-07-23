// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Data.ValueReferences.IStringReference
#include "Meta/WitAi/Data/ValueReferences/IStringReference.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Data.ValueReferences
namespace Meta::WitAi::Data::ValueReferences {
  // Forward declaring type: StringReference`1<T>
  template<typename T>
  class StringReference_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::WitAi::Data::ValueReferences::StringReference_1, "Meta.WitAi.Data.ValueReferences", "StringReference`1");
// Type namespace: Meta.WitAi.Data.ValueReferences
namespace Meta::WitAi::Data::ValueReferences {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.WitAi.Data.ValueReferences.StringReference`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class StringReference_1 : public ::Il2CppObject/*, public ::Meta::WitAi::Data::ValueReferences::IStringReference*/ {
    public:
    public:
    // private System.String stringValue
    // Size: 0x8
    // Offset: 0x0
    ::StringW stringValue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private T stringObject
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T stringObject;
    public:
    // Creating interface conversion operator: operator ::Meta::WitAi::Data::ValueReferences::IStringReference
    operator ::Meta::WitAi::Data::ValueReferences::IStringReference() noexcept {
      return *reinterpret_cast<::Meta::WitAi::Data::ValueReferences::IStringReference*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.String stringValue
    [[deprecated("Use field access instead!")]] ::StringW& dyn_stringValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::ValueReferences::StringReference_1::dyn_stringValue");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "stringValue"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private T stringObject
    [[deprecated("Use field access instead!")]] T& dyn_stringObject() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::ValueReferences::StringReference_1::dyn_stringObject");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "stringObject"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.String get_Value()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::ValueReferences::StringReference_1::get_Value");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::WitAi::Data::ValueReferences::StringReference_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public System.Void set_Value(System.String value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Value(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::ValueReferences::StringReference_1::set_Value");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::WitAi::Data::ValueReferences::StringReference_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringReference_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::ValueReferences::StringReference_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringReference_1<T>*, creationType>()));
    }
  }; // Meta.WitAi.Data.ValueReferences.StringReference`1
  // Could not write size check! Type: Meta.WitAi.Data.ValueReferences.StringReference`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"