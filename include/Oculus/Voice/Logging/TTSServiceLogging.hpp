// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: Meta::WitAi::TTS
namespace Meta::WitAi::TTS {
  // Forward declaring type: TTSService
  class TTSService;
}
// Forward declaring namespace: Oculus::Voice::Core::Bindings::Interfaces
namespace Oculus::Voice::Core::Bindings::Interfaces {
  // Forward declaring type: IVoiceSDKLogger
  class IVoiceSDKLogger;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Meta::WitAi::TTS::Data
namespace Meta::WitAi::TTS::Data {
  // Forward declaring type: TTSClipData
  class TTSClipData;
}
// Forward declaring namespace: Oculus::Voice::Logging
namespace Oculus::Voice::Logging {
  // Skipping declaration: TTSServiceRequestLog because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Voice.Logging
namespace Oculus::Voice::Logging {
  // Forward declaring type: TTSServiceLogging
  class TTSServiceLogging;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::Logging::TTSServiceLogging);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Logging::TTSServiceLogging*, "Oculus.Voice.Logging", "TTSServiceLogging");
// Type namespace: Oculus.Voice.Logging
namespace Oculus::Voice::Logging {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Voice.Logging.TTSServiceLogging
  // [TokenAttribute] Offset: FFFFFFFF
  class TTSServiceLogging : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Oculus::Voice::Logging::TTSServiceLogging::TTSServiceRequestLog
    struct TTSServiceRequestLog;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog
    // [TokenAttribute] Offset: FFFFFFFF
    struct TTSServiceRequestLog/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.DateTime startTime
      // Size: 0x8
      // Offset: 0x0
      ::System::DateTime startTime;
      // Field size check
      static_assert(sizeof(::System::DateTime) == 0x8);
      // public System.Collections.Generic.Dictionary`2<System.String,System.String> annotations
      // Size: 0x8
      // Offset: 0x8
      ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* annotations;
      // Field size check
      static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*) == 0x8);
      public:
      // Creating value type constructor for type: TTSServiceRequestLog
      constexpr TTSServiceRequestLog(::System::DateTime startTime_ = {}, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* annotations_ = {}) noexcept : startTime{startTime_}, annotations{annotations_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.DateTime startTime
      [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_startTime();
      // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,System.String> annotations
      [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& dyn_annotations();
    }; // Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog
    #pragma pack(pop)
    static check_size<sizeof(TTSServiceLogging::TTSServiceRequestLog), 8 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)> __Oculus_Voice_Logging_TTSServiceLogging_TTSServiceRequestLogSizeCheck;
    static_assert(sizeof(TTSServiceLogging::TTSServiceRequestLog) == 0x10);
    public:
    // public System.Boolean EnableConsoleLogging
    // Size: 0x1
    // Offset: 0x20
    bool EnableConsoleLogging;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: EnableConsoleLogging and: Service
    char __padding0[0x7] = {};
    // private Meta.WitAi.TTS.TTSService <Service>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Meta::WitAi::TTS::TTSService* Service;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::TTSService*) == 0x8);
    // private Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger _voiceSDKLoggerImpl
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger* voiceSDKLoggerImpl;
    // Field size check
    static_assert(sizeof(::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog> _requests
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Voice::Logging::TTSServiceLogging::TTSServiceRequestLog>* requests;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Voice::Logging::TTSServiceLogging::TTSServiceRequestLog>*) == 0x8);
    public:
    // static field const value: static private System.String TTS_FILETYPE_ANNOTATION
    static constexpr const char* TTS_FILETYPE_ANNOTATION = "ttsFileType";
    // Get static field: static private System.String TTS_FILETYPE_ANNOTATION
    static ::StringW _get_TTS_FILETYPE_ANNOTATION();
    // Set static field: static private System.String TTS_FILETYPE_ANNOTATION
    static void _set_TTS_FILETYPE_ANNOTATION(::StringW value);
    // static field const value: static private System.String TTS_FILESTREAM_ANNOTATION
    static constexpr const char* TTS_FILESTREAM_ANNOTATION = "ttsFileStream";
    // Get static field: static private System.String TTS_FILESTREAM_ANNOTATION
    static ::StringW _get_TTS_FILESTREAM_ANNOTATION();
    // Set static field: static private System.String TTS_FILESTREAM_ANNOTATION
    static void _set_TTS_FILESTREAM_ANNOTATION(::StringW value);
    // static field const value: static private System.String TTS_START_TIME_ANNOTATION
    static constexpr const char* TTS_START_TIME_ANNOTATION = "ttsStartTime";
    // Get static field: static private System.String TTS_START_TIME_ANNOTATION
    static ::StringW _get_TTS_START_TIME_ANNOTATION();
    // Set static field: static private System.String TTS_START_TIME_ANNOTATION
    static void _set_TTS_START_TIME_ANNOTATION(::StringW value);
    // static field const value: static private System.String TTS_FIRST_TIME_ANNOTATION
    static constexpr const char* TTS_FIRST_TIME_ANNOTATION = "ttsFirstResponseTime";
    // Get static field: static private System.String TTS_FIRST_TIME_ANNOTATION
    static ::StringW _get_TTS_FIRST_TIME_ANNOTATION();
    // Set static field: static private System.String TTS_FIRST_TIME_ANNOTATION
    static void _set_TTS_FIRST_TIME_ANNOTATION(::StringW value);
    // static field const value: static private System.String TTS_READY_TIME_ANNOTATION
    static constexpr const char* TTS_READY_TIME_ANNOTATION = "ttsReadyTime";
    // Get static field: static private System.String TTS_READY_TIME_ANNOTATION
    static ::StringW _get_TTS_READY_TIME_ANNOTATION();
    // Set static field: static private System.String TTS_READY_TIME_ANNOTATION
    static void _set_TTS_READY_TIME_ANNOTATION(::StringW value);
    // static field const value: static private System.String TTS_FINISH_TIME_ANNOTATION
    static constexpr const char* TTS_FINISH_TIME_ANNOTATION = "ttsFinishedTime";
    // Get static field: static private System.String TTS_FINISH_TIME_ANNOTATION
    static ::StringW _get_TTS_FINISH_TIME_ANNOTATION();
    // Set static field: static private System.String TTS_FINISH_TIME_ANNOTATION
    static void _set_TTS_FINISH_TIME_ANNOTATION(::StringW value);
    // static field const value: static private System.String TTS_ERROR_ANNOTATION
    static constexpr const char* TTS_ERROR_ANNOTATION = "ttsError";
    // Get static field: static private System.String TTS_ERROR_ANNOTATION
    static ::StringW _get_TTS_ERROR_ANNOTATION();
    // Set static field: static private System.String TTS_ERROR_ANNOTATION
    static void _set_TTS_ERROR_ANNOTATION(::StringW value);
    // Get static field: static private System.Boolean _initialized
    static bool _get__initialized();
    // Set static field: static private System.Boolean _initialized
    static void _set__initialized(bool value);
    // Get instance field reference: public System.Boolean EnableConsoleLogging
    [[deprecated("Use field access instead!")]] bool& dyn_EnableConsoleLogging();
    // Get instance field reference: private Meta.WitAi.TTS.TTSService <Service>k__BackingField
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::TTSService*& dyn_$Service$k__BackingField();
    // Get instance field reference: private Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger _voiceSDKLoggerImpl
    [[deprecated("Use field access instead!")]] ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*& dyn__voiceSDKLoggerImpl();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog> _requests
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Voice::Logging::TTSServiceLogging::TTSServiceRequestLog>*& dyn__requests();
    // public Meta.WitAi.TTS.TTSService get_Service()
    // Offset: 0x5721F98
    ::Meta::WitAi::TTS::TTSService* get_Service();
    // private System.Void set_Service(Meta.WitAi.TTS.TTSService value)
    // Offset: 0x5721FA0
    void set_Service(::Meta::WitAi::TTS::TTSService* value);
    // private System.Void Awake()
    // Offset: 0x5721FA8
    void Awake();
    // private System.Void InitLogger()
    // Offset: 0x5722018
    void InitLogger();
    // private System.Void OnEnable()
    // Offset: 0x5722238
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x57225C8
    void OnDisable();
    // private System.Void OnRequestBegin(Meta.WitAi.TTS.Data.TTSClipData clipData)
    // Offset: 0x57228D4
    void OnRequestBegin(::Meta::WitAi::TTS::Data::TTSClipData* clipData);
    // private System.Void OnRequestCancel(Meta.WitAi.TTS.Data.TTSClipData clipData)
    // Offset: 0x5722AE8
    void OnRequestCancel(::Meta::WitAi::TTS::Data::TTSClipData* clipData);
    // private System.Void OnRequestError(Meta.WitAi.TTS.Data.TTSClipData clipData, System.String error)
    // Offset: 0x5722F78
    void OnRequestError(::Meta::WitAi::TTS::Data::TTSClipData* clipData, ::StringW error);
    // private System.Void OnRequestFirstResponse(Meta.WitAi.TTS.Data.TTSClipData clipData)
    // Offset: 0x5722F7C
    void OnRequestFirstResponse(::Meta::WitAi::TTS::Data::TTSClipData* clipData);
    // private System.Void OnRequestReady(Meta.WitAi.TTS.Data.TTSClipData clipData)
    // Offset: 0x5723028
    void OnRequestReady(::Meta::WitAi::TTS::Data::TTSClipData* clipData);
    // private System.Void OnRequestComplete(Meta.WitAi.TTS.Data.TTSClipData clipData)
    // Offset: 0x572309C
    void OnRequestComplete(::Meta::WitAi::TTS::Data::TTSClipData* clipData);
    // private System.Void LogStart(Meta.WitAi.TTS.Data.TTSClipData clipData)
    // Offset: 0x57228D8
    void LogStart(::Meta::WitAi::TTS::Data::TTSClipData* clipData);
    // private Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog GetRequestData(Meta.WitAi.TTS.Data.TTSClipData clipData)
    // Offset: 0x57230A4
    ::Oculus::Voice::Logging::TTSServiceLogging::TTSServiceRequestLog GetRequestData(::Meta::WitAi::TTS::Data::TTSClipData* clipData);
    // private System.Void LogTimestamp(Meta.WitAi.TTS.Data.TTSClipData clipData, System.String key)
    // Offset: 0x5722FF0
    void LogTimestamp(::Meta::WitAi::TTS::Data::TTSClipData* clipData, ::StringW key);
    // private System.Void LogTimestamp(Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog requestData, System.String key)
    // Offset: 0x572313C
    void LogTimestamp(::Oculus::Voice::Logging::TTSServiceLogging::TTSServiceRequestLog requestData, ::StringW key);
    // private System.Void LogAnnotate(Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog requestData, System.String key, System.String value)
    // Offset: 0x5723190
    void LogAnnotate(::Oculus::Voice::Logging::TTSServiceLogging::TTSServiceRequestLog requestData, ::StringW key, ::StringW value);
    // private System.Void LogComplete(Meta.WitAi.TTS.Data.TTSClipData clipData, System.String error)
    // Offset: 0x5722B40
    void LogComplete(::Meta::WitAi::TTS::Data::TTSClipData* clipData, ::StringW error);
    // static private System.Void Init()
    // Offset: 0x5723204
    static void Init();
    // static private System.Void OnServiceStart(Meta.WitAi.TTS.TTSService service)
    // Offset: 0x57232B0
    static void OnServiceStart(::Meta::WitAi::TTS::TTSService* service);
    // public System.Void .ctor()
    // Offset: 0x572339C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TTSServiceLogging* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Logging::TTSServiceLogging::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TTSServiceLogging*, creationType>()));
    }
  }; // Oculus.Voice.Logging.TTSServiceLogging
  #pragma pack(pop)
  static check_size<sizeof(TTSServiceLogging), 56 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Voice::Logging::TTSServiceLogging::TTSServiceRequestLog>*)> __Oculus_Voice_Logging_TTSServiceLoggingSizeCheck;
  static_assert(sizeof(TTSServiceLogging) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Logging::TTSServiceLogging::TTSServiceRequestLog, "Oculus.Voice.Logging", "TTSServiceLogging/TTSServiceRequestLog");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::get_Service
