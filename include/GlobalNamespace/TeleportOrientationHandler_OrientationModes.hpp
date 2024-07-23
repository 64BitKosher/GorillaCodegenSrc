// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TeleportOrientationHandler
#include "GlobalNamespace/TeleportOrientationHandler.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TeleportOrientationHandler::OrientationModes, "", "TeleportOrientationHandler/OrientationModes");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TeleportOrientationHandler/OrientationModes
  // [TokenAttribute] Offset: FFFFFFFF
  struct TeleportOrientationHandler::OrientationModes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OrientationModes
    constexpr OrientationModes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TeleportOrientationHandler/OrientationModes HeadRelative
    static constexpr const int HeadRelative = 0;
    // Get static field: static public TeleportOrientationHandler/OrientationModes HeadRelative
    static ::GlobalNamespace::TeleportOrientationHandler::OrientationModes _get_HeadRelative();
    // Set static field: static public TeleportOrientationHandler/OrientationModes HeadRelative
    static void _set_HeadRelative(::GlobalNamespace::TeleportOrientationHandler::OrientationModes value);
    // static field const value: static public TeleportOrientationHandler/OrientationModes ForwardFacing
    static constexpr const int ForwardFacing = 1;
    // Get static field: static public TeleportOrientationHandler/OrientationModes ForwardFacing
    static ::GlobalNamespace::TeleportOrientationHandler::OrientationModes _get_ForwardFacing();
    // Set static field: static public TeleportOrientationHandler/OrientationModes ForwardFacing
    static void _set_ForwardFacing(::GlobalNamespace::TeleportOrientationHandler::OrientationModes value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // TeleportOrientationHandler/OrientationModes
  #pragma pack(pop)
  static check_size<sizeof(TeleportOrientationHandler::OrientationModes), 0 + sizeof(int)> __GlobalNamespace_TeleportOrientationHandler_OrientationModesSizeCheck;
  static_assert(sizeof(TeleportOrientationHandler::OrientationModes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"