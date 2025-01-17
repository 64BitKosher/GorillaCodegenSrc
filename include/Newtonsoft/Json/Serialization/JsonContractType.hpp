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
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonContractType
  struct JsonContractType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonContractType, "Newtonsoft.Json.Serialization", "JsonContractType");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonContractType
  // [TokenAttribute] Offset: FFFFFFFF
  struct JsonContractType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: JsonContractType
    constexpr JsonContractType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Newtonsoft.Json.Serialization.JsonContractType None
    static constexpr const int None = 0;
    // Get static field: static public Newtonsoft.Json.Serialization.JsonContractType None
    static ::Newtonsoft::Json::Serialization::JsonContractType _get_None();
    // Set static field: static public Newtonsoft.Json.Serialization.JsonContractType None
    static void _set_None(::Newtonsoft::Json::Serialization::JsonContractType value);
    // static field const value: static public Newtonsoft.Json.Serialization.JsonContractType Object
    static constexpr const int Object = 1;
    // Get static field: static public Newtonsoft.Json.Serialization.JsonContractType Object
    static ::Newtonsoft::Json::Serialization::JsonContractType _get_Object();
    // Set static field: static public Newtonsoft.Json.Serialization.JsonContractType Object
    static void _set_Object(::Newtonsoft::Json::Serialization::JsonContractType value);
    // static field const value: static public Newtonsoft.Json.Serialization.JsonContractType Array
    static constexpr const int Array = 2;
    // Get static field: static public Newtonsoft.Json.Serialization.JsonContractType Array
    static ::Newtonsoft::Json::Serialization::JsonContractType _get_Array();
    // Set static field: static public Newtonsoft.Json.Serialization.JsonContractType Array
    static void _set_Array(::Newtonsoft::Json::Serialization::JsonContractType value);
    // static field const value: static public Newtonsoft.Json.Serialization.JsonContractType Primitive
    static constexpr const int Primitive = 3;
    // Get static field: static public Newtonsoft.Json.Serialization.JsonContractType Primitive
    static ::Newtonsoft::Json::Serialization::JsonContractType _get_Primitive();
    // Set static field: static public Newtonsoft.Json.Serialization.JsonContractType Primitive
    static void _set_Primitive(::Newtonsoft::Json::Serialization::JsonContractType value);
    // static field const value: static public Newtonsoft.Json.Serialization.JsonContractType String
    static constexpr const int String = 4;
    // Get static field: static public Newtonsoft.Json.Serialization.JsonContractType String
    static ::Newtonsoft::Json::Serialization::JsonContractType _get_String();
    // Set static field: static public Newtonsoft.Json.Serialization.JsonContractType String
    static void _set_String(::Newtonsoft::Json::Serialization::JsonContractType value);
    // static field const value: static public Newtonsoft.Json.Serialization.JsonContractType Dictionary
    static constexpr const int Dictionary = 5;
    // Get static field: static public Newtonsoft.Json.Serialization.JsonContractType Dictionary
    static ::Newtonsoft::Json::Serialization::JsonContractType _get_Dictionary();
    // Set static field: static public Newtonsoft.Json.Serialization.JsonContractType Dictionary
    static void _set_Dictionary(::Newtonsoft::Json::Serialization::JsonContractType value);
    // static field const value: static public Newtonsoft.Json.Serialization.JsonContractType Dynamic
    static constexpr const int Dynamic = 6;
    // Get static field: static public Newtonsoft.Json.Serialization.JsonContractType Dynamic
    static ::Newtonsoft::Json::Serialization::JsonContractType _get_Dynamic();
    // Set static field: static public Newtonsoft.Json.Serialization.JsonContractType Dynamic
    static void _set_Dynamic(::Newtonsoft::Json::Serialization::JsonContractType value);
    // static field const value: static public Newtonsoft.Json.Serialization.JsonContractType Serializable
    static constexpr const int Serializable = 7;
    // Get static field: static public Newtonsoft.Json.Serialization.JsonContractType Serializable
    static ::Newtonsoft::Json::Serialization::JsonContractType _get_Serializable();
    // Set static field: static public Newtonsoft.Json.Serialization.JsonContractType Serializable
    static void _set_Serializable(::Newtonsoft::Json::Serialization::JsonContractType value);
    // static field const value: static public Newtonsoft.Json.Serialization.JsonContractType Linq
    static constexpr const int Linq = 8;
    // Get static field: static public Newtonsoft.Json.Serialization.JsonContractType Linq
    static ::Newtonsoft::Json::Serialization::JsonContractType _get_Linq();
    // Set static field: static public Newtonsoft.Json.Serialization.JsonContractType Linq
    static void _set_Linq(::Newtonsoft::Json::Serialization::JsonContractType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Newtonsoft.Json.Serialization.JsonContractType
  #pragma pack(pop)
  static check_size<sizeof(JsonContractType), 0 + sizeof(int)> __Newtonsoft_Json_Serialization_JsonContractTypeSizeCheck;
  static_assert(sizeof(JsonContractType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