// Il2CppName: get_Service
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::TTS::TTSService* (Oculus::Voice::Logging::TTSServiceLogging::*)()>(&Oculus::Voice::Logging::TTSServiceLogging::get_Service)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "get_Service", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::set_Service
// Il2CppName: set_Service
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::TTSService*)>(&Oculus::Voice::Logging::TTSServiceLogging::set_Service)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Meta.WitAi.TTS", "TTSService")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "set_Service", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Logging::TTSServiceLogging::*)()>(&Oculus::Voice::Logging::TTSServiceLogging::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::InitLogger
// Il2CppName: InitLogger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Logging::TTSServiceLogging::*)()>(&Oculus::Voice::Logging::TTSServiceLogging::InitLogger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "InitLogger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Logging::TTSServiceLogging::*)()>(&Oculus::Voice::Logging::TTSServiceLogging::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Logging::TTSServiceLogging::*)()>(&Oculus::Voice::Logging::TTSServiceLogging::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::OnRequestBegin
// Il2CppName: OnRequestBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&Oculus::Voice::Logging::TTSServiceLogging::OnRequestBegin)> {
  static const MethodInfo* get() {
    static auto* clipData = &::il2cpp_utils::GetClassFromName("Meta.WitAi.TTS.Data", "TTSClipData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "OnRequestBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipData});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::OnRequestCancel
