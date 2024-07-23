// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Simulation
#include "Fusion/Simulation.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Simulation::TargetObjectVerificationResult, "Fusion", "Simulation/TargetObjectVerificationResult");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Simulation/TargetObjectVerificationResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct Simulation::TargetObjectVerificationResult/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TargetObjectVerificationResult
    constexpr TargetObjectVerificationResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.Simulation/TargetObjectVerificationResult Ok
    static constexpr const int Ok = 0;
    // Get static field: static public Fusion.Simulation/TargetObjectVerificationResult Ok
    static ::Fusion::Simulation::TargetObjectVerificationResult _get_Ok();
    // Set static field: static public Fusion.Simulation/TargetObjectVerificationResult Ok
    static void _set_Ok(::Fusion::Simulation::TargetObjectVerificationResult value);
    // static field const value: static public Fusion.Simulation/TargetObjectVerificationResult ObjectNotConfirmed
    static constexpr const int ObjectNotConfirmed = 1;
    // Get static field: static public Fusion.Simulation/TargetObjectVerificationResult ObjectNotConfirmed
    static ::Fusion::Simulation::TargetObjectVerificationResult _get_ObjectNotConfirmed();
    // Set static field: static public Fusion.Simulation/TargetObjectVerificationResult ObjectNotConfirmed
    static void _set_ObjectNotConfirmed(::Fusion::Simulation::TargetObjectVerificationResult value);
    // static field const value: static public Fusion.Simulation/TargetObjectVerificationResult TargetNotInterestedInObject
    static constexpr const int TargetNotInterestedInObject = 2;
    // Get static field: static public Fusion.Simulation/TargetObjectVerificationResult TargetNotInterestedInObject
    static ::Fusion::Simulation::TargetObjectVerificationResult _get_TargetNotInterestedInObject();
    // Set static field: static public Fusion.Simulation/TargetObjectVerificationResult TargetNotInterestedInObject
    static void _set_TargetNotInterestedInObject(::Fusion::Simulation::TargetObjectVerificationResult value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Fusion.Simulation/TargetObjectVerificationResult
  #pragma pack(pop)
  static check_size<sizeof(Simulation::TargetObjectVerificationResult), 0 + sizeof(int)> __Fusion_Simulation_TargetObjectVerificationResultSizeCheck;
  static_assert(sizeof(Simulation::TargetObjectVerificationResult) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"