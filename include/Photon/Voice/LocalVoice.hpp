// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Photon.Voice.VoiceInfo
#include "Photon/Voice/VoiceInfo.hpp"
// Including type: System.ArraySegment`1
#include "System/ArraySegment_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Forward declaring type: IServiceable
  class IServiceable;
  // Forward declaring type: IEncoder
  class IEncoder;
  // Forward declaring type: VoiceClient
  class VoiceClient;
  // Forward declaring type: SpacingProfile
  class SpacingProfile;
  // Forward declaring type: FrameFlags
  struct FrameFlags;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: LocalVoice
  class LocalVoice;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::LocalVoice);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::LocalVoice*, "Photon.Voice", "LocalVoice");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.LocalVoice
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalVoice : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Byte <InterestGroup>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    uint8_t InterestGroup;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Boolean transmitEnabled
    // Size: 0x1
    // Offset: 0x11
    bool transmitEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Int32 <FramesSent>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int FramesSent;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <FramesSentBytes>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int FramesSentBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <Reliable>k__BackingField
    // Size: 0x1
    // Offset: 0x1C
    bool Reliable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <Encrypt>k__BackingField
    // Size: 0x1
    // Offset: 0x1D
    bool Encrypt;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private Photon.Voice.IServiceable <LocalUserServiceable>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Photon::Voice::IServiceable* LocalUserServiceable;
    // Field size check
    static_assert(sizeof(::Photon::Voice::IServiceable*) == 0x8);
    // private System.Boolean debugEchoMode
    // Size: 0x1
    // Offset: 0x28
    bool debugEchoMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected Photon.Voice.VoiceInfo info
    // Size: 0x30
    // Offset: 0x30
    ::Photon::Voice::VoiceInfo info;
    // Field size check
    static_assert(sizeof(::Photon::Voice::VoiceInfo) == 0x30);
    // protected Photon.Voice.IEncoder encoder
    // Size: 0x8
    // Offset: 0x60
    ::Photon::Voice::IEncoder* encoder;
    // Field size check
    static_assert(sizeof(::Photon::Voice::IEncoder*) == 0x8);
    // System.Byte id
    // Size: 0x1
    // Offset: 0x68
    uint8_t id;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // System.Int32 channelId
    // Size: 0x4
    // Offset: 0x6C
    int channelId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Byte evNumber
    // Size: 0x1
    // Offset: 0x70
    uint8_t evNumber;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // protected Photon.Voice.VoiceClient voiceClient
    // Size: 0x8
    // Offset: 0x78
    ::Photon::Voice::VoiceClient* voiceClient;
    // Field size check
    static_assert(sizeof(::Photon::Voice::VoiceClient*) == 0x8);
    // protected System.ArraySegment`1<System.Byte> configFrame
    // Size: 0xFFFFFFFF
    // Offset: 0x80
    ::System::ArraySegment_1<uint8_t> configFrame;
    // protected System.Boolean disposed
    // Size: 0x1
    // Offset: 0x90
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Object disposeLock
    // Size: 0x8
    // Offset: 0x98
    ::Il2CppObject* disposeLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 lastTransmitTime
    // Size: 0x4
    // Offset: 0xA0
    int lastTransmitTime;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Collections.Generic.Dictionary`2<System.Byte,System.Int32> eventTimestamps
    // Size: 0x8
    // Offset: 0xA8
    ::System::Collections::Generic::Dictionary_2<uint8_t, int>* eventTimestamps;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<uint8_t, int>*) == 0x8);
    // private Photon.Voice.SpacingProfile sendSpacingProfile
    // Size: 0x8
    // Offset: 0xB0
    ::Photon::Voice::SpacingProfile* sendSpacingProfile;
    // Field size check
    static_assert(sizeof(::Photon::Voice::SpacingProfile*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // static field const value: static public System.Int32 DATA_POOL_CAPACITY
    static constexpr const int DATA_POOL_CAPACITY = 50;
    // Get static field: static public System.Int32 DATA_POOL_CAPACITY
    static int _get_DATA_POOL_CAPACITY();
    // Set static field: static public System.Int32 DATA_POOL_CAPACITY
    static void _set_DATA_POOL_CAPACITY(int value);
    // static field const value: static private System.Int32 NO_TRANSMIT_TIMEOUT_MS
    static constexpr const int NO_TRANSMIT_TIMEOUT_MS = 100;
    // Get static field: static private System.Int32 NO_TRANSMIT_TIMEOUT_MS
    static int _get_NO_TRANSMIT_TIMEOUT_MS();
    // Set static field: static private System.Int32 NO_TRANSMIT_TIMEOUT_MS
    static void _set_NO_TRANSMIT_TIMEOUT_MS(int value);
    // Get instance field reference: private System.Byte <InterestGroup>k__BackingField
    [[deprecated("Use field access instead!")]] uint8_t& dyn_$InterestGroup$k__BackingField();
    // Get instance field reference: private System.Boolean transmitEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_transmitEnabled();
    // Get instance field reference: private System.Int32 <FramesSent>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$FramesSent$k__BackingField();
    // Get instance field reference: private System.Int32 <FramesSentBytes>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$FramesSentBytes$k__BackingField();
    // Get instance field reference: private System.Boolean <Reliable>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Reliable$k__BackingField();
    // Get instance field reference: private System.Boolean <Encrypt>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Encrypt$k__BackingField();
    // Get instance field reference: private Photon.Voice.IServiceable <LocalUserServiceable>k__BackingField
    [[deprecated("Use field access instead!")]] ::Photon::Voice::IServiceable*& dyn_$LocalUserServiceable$k__BackingField();
    // Get instance field reference: private System.Boolean debugEchoMode
    [[deprecated("Use field access instead!")]] bool& dyn_debugEchoMode();
    // Get instance field reference: protected Photon.Voice.VoiceInfo info
    [[deprecated("Use field access instead!")]] ::Photon::Voice::VoiceInfo& dyn_info();
    // Get instance field reference: protected Photon.Voice.IEncoder encoder
    [[deprecated("Use field access instead!")]] ::Photon::Voice::IEncoder*& dyn_encoder();
    // Get instance field reference: System.Byte id
    [[deprecated("Use field access instead!")]] uint8_t& dyn_id();
    // Get instance field reference: System.Int32 channelId
    [[deprecated("Use field access instead!")]] int& dyn_channelId();
    // Get instance field reference: System.Byte evNumber
    [[deprecated("Use field access instead!")]] uint8_t& dyn_evNumber();
    // Get instance field reference: protected Photon.Voice.VoiceClient voiceClient
    [[deprecated("Use field access instead!")]] ::Photon::Voice::VoiceClient*& dyn_voiceClient();
    // Get instance field reference: protected System.ArraySegment`1<System.Byte> configFrame
    [[deprecated("Use field access instead!")]] ::System::ArraySegment_1<uint8_t>& dyn_configFrame();
    // Get instance field reference: protected System.Boolean disposed
    [[deprecated("Use field access instead!")]] bool& dyn_disposed();
    // Get instance field reference: protected System.Object disposeLock
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_disposeLock();
    // Get instance field reference: private System.Int32 lastTransmitTime
    [[deprecated("Use field access instead!")]] int& dyn_lastTransmitTime();
    // Get instance field reference: System.Collections.Generic.Dictionary`2<System.Byte,System.Int32> eventTimestamps
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<uint8_t, int>*& dyn_eventTimestamps();
    // Get instance field reference: private Photon.Voice.SpacingProfile sendSpacingProfile
    [[deprecated("Use field access instead!")]] ::Photon::Voice::SpacingProfile*& dyn_sendSpacingProfile();
    // public System.Byte get_Group()
    // Offset: 0x4A652C4
    uint8_t get_Group();
    // public System.Void set_Group(System.Byte value)
    // Offset: 0x4A652CC
    void set_Group(uint8_t value);
    // public System.Byte get_InterestGroup()
    // Offset: 0x4A652D4
    uint8_t get_InterestGroup();
    // public System.Void set_InterestGroup(System.Byte value)
    // Offset: 0x4A652DC
    void set_InterestGroup(uint8_t value);
    // public Photon.Voice.VoiceInfo get_Info()
    // Offset: 0x4A652E4
    ::Photon::Voice::VoiceInfo get_Info();
    // public System.Boolean get_TransmitEnabled()
    // Offset: 0x4A652F8
    bool get_TransmitEnabled();
    // public System.Void set_TransmitEnabled(System.Boolean value)
    // Offset: 0x4A65300
    void set_TransmitEnabled(bool value);
    // public System.Boolean get_IsCurrentlyTransmitting()
    // Offset: 0x4A65458
    bool get_IsCurrentlyTransmitting();
    // public System.Int32 get_FramesSent()
    // Offset: 0x4A65480
    int get_FramesSent();
    // private System.Void set_FramesSent(System.Int32 value)
    // Offset: 0x4A65488
    void set_FramesSent(int value);
    // public System.Int32 get_FramesSentBytes()
    // Offset: 0x4A65490
    int get_FramesSentBytes();
    // private System.Void set_FramesSentBytes(System.Int32 value)
    // Offset: 0x4A65498
    void set_FramesSentBytes(int value);
    // public System.Boolean get_Reliable()
    // Offset: 0x4A654A0
    bool get_Reliable();
    // public System.Void set_Reliable(System.Boolean value)
    // Offset: 0x4A654A8
    void set_Reliable(bool value);
    // public System.Boolean get_Encrypt()
    // Offset: 0x4A654B4
    bool get_Encrypt();
    // public System.Void set_Encrypt(System.Boolean value)
    // Offset: 0x4A654BC
    void set_Encrypt(bool value);
    // public Photon.Voice.IServiceable get_LocalUserServiceable()
    // Offset: 0x4A654C8
    ::Photon::Voice::IServiceable* get_LocalUserServiceable();
    // public System.Void set_LocalUserServiceable(Photon.Voice.IServiceable value)
    // Offset: 0x4A654D0
    void set_LocalUserServiceable(::Photon::Voice::IServiceable* value);
    // public System.Boolean get_DebugEchoMode()
    // Offset: 0x4A654D8
    bool get_DebugEchoMode();
    // public System.Void set_DebugEchoMode(System.Boolean value)
    // Offset: 0x4A654E0
    void set_DebugEchoMode(bool value);
    // public System.Void SendSpacingProfileStart()
    // Offset: 0x4A65C30
    void SendSpacingProfileStart();
    // public System.String get_SendSpacingProfileDump()
    // Offset: 0x4A65C48
    ::StringW get_SendSpacingProfileDump();
    // public System.Int32 get_SendSpacingProfileMax()
    // Offset: 0x4A65C60
    int get_SendSpacingProfileMax();
    // public System.Byte get_ID()
    // Offset: 0x4A65C78
    uint8_t get_ID();
    // public System.Byte get_EvNumber()
    // Offset: 0x4A65C80
    uint8_t get_EvNumber();
    // System.Void .ctor()
    // Offset: 0x4A65C88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalVoice* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::LocalVoice::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalVoice*, creationType>()));
    }
    // System.Void .ctor(Photon.Voice.VoiceClient voiceClient, Photon.Voice.IEncoder encoder, System.Byte id, Photon.Voice.VoiceInfo voiceInfo, System.Int32 channelId)
    // Offset: 0x4A65DA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalVoice* New_ctor(::Photon::Voice::VoiceClient* voiceClient, ::Photon::Voice::IEncoder* encoder, uint8_t id, ::Photon::Voice::VoiceInfo voiceInfo, int channelId) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::LocalVoice::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalVoice*, creationType>(voiceClient, encoder, id, voiceInfo, channelId)));
    }
    // protected System.String get_shortName()
    // Offset: 0x4A66118
    ::StringW get_shortName();
    // public System.String get_Name()
    // Offset: 0x4A662B8
    ::StringW get_Name();
    // public System.String get_LogPrefix()
    // Offset: 0x4A660C0
    ::StringW get_LogPrefix();
    // System.Void service()
    // Offset: 0x4A66470
    void service();
    // System.Void sendConfigFrame(System.Int32 targetPlayerId)
    // Offset: 0x4A668F4
    void sendConfigFrame(int targetPlayerId);
    // System.Void sendFrame(System.ArraySegment`1<System.Byte> compressed, Photon.Voice.FrameFlags flags)
    // Offset: 0x4A665D0
    void sendFrame(::System::ArraySegment_1<uint8_t> compressed, ::Photon::Voice::FrameFlags flags);
    // System.Void sendFrame0(System.ArraySegment`1<System.Byte> compressed, Photon.Voice.FrameFlags flags, System.Int32 targetPlayerId, System.Boolean reliable)
    // Offset: 0x4A66A94
    void sendFrame0(::System::ArraySegment_1<uint8_t> compressed, ::Photon::Voice::FrameFlags flags, int targetPlayerId, bool reliable);
    // public System.Void RemoveSelf()
    // Offset: 0x4A66C64
    void RemoveSelf();
    // public System.Void Dispose()
    // Offset: 0x4A66F3C
    void Dispose();
  }; // Photon.Voice.LocalVoice
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_Group
// Il2CppName: get_Group
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_Group)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_Group", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::set_Group
// Il2CppName: set_Group
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LocalVoice::*)(uint8_t)>(&Photon::Voice::LocalVoice::set_Group)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "set_Group", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_InterestGroup
// Il2CppName: get_InterestGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_InterestGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_InterestGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::set_InterestGroup
// Il2CppName: set_InterestGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LocalVoice::*)(uint8_t)>(&Photon::Voice::LocalVoice::set_InterestGroup)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "set_InterestGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_Info
// Il2CppName: get_Info
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Voice::VoiceInfo (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_Info)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_Info", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_TransmitEnabled
// Il2CppName: get_TransmitEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_TransmitEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_TransmitEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::set_TransmitEnabled
// Il2CppName: set_TransmitEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LocalVoice::*)(bool)>(&Photon::Voice::LocalVoice::set_TransmitEnabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "set_TransmitEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_IsCurrentlyTransmitting
// Il2CppName: get_IsCurrentlyTransmitting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_IsCurrentlyTransmitting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_IsCurrentlyTransmitting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_FramesSent
// Il2CppName: get_FramesSent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_FramesSent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_FramesSent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::set_FramesSent
// Il2CppName: set_FramesSent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LocalVoice::*)(int)>(&Photon::Voice::LocalVoice::set_FramesSent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "set_FramesSent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_FramesSentBytes
// Il2CppName: get_FramesSentBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_FramesSentBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_FramesSentBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::set_FramesSentBytes
// Il2CppName: set_FramesSentBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LocalVoice::*)(int)>(&Photon::Voice::LocalVoice::set_FramesSentBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "set_FramesSentBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_Reliable
// Il2CppName: get_Reliable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_Reliable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_Reliable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::set_Reliable
// Il2CppName: set_Reliable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LocalVoice::*)(bool)>(&Photon::Voice::LocalVoice::set_Reliable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "set_Reliable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_Encrypt
// Il2CppName: get_Encrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_Encrypt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_Encrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::set_Encrypt
// Il2CppName: set_Encrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LocalVoice::*)(bool)>(&Photon::Voice::LocalVoice::set_Encrypt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "set_Encrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_LocalUserServiceable
// Il2CppName: get_LocalUserServiceable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Voice::IServiceable* (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_LocalUserServiceable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_LocalUserServiceable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::set_LocalUserServiceable
// Il2CppName: set_LocalUserServiceable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LocalVoice::*)(::Photon::Voice::IServiceable*)>(&Photon::Voice::LocalVoice::set_LocalUserServiceable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Photon.Voice", "IServiceable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "set_LocalUserServiceable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_DebugEchoMode
// Il2CppName: get_DebugEchoMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_DebugEchoMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_DebugEchoMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::set_DebugEchoMode
// Il2CppName: set_DebugEchoMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LocalVoice::*)(bool)>(&Photon::Voice::LocalVoice::set_DebugEchoMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "set_DebugEchoMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::SendSpacingProfileStart
// Il2CppName: SendSpacingProfileStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::SendSpacingProfileStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "SendSpacingProfileStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_SendSpacingProfileDump
// Il2CppName: get_SendSpacingProfileDump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_SendSpacingProfileDump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_SendSpacingProfileDump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_SendSpacingProfileMax
// Il2CppName: get_SendSpacingProfileMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_SendSpacingProfileMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_SendSpacingProfileMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_ID
// Il2CppName: get_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_ID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_EvNumber
// Il2CppName: get_EvNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_EvNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_EvNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_shortName
// Il2CppName: get_shortName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_shortName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_shortName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::get_LogPrefix
// Il2CppName: get_LogPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::get_LogPrefix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "get_LogPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::service
// Il2CppName: service
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::service)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "service", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::sendConfigFrame
// Il2CppName: sendConfigFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LocalVoice::*)(int)>(&Photon::Voice::LocalVoice::sendConfigFrame)> {
  static const MethodInfo* get() {
    static auto* targetPlayerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "sendConfigFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetPlayerId});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::sendFrame
// Il2CppName: sendFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LocalVoice::*)(::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags)>(&Photon::Voice::LocalVoice::sendFrame)> {
  static const MethodInfo* get() {
    static auto* compressed = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ArraySegment`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("Photon.Voice", "FrameFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "sendFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{compressed, flags});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::sendFrame0
// Il2CppName: sendFrame0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LocalVoice::*)(::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags, int, bool)>(&Photon::Voice::LocalVoice::sendFrame0)> {
  static const MethodInfo* get() {
    static auto* compressed = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ArraySegment`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("Photon.Voice", "FrameFlags")->byval_arg;
    static auto* targetPlayerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* reliable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "sendFrame0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{compressed, flags, targetPlayerId, reliable});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::RemoveSelf
// Il2CppName: RemoveSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::RemoveSelf)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "RemoveSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LocalVoice::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LocalVoice::*)()>(&Photon::Voice::LocalVoice::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LocalVoice*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
