// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Interfaces
namespace Meta::WitAi::Interfaces {
  // Forward declaring type: ITranscriptionEvent
  class ITranscriptionEvent;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Interfaces
namespace Meta::WitAi::Interfaces {
  // Forward declaring type: ITranscriptionEventProvider
  class ITranscriptionEventProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Interfaces::ITranscriptionEventProvider);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Interfaces::ITranscriptionEventProvider*, "Meta.WitAi.Interfaces", "ITranscriptionEventProvider");
// Type namespace: Meta.WitAi.Interfaces
namespace Meta::WitAi::Interfaces {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Interfaces.ITranscriptionEventProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class ITranscriptionEventProvider {
    public:
    // public Meta.WitAi.Interfaces.ITranscriptionEvent get_TranscriptionEvents()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Meta::WitAi::Interfaces::ITranscriptionEvent* get_TranscriptionEvents();
  }; // Meta.WitAi.Interfaces.ITranscriptionEventProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Interfaces::ITranscriptionEventProvider::get_TranscriptionEvents
// Il2CppName: get_TranscriptionEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Interfaces::ITranscriptionEvent* (Meta::WitAi::Interfaces::ITranscriptionEventProvider::*)()>(&Meta::WitAi::Interfaces::ITranscriptionEventProvider::get_TranscriptionEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Interfaces::ITranscriptionEventProvider*), "get_TranscriptionEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
