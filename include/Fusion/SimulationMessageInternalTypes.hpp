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
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: SimulationMessageInternalTypes
  struct SimulationMessageInternalTypes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::SimulationMessageInternalTypes, "Fusion", "SimulationMessageInternalTypes");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.SimulationMessageInternalTypes
  // [TokenAttribute] Offset: FFFFFFFF
  struct SimulationMessageInternalTypes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SimulationMessageInternalTypes
    constexpr SimulationMessageInternalTypes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.SimulationMessageInternalTypes SharedModeSceneLoad
    static constexpr const int SharedModeSceneLoad = 1;
    // Get static field: static public Fusion.SimulationMessageInternalTypes SharedModeSceneLoad
    static ::Fusion::SimulationMessageInternalTypes _get_SharedModeSceneLoad();
    // Set static field: static public Fusion.SimulationMessageInternalTypes SharedModeSceneLoad
    static void _set_SharedModeSceneLoad(::Fusion::SimulationMessageInternalTypes value);
    // static field const value: static public Fusion.SimulationMessageInternalTypes SharedModeSceneObjectData
    static constexpr const int SharedModeSceneObjectData = 2;
    // Get static field: static public Fusion.SimulationMessageInternalTypes SharedModeSceneObjectData
    static ::Fusion::SimulationMessageInternalTypes _get_SharedModeSceneObjectData();
    // Set static field: static public Fusion.SimulationMessageInternalTypes SharedModeSceneObjectData
    static void _set_SharedModeSceneObjectData(::Fusion::SimulationMessageInternalTypes value);
    // static field const value: static public Fusion.SimulationMessageInternalTypes SharedModeSetAlwaysInterested
    static constexpr const int SharedModeSetAlwaysInterested = 3;
    // Get static field: static public Fusion.SimulationMessageInternalTypes SharedModeSetAlwaysInterested
    static ::Fusion::SimulationMessageInternalTypes _get_SharedModeSetAlwaysInterested();
    // Set static field: static public Fusion.SimulationMessageInternalTypes SharedModeSetAlwaysInterested
    static void _set_SharedModeSetAlwaysInterested(::Fusion::SimulationMessageInternalTypes value);
    // static field const value: static public Fusion.SimulationMessageInternalTypes SharedModeRequestStateAuthority
    static constexpr const int SharedModeRequestStateAuthority = 4;
    // Get static field: static public Fusion.SimulationMessageInternalTypes SharedModeRequestStateAuthority
    static ::Fusion::SimulationMessageInternalTypes _get_SharedModeRequestStateAuthority();
    // Set static field: static public Fusion.SimulationMessageInternalTypes SharedModeRequestStateAuthority
    static void _set_SharedModeRequestStateAuthority(::Fusion::SimulationMessageInternalTypes value);
    // static field const value: static public Fusion.SimulationMessageInternalTypes PlayerJoinedLeft
    static constexpr const int PlayerJoinedLeft = 5;
    // Get static field: static public Fusion.SimulationMessageInternalTypes PlayerJoinedLeft
    static ::Fusion::SimulationMessageInternalTypes _get_PlayerJoinedLeft();
    // Set static field: static public Fusion.SimulationMessageInternalTypes PlayerJoinedLeft
    static void _set_PlayerJoinedLeft(::Fusion::SimulationMessageInternalTypes value);
    // static field const value: static public Fusion.SimulationMessageInternalTypes SetPlayerObject
    static constexpr const int SetPlayerObject = 6;
    // Get static field: static public Fusion.SimulationMessageInternalTypes SetPlayerObject
    static ::Fusion::SimulationMessageInternalTypes _get_SetPlayerObject();
    // Set static field: static public Fusion.SimulationMessageInternalTypes SetPlayerObject
    static void _set_SetPlayerObject(::Fusion::SimulationMessageInternalTypes value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Fusion.SimulationMessageInternalTypes
  #pragma pack(pop)
  static check_size<sizeof(SimulationMessageInternalTypes), 0 + sizeof(int)> __Fusion_SimulationMessageInternalTypesSizeCheck;
  static_assert(sizeof(SimulationMessageInternalTypes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
