// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Configuration
namespace Meta::WitAi::Configuration {
  // Forward declaring type: WitRequestOptions
  class WitRequestOptions;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Events
namespace Meta::WitAi::Events {
  // Forward declaring type: WitRequestOptionsEvent
  class WitRequestOptionsEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Events::WitRequestOptionsEvent);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Events::WitRequestOptionsEvent*, "Meta.WitAi.Events", "WitRequestOptionsEvent");
// Type namespace: Meta.WitAi.Events
namespace Meta::WitAi::Events {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.WitAi.Events.WitRequestOptionsEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class WitRequestOptionsEvent : public ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Configuration::WitRequestOptions*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x443ABD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitRequestOptionsEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Events::WitRequestOptionsEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitRequestOptionsEvent*, creationType>()));
    }
  }; // Meta.WitAi.Events.WitRequestOptionsEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Events::WitRequestOptionsEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
