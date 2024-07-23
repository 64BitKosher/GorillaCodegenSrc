// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaLocomotion.Player
#include "GorillaLocomotion/Player.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Player::LiquidType, "GorillaLocomotion", "Player/LiquidType");
// Type namespace: GorillaLocomotion
namespace GorillaLocomotion {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: GorillaLocomotion.Player/LiquidType
  // [TokenAttribute] Offset: FFFFFFFF
  struct Player::LiquidType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LiquidType
    constexpr LiquidType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public GorillaLocomotion.Player/LiquidType Water
    static constexpr const int Water = 0;
    // Get static field: static public GorillaLocomotion.Player/LiquidType Water
    static ::GorillaLocomotion::Player::LiquidType _get_Water();
    // Set static field: static public GorillaLocomotion.Player/LiquidType Water
    static void _set_Water(::GorillaLocomotion::Player::LiquidType value);
    // static field const value: static public GorillaLocomotion.Player/LiquidType Lava
    static constexpr const int Lava = 1;
    // Get static field: static public GorillaLocomotion.Player/LiquidType Lava
    static ::GorillaLocomotion::Player::LiquidType _get_Lava();
    // Set static field: static public GorillaLocomotion.Player/LiquidType Lava
    static void _set_Lava(::GorillaLocomotion::Player::LiquidType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // GorillaLocomotion.Player/LiquidType
  #pragma pack(pop)
  static check_size<sizeof(Player::LiquidType), 0 + sizeof(int)> __GorillaLocomotion_Player_LiquidTypeSizeCheck;
  static_assert(sizeof(Player::LiquidType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
