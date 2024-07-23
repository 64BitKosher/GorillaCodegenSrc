// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.Sockets.NetConfig
#include "Fusion/Sockets/NetConfig.hpp"
// Including type: Fusion.Timer
#include "Fusion/Timer.hpp"
// Including type: Fusion.Sockets.NetSocket
#include "Fusion/Sockets/NetSocket.hpp"
// Including type: Fusion.Sockets.NetBitBufferStack
#include "Fusion/Sockets/NetBitBufferStack.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetPeerGroup
  struct NetPeerGroup;
  // Forward declaring type: NetPeerGroupMap
  struct NetPeerGroupMap;
  // Forward declaring type: NetCommandRefused
  struct NetCommandRefused;
  // Forward declaring type: NetBitBuffer
  struct NetBitBuffer;
  // Forward declaring type: NetBitBufferBlock
  struct NetBitBufferBlock;
  // Forward declaring type: INetSocket
  class INetSocket;
  // Forward declaring type: INetPeerGroupCallbacks
  class INetPeerGroupCallbacks;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Random
  class Random;
}
// Forward declaring namespace: Fusion::Profiling
namespace Fusion::Profiling {
  // Forward declaring type: FusionSampler
  class FusionSampler;
}
// Completed forward declares
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetPeer
  struct NetPeer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::NetPeer, "Fusion.Sockets", "NetPeer");
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.Sockets.NetPeer
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetPeer/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 _state
    // Size: 0x4
    // Offset: 0x0
    int state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Fusion.Sockets.NetConfig _config
    // Size: 0xF8
    // Offset: 0x8
    ::Fusion::Sockets::NetConfig config;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetConfig) == 0xF8);
    // private Fusion.Timer _recvTimer
    // Size: 0x11
    // Offset: 0x100
    ::Fusion::Timer recvTimer;
    // Field size check
    static_assert(sizeof(::Fusion::Timer) == 0x11);
    // private System.Byte* _fragmentBuffer
    // Size: 0x8
    // Offset: 0x118
    uint8_t* fragmentBuffer;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // Fusion.Sockets.NetSocket _socket
    // Size: 0xFFFFFFFF
    // Offset: 0x120
    ::Fusion::Sockets::NetSocket socket;
    // private Fusion.Sockets.NetAddress _address
    // Size: 0x18
    // Offset: 0x128
    ::Fusion::Sockets::NetAddress address;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetAddress) == 0x18);
    // private Fusion.Sockets.NetBitBufferStack _sendStack
    // Size: 0x14
    // Offset: 0x140
    ::Fusion::Sockets::NetBitBufferStack sendStack;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetBitBufferStack) == 0x14);
    // private Fusion.Sockets.NetPeerGroup* _groups
    // Size: 0x8
    // Offset: 0x158
    ::Fusion::Sockets::NetPeerGroup* groups;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetPeerGroup*) == 0x8);
    // private Fusion.Sockets.NetPeerGroupMap* _groupsMap
    // Size: 0x8
    // Offset: 0x160
    ::Fusion::Sockets::NetPeerGroupMap* groupsMap;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetPeerGroupMap*) == 0x8);
    // private System.Int32* _groupsAssigned
    // Size: 0x8
    // Offset: 0x168
    int* groupsAssigned;
    // Field size check
    static_assert(sizeof(int*) == 0x8);
    // private Fusion.Sockets.NetCommandRefused* _refusedCommand
    // Size: 0x8
    // Offset: 0x170
    ::Fusion::Sockets::NetCommandRefused* refusedCommand;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetCommandRefused*) == 0x8);
    // private Fusion.Sockets.NetBitBuffer* _recv
    // Size: 0x8
    // Offset: 0x178
    ::Fusion::Sockets::NetBitBuffer* recv;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetBitBuffer*) == 0x8);
    // private Fusion.Sockets.NetBitBufferBlock* _recvBlock
    // Size: 0x8
    // Offset: 0x180
    ::Fusion::Sockets::NetBitBufferBlock* recvBlock;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetBitBufferBlock*) == 0x8);
    public:
    // Creating value type constructor for type: NetPeer
    constexpr NetPeer(int state_ = {}, ::Fusion::Sockets::NetConfig config_ = {}, ::Fusion::Timer recvTimer_ = {}, uint8_t* fragmentBuffer_ = {}, ::Fusion::Sockets::NetSocket socket_ = {}, ::Fusion::Sockets::NetAddress address_ = {}, ::Fusion::Sockets::NetBitBufferStack sendStack_ = {}, ::Fusion::Sockets::NetPeerGroup* groups_ = {}, ::Fusion::Sockets::NetPeerGroupMap* groupsMap_ = {}, int* groupsAssigned_ = {}, ::Fusion::Sockets::NetCommandRefused* refusedCommand_ = {}, ::Fusion::Sockets::NetBitBuffer* recv_ = {}, ::Fusion::Sockets::NetBitBufferBlock* recvBlock_ = {}) noexcept : state{state_}, config{config_}, recvTimer{recvTimer_}, fragmentBuffer{fragmentBuffer_}, socket{socket_}, address{address_}, sendStack{sendStack_}, groups{groups_}, groupsMap{groupsMap_}, groupsAssigned{groupsAssigned_}, refusedCommand{refusedCommand_}, recv{recv_}, recvBlock{recvBlock_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static field const value: static public System.Int32 DEFAULT_HEADERS
    static constexpr const int DEFAULT_HEADERS = 144;
    // Get static field: static public System.Int32 DEFAULT_HEADERS
    static int _get_DEFAULT_HEADERS();
    // Set static field: static public System.Int32 DEFAULT_HEADERS
    static void _set_DEFAULT_HEADERS(int value);
    // static field const value: static public System.Int32 MIN_MTU_BYTES
    static constexpr const int MIN_MTU_BYTES = 432;
    // Get static field: static public System.Int32 MIN_MTU_BYTES
    static int _get_MIN_MTU_BYTES();
    // Set static field: static public System.Int32 MIN_MTU_BYTES
    static void _set_MIN_MTU_BYTES(int value);
    // static field const value: static public System.Int32 MIN_MTU_BITS
    static constexpr const int MIN_MTU_BITS = 3456;
    // Get static field: static public System.Int32 MIN_MTU_BITS
    static int _get_MIN_MTU_BITS();
    // Set static field: static public System.Int32 MIN_MTU_BITS
    static void _set_MIN_MTU_BITS(int value);
    // static field const value: static public System.Int32 MAX_MTU_BYTES
    static constexpr const int MAX_MTU_BYTES = 1136;
    // Get static field: static public System.Int32 MAX_MTU_BYTES
    static int _get_MAX_MTU_BYTES();
    // Set static field: static public System.Int32 MAX_MTU_BYTES
    static void _set_MAX_MTU_BYTES(int value);
    // static field const value: static public System.Int32 MAX_MTU_BITS
    static constexpr const int MAX_MTU_BITS = 9088;
    // Get static field: static public System.Int32 MAX_MTU_BITS
    static int _get_MAX_MTU_BITS();
    // Set static field: static public System.Int32 MAX_MTU_BITS
    static void _set_MAX_MTU_BITS(int value);
    // static field const value: static System.Int32 FRAG_MAX_COUNT
    static constexpr const int FRAG_MAX_COUNT = 127;
    // Get static field: static System.Int32 FRAG_MAX_COUNT
    static int _get_FRAG_MAX_COUNT();
    // Set static field: static System.Int32 FRAG_MAX_COUNT
    static void _set_FRAG_MAX_COUNT(int value);
    // static field const value: static System.Byte FRAG_END_BIT
    static constexpr const uint8_t FRAG_END_BIT = 128u;
    // Get static field: static System.Byte FRAG_END_BIT
    static uint8_t _get_FRAG_END_BIT();
    // Set static field: static System.Byte FRAG_END_BIT
    static void _set_FRAG_END_BIT(uint8_t value);
    // static field const value: static private System.Int32 STATE_RUNNING
    static constexpr const int STATE_RUNNING = 0;
    // Get static field: static private System.Int32 STATE_RUNNING
    static int _get_STATE_RUNNING();
    // Set static field: static private System.Int32 STATE_RUNNING
    static void _set_STATE_RUNNING(int value);
    // static field const value: static private System.Int32 STATE_SHUTDOWN
    static constexpr const int STATE_SHUTDOWN = 2;
    // Get static field: static private System.Int32 STATE_SHUTDOWN
    static int _get_STATE_SHUTDOWN();
    // Set static field: static private System.Int32 STATE_SHUTDOWN
    static void _set_STATE_SHUTDOWN(int value);
    // Get instance field reference: private System.Int32 _state
    [[deprecated("Use field access instead!")]] int& dyn__state();
    // Get instance field reference: private Fusion.Sockets.NetConfig _config
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetConfig& dyn__config();
    // Get instance field reference: private Fusion.Timer _recvTimer
    [[deprecated("Use field access instead!")]] ::Fusion::Timer& dyn__recvTimer();
    // Get instance field reference: private System.Byte* _fragmentBuffer
    [[deprecated("Use field access instead!")]] uint8_t*& dyn__fragmentBuffer();
    // Get instance field reference: Fusion.Sockets.NetSocket _socket
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetSocket& dyn__socket();
    // Get instance field reference: private Fusion.Sockets.NetAddress _address
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetAddress& dyn__address();
    // Get instance field reference: private Fusion.Sockets.NetBitBufferStack _sendStack
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetBitBufferStack& dyn__sendStack();
    // Get instance field reference: private Fusion.Sockets.NetPeerGroup* _groups
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetPeerGroup*& dyn__groups();
    // Get instance field reference: private Fusion.Sockets.NetPeerGroupMap* _groupsMap
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetPeerGroupMap*& dyn__groupsMap();
    // Get instance field reference: private System.Int32* _groupsAssigned
    [[deprecated("Use field access instead!")]] int*& dyn__groupsAssigned();
    // Get instance field reference: private Fusion.Sockets.NetCommandRefused* _refusedCommand
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetCommandRefused*& dyn__refusedCommand();
    // Get instance field reference: private Fusion.Sockets.NetBitBuffer* _recv
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetBitBuffer*& dyn__recv();
    // Get instance field reference: private Fusion.Sockets.NetBitBufferBlock* _recvBlock
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetBitBufferBlock*& dyn__recvBlock();
    // public Fusion.Sockets.NetAddress get_Address()
    // Offset: 0x2B92990
    ::Fusion::Sockets::NetAddress get_Address();
    // public System.Int32 get_GroupCount()
    // Offset: 0x2B929A8
    int get_GroupCount();
    // static public Fusion.Sockets.NetConfig* GetConfigPointer(Fusion.Sockets.NetPeer* p)
    // Offset: 0x2B929B0
    static ::Fusion::Sockets::NetConfig* GetConfigPointer(::Fusion::Sockets::NetPeer* p);
    // static public Fusion.Sockets.NetPeerGroup* GetGroup(Fusion.Sockets.NetPeer* p, System.Int32 index)
    // Offset: 0x2B929E0
    static ::Fusion::Sockets::NetPeerGroup* GetGroup(::Fusion::Sockets::NetPeer* p, int index);
    // static public System.Void Recv(Fusion.Sockets.NetPeer* p, Fusion.Sockets.INetSocket socket, System.Random rng)
    // Offset: 0x2B92A28
    static void Recv(::Fusion::Sockets::NetPeer* p, ::Fusion::Sockets::INetSocket* socket, ::System::Random* rng);
    // static public System.Void Recv(Fusion.Sockets.NetPeer* p, Fusion.Sockets.INetSocket socket, System.Boolean* work, System.Random rng)
    // Offset: 0x2B92A44
    static void Recv(::Fusion::Sockets::NetPeer* p, ::Fusion::Sockets::INetSocket* socket, bool* work, ::System::Random* rng);
    // static public System.Void RemapAddress(Fusion.Sockets.NetPeer* p, Fusion.Sockets.NetAddress oldAddress, Fusion.Sockets.NetAddress newAddress)
    // Offset: 0x2B92D5C
    static void RemapAddress(::Fusion::Sockets::NetPeer* p, ::Fusion::Sockets::NetAddress oldAddress, ::Fusion::Sockets::NetAddress newAddress);
    // static public System.Void Send(Fusion.Sockets.NetPeer* p, Fusion.Sockets.INetSocket socket)
    // Offset: 0x2B93058
    static void Send(::Fusion::Sockets::NetPeer* p, ::Fusion::Sockets::INetSocket* socket);
    // static public System.Void Send(Fusion.Sockets.NetPeer* p, Fusion.Sockets.INetSocket socket, System.Boolean* work)
    // Offset: 0x2B930A8
    static void Send(::Fusion::Sockets::NetPeer* p, ::Fusion::Sockets::INetSocket* socket, bool* work);
    // static public Fusion.Sockets.NetPeer* Initialize(Fusion.Sockets.NetConfig config, Fusion.Sockets.INetSocket socket)
    // Offset: 0x2B93230
    static ::Fusion::Sockets::NetPeer* Initialize(::Fusion::Sockets::NetConfig config, ::Fusion::Sockets::INetSocket* socket);
    // static public System.Void Initialize(Fusion.Sockets.NetPeer* p, Fusion.Sockets.NetConfig config, Fusion.Sockets.INetSocket socket)
    // Offset: 0x2B932DC
    static void Initialize(::Fusion::Sockets::NetPeer* p, ::Fusion::Sockets::NetConfig config, ::Fusion::Sockets::INetSocket* socket);
    // static public System.Void Destroy(Fusion.Sockets.NetPeer* p, Fusion.Sockets.INetSocket socket, Fusion.Sockets.INetPeerGroupCallbacks callbacks)
    // Offset: 0x2B93848
    static void Destroy(::Fusion::Sockets::NetPeer* p, ::Fusion::Sockets::INetSocket* socket, ::Fusion::Sockets::INetPeerGroupCallbacks* callbacks);
    // static private System.Void DestroySocket(Fusion.Sockets.NetPeer* p, Fusion.Sockets.INetSocket socket, Fusion.Sockets.INetPeerGroupCallbacks callbacks)
    // Offset: 0x2B938AC
    static void DestroySocket(::Fusion::Sockets::NetPeer* p, ::Fusion::Sockets::INetSocket* socket, ::Fusion::Sockets::INetPeerGroupCallbacks* callbacks);
    // static private System.Int16 FindGroupWithLeastAssignedAddresses(Fusion.Sockets.NetPeer* p)
    // Offset: 0x2B93AB0
    static int16_t FindGroupWithLeastAssignedAddresses(::Fusion::Sockets::NetPeer* p);
    // static private System.Void RecvInternal(Fusion.Sockets.NetPeer* p, Fusion.Sockets.INetSocket socket, System.Boolean* work, System.Random rng, Fusion.Profiling.FusionSampler sampler)
    // Offset: 0x2B92B18
    static void RecvInternal(::Fusion::Sockets::NetPeer* p, ::Fusion::Sockets::INetSocket* socket, bool* work, ::System::Random* rng, ::Fusion::Profiling::FusionSampler* sampler);
    // static private System.Void RecvBufferPushToGroup(Fusion.Sockets.NetPeer* p, Fusion.Sockets.INetSocket socket, System.Random rng)
    // Offset: 0x2B93B18
    static void RecvBufferPushToGroup(::Fusion::Sockets::NetPeer* p, ::Fusion::Sockets::INetSocket* socket, ::System::Random* rng);
    // static private System.Void SendInternal(Fusion.Sockets.NetPeer* p, Fusion.Sockets.INetSocket socket, System.Boolean* work)
    // Offset: 0x2B93174
    static void SendInternal(::Fusion::Sockets::NetPeer* p, ::Fusion::Sockets::INetSocket* socket, bool* work);
    // static private System.Void SendFromStack(Fusion.Sockets.NetPeer* p, Fusion.Sockets.INetSocket socket, System.Boolean* work)
    // Offset: 0x2B93E54
    static void SendFromStack(::Fusion::Sockets::NetPeer* p, ::Fusion::Sockets::INetSocket* socket, bool* work);
    // static private System.Boolean RecvBufferAvailable(Fusion.Sockets.NetPeer* p)
    // Offset: 0x2B942A8
    static bool RecvBufferAvailable(::Fusion::Sockets::NetPeer* p);
    // static private System.Boolean RecvExpired(Fusion.Sockets.NetPeer* p)
    // Offset: 0x2B94308
    static bool RecvExpired(::Fusion::Sockets::NetPeer* p);
  }; // Fusion.Sockets.NetPeer
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::get_Address
// Il2CppName: get_Address
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetAddress (Fusion::Sockets::NetPeer::*)()>(&Fusion::Sockets::NetPeer::get_Address)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "get_Address", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::get_GroupCount
// Il2CppName: get_GroupCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::Sockets::NetPeer::*)()>(&Fusion::Sockets::NetPeer::get_GroupCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "get_GroupCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::GetConfigPointer
// Il2CppName: GetConfigPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetConfig* (*)(::Fusion::Sockets::NetPeer*)>(&Fusion::Sockets::NetPeer::GetConfigPointer)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeer"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "GetConfigPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::GetGroup
// Il2CppName: GetGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetPeerGroup* (*)(::Fusion::Sockets::NetPeer*, int)>(&Fusion::Sockets::NetPeer::GetGroup)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeer"))->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "GetGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, index});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::Recv
// Il2CppName: Recv
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, ::System::Random*)>(&Fusion::Sockets::NetPeer::Recv)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeer"))->byval_arg;
    static auto* socket = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "INetSocket")->byval_arg;
    static auto* rng = &::il2cpp_utils::GetClassFromName("System", "Random")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "Recv", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, socket, rng});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::Recv
