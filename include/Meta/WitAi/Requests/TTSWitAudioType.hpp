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
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Forward declaring type: TTSWitAudioType
  struct TTSWitAudioType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Requests::TTSWitAudioType, "Meta.WitAi.Requests", "TTSWitAudioType");
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Requests.TTSWitAudioType
  // [TokenAttribute] Offset: FFFFFFFF
  struct TTSWitAudioType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TTSWitAudioType
    constexpr TTSWitAudioType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Meta.WitAi.Requests.TTSWitAudioType PCM
    static constexpr const int PCM = 0;
    // Get static field: static public Meta.WitAi.Requests.TTSWitAudioType PCM
    static ::Meta::WitAi::Requests::TTSWitAudioType _get_PCM();
    // Set static field: static public Meta.WitAi.Requests.TTSWitAudioType PCM
    static void _set_PCM(::Meta::WitAi::Requests::TTSWitAudioType value);
    // static field const value: static public Meta.WitAi.Requests.TTSWitAudioType MPEG
    static constexpr const int MPEG = 1;
    // Get static field: static public Meta.WitAi.Requests.TTSWitAudioType MPEG
    static ::Meta::WitAi::Requests::TTSWitAudioType _get_MPEG();
    // Set static field: static public Meta.WitAi.Requests.TTSWitAudioType MPEG
    static void _set_MPEG(::Meta::WitAi::Requests::TTSWitAudioType value);
    // static field const value: static public Meta.WitAi.Requests.TTSWitAudioType WAV
    static constexpr const int WAV = 2;
    // Get static field: static public Meta.WitAi.Requests.TTSWitAudioType WAV
    static ::Meta::WitAi::Requests::TTSWitAudioType _get_WAV();
    // Set static field: static public Meta.WitAi.Requests.TTSWitAudioType WAV
    static void _set_WAV(::Meta::WitAi::Requests::TTSWitAudioType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Meta.WitAi.Requests.TTSWitAudioType
  #pragma pack(pop)
  static check_size<sizeof(TTSWitAudioType), 0 + sizeof(int)> __Meta_WitAi_Requests_TTSWitAudioTypeSizeCheck;
  static_assert(sizeof(TTSWitAudioType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"