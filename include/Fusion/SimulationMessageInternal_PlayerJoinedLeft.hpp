// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.PlayerRef
#include "Fusion/PlayerRef.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: SimulationMessageInternal_PlayerJoinedLeft
  struct SimulationMessageInternal_PlayerJoinedLeft;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::SimulationMessageInternal_PlayerJoinedLeft, "Fusion", "SimulationMessageInternal_PlayerJoinedLeft");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion.SimulationMessageInternal_PlayerJoinedLeft
  // [TokenAttribute] Offset: FFFFFFFF
  struct SimulationMessageInternal_PlayerJoinedLeft/*, public ::System::ValueType*/ {
    public:
    public:
    // public Fusion.PlayerRef Player
    // Size: 0x4
    // Offset: 0x0
    ::Fusion::PlayerRef Player;
    // Field size check
    static_assert(sizeof(::Fusion::PlayerRef) == 0x4);
    // public System.Int32 Joined
    // Size: 0x4
    // Offset: 0x4
    int Joined;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SimulationMessageInternal_PlayerJoinedLeft
    constexpr SimulationMessageInternal_PlayerJoinedLeft(::Fusion::PlayerRef Player_ = {}, int Joined_ = {}) noexcept : Player{Player_}, Joined{Joined_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static field const value: static public System.Int32 SIZE
    static constexpr const int SIZE = 8;
    // Get static field: static public System.Int32 SIZE
    static int _get_SIZE();
    // Set static field: static public System.Int32 SIZE
    static void _set_SIZE(int value);
    // Get instance field reference: public Fusion.PlayerRef Player
    [[deprecated("Use field access instead!")]] ::Fusion::PlayerRef& dyn_Player();
    // Get instance field reference: public System.Int32 Joined
    [[deprecated("Use field access instead!")]] int& dyn_Joined();
  }; // Fusion.SimulationMessageInternal_PlayerJoinedLeft
  #pragma pack(pop)
  static check_size<sizeof(SimulationMessageInternal_PlayerJoinedLeft), 4 + sizeof(int)> __Fusion_SimulationMessageInternal_PlayerJoinedLeftSizeCheck;
  static_assert(sizeof(SimulationMessageInternal_PlayerJoinedLeft) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
