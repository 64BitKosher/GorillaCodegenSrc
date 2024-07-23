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
// Type namespace: KID.Model
namespace KID::Model {
  // Forward declaring type: AgeStatusType
  struct AgeStatusType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::KID::Model::AgeStatusType, "KID.Model", "AgeStatusType");
// Type namespace: KID.Model
namespace KID::Model {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: KID.Model.AgeStatusType
  // [TokenAttribute] Offset: FFFFFFFF
  // [JsonConverterAttribute] Offset: FFFFFFFF
  struct AgeStatusType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AgeStatusType
    constexpr AgeStatusType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public KID.Model.AgeStatusType DIGITALMINOR
    static constexpr const int DIGITALMINOR = 1;
    // Get static field: static public KID.Model.AgeStatusType DIGITALMINOR
    static ::KID::Model::AgeStatusType _get_DIGITALMINOR();
    // Set static field: static public KID.Model.AgeStatusType DIGITALMINOR
    static void _set_DIGITALMINOR(::KID::Model::AgeStatusType value);
    // static field const value: static public KID.Model.AgeStatusType DIGITALYOUTH
    static constexpr const int DIGITALYOUTH = 2;
    // Get static field: static public KID.Model.AgeStatusType DIGITALYOUTH
    static ::KID::Model::AgeStatusType _get_DIGITALYOUTH();
    // Set static field: static public KID.Model.AgeStatusType DIGITALYOUTH
    static void _set_DIGITALYOUTH(::KID::Model::AgeStatusType value);
    // static field const value: static public KID.Model.AgeStatusType LEGALADULT
    static constexpr const int LEGALADULT = 3;
    // Get static field: static public KID.Model.AgeStatusType LEGALADULT
    static ::KID::Model::AgeStatusType _get_LEGALADULT();
    // Set static field: static public KID.Model.AgeStatusType LEGALADULT
    static void _set_LEGALADULT(::KID::Model::AgeStatusType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // KID.Model.AgeStatusType
  #pragma pack(pop)
  static check_size<sizeof(AgeStatusType), 0 + sizeof(int)> __KID_Model_AgeStatusTypeSizeCheck;
  static_assert(sizeof(AgeStatusType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
