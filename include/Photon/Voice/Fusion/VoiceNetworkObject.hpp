// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkBehaviour
#include "Fusion/NetworkBehaviour.hpp"
// Including type: Photon.Voice.Unity.ILoggableDependent
#include "Photon/Voice/Unity/ILoggableDependent.hpp"
// Including type: ExitGames.Client.Photon.DebugLevel
#include "ExitGames/Client/Photon/DebugLevel.hpp"
// Including type: Fusion.Changed`1
#include "Fusion/Changed_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Voice::Unity
namespace Photon::Voice::Unity {
  // Forward declaring type: VoiceConnection
  class VoiceConnection;
  // Forward declaring type: Speaker
  class Speaker;
  // Forward declaring type: Recorder
  class Recorder;
  // Forward declaring type: VoiceLogger
  class VoiceLogger;
}
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: ChangedDelegate`1<T>
  template<typename T>
  class ChangedDelegate_1;
  // Forward declaring type: NetworkBehaviourCallbacks`1<T>
  template<typename T>
  class NetworkBehaviourCallbacks_1;
}
// Completed forward declares
// Type namespace: Photon.Voice.Fusion
namespace Photon::Voice::Fusion {
  // Forward declaring type: VoiceNetworkObject
  class VoiceNetworkObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::Fusion::VoiceNetworkObject);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::Fusion::VoiceNetworkObject*, "Photon.Voice.Fusion", "VoiceNetworkObject");
