// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.Voice.NLPRequest`4
#include "Meta/Voice/NLPRequest_4.hpp"
// Including type: Meta.WitAi.CoroutineUtility
#include "Meta/WitAi/CoroutineUtility.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Requests
namespace Meta::WitAi::Requests {
  // Forward declaring type: VoiceServiceRequestEvent
  class VoiceServiceRequestEvent;
  // Forward declaring type: VoiceServiceRequestEvents
  class VoiceServiceRequestEvents;
  // Forward declaring type: VoiceServiceRequestResults
  class VoiceServiceRequestResults;
}
// Forward declaring namespace: Meta::WitAi::Configuration
namespace Meta::WitAi::Configuration {
  // Forward declaring type: WitRequestOptions
  class WitRequestOptions;
}
// Forward declaring namespace: System::Collections::Concurrent
namespace System::Collections::Concurrent {
  // Forward declaring type: ConcurrentQueue`1<T>
  template<typename T>
  class ConcurrentQueue_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: Meta::WitAi::Json
namespace Meta::WitAi::Json {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Forward declaring type: VoiceServiceRequest
  class VoiceServiceRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Requests::VoiceServiceRequest);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Requests::VoiceServiceRequest*, "Meta.WitAi.Requests", "VoiceServiceRequest");
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.WitAi.Requests.VoiceServiceRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class VoiceServiceRequest : public ::Meta::Voice::NLPRequest_4<::Meta::WitAi::Requests::VoiceServiceRequestEvent*, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*, ::Meta::WitAi::Requests::VoiceServiceRequestResults*> {
    public:
    // Nested type: ::Meta::WitAi::Requests::VoiceServiceRequest::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: ::Meta::WitAi::Requests::VoiceServiceRequest::$PerformMainThreadCallbacks$d__9
    class $PerformMainThreadCallbacks$d__9;
    // Nested type: ::Meta::WitAi::Requests::VoiceServiceRequest::$SimulateResponse$d__5
    struct $SimulateResponse$d__5;
    public:
    // private Meta.WitAi.CoroutineUtility/CoroutinePerformer _performer
    // Size: 0x8
    // Offset: 0x48
    ::Meta::WitAi::CoroutineUtility::CoroutinePerformer* performer;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::CoroutineUtility::CoroutinePerformer*) == 0x8);
    // private System.Collections.Concurrent.ConcurrentQueue`1<System.Action> _mainThreadCallbacks
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>* mainThreadCallbacks;
    // Field size check
    static_assert(sizeof(::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*) == 0x8);
    public:
    // Get instance field reference: private Meta.WitAi.CoroutineUtility/CoroutinePerformer _performer
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::CoroutineUtility::CoroutinePerformer*& dyn__performer();
    // Get instance field reference: private System.Collections.Concurrent.ConcurrentQueue`1<System.Action> _mainThreadCallbacks
    [[deprecated("Use field access instead!")]] ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*& dyn__mainThreadCallbacks();
    // protected System.Void .ctor(Meta.Voice.NLPRequestInputType newInputType, Meta.WitAi.Configuration.WitRequestOptions newOptions, Meta.WitAi.Requests.VoiceServiceRequestEvents newEvents)
    // Offset: 0x442C004
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceServiceRequest* New_ctor(::Meta::Voice::NLPRequestInputType newInputType, ::Meta::WitAi::Configuration::WitRequestOptions* newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents* newEvents) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::VoiceServiceRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceServiceRequest*, creationType>(newInputType, newOptions, newEvents)));
    }
    // public System.Int32 get_StatusCode()
    // Offset: 0x442D474
    int get_StatusCode();
    // protected System.Void set_StatusCode(System.Int32 value)
    // Offset: 0x442CABC
    void set_StatusCode(int value);
    // private System.Void SimulateResponse()
    // Offset: 0x4437DA0
    void SimulateResponse();
    // protected System.Void WatchMainThreadCallbacks()
    // Offset: 0x442D1CC
    void WatchMainThreadCallbacks();
    // private System.Collections.IEnumerator PerformMainThreadCallbacks()
    // Offset: 0x4437E58
    ::System::Collections::IEnumerator* PerformMainThreadCallbacks();
    // private System.Boolean HasMainThreadCallbacks()
    // Offset: 0x4437EEC
    bool HasMainThreadCallbacks();
    // protected System.Void MainThreadCallback(System.Action action)
    // Offset: 0x442D704
    void MainThreadCallback(::System::Action* action);
    // protected Meta.WitAi.Requests.VoiceServiceRequestResults GetResultsWithMessage(System.String newMessage)
    // Offset: 0x4437F74
    ::Meta::WitAi::Requests::VoiceServiceRequestResults* GetResultsWithMessage(::StringW newMessage);
    // protected System.Void RaiseEvent(Meta.WitAi.Requests.VoiceServiceRequestEvent eventCallback)
    // Offset: 0x4438304
    void RaiseEvent(::Meta::WitAi::Requests::VoiceServiceRequestEvent* eventCallback);
    // protected override System.Boolean OnSimulateResponse()
    // Offset: 0x4437D38
    // Implemented from: Meta.Voice.VoiceRequest`4
    // Base method: System.Boolean VoiceRequest_4::OnSimulateResponse()
    bool OnSimulateResponse();
    // protected override System.Void ApplyTranscription(System.String newTranscription, System.Boolean newIsFinal)
    // Offset: 0x4438078
    // Implemented from: Meta.Voice.TranscriptionRequest`4
    // Base method: System.Void TranscriptionRequest_4::ApplyTranscription(System.String newTranscription, System.Boolean newIsFinal)
    void ApplyTranscription(::StringW newTranscription, bool newIsFinal);
    // protected override System.Void ApplyResultResponseData(Meta.WitAi.Json.WitResponseNode newData)
    // Offset: 0x443826C
    // Implemented from: Meta.Voice.NLPAudioRequest`4
    // Base method: System.Void NLPAudioRequest_4::ApplyResultResponseData(Meta.WitAi.Json.WitResponseNode newData)
    void ApplyResultResponseData(::Meta::WitAi::Json::WitResponseNode* newData);
  }; // Meta.WitAi.Requests.VoiceServiceRequest
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceServiceRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceServiceRequest::get_StatusCode
// Il2CppName: get_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Meta::WitAi::Requests::VoiceServiceRequest::*)()>(&Meta::WitAi::Requests::VoiceServiceRequest::get_StatusCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceServiceRequest*), "get_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceServiceRequest::set_StatusCode
// Il2CppName: set_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceServiceRequest::*)(int)>(&Meta::WitAi::Requests::VoiceServiceRequest::set_StatusCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceServiceRequest*), "set_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceServiceRequest::SimulateResponse
// Il2CppName: SimulateResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceServiceRequest::*)()>(&Meta::WitAi::Requests::VoiceServiceRequest::SimulateResponse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceServiceRequest*), "SimulateResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceServiceRequest::WatchMainThreadCallbacks
// Il2CppName: WatchMainThreadCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceServiceRequest::*)()>(&Meta::WitAi::Requests::VoiceServiceRequest::WatchMainThreadCallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceServiceRequest*), "WatchMainThreadCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceServiceRequest::PerformMainThreadCallbacks
// Il2CppName: PerformMainThreadCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Meta::WitAi::Requests::VoiceServiceRequest::*)()>(&Meta::WitAi::Requests::VoiceServiceRequest::PerformMainThreadCallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceServiceRequest*), "PerformMainThreadCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceServiceRequest::HasMainThreadCallbacks
// Il2CppName: HasMainThreadCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Requests::VoiceServiceRequest::*)()>(&Meta::WitAi::Requests::VoiceServiceRequest::HasMainThreadCallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceServiceRequest*), "HasMainThreadCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceServiceRequest::MainThreadCallback
// Il2CppName: MainThreadCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceServiceRequest::*)(::System::Action*)>(&Meta::WitAi::Requests::VoiceServiceRequest::MainThreadCallback)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceServiceRequest*), "MainThreadCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceServiceRequest::GetResultsWithMessage
// Il2CppName: GetResultsWithMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequestResults* (Meta::WitAi::Requests::VoiceServiceRequest::*)(::StringW)>(&Meta::WitAi::Requests::VoiceServiceRequest::GetResultsWithMessage)> {
  static const MethodInfo* get() {
    static auto* newMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceServiceRequest*), "GetResultsWithMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newMessage});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceServiceRequest::RaiseEvent
