// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkRigidbodyBase
#include "Fusion/NetworkRigidbodyBase.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkRigidbodyBase::NetworkRigidbodyFlags, "Fusion", "NetworkRigidbodyBase/NetworkRigidbodyFlags");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkRigidbodyBase/NetworkRigidbodyFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct NetworkRigidbodyBase::NetworkRigidbodyFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: NetworkRigidbodyFlags
    constexpr NetworkRigidbodyFlags(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.NetworkRigidbodyBase/NetworkRigidbodyFlags IsKinematic
    static constexpr const uint8_t IsKinematic = 1u;
    // Get static field: static public Fusion.NetworkRigidbodyBase/NetworkRigidbodyFlags IsKinematic
    static ::Fusion::NetworkRigidbodyBase::NetworkRigidbodyFlags _get_IsKinematic();
    // Set static field: static public Fusion.NetworkRigidbodyBase/NetworkRigidbodyFlags IsKinematic
    static void _set_IsKinematic(::Fusion::NetworkRigidbodyBase::NetworkRigidbodyFlags value);
    // static field const value: static public Fusion.NetworkRigidbodyBase/NetworkRigidbodyFlags UseGravity
    static constexpr const uint8_t UseGravity = 2u;
    // Get static field: static public Fusion.NetworkRigidbodyBase/NetworkRigidbodyFlags UseGravity
    static ::Fusion::NetworkRigidbodyBase::NetworkRigidbodyFlags _get_UseGravity();
    // Set static field: static public Fusion.NetworkRigidbodyBase/NetworkRigidbodyFlags UseGravity
    static void _set_UseGravity(::Fusion::NetworkRigidbodyBase::NetworkRigidbodyFlags value);
    // static field const value: static public Fusion.NetworkRigidbodyBase/NetworkRigidbodyFlags IsSleeping
    static constexpr const uint8_t IsSleeping = 4u;
    // Get static field: static public Fusion.NetworkRigidbodyBase/NetworkRigidbodyFlags IsSleeping
    static ::Fusion::NetworkRigidbodyBase::NetworkRigidbodyFlags _get_IsSleeping();
    // Set static field: static public Fusion.NetworkRigidbodyBase/NetworkRigidbodyFlags IsSleeping
    static void _set_IsSleeping(::Fusion::NetworkRigidbodyBase::NetworkRigidbodyFlags value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // Fusion.NetworkRigidbodyBase/NetworkRigidbodyFlags
  #pragma pack(pop)
  static check_size<sizeof(NetworkRigidbodyBase::NetworkRigidbodyFlags), 0 + sizeof(uint8_t)> __Fusion_NetworkRigidbodyBase_NetworkRigidbodyFlagsSizeCheck;
  static_assert(sizeof(NetworkRigidbodyBase::NetworkRigidbodyFlags) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
