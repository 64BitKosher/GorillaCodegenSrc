// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.NetworkId
#include "Fusion/NetworkId.hpp"
// Including type: Fusion.Tick
#include "Fusion/Tick.hpp"
// Including type: Fusion.NetworkObjectPacketFlags
#include "Fusion/NetworkObjectPacketFlags.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkObjectPacketData
  struct NetworkObjectPacketData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkObjectPacketData, "Fusion", "NetworkObjectPacketData");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.NetworkObjectPacketData
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetworkObjectPacketData/*, public ::System::ValueType*/ {
    public:
    public:
    // public Fusion.NetworkId Id
    // Size: 0x4
    // Offset: 0x0
    ::Fusion::NetworkId Id;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkId) == 0x4);
    // public Fusion.Tick ResetTick
    // Size: 0x4
    // Offset: 0x4
    ::Fusion::Tick ResetTick;
    // Field size check
    static_assert(sizeof(::Fusion::Tick) == 0x4);
    // public Fusion.NetworkObjectPacketFlags Flags
    // Size: 0x4
    // Offset: 0x8
    ::Fusion::NetworkObjectPacketFlags Flags;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkObjectPacketFlags) == 0x4);
    public:
    // Creating value type constructor for type: NetworkObjectPacketData
    constexpr NetworkObjectPacketData(::Fusion::NetworkId Id_ = {}, ::Fusion::Tick ResetTick_ = {}, ::Fusion::NetworkObjectPacketFlags Flags_ = {}) noexcept : Id{Id_}, ResetTick{ResetTick_}, Flags{Flags_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Fusion.NetworkId Id
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkId& dyn_Id();
    // Get instance field reference: public Fusion.Tick ResetTick
    [[deprecated("Use field access instead!")]] ::Fusion::Tick& dyn_ResetTick();
    // Get instance field reference: public Fusion.NetworkObjectPacketFlags Flags
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkObjectPacketFlags& dyn_Flags();
  }; // Fusion.NetworkObjectPacketData
  #pragma pack(pop)
  static check_size<sizeof(NetworkObjectPacketData), 8 + sizeof(::Fusion::NetworkObjectPacketFlags)> __Fusion_NetworkObjectPacketDataSizeCheck;
  static_assert(sizeof(NetworkObjectPacketData) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"