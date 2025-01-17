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
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: ReceiverGroup
  struct ReceiverGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::ReceiverGroup, "Fusion.Photon.Realtime", "ReceiverGroup");
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Photon.Realtime.ReceiverGroup
  // [TokenAttribute] Offset: FFFFFFFF
  struct ReceiverGroup/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: ReceiverGroup
    constexpr ReceiverGroup(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.Photon.Realtime.ReceiverGroup Others
    static constexpr const uint8_t Others = 0u;
    // Get static field: static public Fusion.Photon.Realtime.ReceiverGroup Others
    static ::Fusion::Photon::Realtime::ReceiverGroup _get_Others();
    // Set static field: static public Fusion.Photon.Realtime.ReceiverGroup Others
    static void _set_Others(::Fusion::Photon::Realtime::ReceiverGroup value);
    // static field const value: static public Fusion.Photon.Realtime.ReceiverGroup All
    static constexpr const uint8_t All = 1u;
    // Get static field: static public Fusion.Photon.Realtime.ReceiverGroup All
    static ::Fusion::Photon::Realtime::ReceiverGroup _get_All();
    // Set static field: static public Fusion.Photon.Realtime.ReceiverGroup All
    static void _set_All(::Fusion::Photon::Realtime::ReceiverGroup value);
    // static field const value: static public Fusion.Photon.Realtime.ReceiverGroup MasterClient
    static constexpr const uint8_t MasterClient = 2u;
    // Get static field: static public Fusion.Photon.Realtime.ReceiverGroup MasterClient
    static ::Fusion::Photon::Realtime::ReceiverGroup _get_MasterClient();
    // Set static field: static public Fusion.Photon.Realtime.ReceiverGroup MasterClient
    static void _set_MasterClient(::Fusion::Photon::Realtime::ReceiverGroup value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // Fusion.Photon.Realtime.ReceiverGroup
  #pragma pack(pop)
  static check_size<sizeof(ReceiverGroup), 0 + sizeof(uint8_t)> __Fusion_Photon_Realtime_ReceiverGroupSizeCheck;
  static_assert(sizeof(ReceiverGroup) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