// Type namespace: Photon.Voice.Fusion
namespace Photon::Voice::Fusion {
  // Size: 0xA6
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.Fusion.VoiceNetworkObject
  // [TokenAttribute] Offset: FFFFFFFF
  // [NetworkBehaviourWeavedAttribute] Offset: FFFFFFFF
  class VoiceNetworkObject : public ::Fusion::NetworkBehaviour/*, public ::Photon::Voice::Unity::ILoggableDependent*/ {
    public:
    public:
    // private Photon.Voice.Unity.VoiceConnection voiceConnection
    // Size: 0x8
    // Offset: 0x78
    ::Photon::Voice::Unity::VoiceConnection* voiceConnection;
    // Field size check
    static_assert(sizeof(::Photon::Voice::Unity::VoiceConnection*) == 0x8);
    // private Photon.Voice.Unity.Speaker speakerInUse
    // Size: 0x8
    // Offset: 0x80
    ::Photon::Voice::Unity::Speaker* speakerInUse;
    // Field size check
    static_assert(sizeof(::Photon::Voice::Unity::Speaker*) == 0x8);
    // private Photon.Voice.Unity.Recorder recorderInUse
    // Size: 0x8
    // Offset: 0x88
    ::Photon::Voice::Unity::Recorder* recorderInUse;
    // Field size check
    static_assert(sizeof(::Photon::Voice::Unity::Recorder*) == 0x8);
    // protected ExitGames.Client.Photon.DebugLevel logLevel
    // Size: 0x1
    // Offset: 0x90
    ::ExitGames::Client::Photon::DebugLevel logLevel;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::DebugLevel) == 0x1);
    // Padding between fields: logLevel and: logger
    char __padding3[0x7] = {};
    // private Photon.Voice.Unity.VoiceLogger logger
    // Size: 0x8
    // Offset: 0x98
    ::Photon::Voice::Unity::VoiceLogger* logger;
    // Field size check
    static_assert(sizeof(::Photon::Voice::Unity::VoiceLogger*) == 0x8);
    // private System.Boolean ignoreGlobalLogLevel
    // Size: 0x1
    // Offset: 0xA0
    bool ignoreGlobalLogLevel;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean AutoCreateRecorderIfNotFound
    // Size: 0x1
    // Offset: 0xA1
    bool AutoCreateRecorderIfNotFound;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean UsePrimaryRecorder
    // Size: 0x1
    // Offset: 0xA2
    bool UsePrimaryRecorder;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean SetupDebugSpeaker
    // Size: 0x1
    // Offset: 0xA3
    bool SetupDebugSpeaker;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsSpeaker>k__BackingField
    // Size: 0x1
    // Offset: 0xA4
    bool IsSpeaker;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsRecorder>k__BackingField
    // Size: 0x1
    // Offset: 0xA5
    bool IsRecorder;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Photon::Voice::Unity::ILoggableDependent
    operator ::Photon::Voice::Unity::ILoggableDependent() noexcept {
      return *reinterpret_cast<::Photon::Voice::Unity::ILoggableDependent*>(this);
    }
    // Get static field: static Fusion.Changed`1<Photon.Voice.Fusion.VoiceNetworkObject> $IL2CPP_CHANGED
    static ::Fusion::Changed_1<::Photon::Voice::Fusion::VoiceNetworkObject*> _get_$IL2CPP_CHANGED();
    // Set static field: static Fusion.Changed`1<Photon.Voice.Fusion.VoiceNetworkObject> $IL2CPP_CHANGED
    static void _set_$IL2CPP_CHANGED(::Fusion::Changed_1<::Photon::Voice::Fusion::VoiceNetworkObject*> value);
    // Get static field: static Fusion.ChangedDelegate`1<Photon.Voice.Fusion.VoiceNetworkObject> $IL2CPP_CHANGED_DELEGATE
    static ::Fusion::ChangedDelegate_1<::Photon::Voice::Fusion::VoiceNetworkObject*>* _get_$IL2CPP_CHANGED_DELEGATE();
    // Set static field: static Fusion.ChangedDelegate`1<Photon.Voice.Fusion.VoiceNetworkObject> $IL2CPP_CHANGED_DELEGATE
    static void _set_$IL2CPP_CHANGED_DELEGATE(::Fusion::ChangedDelegate_1<::Photon::Voice::Fusion::VoiceNetworkObject*>* value);
    // Get static field: static Fusion.NetworkBehaviourCallbacks`1<Photon.Voice.Fusion.VoiceNetworkObject> $IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS
    static ::Fusion::NetworkBehaviourCallbacks_1<::Photon::Voice::Fusion::VoiceNetworkObject*>* _get_$IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS();
    // Set static field: static Fusion.NetworkBehaviourCallbacks`1<Photon.Voice.Fusion.VoiceNetworkObject> $IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS
    static void _set_$IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS(::Fusion::NetworkBehaviourCallbacks_1<::Photon::Voice::Fusion::VoiceNetworkObject*>* value);
    // Get instance field reference: private Photon.Voice.Unity.VoiceConnection voiceConnection
    [[deprecated("Use field access instead!")]] ::Photon::Voice::Unity::VoiceConnection*& dyn_voiceConnection();
    // Get instance field reference: private Photon.Voice.Unity.Speaker speakerInUse
    [[deprecated("Use field access instead!")]] ::Photon::Voice::Unity::Speaker*& dyn_speakerInUse();
    // Get instance field reference: private Photon.Voice.Unity.Recorder recorderInUse
    [[deprecated("Use field access instead!")]] ::Photon::Voice::Unity::Recorder*& dyn_recorderInUse();
    // Get instance field reference: protected ExitGames.Client.Photon.DebugLevel logLevel
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::DebugLevel& dyn_logLevel();
    // Get instance field reference: private Photon.Voice.Unity.VoiceLogger logger
    [[deprecated("Use field access instead!")]] ::Photon::Voice::Unity::VoiceLogger*& dyn_logger();
    // Get instance field reference: private System.Boolean ignoreGlobalLogLevel
    [[deprecated("Use field access instead!")]] bool& dyn_ignoreGlobalLogLevel();
    // Get instance field reference: public System.Boolean AutoCreateRecorderIfNotFound
    [[deprecated("Use field access instead!")]] bool& dyn_AutoCreateRecorderIfNotFound();
    // Get instance field reference: public System.Boolean UsePrimaryRecorder
    [[deprecated("Use field access instead!")]] bool& dyn_UsePrimaryRecorder();
    // Get instance field reference: public System.Boolean SetupDebugSpeaker
    [[deprecated("Use field access instead!")]] bool& dyn_SetupDebugSpeaker();
    // Get instance field reference: private System.Boolean <IsSpeaker>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsSpeaker$k__BackingField();
    // Get instance field reference: private System.Boolean <IsRecorder>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsRecorder$k__BackingField();
    // public Photon.Voice.Unity.VoiceLogger get_Logger()
    // Offset: 0x4A9749C
    ::Photon::Voice::Unity::VoiceLogger* get_Logger();
    // protected System.Void set_Logger(Photon.Voice.Unity.VoiceLogger value)
    // Offset: 0x4A9758C
    void set_Logger(::Photon::Voice::Unity::VoiceLogger* value);
    // public ExitGames.Client.Photon.DebugLevel get_LogLevel()
    // Offset: 0x4A97594
    ::ExitGames::Client::Photon::DebugLevel get_LogLevel();
    // public System.Void set_LogLevel(ExitGames.Client.Photon.DebugLevel value)
    // Offset: 0x4A95CD8
    void set_LogLevel(::ExitGames::Client::Photon::DebugLevel value);
    // public System.Boolean get_IgnoreGlobalLogLevel()
    // Offset: 0x4A975CC
    bool get_IgnoreGlobalLogLevel();
    // public System.Void set_IgnoreGlobalLogLevel(System.Boolean value)
    // Offset: 0x4A975D4
    void set_IgnoreGlobalLogLevel(bool value);
    // public Photon.Voice.Unity.Recorder get_RecorderInUse()
    // Offset: 0x4A975E0
    ::Photon::Voice::Unity::Recorder* get_RecorderInUse();
    // public System.Void set_RecorderInUse(Photon.Voice.Unity.Recorder value)
    // Offset: 0x4A975E8
    void set_RecorderInUse(::Photon::Voice::Unity::Recorder* value);
    // public Photon.Voice.Unity.Speaker get_SpeakerInUse()
    // Offset: 0x4A97CD0
    ::Photon::Voice::Unity::Speaker* get_SpeakerInUse();
    // public System.Void set_SpeakerInUse(Photon.Voice.Unity.Speaker value)
    // Offset: 0x4A97CD8
    void set_SpeakerInUse(::Photon::Voice::Unity::Speaker* value);
    // public System.Boolean get_IsSetup()
    // Offset: 0x4A97EA8
    bool get_IsSetup();
    // public System.Boolean get_IsSpeaker()
    // Offset: 0x4A97EFC
    bool get_IsSpeaker();
    // private System.Void set_IsSpeaker(System.Boolean value)
    // Offset: 0x4A97F04
    void set_IsSpeaker(bool value);
    // public System.Boolean get_IsSpeaking()
    // Offset: 0x4A97F10
    bool get_IsSpeaking();
    // public System.Boolean get_IsRecorder()
    // Offset: 0x4A97F2C
    bool get_IsRecorder();
    // private System.Void set_IsRecorder(System.Boolean value)
    // Offset: 0x4A97F34
    void set_IsRecorder(bool value);
    // public System.Boolean get_IsRecording()
    // Offset: 0x4A97F40
    bool get_IsRecording();
    // public System.Boolean get_IsSpeakerLinked()
    // Offset: 0x4A97F70
    bool get_IsSpeakerLinked();
    // System.Boolean get_IsNetworkObjectReady()
    // Offset: 0x4A97C24
    bool get_IsNetworkObjectReady();
    // System.Boolean get_RequiresSpeaker()
    // Offset: 0x4A97E50
    bool get_RequiresSpeaker();
    // System.Boolean get_RequiresRecorder()
    // Offset: 0x4A97760
    bool get_RequiresRecorder();
    // System.Boolean get_IsPlayer()
    // Offset: 0x4A97FA0
    bool get_IsPlayer();
    // System.Boolean get_IsLocal()
    // Offset: 0x4A97FBC
    bool get_IsLocal();
    // System.Void Setup()
    // Offset: 0x4A97FFC
    void Setup();
    // private System.Boolean SetupRecorder()
    // Offset: 0x4A98108
    bool SetupRecorder();
    // private System.Boolean SetupRecorder(Photon.Voice.Unity.Recorder recorder)
    // Offset: 0x4A984B4
    bool SetupRecorder(::Photon::Voice::Unity::Recorder* recorder);
    // private System.Boolean SetupSpeaker()
    // Offset: 0x4A987D0
    bool SetupSpeaker();
    // private System.Boolean SetupSpeaker(Photon.Voice.Unity.Speaker speaker)
    // Offset: 0x4A98BD0
    bool SetupSpeaker(::Photon::Voice::Unity::Speaker* speaker);
    // System.Void SetupRecorderInUse()
    // Offset: 0x4A977A0
    void SetupRecorderInUse();
    // System.Void SetupSpeakerInUse()
    // Offset: 0x4A95D0C
    void SetupSpeakerInUse();
    // private System.Object GetUserData()
    // Offset: 0x4A98770
    ::Il2CppObject* GetUserData();
    // private System.Void CheckLateLinking()
    // Offset: 0x4A9912C
    void CheckLateLinking();
    // public System.Void .ctor()
    // Offset: 0x4A9951C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceNetworkObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::Fusion::VoiceNetworkObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceNetworkObject*, creationType>()));
    }
    // public override System.Void Spawned()
    // Offset: 0x4A994B4
    // Implemented from: Fusion.NetworkBehaviour
    // Base method: System.Void NetworkBehaviour::Spawned()
    void Spawned();
    // public override System.Void CopyBackingFieldsToState(System.Boolean )
    // Offset: 0x4A9952C
    // Implemented from: Fusion.NetworkBehaviour
    // Base method: System.Void NetworkBehaviour::CopyBackingFieldsToState(System.Boolean )
    void CopyBackingFieldsToState(bool param_0);
    // public override System.Void CopyStateToBackingFields()
    // Offset: 0x4A99530
    // Implemented from: Fusion.NetworkBehaviour
    // Base method: System.Void NetworkBehaviour::CopyStateToBackingFields()
    void CopyStateToBackingFields();
  }; // Photon.Voice.Fusion.VoiceNetworkObject
  #pragma pack(pop)
  static check_size<sizeof(VoiceNetworkObject), 165 + sizeof(bool)> __Photon_Voice_Fusion_VoiceNetworkObjectSizeCheck;
  static_assert(sizeof(VoiceNetworkObject) == 0xA6);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::get_Logger