// Il2CppName: Recv
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, bool*, ::System::Random*)>(&Fusion::Sockets::NetPeer::Recv)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeer"))->byval_arg;
    static auto* socket = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "INetSocket")->byval_arg;
    static auto* work = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Boolean"))->byval_arg;
    static auto* rng = &::il2cpp_utils::GetClassFromName("System", "Random")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "Recv", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, socket, work, rng});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::RemapAddress
// Il2CppName: RemapAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetAddress)>(&Fusion::Sockets::NetPeer::RemapAddress)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeer"))->byval_arg;
    static auto* oldAddress = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetAddress")->byval_arg;
    static auto* newAddress = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetAddress")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "RemapAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, oldAddress, newAddress});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*)>(&Fusion::Sockets::NetPeer::Send)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeer"))->byval_arg;
    static auto* socket = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "INetSocket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, socket});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, bool*)>(&Fusion::Sockets::NetPeer::Send)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeer"))->byval_arg;
    static auto* socket = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "INetSocket")->byval_arg;
    static auto* work = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Boolean"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, socket, work});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetPeer* (*)(::Fusion::Sockets::NetConfig, ::Fusion::Sockets::INetSocket*)>(&Fusion::Sockets::NetPeer::Initialize)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetConfig")->byval_arg;
    static auto* socket = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "INetSocket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config, socket});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::NetConfig, ::Fusion::Sockets::INetSocket*)>(&Fusion::Sockets::NetPeer::Initialize)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeer"))->byval_arg;
    static auto* config = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetConfig")->byval_arg;
    static auto* socket = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "INetSocket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, config, socket});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, ::Fusion::Sockets::INetPeerGroupCallbacks*)>(&Fusion::Sockets::NetPeer::Destroy)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeer"))->byval_arg;
    static auto* socket = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "INetSocket")->byval_arg;
    static auto* callbacks = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "INetPeerGroupCallbacks")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, socket, callbacks});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::DestroySocket
