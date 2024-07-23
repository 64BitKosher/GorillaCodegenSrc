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
// Type namespace: Fusion.Protocol
namespace Fusion::Protocol {
  // Forward declaring type: ProtocolMessageVersion
  struct ProtocolMessageVersion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Protocol::ProtocolMessageVersion, "Fusion.Protocol", "ProtocolMessageVersion");
// Type namespace: Fusion.Protocol
namespace Fusion::Protocol {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Protocol.ProtocolMessageVersion
  // [TokenAttribute] Offset: FFFFFFFF
  struct ProtocolMessageVersion/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: ProtocolMessageVersion
    constexpr ProtocolMessageVersion(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.Protocol.ProtocolMessageVersion Invalid
    static constexpr const uint8_t Invalid = 0u;
    // Get static field: static public Fusion.Protocol.ProtocolMessageVersion Invalid
    static ::Fusion::Protocol::ProtocolMessageVersion _get_Invalid();
    // Set static field: static public Fusion.Protocol.ProtocolMessageVersion Invalid
    static void _set_Invalid(::Fusion::Protocol::ProtocolMessageVersion value);
    // static field const value: static public Fusion.Protocol.ProtocolMessageVersion V1_0_0
    static constexpr const uint8_t V1_0_0 = 1u;
    // Get static field: static public Fusion.Protocol.ProtocolMessageVersion V1_0_0
    static ::Fusion::Protocol::ProtocolMessageVersion _get_V1_0_0();
    // Set static field: static public Fusion.Protocol.ProtocolMessageVersion V1_0_0
    static void _set_V1_0_0(::Fusion::Protocol::ProtocolMessageVersion value);
    // static field const value: static public Fusion.Protocol.ProtocolMessageVersion V1_1_0
    static constexpr const uint8_t V1_1_0 = 2u;
    // Get static field: static public Fusion.Protocol.ProtocolMessageVersion V1_1_0
    static ::Fusion::Protocol::ProtocolMessageVersion _get_V1_1_0();
    // Set static field: static public Fusion.Protocol.ProtocolMessageVersion V1_1_0
    static void _set_V1_1_0(::Fusion::Protocol::ProtocolMessageVersion value);
    // static field const value: static public Fusion.Protocol.ProtocolMessageVersion V1_2_0
    static constexpr const uint8_t V1_2_0 = 3u;
    // Get static field: static public Fusion.Protocol.ProtocolMessageVersion V1_2_0
    static ::Fusion::Protocol::ProtocolMessageVersion _get_V1_2_0();
    // Set static field: static public Fusion.Protocol.ProtocolMessageVersion V1_2_0
    static void _set_V1_2_0(::Fusion::Protocol::ProtocolMessageVersion value);
    // static field const value: static public Fusion.Protocol.ProtocolMessageVersion V1_2_1
    static constexpr const uint8_t V1_2_1 = 4u;
    // Get static field: static public Fusion.Protocol.ProtocolMessageVersion V1_2_1
    static ::Fusion::Protocol::ProtocolMessageVersion _get_V1_2_1();
    // Set static field: static public Fusion.Protocol.ProtocolMessageVersion V1_2_1
    static void _set_V1_2_1(::Fusion::Protocol::ProtocolMessageVersion value);
    // static field const value: static public Fusion.Protocol.ProtocolMessageVersion V1_2_2
    static constexpr const uint8_t V1_2_2 = 5u;
    // Get static field: static public Fusion.Protocol.ProtocolMessageVersion V1_2_2
    static ::Fusion::Protocol::ProtocolMessageVersion _get_V1_2_2();
    // Set static field: static public Fusion.Protocol.ProtocolMessageVersion V1_2_2
    static void _set_V1_2_2(::Fusion::Protocol::ProtocolMessageVersion value);
    // static field const value: static public Fusion.Protocol.ProtocolMessageVersion V1_2_3
    static constexpr const uint8_t V1_2_3 = 6u;
    // Get static field: static public Fusion.Protocol.ProtocolMessageVersion V1_2_3
    static ::Fusion::Protocol::ProtocolMessageVersion _get_V1_2_3();
    // Set static field: static public Fusion.Protocol.ProtocolMessageVersion V1_2_3
    static void _set_V1_2_3(::Fusion::Protocol::ProtocolMessageVersion value);
    // static field const value: static public Fusion.Protocol.ProtocolMessageVersion LATEST
    static constexpr const uint8_t LATEST = 6u;
    // Get static field: static public Fusion.Protocol.ProtocolMessageVersion LATEST
    static ::Fusion::Protocol::ProtocolMessageVersion _get_LATEST();
    // Set static field: static public Fusion.Protocol.ProtocolMessageVersion LATEST
    static void _set_LATEST(::Fusion::Protocol::ProtocolMessageVersion value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // Fusion.Protocol.ProtocolMessageVersion
  #pragma pack(pop)
  static check_size<sizeof(ProtocolMessageVersion), 0 + sizeof(uint8_t)> __Fusion_Protocol_ProtocolMessageVersionSizeCheck;
  static_assert(sizeof(ProtocolMessageVersion) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
