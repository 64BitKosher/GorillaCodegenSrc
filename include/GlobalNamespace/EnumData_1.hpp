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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Enum
  class Enum;
  // Forward declaring type: ValueType
  class ValueType;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnumData`1<TEnum>
  template<typename TEnum>
  class EnumData_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::EnumData_1, "", "EnumData`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: EnumData`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TEnum>
  class EnumData_1 : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String[] Names
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::StringW> Names;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public readonly TEnum[] Values
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<TEnum> Values;
    // Field size check
    static_assert(sizeof(::ArrayW<TEnum>) == 0x8);
    // public readonly System.Int64[] LongValues
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<int64_t> LongValues;
    // Field size check
    static_assert(sizeof(::ArrayW<int64_t>) == 0x8);
    // public readonly System.Collections.Generic.Dictionary`2<TEnum,System.String> EnumToName
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<TEnum, ::StringW>* EnumToName;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<TEnum, ::StringW>*) == 0x8);
    // public readonly System.Collections.Generic.Dictionary`2<System.String,TEnum> NameToEnum
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<::StringW, TEnum>* NameToEnum;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, TEnum>*) == 0x8);
    // public readonly System.Collections.Generic.Dictionary`2<TEnum,System.Int32> EnumToIndex
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<TEnum, int>* EnumToIndex;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<TEnum, int>*) == 0x8);
    // public readonly System.Collections.Generic.Dictionary`2<System.Int32,TEnum> IndexToEnum
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<int, TEnum>* IndexToEnum;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, TEnum>*) == 0x8);
    // public readonly System.Collections.Generic.Dictionary`2<TEnum,System.Int64> EnumToLong
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<TEnum, int64_t>* EnumToLong;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<TEnum, int64_t>*) == 0x8);
    // public readonly System.Collections.Generic.Dictionary`2<System.Int64,TEnum> LongToEnum
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<int64_t, TEnum>* LongToEnum;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int64_t, TEnum>*) == 0x8);
    public:
    // Autogenerated static field getter
    // Get static field: static private readonly EnumData`1<TEnum> <Shared>k__BackingField
    static ::GlobalNamespace::EnumData_1<TEnum>* _get_$Shared$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumData_1::_get_$Shared$k__BackingField");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::GlobalNamespace::EnumData_1<TEnum>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumData_1<TEnum>*>::get(), "<Shared>k__BackingField")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly EnumData`1<TEnum> <Shared>k__BackingField
    static void _set_$Shared$k__BackingField(::GlobalNamespace::EnumData_1<TEnum>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumData_1::_set_$Shared$k__BackingField");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumData_1<TEnum>*>::get(), "<Shared>k__BackingField", value)));
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly System.String[] Names
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_Names() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumData_1::dyn_Names");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Names"))->offset;
      return *reinterpret_cast<::ArrayW<::StringW>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly TEnum[] Values
    [[deprecated("Use field access instead!")]] ::ArrayW<TEnum>& dyn_Values() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumData_1::dyn_Values");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Values"))->offset;
      return *reinterpret_cast<::ArrayW<TEnum>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly System.Int64[] LongValues
    [[deprecated("Use field access instead!")]] ::ArrayW<int64_t>& dyn_LongValues() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumData_1::dyn_LongValues");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "LongValues"))->offset;
      return *reinterpret_cast<::ArrayW<int64_t>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly System.Collections.Generic.Dictionary`2<TEnum,System.String> EnumToName
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<TEnum, ::StringW>*& dyn_EnumToName() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumData_1::dyn_EnumToName");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "EnumToName"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<TEnum, ::StringW>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly System.Collections.Generic.Dictionary`2<System.String,TEnum> NameToEnum
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, TEnum>*& dyn_NameToEnum() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumData_1::dyn_NameToEnum");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "NameToEnum"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<::StringW, TEnum>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly System.Collections.Generic.Dictionary`2<TEnum,System.Int32> EnumToIndex
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<TEnum, int>*& dyn_EnumToIndex() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumData_1::dyn_EnumToIndex");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "EnumToIndex"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<TEnum, int>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly System.Collections.Generic.Dictionary`2<System.Int32,TEnum> IndexToEnum
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, TEnum>*& dyn_IndexToEnum() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumData_1::dyn_IndexToEnum");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "IndexToEnum"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<int, TEnum>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly System.Collections.Generic.Dictionary`2<TEnum,System.Int64> EnumToLong
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<TEnum, int64_t>*& dyn_EnumToLong() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumData_1::dyn_EnumToLong");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "EnumToLong"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<TEnum, int64_t>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly System.Collections.Generic.Dictionary`2<System.Int64,TEnum> LongToEnum
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int64_t, TEnum>*& dyn_LongToEnum() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumData_1::dyn_LongToEnum");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "LongToEnum"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<int64_t, TEnum>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // static public EnumData`1<TEnum> get_Shared()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::GlobalNamespace::EnumData_1<TEnum>* get_Shared() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumData_1::get_Shared");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumData_1<TEnum>*>::get(), "get_Shared", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::EnumData_1<TEnum>*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumData_1<TEnum>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumData_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumData_1<TEnum>*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumData_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumData_1<TEnum>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // EnumData`1
  // Could not write size check! Type: EnumData`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