// Il2CppName: RaiseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceServiceRequest::*)(::Meta::WitAi::Requests::VoiceServiceRequestEvent*)>(&Meta::WitAi::Requests::VoiceServiceRequest::RaiseEvent)> {
  static const MethodInfo* get() {
    static auto* eventCallback = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequestEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceServiceRequest*), "RaiseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventCallback});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceServiceRequest::OnSimulateResponse
// Il2CppName: OnSimulateResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Requests::VoiceServiceRequest::*)()>(&Meta::WitAi::Requests::VoiceServiceRequest::OnSimulateResponse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceServiceRequest*), "OnSimulateResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceServiceRequest::ApplyTranscription
// Il2CppName: ApplyTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceServiceRequest::*)(::StringW, bool)>(&Meta::WitAi::Requests::VoiceServiceRequest::ApplyTranscription)> {
  static const MethodInfo* get() {
    static auto* newTranscription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* newIsFinal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceServiceRequest*), "ApplyTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newTranscription, newIsFinal});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceServiceRequest::ApplyResultResponseData
// Il2CppName: ApplyResultResponseData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceServiceRequest::*)(::Meta::WitAi::Json::WitResponseNode*)>(&Meta::WitAi::Requests::VoiceServiceRequest::ApplyResultResponseData)> {
  static const MethodInfo* get() {
    static auto* newData = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Json", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceServiceRequest*), "ApplyResultResponseData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newData});
  }
};