// Il2CppName: DestroySocket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, ::Fusion::Sockets::INetPeerGroupCallbacks*)>(&Fusion::Sockets::NetPeer::DestroySocket)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeer"))->byval_arg;
    static auto* socket = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "INetSocket")->byval_arg;
    static auto* callbacks = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "INetPeerGroupCallbacks")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "DestroySocket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, socket, callbacks});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::FindGroupWithLeastAssignedAddresses
// Il2CppName: FindGroupWithLeastAssignedAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::Fusion::Sockets::NetPeer*)>(&Fusion::Sockets::NetPeer::FindGroupWithLeastAssignedAddresses)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeer"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "FindGroupWithLeastAssignedAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::RecvInternal
// Il2CppName: RecvInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, bool*, ::System::Random*, ::Fusion::Profiling::FusionSampler*)>(&Fusion::Sockets::NetPeer::RecvInternal)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeer"))->byval_arg;
    static auto* socket = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "INetSocket")->byval_arg;
    static auto* work = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Boolean"))->byval_arg;
    static auto* rng = &::il2cpp_utils::GetClassFromName("System", "Random")->byval_arg;
    static auto* sampler = &::il2cpp_utils::GetClassFromName("Fusion.Profiling", "FusionSampler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "RecvInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, socket, work, rng, sampler});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::RecvBufferPushToGroup