// Il2CppName: get_Logger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Voice::Unity::VoiceLogger* (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::get_Logger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "get_Logger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::set_Logger
// Il2CppName: set_Logger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Fusion::VoiceNetworkObject::*)(::Photon::Voice::Unity::VoiceLogger*)>(&Photon::Voice::Fusion::VoiceNetworkObject::set_Logger)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Photon.Voice.Unity", "VoiceLogger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "set_Logger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::get_LogLevel
// Il2CppName: get_LogLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::DebugLevel (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::get_LogLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "get_LogLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::set_LogLevel
// Il2CppName: set_LogLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Fusion::VoiceNetworkObject::*)(::ExitGames::Client::Photon::DebugLevel)>(&Photon::Voice::Fusion::VoiceNetworkObject::set_LogLevel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "DebugLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "set_LogLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::get_IgnoreGlobalLogLevel
// Il2CppName: get_IgnoreGlobalLogLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::get_IgnoreGlobalLogLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "get_IgnoreGlobalLogLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::set_IgnoreGlobalLogLevel
// Il2CppName: set_IgnoreGlobalLogLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Fusion::VoiceNetworkObject::*)(bool)>(&Photon::Voice::Fusion::VoiceNetworkObject::set_IgnoreGlobalLogLevel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "set_IgnoreGlobalLogLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::get_RecorderInUse
// Il2CppName: get_RecorderInUse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Voice::Unity::Recorder* (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::get_RecorderInUse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "get_RecorderInUse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::set_RecorderInUse
// Il2CppName: set_RecorderInUse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Fusion::VoiceNetworkObject::*)(::Photon::Voice::Unity::Recorder*)>(&Photon::Voice::Fusion::VoiceNetworkObject::set_RecorderInUse)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Photon.Voice.Unity", "Recorder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "set_RecorderInUse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::get_SpeakerInUse
// Il2CppName: get_SpeakerInUse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Voice::Unity::Speaker* (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::get_SpeakerInUse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "get_SpeakerInUse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::set_SpeakerInUse
// Il2CppName: set_SpeakerInUse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Fusion::VoiceNetworkObject::*)(::Photon::Voice::Unity::Speaker*)>(&Photon::Voice::Fusion::VoiceNetworkObject::set_SpeakerInUse)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Photon.Voice.Unity", "Speaker")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "set_SpeakerInUse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::get_IsSetup
// Il2CppName: get_IsSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::get_IsSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "get_IsSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::get_IsSpeaker
// Il2CppName: get_IsSpeaker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::get_IsSpeaker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "get_IsSpeaker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::set_IsSpeaker
// Il2CppName: set_IsSpeaker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Fusion::VoiceNetworkObject::*)(bool)>(&Photon::Voice::Fusion::VoiceNetworkObject::set_IsSpeaker)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "set_IsSpeaker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::get_IsSpeaking
// Il2CppName: get_IsSpeaking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::get_IsSpeaking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "get_IsSpeaking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::get_IsRecorder
// Il2CppName: get_IsRecorder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::get_IsRecorder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "get_IsRecorder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::set_IsRecorder
// Il2CppName: set_IsRecorder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Fusion::VoiceNetworkObject::*)(bool)>(&Photon::Voice::Fusion::VoiceNetworkObject::set_IsRecorder)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "set_IsRecorder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::get_IsRecording
// Il2CppName: get_IsRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::get_IsRecording)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "get_IsRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::get_IsSpeakerLinked
// Il2CppName: get_IsSpeakerLinked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::get_IsSpeakerLinked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "get_IsSpeakerLinked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::get_IsNetworkObjectReady
// Il2CppName: get_IsNetworkObjectReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::get_IsNetworkObjectReady)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "get_IsNetworkObjectReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::get_RequiresSpeaker
// Il2CppName: get_RequiresSpeaker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::get_RequiresSpeaker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "get_RequiresSpeaker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::get_RequiresRecorder
// Il2CppName: get_RequiresRecorder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::get_RequiresRecorder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "get_RequiresRecorder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::get_IsPlayer
// Il2CppName: get_IsPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::get_IsPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "get_IsPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::get_IsLocal
// Il2CppName: get_IsLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::get_IsLocal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "get_IsLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::SetupRecorder
// Il2CppName: SetupRecorder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::SetupRecorder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "SetupRecorder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::SetupRecorder
// Il2CppName: SetupRecorder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Fusion::VoiceNetworkObject::*)(::Photon::Voice::Unity::Recorder*)>(&Photon::Voice::Fusion::VoiceNetworkObject::SetupRecorder)> {
  static const MethodInfo* get() {
    static auto* recorder = &::il2cpp_utils::GetClassFromName("Photon.Voice.Unity", "Recorder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "SetupRecorder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recorder});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::SetupSpeaker
