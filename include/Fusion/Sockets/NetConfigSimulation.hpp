// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.Sockets.NetConfigSimulationOscillator
#include "Fusion/Sockets/NetConfigSimulationOscillator.hpp"
// Completed includes
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetConfigSimulation
  struct NetConfigSimulation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::NetConfigSimulation, "Fusion.Sockets", "NetConfigSimulation");
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Size: 0x78
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.Sockets.NetConfigSimulation
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetConfigSimulation/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int16* LossNotifySequences
    // Size: 0x8
    // Offset: 0x0
    int16_t* LossNotifySequences;
    // Field size check
    static_assert(sizeof(int16_t*) == 0x8);
    // public System.Int32 LossNotifySequencesLength
    // Size: 0x4
    // Offset: 0x8
    int LossNotifySequencesLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: LossNotifySequencesLength and: DelayOscillator
    char __padding1[0x4] = {};
    // public Fusion.Sockets.NetConfigSimulationOscillator DelayOscillator
    // Size: 0x30
    // Offset: 0x10
    ::Fusion::Sockets::NetConfigSimulationOscillator DelayOscillator;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetConfigSimulationOscillator) == 0x30);
    // public Fusion.Sockets.NetConfigSimulationOscillator LossOscillator
    // Size: 0x30
    // Offset: 0x40
    ::Fusion::Sockets::NetConfigSimulationOscillator LossOscillator;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetConfigSimulationOscillator) == 0x30);
    // public System.Double DuplicateChance
    // Size: 0x8
    // Offset: 0x70
    double DuplicateChance;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Creating value type constructor for type: NetConfigSimulation
    constexpr NetConfigSimulation(int16_t* LossNotifySequences_ = {}, int LossNotifySequencesLength_ = {}, ::Fusion::Sockets::NetConfigSimulationOscillator DelayOscillator_ = {}, ::Fusion::Sockets::NetConfigSimulationOscillator LossOscillator_ = {}, double DuplicateChance_ = {}) noexcept : LossNotifySequences{LossNotifySequences_}, LossNotifySequencesLength{LossNotifySequencesLength_}, DelayOscillator{DelayOscillator_}, LossOscillator{LossOscillator_}, DuplicateChance{DuplicateChance_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int16* LossNotifySequences
    [[deprecated("Use field access instead!")]] int16_t*& dyn_LossNotifySequences();
    // Get instance field reference: public System.Int32 LossNotifySequencesLength
    [[deprecated("Use field access instead!")]] int& dyn_LossNotifySequencesLength();
    // Get instance field reference: public Fusion.Sockets.NetConfigSimulationOscillator DelayOscillator
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetConfigSimulationOscillator& dyn_DelayOscillator();
    // Get instance field reference: public Fusion.Sockets.NetConfigSimulationOscillator LossOscillator
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetConfigSimulationOscillator& dyn_LossOscillator();
    // Get instance field reference: public System.Double DuplicateChance
    [[deprecated("Use field access instead!")]] double& dyn_DuplicateChance();
    // static public Fusion.Sockets.NetConfigSimulation get_Defaults()
    // Offset: 0x2B911E8
    static ::Fusion::Sockets::NetConfigSimulation get_Defaults();
  }; // Fusion.Sockets.NetConfigSimulation
  #pragma pack(pop)
  static check_size<sizeof(NetConfigSimulation), 112 + sizeof(double)> __Fusion_Sockets_NetConfigSimulationSizeCheck;
  static_assert(sizeof(NetConfigSimulation) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Sockets::NetConfigSimulation::get_Defaults
// Il2CppName: get_Defaults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetConfigSimulation (*)()>(&Fusion::Sockets::NetConfigSimulation::get_Defaults)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetConfigSimulation), "get_Defaults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
