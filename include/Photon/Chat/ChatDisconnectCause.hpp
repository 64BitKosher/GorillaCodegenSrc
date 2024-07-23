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
// Type namespace: Photon.Chat
namespace Photon::Chat {
  // Forward declaring type: ChatDisconnectCause
  struct ChatDisconnectCause;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ChatDisconnectCause, "Photon.Chat", "ChatDisconnectCause");
// Type namespace: Photon.Chat
namespace Photon::Chat {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Chat.ChatDisconnectCause
  // [TokenAttribute] Offset: FFFFFFFF
  struct ChatDisconnectCause/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ChatDisconnectCause
    constexpr ChatDisconnectCause(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Photon.Chat.ChatDisconnectCause None
    static constexpr const int None = 0;
    // Get static field: static public Photon.Chat.ChatDisconnectCause None
    static ::Photon::Chat::ChatDisconnectCause _get_None();
    // Set static field: static public Photon.Chat.ChatDisconnectCause None
    static void _set_None(::Photon::Chat::ChatDisconnectCause value);
    // static field const value: static public Photon.Chat.ChatDisconnectCause ExceptionOnConnect
    static constexpr const int ExceptionOnConnect = 1;
    // Get static field: static public Photon.Chat.ChatDisconnectCause ExceptionOnConnect
    static ::Photon::Chat::ChatDisconnectCause _get_ExceptionOnConnect();
    // Set static field: static public Photon.Chat.ChatDisconnectCause ExceptionOnConnect
    static void _set_ExceptionOnConnect(::Photon::Chat::ChatDisconnectCause value);
    // static field const value: static public Photon.Chat.ChatDisconnectCause DisconnectByServerLogic
    static constexpr const int DisconnectByServerLogic = 2;
    // Get static field: static public Photon.Chat.ChatDisconnectCause DisconnectByServerLogic
    static ::Photon::Chat::ChatDisconnectCause _get_DisconnectByServerLogic();
    // Set static field: static public Photon.Chat.ChatDisconnectCause DisconnectByServerLogic
    static void _set_DisconnectByServerLogic(::Photon::Chat::ChatDisconnectCause value);
    // static field const value: static public Photon.Chat.ChatDisconnectCause DisconnectByServerReasonUnknown
    static constexpr const int DisconnectByServerReasonUnknown = 3;
    // Get static field: static public Photon.Chat.ChatDisconnectCause DisconnectByServerReasonUnknown
    static ::Photon::Chat::ChatDisconnectCause _get_DisconnectByServerReasonUnknown();
    // Set static field: static public Photon.Chat.ChatDisconnectCause DisconnectByServerReasonUnknown
    static void _set_DisconnectByServerReasonUnknown(::Photon::Chat::ChatDisconnectCause value);
    // static field const value: static public Photon.Chat.ChatDisconnectCause ServerTimeout
    static constexpr const int ServerTimeout = 4;
    // Get static field: static public Photon.Chat.ChatDisconnectCause ServerTimeout
    static ::Photon::Chat::ChatDisconnectCause _get_ServerTimeout();
    // Set static field: static public Photon.Chat.ChatDisconnectCause ServerTimeout
    static void _set_ServerTimeout(::Photon::Chat::ChatDisconnectCause value);
    // static field const value: static public Photon.Chat.ChatDisconnectCause ClientTimeout
    static constexpr const int ClientTimeout = 5;
    // Get static field: static public Photon.Chat.ChatDisconnectCause ClientTimeout
    static ::Photon::Chat::ChatDisconnectCause _get_ClientTimeout();
    // Set static field: static public Photon.Chat.ChatDisconnectCause ClientTimeout
    static void _set_ClientTimeout(::Photon::Chat::ChatDisconnectCause value);
    // static field const value: static public Photon.Chat.ChatDisconnectCause Exception
    static constexpr const int Exception = 6;
    // Get static field: static public Photon.Chat.ChatDisconnectCause Exception
    static ::Photon::Chat::ChatDisconnectCause _get_Exception();
    // Set static field: static public Photon.Chat.ChatDisconnectCause Exception
    static void _set_Exception(::Photon::Chat::ChatDisconnectCause value);
    // static field const value: static public Photon.Chat.ChatDisconnectCause InvalidAuthentication
    static constexpr const int InvalidAuthentication = 7;
    // Get static field: static public Photon.Chat.ChatDisconnectCause InvalidAuthentication
    static ::Photon::Chat::ChatDisconnectCause _get_InvalidAuthentication();
    // Set static field: static public Photon.Chat.ChatDisconnectCause InvalidAuthentication
    static void _set_InvalidAuthentication(::Photon::Chat::ChatDisconnectCause value);
    // static field const value: static public Photon.Chat.ChatDisconnectCause MaxCcuReached
    static constexpr const int MaxCcuReached = 8;
    // Get static field: static public Photon.Chat.ChatDisconnectCause MaxCcuReached
    static ::Photon::Chat::ChatDisconnectCause _get_MaxCcuReached();
    // Set static field: static public Photon.Chat.ChatDisconnectCause MaxCcuReached
    static void _set_MaxCcuReached(::Photon::Chat::ChatDisconnectCause value);
    // static field const value: static public Photon.Chat.ChatDisconnectCause InvalidRegion
    static constexpr const int InvalidRegion = 9;
    // Get static field: static public Photon.Chat.ChatDisconnectCause InvalidRegion
    static ::Photon::Chat::ChatDisconnectCause _get_InvalidRegion();
    // Set static field: static public Photon.Chat.ChatDisconnectCause InvalidRegion
    static void _set_InvalidRegion(::Photon::Chat::ChatDisconnectCause value);
    // static field const value: static public Photon.Chat.ChatDisconnectCause OperationNotAllowedInCurrentState
    static constexpr const int OperationNotAllowedInCurrentState = 10;
    // Get static field: static public Photon.Chat.ChatDisconnectCause OperationNotAllowedInCurrentState
    static ::Photon::Chat::ChatDisconnectCause _get_OperationNotAllowedInCurrentState();
    // Set static field: static public Photon.Chat.ChatDisconnectCause OperationNotAllowedInCurrentState
    static void _set_OperationNotAllowedInCurrentState(::Photon::Chat::ChatDisconnectCause value);
    // static field const value: static public Photon.Chat.ChatDisconnectCause CustomAuthenticationFailed
    static constexpr const int CustomAuthenticationFailed = 11;
    // Get static field: static public Photon.Chat.ChatDisconnectCause CustomAuthenticationFailed
    static ::Photon::Chat::ChatDisconnectCause _get_CustomAuthenticationFailed();
    // Set static field: static public Photon.Chat.ChatDisconnectCause CustomAuthenticationFailed
    static void _set_CustomAuthenticationFailed(::Photon::Chat::ChatDisconnectCause value);
    // static field const value: static public Photon.Chat.ChatDisconnectCause AuthenticationTicketExpired
    static constexpr const int AuthenticationTicketExpired = 12;
    // Get static field: static public Photon.Chat.ChatDisconnectCause AuthenticationTicketExpired
    static ::Photon::Chat::ChatDisconnectCause _get_AuthenticationTicketExpired();
    // Set static field: static public Photon.Chat.ChatDisconnectCause AuthenticationTicketExpired
    static void _set_AuthenticationTicketExpired(::Photon::Chat::ChatDisconnectCause value);
    // static field const value: static public Photon.Chat.ChatDisconnectCause DisconnectByClientLogic
    static constexpr const int DisconnectByClientLogic = 13;
    // Get static field: static public Photon.Chat.ChatDisconnectCause DisconnectByClientLogic
    static ::Photon::Chat::ChatDisconnectCause _get_DisconnectByClientLogic();
    // Set static field: static public Photon.Chat.ChatDisconnectCause DisconnectByClientLogic
    static void _set_DisconnectByClientLogic(::Photon::Chat::ChatDisconnectCause value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Photon.Chat.ChatDisconnectCause
  #pragma pack(pop)
  static check_size<sizeof(ChatDisconnectCause), 0 + sizeof(int)> __Photon_Chat_ChatDisconnectCauseSizeCheck;
  static_assert(sizeof(ChatDisconnectCause) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"