// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::CallbackHandlers
namespace Meta::WitAi::CallbackHandlers {
  // Forward declaring type: ValueEvent
  class ValueEvent;
}
// Completed forward declares
// Type namespace: Meta.WitAi.CallbackHandlers
namespace Meta::WitAi::CallbackHandlers {
  // Forward declaring type: FormattedValueEvents
  class FormattedValueEvents;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::CallbackHandlers::FormattedValueEvents);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::CallbackHandlers::FormattedValueEvents*, "Meta.WitAi.CallbackHandlers", "FormattedValueEvents");
// Type namespace: Meta.WitAi.CallbackHandlers
namespace Meta::WitAi::CallbackHandlers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.CallbackHandlers.FormattedValueEvents
  // [TokenAttribute] Offset: FFFFFFFF
  class FormattedValueEvents : public ::Il2CppObject {
    public:
    public:
    // public System.String format
    // Size: 0x8
    // Offset: 0x10
    ::StringW format;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public Meta.WitAi.CallbackHandlers.ValueEvent onFormattedValueEvent
    // Size: 0x8
    // Offset: 0x18
    ::Meta::WitAi::CallbackHandlers::ValueEvent* onFormattedValueEvent;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::CallbackHandlers::ValueEvent*) == 0x8);
    public:
    // Get instance field reference: public System.String format
    [[deprecated("Use field access instead!")]] ::StringW& dyn_format();
    // Get instance field reference: public Meta.WitAi.CallbackHandlers.ValueEvent onFormattedValueEvent
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::CallbackHandlers::ValueEvent*& dyn_onFormattedValueEvent();
    // public System.Void .ctor()
    // Offset: 0x446A568
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FormattedValueEvents* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::CallbackHandlers::FormattedValueEvents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FormattedValueEvents*, creationType>()));
    }
  }; // Meta.WitAi.CallbackHandlers.FormattedValueEvents
  #pragma pack(pop)
  static check_size<sizeof(FormattedValueEvents), 24 + sizeof(::Meta::WitAi::CallbackHandlers::ValueEvent*)> __Meta_WitAi_CallbackHandlers_FormattedValueEventsSizeCheck;
  static_assert(sizeof(FormattedValueEvents) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::CallbackHandlers::FormattedValueEvents::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
