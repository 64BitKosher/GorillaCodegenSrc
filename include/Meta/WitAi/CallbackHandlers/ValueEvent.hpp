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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Meta.WitAi.CallbackHandlers
namespace Meta::WitAi::CallbackHandlers {
  // Forward declaring type: ValueEvent
  class ValueEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::CallbackHandlers::ValueEvent);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::CallbackHandlers::ValueEvent*, "Meta.WitAi.CallbackHandlers", "ValueEvent");
// Type namespace: Meta.WitAi.CallbackHandlers
namespace Meta::WitAi::CallbackHandlers {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.WitAi.CallbackHandlers.ValueEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class ValueEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
    public:
    // public System.Void .ctor()
    // Offset: 0x446A520
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::CallbackHandlers::ValueEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueEvent*, creationType>()));
    }
  }; // Meta.WitAi.CallbackHandlers.ValueEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::CallbackHandlers::ValueEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