// Il2CppName: SetupSpeaker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::SetupSpeaker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "SetupSpeaker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::SetupSpeaker
// Il2CppName: SetupSpeaker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Fusion::VoiceNetworkObject::*)(::Photon::Voice::Unity::Speaker*)>(&Photon::Voice::Fusion::VoiceNetworkObject::SetupSpeaker)> {
  static const MethodInfo* get() {
    static auto* speaker = &::il2cpp_utils::GetClassFromName("Photon.Voice.Unity", "Speaker")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "SetupSpeaker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{speaker});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::SetupRecorderInUse
// Il2CppName: SetupRecorderInUse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::SetupRecorderInUse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "SetupRecorderInUse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::SetupSpeakerInUse
// Il2CppName: SetupSpeakerInUse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::SetupSpeakerInUse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "SetupSpeakerInUse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::GetUserData
// Il2CppName: GetUserData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::GetUserData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "GetUserData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::CheckLateLinking
// Il2CppName: CheckLateLinking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::CheckLateLinking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "CheckLateLinking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::Spawned
// Il2CppName: Spawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::Spawned)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "Spawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::CopyBackingFieldsToState
// Il2CppName: CopyBackingFieldsToState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Fusion::VoiceNetworkObject::*)(bool)>(&Photon::Voice::Fusion::VoiceNetworkObject::CopyBackingFieldsToState)> {
  static const MethodInfo* get() {
    static auto* param_0 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "CopyBackingFieldsToState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{param_0});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Fusion::VoiceNetworkObject::CopyStateToBackingFields
// Il2CppName: CopyStateToBackingFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&Photon::Voice::Fusion::VoiceNetworkObject::CopyStateToBackingFields)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Fusion::VoiceNetworkObject*), "CopyStateToBackingFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};