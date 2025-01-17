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
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB_MeshPivotLocation
  struct MB_MeshPivotLocation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB_MeshPivotLocation, "DigitalOpus.MB.Core", "MB_MeshPivotLocation");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB_MeshPivotLocation
  // [TokenAttribute] Offset: FFFFFFFF
  struct MB_MeshPivotLocation/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MB_MeshPivotLocation
    constexpr MB_MeshPivotLocation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DigitalOpus.MB.Core.MB_MeshPivotLocation worldOrigin
    static constexpr const int worldOrigin = 0;
    // Get static field: static public DigitalOpus.MB.Core.MB_MeshPivotLocation worldOrigin
    static ::DigitalOpus::MB::Core::MB_MeshPivotLocation _get_worldOrigin();
    // Set static field: static public DigitalOpus.MB.Core.MB_MeshPivotLocation worldOrigin
    static void _set_worldOrigin(::DigitalOpus::MB::Core::MB_MeshPivotLocation value);
    // static field const value: static public DigitalOpus.MB.Core.MB_MeshPivotLocation boundsCenter
    static constexpr const int boundsCenter = 1;
    // Get static field: static public DigitalOpus.MB.Core.MB_MeshPivotLocation boundsCenter
    static ::DigitalOpus::MB::Core::MB_MeshPivotLocation _get_boundsCenter();
    // Set static field: static public DigitalOpus.MB.Core.MB_MeshPivotLocation boundsCenter
    static void _set_boundsCenter(::DigitalOpus::MB::Core::MB_MeshPivotLocation value);
    // static field const value: static public DigitalOpus.MB.Core.MB_MeshPivotLocation customLocation
    static constexpr const int customLocation = 2;
    // Get static field: static public DigitalOpus.MB.Core.MB_MeshPivotLocation customLocation
    static ::DigitalOpus::MB::Core::MB_MeshPivotLocation _get_customLocation();
    // Set static field: static public DigitalOpus.MB.Core.MB_MeshPivotLocation customLocation
    static void _set_customLocation(::DigitalOpus::MB::Core::MB_MeshPivotLocation value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // DigitalOpus.MB.Core.MB_MeshPivotLocation
  #pragma pack(pop)
  static check_size<sizeof(MB_MeshPivotLocation), 0 + sizeof(int)> __DigitalOpus_MB_Core_MB_MeshPivotLocationSizeCheck;
  static_assert(sizeof(MB_MeshPivotLocation) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
