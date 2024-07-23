// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Simulation/Statistics
#include "Fusion/Simulation_Statistics.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.ISampleData
#include "Fusion/ISampleData.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Simulation::Statistics::RPCSample, "Fusion", "Simulation/Statistics/RPCSample");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.Simulation/Statistics/RPCSample
  // [TokenAttribute] Offset: FFFFFFFF
  struct Simulation::Statistics::RPCSample/*, public ::System::ValueType, public ::Fusion::ISampleData*/ {
    public:
    public:
    // public System.UInt16 Behaviour
    // Size: 0x2
    // Offset: 0x0
    uint16_t Behaviour;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.UInt16 Method
    // Size: 0x2
    // Offset: 0x2
    uint16_t Method;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    public:
    // Creating value type constructor for type: RPCSample
    constexpr RPCSample(uint16_t Behaviour_ = {}, uint16_t Method_ = {}) noexcept : Behaviour{Behaviour_}, Method{Method_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Fusion::ISampleData
    operator ::Fusion::ISampleData() noexcept {
      return *reinterpret_cast<::Fusion::ISampleData*>(this);
    }
    // Get instance field reference: public System.UInt16 Behaviour
    [[deprecated("Use field access instead!")]] uint16_t& dyn_Behaviour();
    // Get instance field reference: public System.UInt16 Method
    [[deprecated("Use field access instead!")]] uint16_t& dyn_Method();
    // public System.Int32 get_TickValue()
    // Offset: 0x2B81A6C
    int get_TickValue();
    // public System.Single get_TimeValue()
    // Offset: 0x2B81A74
    float get_TimeValue();
    // public System.Single get_FloatValue()
    // Offset: 0x2B81A7C
    float get_FloatValue();
  }; // Fusion.Simulation/Statistics/RPCSample
  #pragma pack(pop)
  static check_size<sizeof(Simulation::Statistics::RPCSample), 2 + sizeof(uint16_t)> __Fusion_Simulation_Statistics_RPCSampleSizeCheck;
  static_assert(sizeof(Simulation::Statistics::RPCSample) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Simulation::Statistics::RPCSample::get_TickValue
// Il2CppName: get_TickValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::Simulation::Statistics::RPCSample::*)()>(&Fusion::Simulation::Statistics::RPCSample::get_TickValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Statistics::RPCSample), "get_TickValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Statistics::RPCSample::get_TimeValue
// Il2CppName: get_TimeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Fusion::Simulation::Statistics::RPCSample::*)()>(&Fusion::Simulation::Statistics::RPCSample::get_TimeValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Statistics::RPCSample), "get_TimeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::Statistics::RPCSample::get_FloatValue
// Il2CppName: get_FloatValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Fusion::Simulation::Statistics::RPCSample::*)()>(&Fusion::Simulation::Statistics::RPCSample::get_FloatValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::Statistics::RPCSample), "get_FloatValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};