// Il2CppName: RecvBufferPushToGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, ::System::Random*)>(&Fusion::Sockets::NetPeer::RecvBufferPushToGroup)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeer"))->byval_arg;
    static auto* socket = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "INetSocket")->byval_arg;
    static auto* rng = &::il2cpp_utils::GetClassFromName("System", "Random")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "RecvBufferPushToGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, socket, rng});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::SendInternal
// Il2CppName: SendInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, bool*)>(&Fusion::Sockets::NetPeer::SendInternal)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeer"))->byval_arg;
    static auto* socket = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "INetSocket")->byval_arg;
    static auto* work = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Boolean"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "SendInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, socket, work});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::SendFromStack
// Il2CppName: SendFromStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, bool*)>(&Fusion::Sockets::NetPeer::SendFromStack)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeer"))->byval_arg;
    static auto* socket = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "INetSocket")->byval_arg;
    static auto* work = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Boolean"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "SendFromStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, socket, work});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::RecvBufferAvailable
// Il2CppName: RecvBufferAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Fusion::Sockets::NetPeer*)>(&Fusion::Sockets::NetPeer::RecvBufferAvailable)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeer"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "RecvBufferAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeer::RecvExpired
// Il2CppName: RecvExpired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Fusion::Sockets::NetPeer*)>(&Fusion::Sockets::NetPeer::RecvExpired)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeer"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeer), "RecvExpired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};