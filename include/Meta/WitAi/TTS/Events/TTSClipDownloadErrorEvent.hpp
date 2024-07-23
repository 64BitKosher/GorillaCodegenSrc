// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.UnityEvent`3
#include "UnityEngine/Events/UnityEvent_3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::TTS::Data
namespace Meta::WitAi::TTS::Data {
  // Forward declaring type: TTSClipData
  class TTSClipData;
}
// Completed forward declares
// Type namespace: Meta.WitAi.TTS.Events
namespace Meta::WitAi::TTS::Events {
  // Forward declaring type: TTSClipDownloadErrorEvent
  class TTSClipDownloadErrorEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::TTS::Events::TTSClipDownloadErrorEvent);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::TTS::Events::TTSClipDownloadErrorEvent*, "Meta.WitAi.TTS.Events", "TTSClipDownloadErrorEvent");
// Type namespace: Meta.WitAi.TTS.Events
namespace Meta::WitAi::TTS::Events {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.WitAi.TTS.Events.TTSClipDownloadErrorEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class TTSClipDownloadErrorEvent : public ::UnityEngine::Events::UnityEvent_3<::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW, ::StringW> {
    public:
    // public System.Void .ctor()
    // Offset: 0x4463F38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TTSClipDownloadErrorEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::TTS::Events::TTSClipDownloadErrorEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TTSClipDownloadErrorEvent*, creationType>()));
    }
  }; // Meta.WitAi.TTS.Events.TTSClipDownloadErrorEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::TTS::Events::TTSClipDownloadErrorEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!