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
// Type namespace: Meta.WitAi.Utilities
namespace Meta::WitAi::Utilities {
  // Forward declaring type: StringEvent
  class StringEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Utilities::StringEvent);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Utilities::StringEvent*, "Meta.WitAi.Utilities", "StringEvent");
// Type namespace: Meta.WitAi.Utilities
namespace Meta::WitAi::Utilities {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.WitAi.Utilities.StringEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class StringEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
    public:
    // public System.Void .ctor()
    // Offset: 0x4436DC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Utilities::StringEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringEvent*, creationType>()));
    }
  }; // Meta.WitAi.Utilities.StringEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Utilities::StringEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
