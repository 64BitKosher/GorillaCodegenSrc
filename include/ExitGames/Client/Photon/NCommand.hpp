// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: StreamBuffer
  class StreamBuffer;
  // Forward declaring type: NCommandPool
  class NCommandPool;
  // Forward declaring type: EnetPeer
  class EnetPeer;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: NCommand
  class NCommand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::NCommand);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::NCommand*, "ExitGames.Client.Photon", "NCommand");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.NCommand
  // [TokenAttribute] Offset: FFFFFFFF
  class NCommand : public ::Il2CppObject/*, public ::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>*/ {
    public:
    public:
    // System.Byte commandFlags
    // Size: 0x1
    // Offset: 0x10
    uint8_t commandFlags;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // System.Byte commandType
    // Size: 0x1
    // Offset: 0x11
    uint8_t commandType;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // System.Byte commandChannelID
    // Size: 0x1
    // Offset: 0x12
    uint8_t commandChannelID;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: commandChannelID and: reliableSequenceNumber
    char __padding2[0x1] = {};
    // System.Int32 reliableSequenceNumber
    // Size: 0x4
    // Offset: 0x14
    int reliableSequenceNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 unreliableSequenceNumber
    // Size: 0x4
    // Offset: 0x18
    int unreliableSequenceNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 unsequencedGroupNumber
    // Size: 0x4
    // Offset: 0x1C
    int unsequencedGroupNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Byte reservedByte
    // Size: 0x1
    // Offset: 0x20
    uint8_t reservedByte;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: reservedByte and: startSequenceNumber
    char __padding6[0x3] = {};
    // System.Int32 startSequenceNumber
    // Size: 0x4
    // Offset: 0x24
    int startSequenceNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 fragmentCount
    // Size: 0x4
    // Offset: 0x28
    int fragmentCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 fragmentNumber
    // Size: 0x4
    // Offset: 0x2C
    int fragmentNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 totalLength
    // Size: 0x4
    // Offset: 0x30
    int totalLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 fragmentOffset
    // Size: 0x4
    // Offset: 0x34
    int fragmentOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 fragmentsRemaining
    // Size: 0x4
    // Offset: 0x38
    int fragmentsRemaining;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 commandSentTime
    // Size: 0x4
    // Offset: 0x3C
    int commandSentTime;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Byte commandSentCount
    // Size: 0x1
    // Offset: 0x40
    uint8_t commandSentCount;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: commandSentCount and: roundTripTimeout
    char __padding14[0x3] = {};
    // System.Int32 roundTripTimeout
    // Size: 0x4
    // Offset: 0x44
    int roundTripTimeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 timeoutTime
    // Size: 0x4
    // Offset: 0x48
    int timeoutTime;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 ackReceivedReliableSequenceNumber
    // Size: 0x4
    // Offset: 0x4C
    int ackReceivedReliableSequenceNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 ackReceivedSentTime
    // Size: 0x4
    // Offset: 0x50
    int ackReceivedSentTime;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Size
    // Size: 0x4
    // Offset: 0x54
    int Size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // ExitGames.Client.Photon.StreamBuffer Payload
    // Size: 0x8
    // Offset: 0x58
    ::ExitGames::Client::Photon::StreamBuffer* Payload;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::StreamBuffer*) == 0x8);
    // ExitGames.Client.Photon.NCommandPool returnPool
    // Size: 0x8
    // Offset: 0x60
    ::ExitGames::Client::Photon::NCommandPool* returnPool;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::NCommandPool*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>
    operator ::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>*>(this);
    }
    // static field const value: static System.Byte FV_UNRELIABLE
    static constexpr const uint8_t FV_UNRELIABLE = 0u;
    // Get static field: static System.Byte FV_UNRELIABLE
    static uint8_t _get_FV_UNRELIABLE();
    // Set static field: static System.Byte FV_UNRELIABLE
    static void _set_FV_UNRELIABLE(uint8_t value);
    // static field const value: static System.Byte FV_RELIABLE
    static constexpr const uint8_t FV_RELIABLE = 1u;
    // Get static field: static System.Byte FV_RELIABLE
    static uint8_t _get_FV_RELIABLE();
    // Set static field: static System.Byte FV_RELIABLE
    static void _set_FV_RELIABLE(uint8_t value);
    // static field const value: static System.Byte FV_UNRELIABLE_UNSEQUENCED
    static constexpr const uint8_t FV_UNRELIABLE_UNSEQUENCED = 2u;
    // Get static field: static System.Byte FV_UNRELIABLE_UNSEQUENCED
    static uint8_t _get_FV_UNRELIABLE_UNSEQUENCED();
    // Set static field: static System.Byte FV_UNRELIABLE_UNSEQUENCED
    static void _set_FV_UNRELIABLE_UNSEQUENCED(uint8_t value);
    // static field const value: static System.Byte FV_RELIBALE_UNSEQUENCED
    static constexpr const uint8_t FV_RELIBALE_UNSEQUENCED = 3u;
    // Get static field: static System.Byte FV_RELIBALE_UNSEQUENCED
    static uint8_t _get_FV_RELIBALE_UNSEQUENCED();
    // Set static field: static System.Byte FV_RELIBALE_UNSEQUENCED
    static void _set_FV_RELIBALE_UNSEQUENCED(uint8_t value);
    // static field const value: static System.Byte CT_NONE
    static constexpr const uint8_t CT_NONE = 0u;
    // Get static field: static System.Byte CT_NONE
    static uint8_t _get_CT_NONE();
    // Set static field: static System.Byte CT_NONE
    static void _set_CT_NONE(uint8_t value);
    // static field const value: static System.Byte CT_ACK
    static constexpr const uint8_t CT_ACK = 1u;
    // Get static field: static System.Byte CT_ACK
    static uint8_t _get_CT_ACK();
    // Set static field: static System.Byte CT_ACK
    static void _set_CT_ACK(uint8_t value);
    // static field const value: static System.Byte CT_CONNECT
    static constexpr const uint8_t CT_CONNECT = 2u;
    // Get static field: static System.Byte CT_CONNECT
    static uint8_t _get_CT_CONNECT();
    // Set static field: static System.Byte CT_CONNECT
    static void _set_CT_CONNECT(uint8_t value);
    // static field const value: static System.Byte CT_VERIFYCONNECT
    static constexpr const uint8_t CT_VERIFYCONNECT = 3u;
    // Get static field: static System.Byte CT_VERIFYCONNECT
    static uint8_t _get_CT_VERIFYCONNECT();
    // Set static field: static System.Byte CT_VERIFYCONNECT
    static void _set_CT_VERIFYCONNECT(uint8_t value);
    // static field const value: static System.Byte CT_DISCONNECT
    static constexpr const uint8_t CT_DISCONNECT = 4u;
    // Get static field: static System.Byte CT_DISCONNECT
    static uint8_t _get_CT_DISCONNECT();
    // Set static field: static System.Byte CT_DISCONNECT
    static void _set_CT_DISCONNECT(uint8_t value);
    // static field const value: static System.Byte CT_PING
    static constexpr const uint8_t CT_PING = 5u;
    // Get static field: static System.Byte CT_PING
    static uint8_t _get_CT_PING();
    // Set static field: static System.Byte CT_PING
    static void _set_CT_PING(uint8_t value);
    // static field const value: static System.Byte CT_SENDRELIABLE
    static constexpr const uint8_t CT_SENDRELIABLE = 6u;
    // Get static field: static System.Byte CT_SENDRELIABLE
    static uint8_t _get_CT_SENDRELIABLE();
    // Set static field: static System.Byte CT_SENDRELIABLE
    static void _set_CT_SENDRELIABLE(uint8_t value);
    // static field const value: static System.Byte CT_SENDUNRELIABLE
    static constexpr const uint8_t CT_SENDUNRELIABLE = 7u;
    // Get static field: static System.Byte CT_SENDUNRELIABLE
    static uint8_t _get_CT_SENDUNRELIABLE();
    // Set static field: static System.Byte CT_SENDUNRELIABLE
    static void _set_CT_SENDUNRELIABLE(uint8_t value);
    // static field const value: static System.Byte CT_SENDFRAGMENT
    static constexpr const uint8_t CT_SENDFRAGMENT = 8u;
    // Get static field: static System.Byte CT_SENDFRAGMENT
    static uint8_t _get_CT_SENDFRAGMENT();
    // Set static field: static System.Byte CT_SENDFRAGMENT
    static void _set_CT_SENDFRAGMENT(uint8_t value);
    // static field const value: static System.Byte CT_SENDUNSEQUENCED
    static constexpr const uint8_t CT_SENDUNSEQUENCED = 11u;
    // Get static field: static System.Byte CT_SENDUNSEQUENCED
    static uint8_t _get_CT_SENDUNSEQUENCED();
    // Set static field: static System.Byte CT_SENDUNSEQUENCED
    static void _set_CT_SENDUNSEQUENCED(uint8_t value);
    // static field const value: static System.Byte CT_EG_SERVERTIME
    static constexpr const uint8_t CT_EG_SERVERTIME = 12u;
    // Get static field: static System.Byte CT_EG_SERVERTIME
    static uint8_t _get_CT_EG_SERVERTIME();
    // Set static field: static System.Byte CT_EG_SERVERTIME
    static void _set_CT_EG_SERVERTIME(uint8_t value);
    // static field const value: static System.Byte CT_EG_SEND_UNRELIABLE_PROCESSED
    static constexpr const uint8_t CT_EG_SEND_UNRELIABLE_PROCESSED = 13u;
    // Get static field: static System.Byte CT_EG_SEND_UNRELIABLE_PROCESSED
    static uint8_t _get_CT_EG_SEND_UNRELIABLE_PROCESSED();
    // Set static field: static System.Byte CT_EG_SEND_UNRELIABLE_PROCESSED
    static void _set_CT_EG_SEND_UNRELIABLE_PROCESSED(uint8_t value);
    // static field const value: static System.Byte CT_EG_SEND_RELIABLE_UNSEQUENCED
    static constexpr const uint8_t CT_EG_SEND_RELIABLE_UNSEQUENCED = 14u;
    // Get static field: static System.Byte CT_EG_SEND_RELIABLE_UNSEQUENCED
    static uint8_t _get_CT_EG_SEND_RELIABLE_UNSEQUENCED();
    // Set static field: static System.Byte CT_EG_SEND_RELIABLE_UNSEQUENCED
    static void _set_CT_EG_SEND_RELIABLE_UNSEQUENCED(uint8_t value);
    // static field const value: static System.Byte CT_EG_SEND_FRAGMENT_UNSEQUENCED
    static constexpr const uint8_t CT_EG_SEND_FRAGMENT_UNSEQUENCED = 15u;
    // Get static field: static System.Byte CT_EG_SEND_FRAGMENT_UNSEQUENCED
    static uint8_t _get_CT_EG_SEND_FRAGMENT_UNSEQUENCED();
    // Set static field: static System.Byte CT_EG_SEND_FRAGMENT_UNSEQUENCED
    static void _set_CT_EG_SEND_FRAGMENT_UNSEQUENCED(uint8_t value);
    // static field const value: static System.Byte CT_EG_ACK_UNSEQUENCED
    static constexpr const uint8_t CT_EG_ACK_UNSEQUENCED = 16u;
    // Get static field: static System.Byte CT_EG_ACK_UNSEQUENCED
    static uint8_t _get_CT_EG_ACK_UNSEQUENCED();
    // Set static field: static System.Byte CT_EG_ACK_UNSEQUENCED
    static void _set_CT_EG_ACK_UNSEQUENCED(uint8_t value);
    // static field const value: static System.Int32 HEADER_UDP_PACK_LENGTH
    static constexpr const int HEADER_UDP_PACK_LENGTH = 12;
    // Get static field: static System.Int32 HEADER_UDP_PACK_LENGTH
    static int _get_HEADER_UDP_PACK_LENGTH();
    // Set static field: static System.Int32 HEADER_UDP_PACK_LENGTH
    static void _set_HEADER_UDP_PACK_LENGTH(int value);
    // static field const value: static System.Int32 CmdSizeMinimum
    static constexpr const int CmdSizeMinimum = 12;
    // Get static field: static System.Int32 CmdSizeMinimum
    static int _get_CmdSizeMinimum();
    // Set static field: static System.Int32 CmdSizeMinimum
    static void _set_CmdSizeMinimum(int value);
    // static field const value: static System.Int32 CmdSizeAck
    static constexpr const int CmdSizeAck = 20;
    // Get static field: static System.Int32 CmdSizeAck
    static int _get_CmdSizeAck();
    // Set static field: static System.Int32 CmdSizeAck
    static void _set_CmdSizeAck(int value);
    // static field const value: static System.Int32 CmdSizeConnect
    static constexpr const int CmdSizeConnect = 44;
    // Get static field: static System.Int32 CmdSizeConnect
    static int _get_CmdSizeConnect();
    // Set static field: static System.Int32 CmdSizeConnect
    static void _set_CmdSizeConnect(int value);
    // static field const value: static System.Int32 CmdSizeVerifyConnect
    static constexpr const int CmdSizeVerifyConnect = 44;
    // Get static field: static System.Int32 CmdSizeVerifyConnect
    static int _get_CmdSizeVerifyConnect();
    // Set static field: static System.Int32 CmdSizeVerifyConnect
    static void _set_CmdSizeVerifyConnect(int value);
    // static field const value: static System.Int32 CmdSizeDisconnect
    static constexpr const int CmdSizeDisconnect = 12;
    // Get static field: static System.Int32 CmdSizeDisconnect
    static int _get_CmdSizeDisconnect();
    // Set static field: static System.Int32 CmdSizeDisconnect
    static void _set_CmdSizeDisconnect(int value);
    // static field const value: static System.Int32 CmdSizePing
    static constexpr const int CmdSizePing = 12;
    // Get static field: static System.Int32 CmdSizePing
    static int _get_CmdSizePing();
    // Set static field: static System.Int32 CmdSizePing
    static void _set_CmdSizePing(int value);
    // static field const value: static System.Int32 CmdSizeReliableHeader
    static constexpr const int CmdSizeReliableHeader = 12;
    // Get static field: static System.Int32 CmdSizeReliableHeader
    static int _get_CmdSizeReliableHeader();
    // Set static field: static System.Int32 CmdSizeReliableHeader
    static void _set_CmdSizeReliableHeader(int value);
    // static field const value: static System.Int32 CmdSizeUnreliableHeader
    static constexpr const int CmdSizeUnreliableHeader = 16;
    // Get static field: static System.Int32 CmdSizeUnreliableHeader
    static int _get_CmdSizeUnreliableHeader();
    // Set static field: static System.Int32 CmdSizeUnreliableHeader
    static void _set_CmdSizeUnreliableHeader(int value);
    // static field const value: static System.Int32 CmdSizeUnsequensedHeader
    static constexpr const int CmdSizeUnsequensedHeader = 16;
    // Get static field: static System.Int32 CmdSizeUnsequensedHeader
    static int _get_CmdSizeUnsequensedHeader();
    // Set static field: static System.Int32 CmdSizeUnsequensedHeader
    static void _set_CmdSizeUnsequensedHeader(int value);
    // static field const value: static System.Int32 CmdSizeFragmentHeader
    static constexpr const int CmdSizeFragmentHeader = 32;
    // Get static field: static System.Int32 CmdSizeFragmentHeader
    static int _get_CmdSizeFragmentHeader();
    // Set static field: static System.Int32 CmdSizeFragmentHeader
    static void _set_CmdSizeFragmentHeader(int value);
    // static field const value: static System.Int32 CmdSizeMaxHeader
    static constexpr const int CmdSizeMaxHeader = 36;
    // Get static field: static System.Int32 CmdSizeMaxHeader
    static int _get_CmdSizeMaxHeader();
    // Set static field: static System.Int32 CmdSizeMaxHeader
    static void _set_CmdSizeMaxHeader(int value);
    // Get instance field reference: System.Byte commandFlags
    [[deprecated("Use field access instead!")]] uint8_t& dyn_commandFlags();
    // Get instance field reference: System.Byte commandType
    [[deprecated("Use field access instead!")]] uint8_t& dyn_commandType();
    // Get instance field reference: System.Byte commandChannelID
    [[deprecated("Use field access instead!")]] uint8_t& dyn_commandChannelID();
    // Get instance field reference: System.Int32 reliableSequenceNumber
    [[deprecated("Use field access instead!")]] int& dyn_reliableSequenceNumber();
    // Get instance field reference: System.Int32 unreliableSequenceNumber
    [[deprecated("Use field access instead!")]] int& dyn_unreliableSequenceNumber();
    // Get instance field reference: System.Int32 unsequencedGroupNumber
    [[deprecated("Use field access instead!")]] int& dyn_unsequencedGroupNumber();
    // Get instance field reference: System.Byte reservedByte
    [[deprecated("Use field access instead!")]] uint8_t& dyn_reservedByte();
    // Get instance field reference: System.Int32 startSequenceNumber
    [[deprecated("Use field access instead!")]] int& dyn_startSequenceNumber();
    // Get instance field reference: System.Int32 fragmentCount
    [[deprecated("Use field access instead!")]] int& dyn_fragmentCount();
    // Get instance field reference: System.Int32 fragmentNumber
    [[deprecated("Use field access instead!")]] int& dyn_fragmentNumber();
    // Get instance field reference: System.Int32 totalLength
    [[deprecated("Use field access instead!")]] int& dyn_totalLength();
    // Get instance field reference: System.Int32 fragmentOffset
    [[deprecated("Use field access instead!")]] int& dyn_fragmentOffset();
    // Get instance field reference: System.Int32 fragmentsRemaining
    [[deprecated("Use field access instead!")]] int& dyn_fragmentsRemaining();
    // Get instance field reference: System.Int32 commandSentTime
    [[deprecated("Use field access instead!")]] int& dyn_commandSentTime();
    // Get instance field reference: System.Byte commandSentCount
    [[deprecated("Use field access instead!")]] uint8_t& dyn_commandSentCount();
    // Get instance field reference: System.Int32 roundTripTimeout
    [[deprecated("Use field access instead!")]] int& dyn_roundTripTimeout();
    // Get instance field reference: System.Int32 timeoutTime
    [[deprecated("Use field access instead!")]] int& dyn_timeoutTime();
    // Get instance field reference: System.Int32 ackReceivedReliableSequenceNumber
    [[deprecated("Use field access instead!")]] int& dyn_ackReceivedReliableSequenceNumber();
    // Get instance field reference: System.Int32 ackReceivedSentTime
    [[deprecated("Use field access instead!")]] int& dyn_ackReceivedSentTime();
    // Get instance field reference: System.Int32 Size
    [[deprecated("Use field access instead!")]] int& dyn_Size();
    // Get instance field reference: ExitGames.Client.Photon.StreamBuffer Payload
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::StreamBuffer*& dyn_Payload();
    // Get instance field reference: ExitGames.Client.Photon.NCommandPool returnPool
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::NCommandPool*& dyn_returnPool();
    // protected internal System.Int32 get_SizeOfPayload()
    // Offset: 0x49D181C
    int get_SizeOfPayload();
    // protected internal System.Boolean get_IsFlaggedUnsequenced()
    // Offset: 0x49D2274
    bool get_IsFlaggedUnsequenced();
    // protected internal System.Boolean get_IsFlaggedReliable()
    // Offset: 0x49D1124
    bool get_IsFlaggedReliable();
    // static System.Void CreateAck(System.Byte[] buffer, System.Int32 offset, ExitGames.Client.Photon.NCommand commandToAck, System.Int32 sentTime)
    // Offset: 0x49D2378
    static void CreateAck(::ArrayW<uint8_t> buffer, int offset, ::ExitGames::Client::Photon::NCommand* commandToAck, int sentTime);
    // System.Void .ctor(ExitGames.Client.Photon.EnetPeer peer, System.Byte commandType, ExitGames.Client.Photon.StreamBuffer payload, System.Byte channel)
    // Offset: 0x49D68A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NCommand* New_ctor(::ExitGames::Client::Photon::EnetPeer* peer, uint8_t commandType, ::ExitGames::Client::Photon::StreamBuffer* payload, uint8_t channel) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::NCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NCommand*, creationType>(peer, commandType, payload, channel)));
    }
    // System.Void Initialize(ExitGames.Client.Photon.EnetPeer peer, System.Byte commandType, ExitGames.Client.Photon.StreamBuffer payload, System.Byte channel)
    // Offset: 0x49D68F4
    void Initialize(::ExitGames::Client::Photon::EnetPeer* peer, uint8_t commandType, ::ExitGames::Client::Photon::StreamBuffer* payload, uint8_t channel);
    // System.Void .ctor(ExitGames.Client.Photon.EnetPeer peer, System.Byte[] inBuff, ref System.Int32 readingOffset)
    // Offset: 0x49D650C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NCommand* New_ctor(::ExitGames::Client::Photon::EnetPeer* peer, ::ArrayW<uint8_t> inBuff, ByRef<int> readingOffset) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::NCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NCommand*, creationType>(peer, inBuff, byref(readingOffset))));
    }
    // System.Void Initialize(ExitGames.Client.Photon.EnetPeer peer, System.Byte[] inBuff, ref System.Int32 readingOffset)
    // Offset: 0x49D6558
    void Initialize(::ExitGames::Client::Photon::EnetPeer* peer, ::ArrayW<uint8_t> inBuff, ByRef<int> readingOffset);
    // public System.Void Reset()
    // Offset: 0x49D6D38
    void Reset();
    // System.Void SerializeHeader(System.Byte[] buffer, ref System.Int32 bufferIndex)
    // Offset: 0x49D1620
    void SerializeHeader(::ArrayW<uint8_t> buffer, ByRef<int> bufferIndex);
    // System.Byte[] Serialize()
    // Offset: 0x49D1830
    ::ArrayW<uint8_t> Serialize();
    // public System.Void FreePayload()
    // Offset: 0x49CEBFC
    void FreePayload();
    // public System.Void Release()
    // Offset: 0x49CEC68
    void Release();
    // public System.Int32 CompareTo(ExitGames.Client.Photon.NCommand other)
    // Offset: 0x49D6D70
    int CompareTo(::ExitGames::Client::Photon::NCommand* other);
    // public override System.String ToString()
    // Offset: 0x49D6DA8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // ExitGames.Client.Photon.NCommand
  #pragma pack(pop)
  static check_size<sizeof(NCommand), 96 + sizeof(::ExitGames::Client::Photon::NCommandPool*)> __ExitGames_Client_Photon_NCommandSizeCheck;
  static_assert(sizeof(NCommand) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::NCommand::get_SizeOfPayload
// Il2CppName: get_SizeOfPayload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::NCommand::*)()>(&ExitGames::Client::Photon::NCommand::get_SizeOfPayload)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NCommand*), "get_SizeOfPayload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NCommand::get_IsFlaggedUnsequenced
// Il2CppName: get_IsFlaggedUnsequenced
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::NCommand::*)()>(&ExitGames::Client::Photon::NCommand::get_IsFlaggedUnsequenced)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NCommand*), "get_IsFlaggedUnsequenced", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NCommand::get_IsFlaggedReliable
// Il2CppName: get_IsFlaggedReliable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::NCommand::*)()>(&ExitGames::Client::Photon::NCommand::get_IsFlaggedReliable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NCommand*), "get_IsFlaggedReliable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NCommand::CreateAck
// Il2CppName: CreateAck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, ::ExitGames::Client::Photon::NCommand*, int)>(&ExitGames::Client::Photon::NCommand::CreateAck)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* commandToAck = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "NCommand")->byval_arg;
    static auto* sentTime = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NCommand*), "CreateAck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, commandToAck, sentTime});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::NCommand::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::NCommand::*)(::ExitGames::Client::Photon::EnetPeer*, uint8_t, ::ExitGames::Client::Photon::StreamBuffer*, uint8_t)>(&ExitGames::Client::Photon::NCommand::Initialize)> {
  static const MethodInfo* get() {
    static auto* peer = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "EnetPeer")->byval_arg;
    static auto* commandType = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* payload = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NCommand*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, commandType, payload, channel});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::NCommand::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::NCommand::*)(::ExitGames::Client::Photon::EnetPeer*, ::ArrayW<uint8_t>, ByRef<int>)>(&ExitGames::Client::Photon::NCommand::Initialize)> {
  static const MethodInfo* get() {
    static auto* peer = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "EnetPeer")->byval_arg;
    static auto* inBuff = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* readingOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NCommand*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, inBuff, readingOffset});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NCommand::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::NCommand::*)()>(&ExitGames::Client::Photon::NCommand::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NCommand*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NCommand::SerializeHeader
// Il2CppName: SerializeHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::NCommand::*)(::ArrayW<uint8_t>, ByRef<int>)>(&ExitGames::Client::Photon::NCommand::SerializeHeader)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* bufferIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NCommand*), "SerializeHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, bufferIndex});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NCommand::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (ExitGames::Client::Photon::NCommand::*)()>(&ExitGames::Client::Photon::NCommand::Serialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NCommand*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NCommand::FreePayload
// Il2CppName: FreePayload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::NCommand::*)()>(&ExitGames::Client::Photon::NCommand::FreePayload)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NCommand*), "FreePayload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NCommand::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::NCommand::*)()>(&ExitGames::Client::Photon::NCommand::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NCommand*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NCommand::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::NCommand::*)(::ExitGames::Client::Photon::NCommand*)>(&ExitGames::Client::Photon::NCommand::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "NCommand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NCommand*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NCommand::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (ExitGames::Client::Photon::NCommand::*)()>(&ExitGames::Client::Photon::NCommand::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NCommand*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
