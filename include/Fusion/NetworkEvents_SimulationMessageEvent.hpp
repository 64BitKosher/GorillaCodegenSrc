// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkEvents
#include "Fusion/NetworkEvents.hpp"
// Including type: UnityEngine.Events.UnityEvent`2
#include "UnityEngine/Events/UnityEvent_2.hpp"
// Including type: Fusion.SimulationMessagePtr
#include "Fusion/SimulationMessagePtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkRunner
  class NetworkRunner;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkEvents::SimulationMessageEvent);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkEvents::SimulationMessageEvent*, "Fusion", "NetworkEvents/SimulationMessageEvent");
// Type namespace: Fusion
namespace Fusion {
  // WARNING Size may be invalid!
  // Autogenerated type: Fusion.NetworkEvents/SimulationMessageEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkEvents::SimulationMessageEvent : public ::UnityEngine::Events::UnityEvent_2<::Fusion::NetworkRunner*, ::Fusion::SimulationMessagePtr> {
    public:
    // public System.Void .ctor()
    // Offset: 0x2B5220C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkEvents::SimulationMessageEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkEvents::SimulationMessageEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkEvents::SimulationMessageEvent*, creationType>()));
    }
  }; // Fusion.NetworkEvents/SimulationMessageEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkEvents::SimulationMessageEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!