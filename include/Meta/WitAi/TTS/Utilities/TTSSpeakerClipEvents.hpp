// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Speech.VoiceSpeechEvents
#include "Meta/WitAi/Speech/VoiceSpeechEvents.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::TTS::Utilities
namespace Meta::WitAi::TTS::Utilities {
  // Forward declaring type: TTSSpeakerClipEvent
  class TTSSpeakerClipEvent;
  // Forward declaring type: TTSSpeakerClipMessageEvent
  class TTSSpeakerClipMessageEvent;
}
// Completed forward declares
// Type namespace: Meta.WitAi.TTS.Utilities
namespace Meta::WitAi::TTS::Utilities {
  // Forward declaring type: TTSSpeakerClipEvents
  class TTSSpeakerClipEvents;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*, "Meta.WitAi.TTS.Utilities", "TTSSpeakerClipEvents");
// Type namespace: Meta.WitAi.TTS.Utilities
namespace Meta::WitAi::TTS::Utilities {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents
  // [TokenAttribute] Offset: FFFFFFFF
  class TTSSpeakerClipEvents : public ::Meta::WitAi::Speech::VoiceSpeechEvents {
    public:
    public:
    // private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onInit
    // Size: 0x8
    // Offset: 0x48
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* onInit;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*) == 0x8);
    // private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onComplete
    // Size: 0x8
    // Offset: 0x50
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* onComplete;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*) == 0x8);
    // private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onLoadBegin
    // Size: 0x8
    // Offset: 0x58
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* onLoadBegin;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*) == 0x8);
    // private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onLoadAbort
    // Size: 0x8
    // Offset: 0x60
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* onLoadAbort;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*) == 0x8);
    // private Meta.WitAi.TTS.Utilities.TTSSpeakerClipMessageEvent _onLoadFailed
    // Size: 0x8
    // Offset: 0x68
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent* onLoadFailed;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent*) == 0x8);
    // private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onLoadSuccess
    // Size: 0x8
    // Offset: 0x70
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* onLoadSuccess;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*) == 0x8);
    // private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onPlaybackReady
    // Size: 0x8
    // Offset: 0x78
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* onPlaybackReady;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*) == 0x8);
    // private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onPlaybackStart
    // Size: 0x8
    // Offset: 0x80
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* onPlaybackStart;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*) == 0x8);
    // private Meta.WitAi.TTS.Utilities.TTSSpeakerClipMessageEvent _onPlaybackCancelled
    // Size: 0x8
    // Offset: 0x88
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent* onPlaybackCancelled;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent*) == 0x8);
    // private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onPlaybackClipUpdated
    // Size: 0x8
    // Offset: 0x90
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* onPlaybackClipUpdated;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*) == 0x8);
    // private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onPlaybackComplete
    // Size: 0x8
    // Offset: 0x98
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* onPlaybackComplete;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*) == 0x8);
    public:
    // Get instance field reference: private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onInit
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& dyn__onInit();
    // Get instance field reference: private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onComplete
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& dyn__onComplete();
    // Get instance field reference: private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onLoadBegin
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& dyn__onLoadBegin();
    // Get instance field reference: private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onLoadAbort
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& dyn__onLoadAbort();
    // Get instance field reference: private Meta.WitAi.TTS.Utilities.TTSSpeakerClipMessageEvent _onLoadFailed
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent*& dyn__onLoadFailed();
    // Get instance field reference: private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onLoadSuccess
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& dyn__onLoadSuccess();
    // Get instance field reference: private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onPlaybackReady
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& dyn__onPlaybackReady();
    // Get instance field reference: private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onPlaybackStart
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& dyn__onPlaybackStart();
    // Get instance field reference: private Meta.WitAi.TTS.Utilities.TTSSpeakerClipMessageEvent _onPlaybackCancelled
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent*& dyn__onPlaybackCancelled();
    // Get instance field reference: private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onPlaybackClipUpdated
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& dyn__onPlaybackClipUpdated();
    // Get instance field reference: private Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent _onPlaybackComplete
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& dyn__onPlaybackComplete();
    // public Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent get_OnInit()
    // Offset: 0x445BAD0
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* get_OnInit();
    // public Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent get_OnComplete()
    // Offset: 0x445BAD8
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* get_OnComplete();
    // public Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent get_OnLoadBegin()
    // Offset: 0x445BAE0
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* get_OnLoadBegin();
    // public Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent get_OnLoadAbort()
    // Offset: 0x445BAE8
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* get_OnLoadAbort();
    // public Meta.WitAi.TTS.Utilities.TTSSpeakerClipMessageEvent get_OnLoadFailed()
    // Offset: 0x445BAF0
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent* get_OnLoadFailed();
    // public Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent get_OnLoadSuccess()
    // Offset: 0x445BAF8
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* get_OnLoadSuccess();
    // public Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent get_OnPlaybackReady()
    // Offset: 0x445BB00
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* get_OnPlaybackReady();
    // public Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent get_OnPlaybackStart()
    // Offset: 0x445BB08
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* get_OnPlaybackStart();
    // public Meta.WitAi.TTS.Utilities.TTSSpeakerClipMessageEvent get_OnPlaybackCancelled()
    // Offset: 0x445BB10
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent* get_OnPlaybackCancelled();
    // public Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent get_OnPlaybackClipUpdated()
    // Offset: 0x445BB18
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* get_OnPlaybackClipUpdated();
    // public Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent get_OnPlaybackComplete()
    // Offset: 0x445BB20
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* get_OnPlaybackComplete();
    // public System.Void .ctor()
    // Offset: 0x445BB28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TTSSpeakerClipEvents* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TTSSpeakerClipEvents*, creationType>()));
    }
  }; // Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents
  #pragma pack(pop)
  static check_size<sizeof(TTSSpeakerClipEvents), 152 + sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*)> __Meta_WitAi_TTS_Utilities_TTSSpeakerClipEventsSizeCheck;
  static_assert(sizeof(TTSSpeakerClipEvents) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnInit
// Il2CppName: get_OnInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* (Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*), "get_OnInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnComplete
// Il2CppName: get_OnComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* (Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*), "get_OnComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnLoadBegin
// Il2CppName: get_OnLoadBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* (Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnLoadBegin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*), "get_OnLoadBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnLoadAbort
// Il2CppName: get_OnLoadAbort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* (Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnLoadAbort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*), "get_OnLoadAbort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnLoadFailed
// Il2CppName: get_OnLoadFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent* (Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnLoadFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*), "get_OnLoadFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnLoadSuccess
// Il2CppName: get_OnLoadSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* (Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnLoadSuccess)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*), "get_OnLoadSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnPlaybackReady
// Il2CppName: get_OnPlaybackReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* (Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnPlaybackReady)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*), "get_OnPlaybackReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnPlaybackStart
// Il2CppName: get_OnPlaybackStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* (Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnPlaybackStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*), "get_OnPlaybackStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnPlaybackCancelled
// Il2CppName: get_OnPlaybackCancelled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent* (Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnPlaybackCancelled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*), "get_OnPlaybackCancelled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnPlaybackClipUpdated
// Il2CppName: get_OnPlaybackClipUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* (Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnPlaybackClipUpdated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*), "get_OnPlaybackClipUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnPlaybackComplete
// Il2CppName: get_OnPlaybackComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* (Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::get_OnPlaybackComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*), "get_OnPlaybackComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
