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
  // Forward declaring type: CustomAuthenticationType
  struct CustomAuthenticationType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::CustomAuthenticationType, "Photon.Chat", "CustomAuthenticationType");
// Type namespace: Photon.Chat
namespace Photon::Chat {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Chat.CustomAuthenticationType
  // [TokenAttribute] Offset: FFFFFFFF
  struct CustomAuthenticationType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: CustomAuthenticationType
    constexpr CustomAuthenticationType(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public Photon.Chat.CustomAuthenticationType Custom
    static constexpr const uint8_t Custom = 0u;
    // Get static field: static public Photon.Chat.CustomAuthenticationType Custom
    static ::Photon::Chat::CustomAuthenticationType _get_Custom();
    // Set static field: static public Photon.Chat.CustomAuthenticationType Custom
    static void _set_Custom(::Photon::Chat::CustomAuthenticationType value);
    // static field const value: static public Photon.Chat.CustomAuthenticationType Steam
    static constexpr const uint8_t Steam = 1u;
    // Get static field: static public Photon.Chat.CustomAuthenticationType Steam
    static ::Photon::Chat::CustomAuthenticationType _get_Steam();
    // Set static field: static public Photon.Chat.CustomAuthenticationType Steam
    static void _set_Steam(::Photon::Chat::CustomAuthenticationType value);
    // static field const value: static public Photon.Chat.CustomAuthenticationType Facebook
    static constexpr const uint8_t Facebook = 2u;
    // Get static field: static public Photon.Chat.CustomAuthenticationType Facebook
    static ::Photon::Chat::CustomAuthenticationType _get_Facebook();
    // Set static field: static public Photon.Chat.CustomAuthenticationType Facebook
    static void _set_Facebook(::Photon::Chat::CustomAuthenticationType value);
    // static field const value: static public Photon.Chat.CustomAuthenticationType Oculus
    static constexpr const uint8_t Oculus = 3u;
    // Get static field: static public Photon.Chat.CustomAuthenticationType Oculus
    static ::Photon::Chat::CustomAuthenticationType _get_Oculus();
    // Set static field: static public Photon.Chat.CustomAuthenticationType Oculus
    static void _set_Oculus(::Photon::Chat::CustomAuthenticationType value);
    // static field const value: static public Photon.Chat.CustomAuthenticationType PlayStation4
    static constexpr const uint8_t PlayStation4 = 4u;
    // Get static field: static public Photon.Chat.CustomAuthenticationType PlayStation4
    static ::Photon::Chat::CustomAuthenticationType _get_PlayStation4();
    // Set static field: static public Photon.Chat.CustomAuthenticationType PlayStation4
    static void _set_PlayStation4(::Photon::Chat::CustomAuthenticationType value);
    // static field const value: static public Photon.Chat.CustomAuthenticationType PlayStation
    static constexpr const uint8_t PlayStation = 4u;
    // Get static field: static public Photon.Chat.CustomAuthenticationType PlayStation
    static ::Photon::Chat::CustomAuthenticationType _get_PlayStation();
    // Set static field: static public Photon.Chat.CustomAuthenticationType PlayStation
    static void _set_PlayStation(::Photon::Chat::CustomAuthenticationType value);
    // static field const value: static public Photon.Chat.CustomAuthenticationType Xbox
    static constexpr const uint8_t Xbox = 5u;
    // Get static field: static public Photon.Chat.CustomAuthenticationType Xbox
    static ::Photon::Chat::CustomAuthenticationType _get_Xbox();
    // Set static field: static public Photon.Chat.CustomAuthenticationType Xbox
    static void _set_Xbox(::Photon::Chat::CustomAuthenticationType value);
    // static field const value: static public Photon.Chat.CustomAuthenticationType Viveport
    static constexpr const uint8_t Viveport = 10u;
    // Get static field: static public Photon.Chat.CustomAuthenticationType Viveport
    static ::Photon::Chat::CustomAuthenticationType _get_Viveport();
    // Set static field: static public Photon.Chat.CustomAuthenticationType Viveport
    static void _set_Viveport(::Photon::Chat::CustomAuthenticationType value);
    // static field const value: static public Photon.Chat.CustomAuthenticationType NintendoSwitch
    static constexpr const uint8_t NintendoSwitch = 11u;
    // Get static field: static public Photon.Chat.CustomAuthenticationType NintendoSwitch
    static ::Photon::Chat::CustomAuthenticationType _get_NintendoSwitch();
    // Set static field: static public Photon.Chat.CustomAuthenticationType NintendoSwitch
    static void _set_NintendoSwitch(::Photon::Chat::CustomAuthenticationType value);
    // static field const value: static public Photon.Chat.CustomAuthenticationType PlayStation5
    static constexpr const uint8_t PlayStation5 = 12u;
    // Get static field: static public Photon.Chat.CustomAuthenticationType PlayStation5
    static ::Photon::Chat::CustomAuthenticationType _get_PlayStation5();
    // Set static field: static public Photon.Chat.CustomAuthenticationType PlayStation5
    static void _set_PlayStation5(::Photon::Chat::CustomAuthenticationType value);
    // static field const value: static public Photon.Chat.CustomAuthenticationType Playstation5
    static constexpr const uint8_t Playstation5 = 12u;
    // Get static field: static public Photon.Chat.CustomAuthenticationType Playstation5
    static ::Photon::Chat::CustomAuthenticationType _get_Playstation5();
    // Set static field: static public Photon.Chat.CustomAuthenticationType Playstation5
    static void _set_Playstation5(::Photon::Chat::CustomAuthenticationType value);
    // static field const value: static public Photon.Chat.CustomAuthenticationType Epic
    static constexpr const uint8_t Epic = 13u;
    // Get static field: static public Photon.Chat.CustomAuthenticationType Epic
    static ::Photon::Chat::CustomAuthenticationType _get_Epic();
    // Set static field: static public Photon.Chat.CustomAuthenticationType Epic
    static void _set_Epic(::Photon::Chat::CustomAuthenticationType value);
    // static field const value: static public Photon.Chat.CustomAuthenticationType FacebookGaming
    static constexpr const uint8_t FacebookGaming = 15u;
    // Get static field: static public Photon.Chat.CustomAuthenticationType FacebookGaming
    static ::Photon::Chat::CustomAuthenticationType _get_FacebookGaming();
    // Set static field: static public Photon.Chat.CustomAuthenticationType FacebookGaming
    static void _set_FacebookGaming(::Photon::Chat::CustomAuthenticationType value);
    // static field const value: static public Photon.Chat.CustomAuthenticationType None
    static constexpr const uint8_t None = 255u;
    // Get static field: static public Photon.Chat.CustomAuthenticationType None
    static ::Photon::Chat::CustomAuthenticationType _get_None();
    // Set static field: static public Photon.Chat.CustomAuthenticationType None
    static void _set_None(::Photon::Chat::CustomAuthenticationType value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // Photon.Chat.CustomAuthenticationType
  #pragma pack(pop)
  static check_size<sizeof(CustomAuthenticationType), 0 + sizeof(uint8_t)> __Photon_Chat_CustomAuthenticationTypeSizeCheck;
  static_assert(sizeof(CustomAuthenticationType) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"