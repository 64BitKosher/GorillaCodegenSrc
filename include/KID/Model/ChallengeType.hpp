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
  // Forward declaring type: ChallengeType
  struct ChallengeType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::KID::Model::ChallengeType, "KID.Model", "ChallengeType");
// Type namespace: KID.Model
namespace KID::Model {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: KID.Model.ChallengeType
  // [TokenAttribute] Offset: FFFFFFFF
  // [JsonConverterAttribute] Offset: FFFFFFFF
  struct ChallengeType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ChallengeType
    constexpr ChallengeType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public KID.Model.ChallengeType CHALLENGEPARENTALCONSENT
    static constexpr const int CHALLENGEPARENTALCONSENT = 1;
    // Get static field: static public KID.Model.ChallengeType CHALLENGEPARENTALCONSENT
    static ::KID::Model::ChallengeType _get_CHALLENGEPARENTALCONSENT();
    // Set static field: static public KID.Model.ChallengeType CHALLENGEPARENTALCONSENT
    static void _set_CHALLENGEPARENTALCONSENT(::KID::Model::ChallengeType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // KID.Model.ChallengeType
  #pragma pack(pop)
  static check_size<sizeof(ChallengeType), 0 + sizeof(int)> __KID_Model_ChallengeTypeSizeCheck;
  static_assert(sizeof(ChallengeType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"