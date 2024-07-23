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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: SystemVoipStatus
  struct SystemVoipStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::SystemVoipStatus, "Oculus.Platform", "SystemVoipStatus");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.SystemVoipStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct SystemVoipStatus/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SystemVoipStatus
    constexpr SystemVoipStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Oculus.Platform.SystemVoipStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.SystemVoipStatus Unknown
    static ::Oculus::Platform::SystemVoipStatus _get_Unknown();
    // Set static field: static public Oculus.Platform.SystemVoipStatus Unknown
    static void _set_Unknown(::Oculus::Platform::SystemVoipStatus value);
    // static field const value: static public Oculus.Platform.SystemVoipStatus Unavailable
    static constexpr const int Unavailable = 1;
    // Get static field: static public Oculus.Platform.SystemVoipStatus Unavailable
    static ::Oculus::Platform::SystemVoipStatus _get_Unavailable();
    // Set static field: static public Oculus.Platform.SystemVoipStatus Unavailable
    static void _set_Unavailable(::Oculus::Platform::SystemVoipStatus value);
    // static field const value: static public Oculus.Platform.SystemVoipStatus Suppressed
    static constexpr const int Suppressed = 2;
    // Get static field: static public Oculus.Platform.SystemVoipStatus Suppressed
    static ::Oculus::Platform::SystemVoipStatus _get_Suppressed();
    // Set static field: static public Oculus.Platform.SystemVoipStatus Suppressed
    static void _set_Suppressed(::Oculus::Platform::SystemVoipStatus value);
    // static field const value: static public Oculus.Platform.SystemVoipStatus Active
    static constexpr const int Active = 3;
    // Get static field: static public Oculus.Platform.SystemVoipStatus Active
    static ::Oculus::Platform::SystemVoipStatus _get_Active();
    // Set static field: static public Oculus.Platform.SystemVoipStatus Active
    static void _set_Active(::Oculus::Platform::SystemVoipStatus value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Platform.SystemVoipStatus
  #pragma pack(pop)
  static check_size<sizeof(SystemVoipStatus), 0 + sizeof(int)> __Oculus_Platform_SystemVoipStatusSizeCheck;
  static_assert(sizeof(SystemVoipStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
