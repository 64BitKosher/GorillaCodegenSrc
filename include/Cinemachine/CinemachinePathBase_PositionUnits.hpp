// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachinePathBase
#include "Cinemachine/CinemachinePathBase.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachinePathBase::PositionUnits, "Cinemachine", "CinemachinePathBase/PositionUnits");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachinePathBase/PositionUnits
  // [TokenAttribute] Offset: FFFFFFFF
  struct CinemachinePathBase::PositionUnits/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PositionUnits
    constexpr PositionUnits(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Cinemachine.CinemachinePathBase/PositionUnits PathUnits
    static constexpr const int PathUnits = 0;
    // Get static field: static public Cinemachine.CinemachinePathBase/PositionUnits PathUnits
    static ::Cinemachine::CinemachinePathBase::PositionUnits _get_PathUnits();
    // Set static field: static public Cinemachine.CinemachinePathBase/PositionUnits PathUnits
    static void _set_PathUnits(::Cinemachine::CinemachinePathBase::PositionUnits value);
    // static field const value: static public Cinemachine.CinemachinePathBase/PositionUnits Distance
    static constexpr const int Distance = 1;
    // Get static field: static public Cinemachine.CinemachinePathBase/PositionUnits Distance
    static ::Cinemachine::CinemachinePathBase::PositionUnits _get_Distance();
    // Set static field: static public Cinemachine.CinemachinePathBase/PositionUnits Distance
    static void _set_Distance(::Cinemachine::CinemachinePathBase::PositionUnits value);
    // static field const value: static public Cinemachine.CinemachinePathBase/PositionUnits Normalized
    static constexpr const int Normalized = 2;
    // Get static field: static public Cinemachine.CinemachinePathBase/PositionUnits Normalized
    static ::Cinemachine::CinemachinePathBase::PositionUnits _get_Normalized();
    // Set static field: static public Cinemachine.CinemachinePathBase/PositionUnits Normalized
    static void _set_Normalized(::Cinemachine::CinemachinePathBase::PositionUnits value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Cinemachine.CinemachinePathBase/PositionUnits
  #pragma pack(pop)
  static check_size<sizeof(CinemachinePathBase::PositionUnits), 0 + sizeof(int)> __Cinemachine_CinemachinePathBase_PositionUnitsSizeCheck;
  static_assert(sizeof(CinemachinePathBase::PositionUnits) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
