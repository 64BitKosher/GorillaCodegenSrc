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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: DisconnectMessage
  class DisconnectMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::DisconnectMessage);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::DisconnectMessage*, "ExitGames.Client.Photon", "DisconnectMessage");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.DisconnectMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class DisconnectMessage : public ::Il2CppObject {
    public:
    public:
    // public System.Int16 Code
    // Size: 0x2
    // Offset: 0x10
    int16_t Code;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // Padding between fields: Code and: DebugMessage
    char __padding0[0x6] = {};
    // public System.String DebugMessage
    // Size: 0x8
    // Offset: 0x18
    ::StringW DebugMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.Byte,System.Object> Parameters
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<uint8_t, ::Il2CppObject*>* Parameters;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<uint8_t, ::Il2CppObject*>*) == 0x8);
    public:
    // Get instance field reference: public System.Int16 Code
    [[deprecated("Use field access instead!")]] int16_t& dyn_Code();
    // Get instance field reference: public System.String DebugMessage
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DebugMessage();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.Byte,System.Object> Parameters
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<uint8_t, ::Il2CppObject*>*& dyn_Parameters();
    // public System.Void .ctor()
    // Offset: 0x49E1B50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisconnectMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::DisconnectMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisconnectMessage*, creationType>()));
    }
  }; // ExitGames.Client.Photon.DisconnectMessage
  #pragma pack(pop)
  static check_size<sizeof(DisconnectMessage), 32 + sizeof(::System::Collections::Generic::Dictionary_2<uint8_t, ::Il2CppObject*>*)> __ExitGames_Client_Photon_DisconnectMessageSizeCheck;
  static_assert(sizeof(DisconnectMessage) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::DisconnectMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
