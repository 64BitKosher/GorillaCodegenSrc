// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: LitJson
namespace LitJson {
  // Forward declaring type: Condition
  struct Condition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LitJson::Condition, "LitJson", "Condition");
// Type namespace: LitJson
namespace LitJson {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: LitJson.Condition
  // [TokenAttribute] Offset: FFFFFFFF
  struct Condition/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Condition
    constexpr Condition(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LitJson.Condition InArray
    static constexpr const int InArray = 0;
    // Get static field: static public LitJson.Condition InArray
    static ::LitJson::Condition _get_InArray();
    // Set static field: static public LitJson.Condition InArray
    static void _set_InArray(::LitJson::Condition value);
    // static field const value: static public LitJson.Condition InObject
    static constexpr const int InObject = 1;
    // Get static field: static public LitJson.Condition InObject
    static ::LitJson::Condition _get_InObject();
    // Set static field: static public LitJson.Condition InObject
    static void _set_InObject(::LitJson::Condition value);
    // static field const value: static public LitJson.Condition NotAProperty
    static constexpr const int NotAProperty = 2;
    // Get static field: static public LitJson.Condition NotAProperty
    static ::LitJson::Condition _get_NotAProperty();
    // Set static field: static public LitJson.Condition NotAProperty
    static void _set_NotAProperty(::LitJson::Condition value);
    // static field const value: static public LitJson.Condition Property
    static constexpr const int Property = 3;
    // Get static field: static public LitJson.Condition Property
    static ::LitJson::Condition _get_Property();
    // Set static field: static public LitJson.Condition Property
    static void _set_Property(::LitJson::Condition value);
    // static field const value: static public LitJson.Condition Value
    static constexpr const int Value = 4;
    // Get static field: static public LitJson.Condition Value
    static ::LitJson::Condition _get_Value();
    // Set static field: static public LitJson.Condition Value
    static void _set_Value(::LitJson::Condition value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // LitJson.Condition
  #pragma pack(pop)
  static check_size<sizeof(Condition), 0 + sizeof(int)> __LitJson_ConditionSizeCheck;
  static_assert(sizeof(Condition) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
