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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Forward declaring type: VoiceClient
  class VoiceClient;
  // Forward declaring type: ILogger
  class ILogger;
  // Forward declaring type: LocalVoice
  class LocalVoice;
  // Forward declaring type: FrameFlags
  struct FrameFlags;
  // Forward declaring type: VoiceInfo
  struct VoiceInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ArraySegment`1<T>
  template<typename T>
  struct ArraySegment_1;
}
// Completed forward declares
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: PhotonTransportProtocol
  class PhotonTransportProtocol;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::PhotonTransportProtocol);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::PhotonTransportProtocol*, "Photon.Voice", "PhotonTransportProtocol");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.PhotonTransportProtocol
  // [TokenAttribute] Offset: FFFFFFFF
  class PhotonTransportProtocol : public ::Il2CppObject {
    public:
    // Nested type: ::Photon::Voice::PhotonTransportProtocol::EventSubcode
    struct EventSubcode;
    // Nested type: ::Photon::Voice::PhotonTransportProtocol::EventParam
    struct EventParam;
    public:
    // private Photon.Voice.VoiceClient voiceClient
    // Size: 0x8
    // Offset: 0x10
    ::Photon::Voice::VoiceClient* voiceClient;
    // Field size check
    static_assert(sizeof(::Photon::Voice::VoiceClient*) == 0x8);
    // private Photon.Voice.ILogger logger
    // Size: 0x8
    // Offset: 0x18
    ::Photon::Voice::ILogger* logger;
    // Field size check
    static_assert(sizeof(::Photon::Voice::ILogger*) == 0x8);
    public:
    // Get instance field reference: private Photon.Voice.VoiceClient voiceClient
    [[deprecated("Use field access instead!")]] ::Photon::Voice::VoiceClient*& dyn_voiceClient();
    // Get instance field reference: private Photon.Voice.ILogger logger
    [[deprecated("Use field access instead!")]] ::Photon::Voice::ILogger*& dyn_logger();
    // public System.Void .ctor(Photon.Voice.VoiceClient voiceClient, Photon.Voice.ILogger logger)
    // Offset: 0x4A741C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhotonTransportProtocol* New_ctor(::Photon::Voice::VoiceClient* voiceClient, ::Photon::Voice::ILogger* logger) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::PhotonTransportProtocol::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhotonTransportProtocol*, creationType>(voiceClient, logger)));
    }
    // System.Object[] buildVoicesInfo(System.Collections.Generic.IEnumerable`1<Photon.Voice.LocalVoice> voicesToSend, System.Boolean logInfo)
    // Offset: 0x4A74930
    ::ArrayW<::Il2CppObject*> buildVoicesInfo(::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>* voicesToSend, bool logInfo);
    // System.Object[] buildVoiceRemoveMessage(Photon.Voice.LocalVoice v)
    // Offset: 0x4A754E0
    ::ArrayW<::Il2CppObject*> buildVoiceRemoveMessage(::Photon::Voice::LocalVoice* v);
    // System.Object[] buildFrameMessage(System.Byte voiceId, System.Byte evNumber, System.ArraySegment`1<System.Byte> data, Photon.Voice.FrameFlags flags)
    // Offset: 0x4A75964
    ::ArrayW<::Il2CppObject*> buildFrameMessage(uint8_t voiceId, uint8_t evNumber, ::System::ArraySegment_1<uint8_t> data, ::Photon::Voice::FrameFlags flags);
    // System.Void onVoiceEvent(System.Object content0, System.Int32 channelId, System.Int32 playerId, System.Boolean isLocalPlayer)
    // Offset: 0x4A75C98
    void onVoiceEvent(::Il2CppObject* content0, int channelId, int playerId, bool isLocalPlayer);
    // private System.Void onVoiceInfo(System.Int32 channelId, System.Int32 playerId, System.Object payload)
    // Offset: 0x4A76858
    void onVoiceInfo(int channelId, int playerId, ::Il2CppObject* payload);
    // private System.Void onVoiceRemove(System.Int32 channelId, System.Int32 playerId, System.Object payload)
    // Offset: 0x4A76A60
    void onVoiceRemove(int channelId, int playerId, ::Il2CppObject* payload);
    // private Photon.Voice.VoiceInfo createVoiceInfoFromEventPayload(System.Collections.Generic.Dictionary`2<System.Byte,System.Object> h)
    // Offset: 0x4A76AF4
    ::Photon::Voice::VoiceInfo createVoiceInfoFromEventPayload(::System::Collections::Generic::Dictionary_2<uint8_t, ::Il2CppObject*>* h);
  }; // Photon.Voice.PhotonTransportProtocol
  #pragma pack(pop)
  static check_size<sizeof(PhotonTransportProtocol), 24 + sizeof(::Photon::Voice::ILogger*)> __Photon_Voice_PhotonTransportProtocolSizeCheck;
  static_assert(sizeof(PhotonTransportProtocol) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::PhotonTransportProtocol::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Voice::PhotonTransportProtocol::buildVoicesInfo
// Il2CppName: buildVoicesInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (Photon::Voice::PhotonTransportProtocol::*)(::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*, bool)>(&Photon::Voice::PhotonTransportProtocol::buildVoicesInfo)> {
  static const MethodInfo* get() {
    static auto* voicesToSend = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Photon.Voice", "LocalVoice")})->byval_arg;
    static auto* logInfo = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::PhotonTransportProtocol*), "buildVoicesInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{voicesToSend, logInfo});
  }
};
// Writing MetadataGetter for method: Photon::Voice::PhotonTransportProtocol::buildVoiceRemoveMessage
// Il2CppName: buildVoiceRemoveMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (Photon::Voice::PhotonTransportProtocol::*)(::Photon::Voice::LocalVoice*)>(&Photon::Voice::PhotonTransportProtocol::buildVoiceRemoveMessage)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("Photon.Voice", "LocalVoice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::PhotonTransportProtocol*), "buildVoiceRemoveMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: Photon::Voice::PhotonTransportProtocol::buildFrameMessage
// Il2CppName: buildFrameMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (Photon::Voice::PhotonTransportProtocol::*)(uint8_t, uint8_t, ::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags)>(&Photon::Voice::PhotonTransportProtocol::buildFrameMessage)> {
  static const MethodInfo* get() {
    static auto* voiceId = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* evNumber = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* data = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ArraySegment`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("Photon.Voice", "FrameFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::PhotonTransportProtocol*), "buildFrameMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{voiceId, evNumber, data, flags});
  }
};
// Writing MetadataGetter for method: Photon::Voice::PhotonTransportProtocol::onVoiceEvent
// Il2CppName: onVoiceEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::PhotonTransportProtocol::*)(::Il2CppObject*, int, int, bool)>(&Photon::Voice::PhotonTransportProtocol::onVoiceEvent)> {
  static const MethodInfo* get() {
    static auto* content0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* channelId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* playerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isLocalPlayer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::PhotonTransportProtocol*), "onVoiceEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{content0, channelId, playerId, isLocalPlayer});
  }
};
// Writing MetadataGetter for method: Photon::Voice::PhotonTransportProtocol::onVoiceInfo
// Il2CppName: onVoiceInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::PhotonTransportProtocol::*)(int, int, ::Il2CppObject*)>(&Photon::Voice::PhotonTransportProtocol::onVoiceInfo)> {
  static const MethodInfo* get() {
    static auto* channelId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* playerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* payload = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::PhotonTransportProtocol*), "onVoiceInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channelId, playerId, payload});
  }
};
// Writing MetadataGetter for method: Photon::Voice::PhotonTransportProtocol::onVoiceRemove
// Il2CppName: onVoiceRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::PhotonTransportProtocol::*)(int, int, ::Il2CppObject*)>(&Photon::Voice::PhotonTransportProtocol::onVoiceRemove)> {
  static const MethodInfo* get() {
    static auto* channelId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* playerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* payload = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::PhotonTransportProtocol*), "onVoiceRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channelId, playerId, payload});
  }
};
// Writing MetadataGetter for method: Photon::Voice::PhotonTransportProtocol::createVoiceInfoFromEventPayload
// Il2CppName: createVoiceInfoFromEventPayload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Voice::VoiceInfo (Photon::Voice::PhotonTransportProtocol::*)(::System::Collections::Generic::Dictionary_2<uint8_t, ::Il2CppObject*>*)>(&Photon::Voice::PhotonTransportProtocol::createVoiceInfoFromEventPayload)> {
  static const MethodInfo* get() {
    static auto* h = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::PhotonTransportProtocol*), "createVoiceInfoFromEventPayload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h});
  }
};