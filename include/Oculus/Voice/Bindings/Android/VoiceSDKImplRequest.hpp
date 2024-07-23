// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Requests.VoiceServiceRequest
#include "Meta/WitAi/Requests/VoiceServiceRequest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Voice::Bindings::Android
namespace Oculus::Voice::Bindings::Android {
  // Forward declaring type: VoiceSDKBinding
  class VoiceSDKBinding;
}
// Forward declaring namespace: Meta::WitAi::Configuration
namespace Meta::WitAi::Configuration {
  // Forward declaring type: WitRequestOptions
  class WitRequestOptions;
}
// Forward declaring namespace: Meta::WitAi::Requests
namespace Meta::WitAi::Requests {
  // Forward declaring type: VoiceServiceRequestEvents
  class VoiceServiceRequestEvents;
}
// Completed forward declares
// Type namespace: Oculus.Voice.Bindings.Android
namespace Oculus::Voice::Bindings::Android {
  // Forward declaring type: VoiceSDKImplRequest
  class VoiceSDKImplRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*, "Oculus.Voice.Bindings.Android", "VoiceSDKImplRequest");
// Type namespace: Oculus.Voice.Bindings.Android
namespace Oculus::Voice::Bindings::Android {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Voice.Bindings.Android.VoiceSDKImplRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class VoiceSDKImplRequest : public ::Meta::WitAi::Requests::VoiceServiceRequest {
    public:
    public:
    // private Oculus.Voice.Bindings.Android.VoiceSDKBinding <Service>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::Oculus::Voice::Bindings::Android::VoiceSDKBinding* Service;
    // Field size check
    static_assert(sizeof(::Oculus::Voice::Bindings::Android::VoiceSDKBinding*) == 0x8);
    // private System.Boolean <Immediately>k__BackingField
    // Size: 0x1
    // Offset: 0x60
    bool Immediately;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private Oculus.Voice.Bindings.Android.VoiceSDKBinding <Service>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Voice::Bindings::Android::VoiceSDKBinding*& dyn_$Service$k__BackingField();
    // Get instance field reference: private System.Boolean <Immediately>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Immediately$k__BackingField();
    // public Oculus.Voice.Bindings.Android.VoiceSDKBinding get_Service()
    // Offset: 0x57259C4
    ::Oculus::Voice::Bindings::Android::VoiceSDKBinding* get_Service();
    // private System.Void set_Service(Oculus.Voice.Bindings.Android.VoiceSDKBinding value)
    // Offset: 0x57259CC
    void set_Service(::Oculus::Voice::Bindings::Android::VoiceSDKBinding* value);
    // public System.Boolean get_Immediately()
    // Offset: 0x57259D4
    bool get_Immediately();
    // private System.Void set_Immediately(System.Boolean value)
    // Offset: 0x57259DC
    void set_Immediately(bool value);
    // public System.Void .ctor(Oculus.Voice.Bindings.Android.VoiceSDKBinding newService, Meta.Voice.NLPRequestInputType newInputType, System.Boolean newImmediately, Meta.WitAi.Configuration.WitRequestOptions newOptions, Meta.WitAi.Requests.VoiceServiceRequestEvents newEvents)
    // Offset: 0x572537C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceSDKImplRequest* New_ctor(::Oculus::Voice::Bindings::Android::VoiceSDKBinding* newService, ::Meta::Voice::NLPRequestInputType newInputType, bool newImmediately, ::Meta::WitAi::Configuration::WitRequestOptions* newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents* newEvents) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceSDKImplRequest*, creationType>(newService, newInputType, newImmediately, newOptions, newEvents)));
    }
    // public System.Void HandleStartListening()
    // Offset: 0x5725B14
    void HandleStartListening();
    // public System.Void HandleStopListening()
    // Offset: 0x5725B18
    void HandleStopListening();
    // public System.Void HandlePartialResponse(System.String responseJson)
    // Offset: 0x5725B1C
    void HandlePartialResponse(::StringW responseJson);
    // public System.Void HandlePartialTranscription(System.String transcription)
    // Offset: 0x5725B4C
    void HandlePartialTranscription(::StringW transcription);
    // public System.Void HandleFullTranscription(System.String transcription)
    // Offset: 0x5725B60
    void HandleFullTranscription(::StringW transcription);
    // public System.Void HandleTransmissionBegan()
    // Offset: 0x5725B74
    void HandleTransmissionBegan();
    // public System.Void HandleCanceled()
    // Offset: 0x5725BD4
    void HandleCanceled();
    // public System.Void HandleError(System.String error, System.String message, System.String errorBody)
    // Offset: 0x5725BE4
    void HandleError(::StringW error, ::StringW message, ::StringW errorBody);
    // public System.Void HandleResponse(System.String responseJson)
    // Offset: 0x5725C5C
    void HandleResponse(::StringW responseJson);
    // protected override System.Void HandleAudioActivation()
    // Offset: 0x57259E8
    // Implemented from: Meta.Voice.TranscriptionRequest`4
    // Base method: System.Void TranscriptionRequest_4::HandleAudioActivation()
    void HandleAudioActivation();
    // protected override System.Void HandleAudioDeactivation()
    // Offset: 0x5725A58
    // Implemented from: Meta.Voice.TranscriptionRequest`4
    // Base method: System.Void TranscriptionRequest_4::HandleAudioDeactivation()
    void HandleAudioDeactivation();
    // protected override System.Void HandleSend()
    // Offset: 0x5725A8C
    // Implemented from: Meta.Voice.VoiceRequest`4
    // Base method: System.Void VoiceRequest_4::HandleSend()
    void HandleSend();
    // protected override System.Void HandleCancel()
    // Offset: 0x5725AFC
    // Implemented from: Meta.Voice.VoiceRequest`4
    // Base method: System.Void VoiceRequest_4::HandleCancel()
    void HandleCancel();
  }; // Oculus.Voice.Bindings.Android.VoiceSDKImplRequest
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::get_Service
// Il2CppName: get_Service
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Voice::Bindings::Android::VoiceSDKBinding* (Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::get_Service)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*), "get_Service", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::set_Service
// Il2CppName: set_Service
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)(::Oculus::Voice::Bindings::Android::VoiceSDKBinding*)>(&Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::set_Service)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Voice.Bindings.Android", "VoiceSDKBinding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*), "set_Service", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::get_Immediately
// Il2CppName: get_Immediately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::get_Immediately)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*), "get_Immediately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::set_Immediately
// Il2CppName: set_Immediately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)(bool)>(&Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::set_Immediately)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*), "set_Immediately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleStartListening
// Il2CppName: HandleStartListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleStartListening)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*), "HandleStartListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleStopListening
// Il2CppName: HandleStopListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleStopListening)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*), "HandleStopListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandlePartialResponse
// Il2CppName: HandlePartialResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandlePartialResponse)> {
  static const MethodInfo* get() {
    static auto* responseJson = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*), "HandlePartialResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{responseJson});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandlePartialTranscription
// Il2CppName: HandlePartialTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandlePartialTranscription)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*), "HandlePartialTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleFullTranscription
// Il2CppName: HandleFullTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleFullTranscription)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*), "HandleFullTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleTransmissionBegan
// Il2CppName: HandleTransmissionBegan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleTransmissionBegan)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*), "HandleTransmissionBegan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleCanceled
// Il2CppName: HandleCanceled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleCanceled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*), "HandleCanceled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleError
// Il2CppName: HandleError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)(::StringW, ::StringW, ::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleError)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* errorBody = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*), "HandleError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error, message, errorBody});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleResponse
// Il2CppName: HandleResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleResponse)> {
  static const MethodInfo* get() {
    static auto* responseJson = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*), "HandleResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{responseJson});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleAudioActivation
// Il2CppName: HandleAudioActivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleAudioActivation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*), "HandleAudioActivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleAudioDeactivation
// Il2CppName: HandleAudioDeactivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleAudioDeactivation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*), "HandleAudioDeactivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleSend
// Il2CppName: HandleSend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleSend)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*), "HandleSend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleCancel
// Il2CppName: HandleCancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImplRequest::HandleCancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*), "HandleCancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
