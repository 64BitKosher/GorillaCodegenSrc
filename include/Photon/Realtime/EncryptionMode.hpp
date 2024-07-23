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
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Forward declaring type: EncryptionMode
  struct EncryptionMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::EncryptionMode, "Photon.Realtime", "EncryptionMode");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.EncryptionMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct EncryptionMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EncryptionMode
    constexpr EncryptionMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Photon.Realtime.EncryptionMode PayloadEncryption
    static constexpr const int PayloadEncryption = 0;
    // Get static field: static public Photon.Realtime.EncryptionMode PayloadEncryption
    static ::Photon::Realtime::EncryptionMode _get_PayloadEncryption();
    // Set static field: static public Photon.Realtime.EncryptionMode PayloadEncryption
    static void _set_PayloadEncryption(::Photon::Realtime::EncryptionMode value);
    // static field const value: static public Photon.Realtime.EncryptionMode DatagramEncryption
    static constexpr const int DatagramEncryption = 10;
    // Get static field: static public Photon.Realtime.EncryptionMode DatagramEncryption
    static ::Photon::Realtime::EncryptionMode _get_DatagramEncryption();
    // Set static field: static public Photon.Realtime.EncryptionMode DatagramEncryption
    static void _set_DatagramEncryption(::Photon::Realtime::EncryptionMode value);
    // static field const value: static public Photon.Realtime.EncryptionMode DatagramEncryptionRandomSequence
    static constexpr const int DatagramEncryptionRandomSequence = 11;
    // Get static field: static public Photon.Realtime.EncryptionMode DatagramEncryptionRandomSequence
    static ::Photon::Realtime::EncryptionMode _get_DatagramEncryptionRandomSequence();
    // Set static field: static public Photon.Realtime.EncryptionMode DatagramEncryptionRandomSequence
    static void _set_DatagramEncryptionRandomSequence(::Photon::Realtime::EncryptionMode value);
    // static field const value: static public Photon.Realtime.EncryptionMode DatagramEncryptionGCM
    static constexpr const int DatagramEncryptionGCM = 13;
    // Get static field: static public Photon.Realtime.EncryptionMode DatagramEncryptionGCM
    static ::Photon::Realtime::EncryptionMode _get_DatagramEncryptionGCM();
    // Set static field: static public Photon.Realtime.EncryptionMode DatagramEncryptionGCM
    static void _set_DatagramEncryptionGCM(::Photon::Realtime::EncryptionMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Photon.Realtime.EncryptionMode
  #pragma pack(pop)
  static check_size<sizeof(EncryptionMode), 0 + sizeof(int)> __Photon_Realtime_EncryptionModeSizeCheck;
  static_assert(sizeof(EncryptionMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
