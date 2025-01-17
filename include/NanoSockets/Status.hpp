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
// Type namespace: NanoSockets
namespace NanoSockets {
  // Forward declaring type: Status
  struct Status;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::NanoSockets::Status, "NanoSockets", "Status");
// Type namespace: NanoSockets
namespace NanoSockets {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: NanoSockets.Status
  // [TokenAttribute] Offset: FFFFFFFF
  struct Status/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Status
    constexpr Status(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public NanoSockets.Status Ok
    static constexpr const int Ok = 0;
    // Get static field: static public NanoSockets.Status Ok
    static ::NanoSockets::Status _get_Ok();
    // Set static field: static public NanoSockets.Status Ok
    static void _set_Ok(::NanoSockets::Status value);
    // static field const value: static public NanoSockets.Status Error
    static constexpr const int Error = -1;
    // Get static field: static public NanoSockets.Status Error
    static ::NanoSockets::Status _get_Error();
    // Set static field: static public NanoSockets.Status Error
    static void _set_Error(::NanoSockets::Status value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // NanoSockets.Status
  #pragma pack(pop)
  static check_size<sizeof(Status), 0 + sizeof(int)> __NanoSockets_StatusSizeCheck;
  static_assert(sizeof(Status) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
