// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.Tick
#include "Fusion/Tick.hpp"
// Including type: Fusion.SimulationMessageList
#include "Fusion/SimulationMessageList.hpp"
// Including type: Fusion.SimulationGlobalState
#include "Fusion/SimulationGlobalState.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkObjectPacketData
  struct NetworkObjectPacketData;
  // Forward declaring type: Simulation
  class Simulation;
  // Forward declaring type: NetworkId
  struct NetworkId;
  // Forward declaring type: NetworkObjectPacketFlags
  struct NetworkObjectPacketFlags;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: SimulationPacketEnvelope
  struct SimulationPacketEnvelope;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::SimulationPacketEnvelope, "Fusion", "SimulationPacketEnvelope");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x48
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.SimulationPacketEnvelope
  // [TokenAttribute] Offset: FFFFFFFF
  struct SimulationPacketEnvelope/*, public ::System::ValueType*/ {
    public:
    public:
    // public Fusion.Tick Tick
    // Size: 0x4
    // Offset: 0x0
    ::Fusion::Tick Tick;
    // Field size check
    static_assert(sizeof(::Fusion::Tick) == 0x4);
    // public System.Boolean HasSnapshot
    // Size: 0x1
    // Offset: 0x4
    bool HasSnapshot;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: HasSnapshot and: Messages
    char __padding1[0x3] = {};
    // public Fusion.SimulationMessageList Messages
    // Size: 0x18
    // Offset: 0x8
    ::Fusion::SimulationMessageList Messages;
    // Field size check
    static_assert(sizeof(::Fusion::SimulationMessageList) == 0x18);
    // public Fusion.NetworkObjectPacketData* ObjectData
    // Size: 0x8
    // Offset: 0x20
    ::Fusion::NetworkObjectPacketData* ObjectData;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkObjectPacketData*) == 0x8);
    // public System.Int32 ObjectDataCount
    // Size: 0x4
    // Offset: 0x28
    int ObjectDataCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 ObjectDataCapacity
    // Size: 0x4
    // Offset: 0x2C
    int ObjectDataCapacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Fusion.SimulationGlobalState GlobalState
    // Size: 0x18
    // Offset: 0x30
    ::Fusion::SimulationGlobalState GlobalState;
    // Field size check
    static_assert(sizeof(::Fusion::SimulationGlobalState) == 0x18);
    public:
    // Creating value type constructor for type: SimulationPacketEnvelope
    constexpr SimulationPacketEnvelope(::Fusion::Tick Tick_ = {}, bool HasSnapshot_ = {}, ::Fusion::SimulationMessageList Messages_ = {}, ::Fusion::NetworkObjectPacketData* ObjectData_ = {}, int ObjectDataCount_ = {}, int ObjectDataCapacity_ = {}, ::Fusion::SimulationGlobalState GlobalState_ = {}) noexcept : Tick{Tick_}, HasSnapshot{HasSnapshot_}, Messages{Messages_}, ObjectData{ObjectData_}, ObjectDataCount{ObjectDataCount_}, ObjectDataCapacity{ObjectDataCapacity_}, GlobalState{GlobalState_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static field const value: static private System.Int32 MIN_CAPACITY
    static constexpr const int MIN_CAPACITY = 64;
    // Get static field: static private System.Int32 MIN_CAPACITY
    static int _get_MIN_CAPACITY();
    // Set static field: static private System.Int32 MIN_CAPACITY
    static void _set_MIN_CAPACITY(int value);
    // Get instance field reference: public Fusion.Tick Tick
    [[deprecated("Use field access instead!")]] ::Fusion::Tick& dyn_Tick();
    // Get instance field reference: public System.Boolean HasSnapshot
    [[deprecated("Use field access instead!")]] bool& dyn_HasSnapshot();
    // Get instance field reference: public Fusion.SimulationMessageList Messages
    [[deprecated("Use field access instead!")]] ::Fusion::SimulationMessageList& dyn_Messages();
    // Get instance field reference: public Fusion.NetworkObjectPacketData* ObjectData
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkObjectPacketData*& dyn_ObjectData();
    // Get instance field reference: public System.Int32 ObjectDataCount
    [[deprecated("Use field access instead!")]] int& dyn_ObjectDataCount();
    // Get instance field reference: public System.Int32 ObjectDataCapacity
    [[deprecated("Use field access instead!")]] int& dyn_ObjectDataCapacity();
    // Get instance field reference: public Fusion.SimulationGlobalState GlobalState
    [[deprecated("Use field access instead!")]] ::Fusion::SimulationGlobalState& dyn_GlobalState();
    // public System.Void AddObjectPacketData(Fusion.Simulation sim, Fusion.NetworkId id, Fusion.Tick tick, Fusion.NetworkObjectPacketFlags flags)
    // Offset: 0x2B7CB48
    void AddObjectPacketData(::Fusion::Simulation* sim, ::Fusion::NetworkId id, ::Fusion::Tick tick, ::Fusion::NetworkObjectPacketFlags flags);
    // static System.Void Free(Fusion.Simulation sim, Fusion.SimulationPacketEnvelope* envelope)
    // Offset: 0x2B855E8
    static void Free(::Fusion::Simulation* sim, ::Fusion::SimulationPacketEnvelope* envelope);
    // static Fusion.SimulationPacketEnvelope* Alloc(Fusion.Simulation sim)
    // Offset: 0x2B85638
    static ::Fusion::SimulationPacketEnvelope* Alloc(::Fusion::Simulation* sim);
  }; // Fusion.SimulationPacketEnvelope
  #pragma pack(pop)
  static check_size<sizeof(SimulationPacketEnvelope), 48 + sizeof(::Fusion::SimulationGlobalState)> __Fusion_SimulationPacketEnvelopeSizeCheck;
  static_assert(sizeof(SimulationPacketEnvelope) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::SimulationPacketEnvelope::AddObjectPacketData
// Il2CppName: AddObjectPacketData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SimulationPacketEnvelope::*)(::Fusion::Simulation*, ::Fusion::NetworkId, ::Fusion::Tick, ::Fusion::NetworkObjectPacketFlags)>(&Fusion::SimulationPacketEnvelope::AddObjectPacketData)> {
  static const MethodInfo* get() {
    static auto* sim = &::il2cpp_utils::GetClassFromName("Fusion", "Simulation")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkId")->byval_arg;
    static auto* tick = &::il2cpp_utils::GetClassFromName("Fusion", "Tick")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkObjectPacketFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationPacketEnvelope), "AddObjectPacketData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sim, id, tick, flags});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationPacketEnvelope::Free
// Il2CppName: Free
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Simulation*, ::Fusion::SimulationPacketEnvelope*)>(&Fusion::SimulationPacketEnvelope::Free)> {
  static const MethodInfo* get() {
    static auto* sim = &::il2cpp_utils::GetClassFromName("Fusion", "Simulation")->byval_arg;
    static auto* envelope = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion", "SimulationPacketEnvelope"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationPacketEnvelope), "Free", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sim, envelope});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationPacketEnvelope::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::SimulationPacketEnvelope* (*)(::Fusion::Simulation*)>(&Fusion::SimulationPacketEnvelope::Alloc)> {
  static const MethodInfo* get() {
    static auto* sim = &::il2cpp_utils::GetClassFromName("Fusion", "Simulation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationPacketEnvelope), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sim});
  }
};
