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
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: FrameFlags
  struct FrameFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::FrameFlags, "Photon.Voice", "FrameFlags");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.FrameFlags
  // [TokenAttribute] Offset: FFFFFFFF
  struct FrameFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: FrameFlags
    constexpr FrameFlags(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public Photon.Voice.FrameFlags Config
    static constexpr const uint8_t Config = 1u;
    // Get static field: static public Photon.Voice.FrameFlags Config
    static ::Photon::Voice::FrameFlags _get_Config();
    // Set static field: static public Photon.Voice.FrameFlags Config
    static void _set_Config(::Photon::Voice::FrameFlags value);
    // static field const value: static public Photon.Voice.FrameFlags KeyFrame
    static constexpr const uint8_t KeyFrame = 2u;
    // Get static field: static public Photon.Voice.FrameFlags KeyFrame
    static ::Photon::Voice::FrameFlags _get_KeyFrame();
    // Set static field: static public Photon.Voice.FrameFlags KeyFrame
    static void _set_KeyFrame(::Photon::Voice::FrameFlags value);
    // static field const value: static public Photon.Voice.FrameFlags PartialFrame
    static constexpr const uint8_t PartialFrame = 4u;
    // Get static field: static public Photon.Voice.FrameFlags PartialFrame
    static ::Photon::Voice::FrameFlags _get_PartialFrame();
    // Set static field: static public Photon.Voice.FrameFlags PartialFrame
    static void _set_PartialFrame(::Photon::Voice::FrameFlags value);
    // static field const value: static public Photon.Voice.FrameFlags EndOfStream
    static constexpr const uint8_t EndOfStream = 8u;
    // Get static field: static public Photon.Voice.FrameFlags EndOfStream
    static ::Photon::Voice::FrameFlags _get_EndOfStream();
    // Set static field: static public Photon.Voice.FrameFlags EndOfStream
    static void _set_EndOfStream(::Photon::Voice::FrameFlags value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // Photon.Voice.FrameFlags
  #pragma pack(pop)
  static check_size<sizeof(FrameFlags), 0 + sizeof(uint8_t)> __Photon_Voice_FrameFlagsSizeCheck;
  static_assert(sizeof(FrameFlags) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"