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
// Forward declaring namespace: Meta::WitAi::Json
namespace Meta::WitAi::Json {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Events
namespace Meta::WitAi::Events {
  // Forward declaring type: WitResponseEvent
  class WitResponseEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Events::WitResponseEvent);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Events::WitResponseEvent*, "Meta.WitAi.Events", "WitResponseEvent");
// Type namespace: Meta.WitAi.Events
namespace Meta::WitAi::Events {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.WitAi.Events.WitResponseEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class WitResponseEvent : public ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Json::WitResponseNode*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x443AC20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitResponseEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Events::WitResponseEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitResponseEvent*, creationType>()));
    }
  }; // Meta.WitAi.Events.WitResponseEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Events::WitResponseEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!