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
// Including type: Fusion.NetworkRunnerCallbackArgs
#include "Fusion/NetworkRunnerCallbackArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkRunner
  class NetworkRunner;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkEvents::ConnectRequestEvent);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkEvents::ConnectRequestEvent*, "Fusion", "NetworkEvents/ConnectRequestEvent");
// Type namespace: Fusion
namespace Fusion {
  // WARNING Size may be invalid!
  // Autogenerated type: Fusion.NetworkEvents/ConnectRequestEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkEvents::ConnectRequestEvent : public ::UnityEngine::Events::UnityEvent_3<::Fusion::NetworkRunner*, ::Fusion::NetworkRunnerCallbackArgs::ConnectRequest*, ::ArrayW<uint8_t>> {
    public:
    // public System.Void .ctor()
    // Offset: 0x2B520A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkEvents::ConnectRequestEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkEvents::ConnectRequestEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkEvents::ConnectRequestEvent*, creationType>()));
    }
  }; // Fusion.NetworkEvents/ConnectRequestEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkEvents::ConnectRequestEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
