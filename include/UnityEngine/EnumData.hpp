// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Enum
  class Enum;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: EnumData
  struct EnumData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EnumData, "UnityEngine", "EnumData");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x3A
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.EnumData
  // [TokenAttribute] Offset: FFFFFFFF
  struct EnumData/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Enum[] values
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::System::Enum*> values;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Enum*>) == 0x8);
    // public System.Int32[] flagValues
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<int> flagValues;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public System.String[] displayNames
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::StringW> displayNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.String[] names
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> names;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.String[] tooltip
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::StringW> tooltip;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.Boolean flags
    // Size: 0x1
    // Offset: 0x28
    bool flags;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: flags and: underlyingType
    char __padding5[0x7] = {};
    // public System.Type underlyingType
    // Size: 0x8
    // Offset: 0x30
    ::System::Type* underlyingType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public System.Boolean unsigned
    // Size: 0x1
    // Offset: 0x38
    bool _unsigned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean serializable
    // Size: 0x1
    // Offset: 0x39
    bool serializable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: EnumData
    constexpr EnumData(::ArrayW<::System::Enum*> values_ = ::ArrayW<::System::Enum*>(static_cast<void*>(nullptr)), ::ArrayW<int> flagValues_ = ::ArrayW<int>(static_cast<void*>(nullptr)), ::ArrayW<::StringW> displayNames_ = ::ArrayW<::StringW>(static_cast<void*>(nullptr)), ::ArrayW<::StringW> names_ = ::ArrayW<::StringW>(static_cast<void*>(nullptr)), ::ArrayW<::StringW> tooltip_ = ::ArrayW<::StringW>(static_cast<void*>(nullptr)), bool flags_ = {}, ::System::Type* underlyingType_ = {}, bool _unsigned_ = {}, bool serializable_ = {}) noexcept : values{values_}, flagValues{flagValues_}, displayNames{displayNames_}, names{names_}, tooltip{tooltip_}, flags{flags_}, underlyingType{underlyingType_}, _unsigned{_unsigned_}, serializable{serializable_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Enum[] values
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Enum*>& dyn_values();
    // Get instance field reference: public System.Int32[] flagValues
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_flagValues();
    // Get instance field reference: public System.String[] displayNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_displayNames();
    // Get instance field reference: public System.String[] names
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_names();
    // Get instance field reference: public System.String[] tooltip
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_tooltip();
    // Get instance field reference: public System.Boolean flags
    [[deprecated("Use field access instead!")]] bool& dyn_flags();
    // Get instance field reference: public System.Type underlyingType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_underlyingType();
    // Get instance field reference: public System.Boolean unsigned
    [[deprecated("Use field access instead!")]] bool& dyn_unsigned();
    // Get instance field reference: public System.Boolean serializable
    [[deprecated("Use field access instead!")]] bool& dyn_serializable();
  }; // UnityEngine.EnumData
  #pragma pack(pop)
  static check_size<sizeof(EnumData), 57 + sizeof(bool)> __UnityEngine_EnumDataSizeCheck;
  static_assert(sizeof(EnumData) == 0x3A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
