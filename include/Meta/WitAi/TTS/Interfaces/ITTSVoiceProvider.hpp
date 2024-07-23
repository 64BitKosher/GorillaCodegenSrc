// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::TTS::Data
namespace Meta::WitAi::TTS::Data {
  // Forward declaring type: TTSVoiceSettings
  class TTSVoiceSettings;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Meta.WitAi.TTS.Interfaces
namespace Meta::WitAi::TTS::Interfaces {
  // Forward declaring type: ITTSVoiceProvider
  class ITTSVoiceProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*, "Meta.WitAi.TTS.Interfaces", "ITTSVoiceProvider");
// Type namespace: Meta.WitAi.TTS.Interfaces
namespace Meta::WitAi::TTS::Interfaces {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class ITTSVoiceProvider {
    public:
    // public Meta.WitAi.TTS.Data.TTSVoiceSettings get_VoiceDefaultSettings()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Meta::WitAi::TTS::Data::TTSVoiceSettings* get_VoiceDefaultSettings();
    // public Meta.WitAi.TTS.Data.TTSVoiceSettings[] get_PresetVoiceSettings()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::Meta::WitAi::TTS::Data::TTSVoiceSettings*> get_PresetVoiceSettings();
    // public System.Collections.Generic.Dictionary`2<System.String,System.String> EncodeVoiceSettings(Meta.WitAi.TTS.Data.TTSVoiceSettings voiceSettings)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* EncodeVoiceSettings(::Meta::WitAi::TTS::Data::TTSVoiceSettings* voiceSettings);
  }; // Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider::get_VoiceDefaultSettings
// Il2CppName: get_VoiceDefaultSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::TTS::Data::TTSVoiceSettings* (Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider::*)()>(&Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider::get_VoiceDefaultSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*), "get_VoiceDefaultSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider::get_PresetVoiceSettings
// Il2CppName: get_PresetVoiceSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Meta::WitAi::TTS::Data::TTSVoiceSettings*> (Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider::*)()>(&Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider::get_PresetVoiceSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*), "get_PresetVoiceSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider::EncodeVoiceSettings
// Il2CppName: EncodeVoiceSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider::*)(::Meta::WitAi::TTS::Data::TTSVoiceSettings*)>(&Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider::EncodeVoiceSettings)> {
  static const MethodInfo* get() {
    static auto* voiceSettings = &::il2cpp_utils::GetClassFromName("Meta.WitAi.TTS.Data", "TTSVoiceSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*), "EncodeVoiceSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{voiceSettings});
  }
};
