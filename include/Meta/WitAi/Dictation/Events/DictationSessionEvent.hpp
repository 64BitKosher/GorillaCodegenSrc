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
// Forward declaring namespace: Meta::WitAi::Dictation::Data
namespace Meta::WitAi::Dictation::Data {
  // Forward declaring type: DictationSession
  class DictationSession;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Dictation.Events
namespace Meta::WitAi::Dictation::Events {
  // Forward declaring type: DictationSessionEvent
  class DictationSessionEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Dictation::Events::DictationSessionEvent);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Dictation::Events::DictationSessionEvent*, "Meta.WitAi.Dictation.Events", "DictationSessionEvent");
// Type namespace: Meta.WitAi.Dictation.Events
namespace Meta::WitAi::Dictation::Events {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.WitAi.Dictation.Events.DictationSessionEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class DictationSessionEvent : public ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Dictation::Data::DictationSession*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x2AD20E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DictationSessionEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Dictation::Events::DictationSessionEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DictationSessionEvent*, creationType>()));
    }
  }; // Meta.WitAi.Dictation.Events.DictationSessionEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Dictation::Events::DictationSessionEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
