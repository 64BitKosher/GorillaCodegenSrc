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
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // Forward declaring type: VoiceAudioInputState
  struct VoiceAudioInputState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Meta::Voice::VoiceAudioInputState, "Meta.Voice", "VoiceAudioInputState");
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Meta.Voice.VoiceAudioInputState
  // [TokenAttribute] Offset: FFFFFFFF
  struct VoiceAudioInputState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VoiceAudioInputState
    constexpr VoiceAudioInputState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Meta.Voice.VoiceAudioInputState Off
    static constexpr const int Off = 0;
    // Get static field: static public Meta.Voice.VoiceAudioInputState Off
    static ::Meta::Voice::VoiceAudioInputState _get_Off();
    // Set static field: static public Meta.Voice.VoiceAudioInputState Off
    static void _set_Off(::Meta::Voice::VoiceAudioInputState value);
    // static field const value: static public Meta.Voice.VoiceAudioInputState Activating
    static constexpr const int Activating = 1;
    // Get static field: static public Meta.Voice.VoiceAudioInputState Activating
    static ::Meta::Voice::VoiceAudioInputState _get_Activating();
    // Set static field: static public Meta.Voice.VoiceAudioInputState Activating
    static void _set_Activating(::Meta::Voice::VoiceAudioInputState value);
    // static field const value: static public Meta.Voice.VoiceAudioInputState On
    static constexpr const int On = 2;
    // Get static field: static public Meta.Voice.VoiceAudioInputState On
    static ::Meta::Voice::VoiceAudioInputState _get_On();
    // Set static field: static public Meta.Voice.VoiceAudioInputState On
    static void _set_On(::Meta::Voice::VoiceAudioInputState value);
    // static field const value: static public Meta.Voice.VoiceAudioInputState Deactivating
    static constexpr const int Deactivating = 3;
    // Get static field: static public Meta.Voice.VoiceAudioInputState Deactivating
    static ::Meta::Voice::VoiceAudioInputState _get_Deactivating();
    // Set static field: static public Meta.Voice.VoiceAudioInputState Deactivating
    static void _set_Deactivating(::Meta::Voice::VoiceAudioInputState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Meta.Voice.VoiceAudioInputState
  #pragma pack(pop)
  static check_size<sizeof(VoiceAudioInputState), 0 + sizeof(int)> __Meta_Voice_VoiceAudioInputStateSizeCheck;
  static_assert(sizeof(VoiceAudioInputState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
