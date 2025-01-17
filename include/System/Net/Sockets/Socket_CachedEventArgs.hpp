// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Sockets.Socket
#include "System/Net/Sockets/Socket.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Sockets::Socket::CachedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::Socket::CachedEventArgs*, "System.Net.Sockets", "Socket/CachedEventArgs");
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.Socket/CachedEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class Socket::CachedEventArgs : public ::Il2CppObject {
    public:
    public:
    // public System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> TaskAccept
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::Sockets::Socket::TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* TaskAccept;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::Socket::TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*) == 0x8);
    // public System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs TaskReceive
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::Sockets::Socket::Int32TaskSocketAsyncEventArgs* TaskReceive;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::Socket::Int32TaskSocketAsyncEventArgs*) == 0x8);
    // public System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs TaskSend
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::Sockets::Socket::Int32TaskSocketAsyncEventArgs* TaskSend;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::Socket::Int32TaskSocketAsyncEventArgs*) == 0x8);
    // public System.Net.Sockets.Socket/AwaitableSocketAsyncEventArgs ValueTaskReceive
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs* ValueTaskReceive;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*) == 0x8);
    // public System.Net.Sockets.Socket/AwaitableSocketAsyncEventArgs ValueTaskSend
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs* ValueTaskSend;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*) == 0x8);
    public:
    // Get instance field reference: public System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> TaskAccept
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::Socket::TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*& dyn_TaskAccept();
    // Get instance field reference: public System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs TaskReceive
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::Socket::Int32TaskSocketAsyncEventArgs*& dyn_TaskReceive();
    // Get instance field reference: public System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs TaskSend
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::Socket::Int32TaskSocketAsyncEventArgs*& dyn_TaskSend();
    // Get instance field reference: public System.Net.Sockets.Socket/AwaitableSocketAsyncEventArgs ValueTaskReceive
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*& dyn_ValueTaskReceive();
    // Get instance field reference: public System.Net.Sockets.Socket/AwaitableSocketAsyncEventArgs ValueTaskSend
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*& dyn_ValueTaskSend();
    // public System.Void .ctor()
    // Offset: 0x4ED7E24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Socket::CachedEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::Socket::CachedEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Socket::CachedEventArgs*, creationType>()));
    }
  }; // System.Net.Sockets.Socket/CachedEventArgs
  #pragma pack(pop)
  static check_size<sizeof(Socket::CachedEventArgs), 48 + sizeof(::System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*)> __System_Net_Sockets_Socket_CachedEventArgsSizeCheck;
  static_assert(sizeof(Socket::CachedEventArgs) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::Socket::CachedEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
