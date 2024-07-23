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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: Architecture
  struct Architecture;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::Architecture, "System.Runtime.InteropServices", "Architecture");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.Architecture
  // [TokenAttribute] Offset: FFFFFFFF
  struct Architecture/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Architecture
    constexpr Architecture(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.InteropServices.Architecture X86
    static constexpr const int X86 = 0;
    // Get static field: static public System.Runtime.InteropServices.Architecture X86
    static ::System::Runtime::InteropServices::Architecture _get_X86();
    // Set static field: static public System.Runtime.InteropServices.Architecture X86
    static void _set_X86(::System::Runtime::InteropServices::Architecture value);
    // static field const value: static public System.Runtime.InteropServices.Architecture X64
    static constexpr const int X64 = 1;
    // Get static field: static public System.Runtime.InteropServices.Architecture X64
    static ::System::Runtime::InteropServices::Architecture _get_X64();
    // Set static field: static public System.Runtime.InteropServices.Architecture X64
    static void _set_X64(::System::Runtime::InteropServices::Architecture value);
    // static field const value: static public System.Runtime.InteropServices.Architecture Arm
    static constexpr const int Arm = 2;
    // Get static field: static public System.Runtime.InteropServices.Architecture Arm
    static ::System::Runtime::InteropServices::Architecture _get_Arm();
    // Set static field: static public System.Runtime.InteropServices.Architecture Arm
    static void _set_Arm(::System::Runtime::InteropServices::Architecture value);
    // static field const value: static public System.Runtime.InteropServices.Architecture Arm64
    static constexpr const int Arm64 = 3;
    // Get static field: static public System.Runtime.InteropServices.Architecture Arm64
    static ::System::Runtime::InteropServices::Architecture _get_Arm64();
    // Set static field: static public System.Runtime.InteropServices.Architecture Arm64
    static void _set_Arm64(::System::Runtime::InteropServices::Architecture value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Runtime.InteropServices.Architecture
  #pragma pack(pop)
  static check_size<sizeof(Architecture), 0 + sizeof(int)> __System_Runtime_InteropServices_ArchitectureSizeCheck;
  static_assert(sizeof(Architecture) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