// Il2CppName: OnRequestCancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&Oculus::Voice::Logging::TTSServiceLogging::OnRequestCancel)> {
  static const MethodInfo* get() {
    static auto* clipData = &::il2cpp_utils::GetClassFromName("Meta.WitAi.TTS.Data", "TTSClipData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "OnRequestCancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipData});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::OnRequestError
// Il2CppName: OnRequestError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW)>(&Oculus::Voice::Logging::TTSServiceLogging::OnRequestError)> {
  static const MethodInfo* get() {
    static auto* clipData = &::il2cpp_utils::GetClassFromName("Meta.WitAi.TTS.Data", "TTSClipData")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "OnRequestError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipData, error});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::OnRequestFirstResponse
// Il2CppName: OnRequestFirstResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&Oculus::Voice::Logging::TTSServiceLogging::OnRequestFirstResponse)> {
  static const MethodInfo* get() {
    static auto* clipData = &::il2cpp_utils::GetClassFromName("Meta.WitAi.TTS.Data", "TTSClipData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "OnRequestFirstResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipData});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::OnRequestReady
// Il2CppName: OnRequestReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&Oculus::Voice::Logging::TTSServiceLogging::OnRequestReady)> {
  static const MethodInfo* get() {
    static auto* clipData = &::il2cpp_utils::GetClassFromName("Meta.WitAi.TTS.Data", "TTSClipData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "OnRequestReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipData});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::OnRequestComplete
// Il2CppName: OnRequestComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&Oculus::Voice::Logging::TTSServiceLogging::OnRequestComplete)> {
  static const MethodInfo* get() {
    static auto* clipData = &::il2cpp_utils::GetClassFromName("Meta.WitAi.TTS.Data", "TTSClipData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "OnRequestComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipData});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::LogStart
// Il2CppName: LogStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&Oculus::Voice::Logging::TTSServiceLogging::LogStart)> {
  static const MethodInfo* get() {
    static auto* clipData = &::il2cpp_utils::GetClassFromName("Meta.WitAi.TTS.Data", "TTSClipData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "LogStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipData});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::GetRequestData
// Il2CppName: GetRequestData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Voice::Logging::TTSServiceLogging::TTSServiceRequestLog (Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&Oculus::Voice::Logging::TTSServiceLogging::GetRequestData)> {
  static const MethodInfo* get() {
    static auto* clipData = &::il2cpp_utils::GetClassFromName("Meta.WitAi.TTS.Data", "TTSClipData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "GetRequestData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipData});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::LogTimestamp
// Il2CppName: LogTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW)>(&Oculus::Voice::Logging::TTSServiceLogging::LogTimestamp)> {
  static const MethodInfo* get() {
    static auto* clipData = &::il2cpp_utils::GetClassFromName("Meta.WitAi.TTS.Data", "TTSClipData")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "LogTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipData, key});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::LogTimestamp
// Il2CppName: LogTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Logging::TTSServiceLogging::*)(::Oculus::Voice::Logging::TTSServiceLogging::TTSServiceRequestLog, ::StringW)>(&Oculus::Voice::Logging::TTSServiceLogging::LogTimestamp)> {
  static const MethodInfo* get() {
    static auto* requestData = &::il2cpp_utils::GetClassFromName("Oculus.Voice.Logging", "TTSServiceLogging/TTSServiceRequestLog")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "LogTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestData, key});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::LogAnnotate
// Il2CppName: LogAnnotate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Logging::TTSServiceLogging::*)(::Oculus::Voice::Logging::TTSServiceLogging::TTSServiceRequestLog, ::StringW, ::StringW)>(&Oculus::Voice::Logging::TTSServiceLogging::LogAnnotate)> {
  static const MethodInfo* get() {
    static auto* requestData = &::il2cpp_utils::GetClassFromName("Oculus.Voice.Logging", "TTSServiceLogging/TTSServiceRequestLog")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "LogAnnotate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestData, key, value});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::LogComplete
// Il2CppName: LogComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW)>(&Oculus::Voice::Logging::TTSServiceLogging::LogComplete)> {
  static const MethodInfo* get() {
    static auto* clipData = &::il2cpp_utils::GetClassFromName("Meta.WitAi.TTS.Data", "TTSClipData")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "LogComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipData, error});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Voice::Logging::TTSServiceLogging::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::OnServiceStart
// Il2CppName: OnServiceStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Meta::WitAi::TTS::TTSService*)>(&Oculus::Voice::Logging::TTSServiceLogging::OnServiceStart)> {
  static const MethodInfo* get() {
    static auto* service = &::il2cpp_utils::GetClassFromName("Meta.WitAi.TTS", "TTSService")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Logging::TTSServiceLogging*), "OnServiceStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{service});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Logging::TTSServiceLogging::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
