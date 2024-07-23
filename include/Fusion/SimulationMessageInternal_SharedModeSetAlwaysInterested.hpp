// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.NetworkId
#include "Fusion/NetworkId.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: SimulationMessageInternal_SharedModeSetAlwaysInterested
  struct SimulationMessageInternal_SharedModeSetAlwaysInterested;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::SimulationMessageInternal_SharedModeSetAlwaysInterested, "Fusion", "SimulationMessageInternal_SharedModeSetAlwaysInterested");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion.SimulationMessageInternal_SharedModeSetAlwaysInterested
  // [TokenAttribute] Offset: FFFFFFFF
  struct SimulationMessageInternal_SharedModeSetAlwaysInterested/*, public ::System::ValueType*/ {
    public:
    public:
    // public Fusion.NetworkId Object
    // Size: 0x4
    // Offset: 0x0
    ::Fusion::NetworkId Object;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkId) == 0x4);
    // public System.Int32 Interested
    // Size: 0x4
    // Offset: 0x4
    int Interested;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SimulationMessageInternal_SharedModeSetAlwaysInterested
    constexpr SimulationMessageInternal_SharedModeSetAlwaysInterested(::Fusion::NetworkId Object_ = {}, int Interested_ = {}) noexcept : Object{Object_}, Interested{Interested_} {}
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
    // Get instance field reference: public Fusion.NetworkId Object
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkId& dyn_Object();
    // Get instance field reference: public System.Int32 Interested
    [[deprecated("Use field access instead!")]] int& dyn_Interested();
  }; // Fusion.SimulationMessageInternal_SharedModeSetAlwaysInterested
  #pragma pack(pop)
  static check_size<sizeof(SimulationMessageInternal_SharedModeSetAlwaysInterested), 4 + sizeof(int)> __Fusion_SimulationMessageInternal_SharedModeSetAlwaysInterestedSizeCheck;
  static_assert(sizeof(SimulationMessageInternal_SharedModeSetAlwaysInterested) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"