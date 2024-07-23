// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineCore
#include "Cinemachine/CinemachineCore.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineCore::Stage, "Cinemachine", "CinemachineCore/Stage");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineCore/Stage
  // [TokenAttribute] Offset: FFFFFFFF
  struct CinemachineCore::Stage/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Stage
    constexpr Stage(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Cinemachine.CinemachineCore/Stage Body
    static constexpr const int Body = 0;
    // Get static field: static public Cinemachine.CinemachineCore/Stage Body
    static ::Cinemachine::CinemachineCore::Stage _get_Body();
    // Set static field: static public Cinemachine.CinemachineCore/Stage Body
    static void _set_Body(::Cinemachine::CinemachineCore::Stage value);
    // static field const value: static public Cinemachine.CinemachineCore/Stage Aim
    static constexpr const int Aim = 1;
    // Get static field: static public Cinemachine.CinemachineCore/Stage Aim
    static ::Cinemachine::CinemachineCore::Stage _get_Aim();
    // Set static field: static public Cinemachine.CinemachineCore/Stage Aim
    static void _set_Aim(::Cinemachine::CinemachineCore::Stage value);
    // static field const value: static public Cinemachine.CinemachineCore/Stage Noise
    static constexpr const int Noise = 2;
    // Get static field: static public Cinemachine.CinemachineCore/Stage Noise
    static ::Cinemachine::CinemachineCore::Stage _get_Noise();
    // Set static field: static public Cinemachine.CinemachineCore/Stage Noise
    static void _set_Noise(::Cinemachine::CinemachineCore::Stage value);
    // static field const value: static public Cinemachine.CinemachineCore/Stage Finalize
    static constexpr const int Finalize = 3;
    // Get static field: static public Cinemachine.CinemachineCore/Stage Finalize
    static ::Cinemachine::CinemachineCore::Stage _get_Finalize();
    // Set static field: static public Cinemachine.CinemachineCore/Stage Finalize
    static void _set_Finalize(::Cinemachine::CinemachineCore::Stage value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Cinemachine.CinemachineCore/Stage
  #pragma pack(pop)
  static check_size<sizeof(CinemachineCore::Stage), 0 + sizeof(int)> __Cinemachine_CinemachineCore_StageSizeCheck;
  static_assert(sizeof(CinemachineCore::Stage) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
