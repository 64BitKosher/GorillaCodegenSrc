// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaNetworking.GorillaComputer
#include "GorillaNetworking/GorillaComputer.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GorillaNetworking::GorillaComputer::NameCheckResult, "GorillaNetworking", "GorillaComputer/NameCheckResult");
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworking.GorillaComputer/NameCheckResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct GorillaComputer::NameCheckResult/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NameCheckResult
    constexpr NameCheckResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public GorillaNetworking.GorillaComputer/NameCheckResult Success
    static constexpr const int Success = 0;
    // Get static field: static public GorillaNetworking.GorillaComputer/NameCheckResult Success
    static ::GorillaNetworking::GorillaComputer::NameCheckResult _get_Success();
    // Set static field: static public GorillaNetworking.GorillaComputer/NameCheckResult Success
    static void _set_Success(::GorillaNetworking::GorillaComputer::NameCheckResult value);
    // static field const value: static public GorillaNetworking.GorillaComputer/NameCheckResult Warning
    static constexpr const int Warning = 1;
    // Get static field: static public GorillaNetworking.GorillaComputer/NameCheckResult Warning
    static ::GorillaNetworking::GorillaComputer::NameCheckResult _get_Warning();
    // Set static field: static public GorillaNetworking.GorillaComputer/NameCheckResult Warning
    static void _set_Warning(::GorillaNetworking::GorillaComputer::NameCheckResult value);
    // static field const value: static public GorillaNetworking.GorillaComputer/NameCheckResult Ban
    static constexpr const int Ban = 2;
    // Get static field: static public GorillaNetworking.GorillaComputer/NameCheckResult Ban
    static ::GorillaNetworking::GorillaComputer::NameCheckResult _get_Ban();
    // Set static field: static public GorillaNetworking.GorillaComputer/NameCheckResult Ban
    static void _set_Ban(::GorillaNetworking::GorillaComputer::NameCheckResult value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // GorillaNetworking.GorillaComputer/NameCheckResult
  #pragma pack(pop)
  static check_size<sizeof(GorillaComputer::NameCheckResult), 0 + sizeof(int)> __GorillaNetworking_GorillaComputer_NameCheckResultSizeCheck;
  static_assert(sizeof(GorillaComputer::NameCheckResult) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
