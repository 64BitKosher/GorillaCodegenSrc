// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkEvents
#include "Fusion/NetworkEvents.hpp"
// Including type: UnityEngine.Events.UnityEvent`3
#include "UnityEngine/Events/UnityEvent_3.hpp"
// Including type: Fusion.PlayerRef
#include "Fusion/PlayerRef.hpp"
// Including type: System.ArraySegment`1
#include "System/ArraySegment_1.hpp"
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
NEED_NO_BOX(::Fusion::NetworkEvents::ReliableDataEvent);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkEvents::ReliableDataEvent*, "Fusion", "NetworkEvents/ReliableDataEvent");
// Type namespace: Fusion
namespace Fusion {
  // WARNING Size may be invalid!
  // Autogenerated type: Fusion.NetworkEvents/ReliableDataEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkEvents::ReliableDataEvent : public ::UnityEngine::Events::UnityEvent_3<::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::System::ArraySegment_1<uint8_t>> {
    public:
    // public System.Void .ctor()
    // Offset: 0x2B5232C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkEvents::ReliableDataEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkEvents::ReliableDataEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkEvents::ReliableDataEvent*, creationType>()));
    }
  }; // Fusion.NetworkEvents/ReliableDataEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkEvents::ReliableDataEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
