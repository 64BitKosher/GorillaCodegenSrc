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
// Forward declaring namespace: Meta::WitAi::Data
namespace Meta::WitAi::Data {
  // Forward declaring type: VoiceSession
  class VoiceSession;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Events
namespace Meta::WitAi::Events {
  // Forward declaring type: WitValidationEvent
  class WitValidationEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Events::WitValidationEvent);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Events::WitValidationEvent*, "Meta.WitAi.Events", "WitValidationEvent");
// Type namespace: Meta.WitAi.Events
namespace Meta::WitAi::Events {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.WitAi.Events.WitValidationEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class WitValidationEvent : public ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Data::VoiceSession*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x443A64C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitValidationEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Events::WitValidationEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitValidationEvent*, creationType>()));
    }
  }; // Meta.WitAi.Events.WitValidationEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Events::WitValidationEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
