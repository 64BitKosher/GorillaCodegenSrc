// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: ISimulationEnter
  class ISimulationEnter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::ISimulationEnter);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::ISimulationEnter*, "Fusion", "ISimulationEnter");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.ISimulationEnter
  // [TokenAttribute] Offset: FFFFFFFF
  class ISimulationEnter {
    public:
    // public System.Void SimulationEnter()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SimulationEnter();
  }; // Fusion.ISimulationEnter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::ISimulationEnter::SimulationEnter
// Il2CppName: SimulationEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::ISimulationEnter::*)()>(&Fusion::ISimulationEnter::SimulationEnter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::ISimulationEnter*), "SimulationEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
