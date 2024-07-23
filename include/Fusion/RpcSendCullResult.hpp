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
  // Forward declaring type: RpcSendCullResult
  struct RpcSendCullResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::RpcSendCullResult, "Fusion", "RpcSendCullResult");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.RpcSendCullResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct RpcSendCullResult/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RpcSendCullResult
    constexpr RpcSendCullResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.RpcSendCullResult NotCulled
    static constexpr const int NotCulled = 0;
    // Get static field: static public Fusion.RpcSendCullResult NotCulled
    static ::Fusion::RpcSendCullResult _get_NotCulled();
    // Set static field: static public Fusion.RpcSendCullResult NotCulled
    static void _set_NotCulled(::Fusion::RpcSendCullResult value);
    // static field const value: static public Fusion.RpcSendCullResult NotInvokableDuringResim
    static constexpr const int NotInvokableDuringResim = 1;
    // Get static field: static public Fusion.RpcSendCullResult NotInvokableDuringResim
    static ::Fusion::RpcSendCullResult _get_NotInvokableDuringResim();
    // Set static field: static public Fusion.RpcSendCullResult NotInvokableDuringResim
    static void _set_NotInvokableDuringResim(::Fusion::RpcSendCullResult value);
    // static field const value: static public Fusion.RpcSendCullResult InsufficientSourceAuthority
    static constexpr const int InsufficientSourceAuthority = 2;
    // Get static field: static public Fusion.RpcSendCullResult InsufficientSourceAuthority
    static ::Fusion::RpcSendCullResult _get_InsufficientSourceAuthority();
    // Set static field: static public Fusion.RpcSendCullResult InsufficientSourceAuthority
    static void _set_InsufficientSourceAuthority(::Fusion::RpcSendCullResult value);
    // static field const value: static public Fusion.RpcSendCullResult NoActiveConnections
    static constexpr const int NoActiveConnections = 3;
    // Get static field: static public Fusion.RpcSendCullResult NoActiveConnections
    static ::Fusion::RpcSendCullResult _get_NoActiveConnections();
    // Set static field: static public Fusion.RpcSendCullResult NoActiveConnections
    static void _set_NoActiveConnections(::Fusion::RpcSendCullResult value);
    // static field const value: static public Fusion.RpcSendCullResult TargetPlayerUnreachable
    static constexpr const int TargetPlayerUnreachable = 4;
    // Get static field: static public Fusion.RpcSendCullResult TargetPlayerUnreachable
    static ::Fusion::RpcSendCullResult _get_TargetPlayerUnreachable();
    // Set static field: static public Fusion.RpcSendCullResult TargetPlayerUnreachable
    static void _set_TargetPlayerUnreachable(::Fusion::RpcSendCullResult value);
    // static field const value: static public Fusion.RpcSendCullResult TargetPlayerIsLocalButRpcIsNotInvokableLocally
    static constexpr const int TargetPlayerIsLocalButRpcIsNotInvokableLocally = 5;
    // Get static field: static public Fusion.RpcSendCullResult TargetPlayerIsLocalButRpcIsNotInvokableLocally
    static ::Fusion::RpcSendCullResult _get_TargetPlayerIsLocalButRpcIsNotInvokableLocally();
    // Set static field: static public Fusion.RpcSendCullResult TargetPlayerIsLocalButRpcIsNotInvokableLocally
    static void _set_TargetPlayerIsLocalButRpcIsNotInvokableLocally(::Fusion::RpcSendCullResult value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Fusion.RpcSendCullResult
  #pragma pack(pop)
  static check_size<sizeof(RpcSendCullResult), 0 + sizeof(int)> __Fusion_RpcSendCullResultSizeCheck;
  static_assert(sizeof(RpcSendCullResult) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
