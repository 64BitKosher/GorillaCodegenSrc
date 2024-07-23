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
  // Forward declaring type: RpcTargets
  struct RpcTargets;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::RpcTargets, "Fusion", "RpcTargets");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.RpcTargets
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct RpcTargets/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RpcTargets
    constexpr RpcTargets(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.RpcTargets StateAuthority
    static constexpr const int StateAuthority = 1;
    // Get static field: static public Fusion.RpcTargets StateAuthority
    static ::Fusion::RpcTargets _get_StateAuthority();
    // Set static field: static public Fusion.RpcTargets StateAuthority
    static void _set_StateAuthority(::Fusion::RpcTargets value);
    // static field const value: static public Fusion.RpcTargets InputAuthority
    static constexpr const int InputAuthority = 2;
    // Get static field: static public Fusion.RpcTargets InputAuthority
    static ::Fusion::RpcTargets _get_InputAuthority();
    // Set static field: static public Fusion.RpcTargets InputAuthority
    static void _set_InputAuthority(::Fusion::RpcTargets value);
    // static field const value: static public Fusion.RpcTargets Proxies
    static constexpr const int Proxies = 4;
    // Get static field: static public Fusion.RpcTargets Proxies
    static ::Fusion::RpcTargets _get_Proxies();
    // Set static field: static public Fusion.RpcTargets Proxies
    static void _set_Proxies(::Fusion::RpcTargets value);
    // static field const value: static public Fusion.RpcTargets All
    static constexpr const int All = 7;
    // Get static field: static public Fusion.RpcTargets All
    static ::Fusion::RpcTargets _get_All();
    // Set static field: static public Fusion.RpcTargets All
    static void _set_All(::Fusion::RpcTargets value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Fusion.RpcTargets
  #pragma pack(pop)
  static check_size<sizeof(RpcTargets), 0 + sizeof(int)> __Fusion_RpcTargetsSizeCheck;
  static_assert(sizeof(RpcTargets) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"