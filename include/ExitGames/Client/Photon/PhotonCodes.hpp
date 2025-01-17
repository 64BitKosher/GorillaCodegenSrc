// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
// Completed includes
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: PhotonCodes
  class PhotonCodes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::PhotonCodes);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::PhotonCodes*, "ExitGames.Client.Photon", "PhotonCodes");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.PhotonCodes
  // [TokenAttribute] Offset: FFFFFFFF
  class PhotonCodes : public ::Il2CppObject {
    public:
    // Get static field: static System.Byte ClientKey
    static uint8_t _get_ClientKey();
    // Set static field: static System.Byte ClientKey
    static void _set_ClientKey(uint8_t value);
    // Get static field: static System.Byte ModeKey
    static uint8_t _get_ModeKey();
    // Set static field: static System.Byte ModeKey
    static void _set_ModeKey(uint8_t value);
    // Get static field: static System.Byte ServerKey
    static uint8_t _get_ServerKey();
    // Set static field: static System.Byte ServerKey
    static void _set_ServerKey(uint8_t value);
    // Get static field: static System.Byte InitEncryption
    static uint8_t _get_InitEncryption();
    // Set static field: static System.Byte InitEncryption
    static void _set_InitEncryption(uint8_t value);
    // Get static field: static System.Byte Ping
    static uint8_t _get_Ping();
    // Set static field: static System.Byte Ping
    static void _set_Ping(uint8_t value);
    // static field const value: static public System.Byte Ok
    static constexpr const uint8_t Ok = 0u;
    // Get static field: static public System.Byte Ok
    static uint8_t _get_Ok();
    // Set static field: static public System.Byte Ok
    static void _set_Ok(uint8_t value);
    // static private System.Void .cctor()
    // Offset: 0x49D8670
    static void _cctor();
  }; // ExitGames.Client.Photon.PhotonCodes
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::PhotonCodes::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&ExitGames::Client::Photon::PhotonCodes::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::PhotonCodes*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
