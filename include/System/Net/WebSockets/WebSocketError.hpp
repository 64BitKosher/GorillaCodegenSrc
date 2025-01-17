// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net.WebSockets
namespace System::Net::WebSockets {
  // Forward declaring type: WebSocketError
  struct WebSocketError;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::WebSocketError, "System.Net.WebSockets", "WebSocketError");
// Type namespace: System.Net.WebSockets
namespace System::Net::WebSockets {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebSockets.WebSocketError
  // [TokenAttribute] Offset: FFFFFFFF
  struct WebSocketError/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: WebSocketError
    constexpr WebSocketError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.WebSockets.WebSocketError Success
    static constexpr const int Success = 0;
    // Get static field: static public System.Net.WebSockets.WebSocketError Success
    static ::System::Net::WebSockets::WebSocketError _get_Success();
    // Set static field: static public System.Net.WebSockets.WebSocketError Success
    static void _set_Success(::System::Net::WebSockets::WebSocketError value);
    // static field const value: static public System.Net.WebSockets.WebSocketError InvalidMessageType
    static constexpr const int InvalidMessageType = 1;
    // Get static field: static public System.Net.WebSockets.WebSocketError InvalidMessageType
    static ::System::Net::WebSockets::WebSocketError _get_InvalidMessageType();
    // Set static field: static public System.Net.WebSockets.WebSocketError InvalidMessageType
    static void _set_InvalidMessageType(::System::Net::WebSockets::WebSocketError value);
    // static field const value: static public System.Net.WebSockets.WebSocketError Faulted
    static constexpr const int Faulted = 2;
    // Get static field: static public System.Net.WebSockets.WebSocketError Faulted
    static ::System::Net::WebSockets::WebSocketError _get_Faulted();
    // Set static field: static public System.Net.WebSockets.WebSocketError Faulted
    static void _set_Faulted(::System::Net::WebSockets::WebSocketError value);
    // static field const value: static public System.Net.WebSockets.WebSocketError NativeError
    static constexpr const int NativeError = 3;
    // Get static field: static public System.Net.WebSockets.WebSocketError NativeError
    static ::System::Net::WebSockets::WebSocketError _get_NativeError();
    // Set static field: static public System.Net.WebSockets.WebSocketError NativeError
    static void _set_NativeError(::System::Net::WebSockets::WebSocketError value);
    // static field const value: static public System.Net.WebSockets.WebSocketError NotAWebSocket
    static constexpr const int NotAWebSocket = 4;
    // Get static field: static public System.Net.WebSockets.WebSocketError NotAWebSocket
    static ::System::Net::WebSockets::WebSocketError _get_NotAWebSocket();
    // Set static field: static public System.Net.WebSockets.WebSocketError NotAWebSocket
    static void _set_NotAWebSocket(::System::Net::WebSockets::WebSocketError value);
    // static field const value: static public System.Net.WebSockets.WebSocketError UnsupportedVersion
    static constexpr const int UnsupportedVersion = 5;
    // Get static field: static public System.Net.WebSockets.WebSocketError UnsupportedVersion
    static ::System::Net::WebSockets::WebSocketError _get_UnsupportedVersion();
    // Set static field: static public System.Net.WebSockets.WebSocketError UnsupportedVersion
    static void _set_UnsupportedVersion(::System::Net::WebSockets::WebSocketError value);
    // static field const value: static public System.Net.WebSockets.WebSocketError UnsupportedProtocol
    static constexpr const int UnsupportedProtocol = 6;
    // Get static field: static public System.Net.WebSockets.WebSocketError UnsupportedProtocol
    static ::System::Net::WebSockets::WebSocketError _get_UnsupportedProtocol();
    // Set static field: static public System.Net.WebSockets.WebSocketError UnsupportedProtocol
    static void _set_UnsupportedProtocol(::System::Net::WebSockets::WebSocketError value);
    // static field const value: static public System.Net.WebSockets.WebSocketError HeaderError
    static constexpr const int HeaderError = 7;
    // Get static field: static public System.Net.WebSockets.WebSocketError HeaderError
    static ::System::Net::WebSockets::WebSocketError _get_HeaderError();
    // Set static field: static public System.Net.WebSockets.WebSocketError HeaderError
    static void _set_HeaderError(::System::Net::WebSockets::WebSocketError value);
    // static field const value: static public System.Net.WebSockets.WebSocketError ConnectionClosedPrematurely
    static constexpr const int ConnectionClosedPrematurely = 8;
    // Get static field: static public System.Net.WebSockets.WebSocketError ConnectionClosedPrematurely
    static ::System::Net::WebSockets::WebSocketError _get_ConnectionClosedPrematurely();
    // Set static field: static public System.Net.WebSockets.WebSocketError ConnectionClosedPrematurely
    static void _set_ConnectionClosedPrematurely(::System::Net::WebSockets::WebSocketError value);
    // static field const value: static public System.Net.WebSockets.WebSocketError InvalidState
    static constexpr const int InvalidState = 9;
    // Get static field: static public System.Net.WebSockets.WebSocketError InvalidState
    static ::System::Net::WebSockets::WebSocketError _get_InvalidState();
    // Set static field: static public System.Net.WebSockets.WebSocketError InvalidState
    static void _set_InvalidState(::System::Net::WebSockets::WebSocketError value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.WebSockets.WebSocketError
  #pragma pack(pop)
  static check_size<sizeof(WebSocketError), 0 + sizeof(int)> __System_Net_WebSockets_WebSocketErrorSizeCheck;
  static_assert(sizeof(WebSocketError) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
