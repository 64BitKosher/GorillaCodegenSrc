// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Events
namespace Meta::WitAi::Events {
  // Forward declaring type: WitTranscriptionEvent
  class WitTranscriptionEvent;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Interfaces
namespace Meta::WitAi::Interfaces {
  // Forward declaring type: ITranscriptionEvent
  class ITranscriptionEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Interfaces::ITranscriptionEvent);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Interfaces::ITranscriptionEvent*, "Meta.WitAi.Interfaces", "ITranscriptionEvent");
// Type namespace: Meta.WitAi.Interfaces
namespace Meta::WitAi::Interfaces {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Interfaces.ITranscriptionEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class ITranscriptionEvent {
    public:
    // public Meta.WitAi.Events.WitTranscriptionEvent get_OnPartialTranscription()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Meta::WitAi::Events::WitTranscriptionEvent* get_OnPartialTranscription();
    // public Meta.WitAi.Events.WitTranscriptionEvent get_OnFullTranscription()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Meta::WitAi::Events::WitTranscriptionEvent* get_OnFullTranscription();
  }; // Meta.WitAi.Interfaces.ITranscriptionEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Interfaces::ITranscriptionEvent::get_OnPartialTranscription
// Il2CppName: get_OnPartialTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Events::WitTranscriptionEvent* (Meta::WitAi::Interfaces::ITranscriptionEvent::*)()>(&Meta::WitAi::Interfaces::ITranscriptionEvent::get_OnPartialTranscription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Interfaces::ITranscriptionEvent*), "get_OnPartialTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Interfaces::ITranscriptionEvent::get_OnFullTranscription
// Il2CppName: get_OnFullTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Events::WitTranscriptionEvent* (Meta::WitAi::Interfaces::ITranscriptionEvent::*)()>(&Meta::WitAi::Interfaces::ITranscriptionEvent::get_OnFullTranscription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Interfaces::ITranscriptionEvent*), "get_OnFullTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
