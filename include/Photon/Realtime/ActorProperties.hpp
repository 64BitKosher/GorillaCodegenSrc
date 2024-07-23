// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Forward declaring type: ActorProperties
  class ActorProperties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Realtime::ActorProperties);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::ActorProperties*, "Photon.Realtime", "ActorProperties");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.ActorProperties
  // [TokenAttribute] Offset: FFFFFFFF
  class ActorProperties : public ::Il2CppObject {
    public:
    // static field const value: static public System.Byte PlayerName
    static constexpr const uint8_t PlayerName = 255u;
    // Get static field: static public System.Byte PlayerName
    static uint8_t _get_PlayerName();
    // Set static field: static public System.Byte PlayerName
    static void _set_PlayerName(uint8_t value);
    // static field const value: static public System.Byte IsInactive
    static constexpr const uint8_t IsInactive = 254u;
    // Get static field: static public System.Byte IsInactive
    static uint8_t _get_IsInactive();
    // Set static field: static public System.Byte IsInactive
    static void _set_IsInactive(uint8_t value);
    // static field const value: static public System.Byte UserId
    static constexpr const uint8_t UserId = 253u;
    // Get static field: static public System.Byte UserId
    static uint8_t _get_UserId();
    // Set static field: static public System.Byte UserId
    static void _set_UserId(uint8_t value);
    // public System.Void .ctor()
    // Offset: 0x4A23614
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActorProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Realtime::ActorProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActorProperties*, creationType>()));
    }
  }; // Photon.Realtime.ActorProperties
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Realtime::ActorProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!