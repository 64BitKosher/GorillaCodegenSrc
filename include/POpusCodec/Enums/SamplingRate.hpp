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
// Type namespace: POpusCodec.Enums
namespace POpusCodec::Enums {
  // Forward declaring type: SamplingRate
  struct SamplingRate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::POpusCodec::Enums::SamplingRate, "POpusCodec.Enums", "SamplingRate");
// Type namespace: POpusCodec.Enums
namespace POpusCodec::Enums {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: POpusCodec.Enums.SamplingRate
  // [TokenAttribute] Offset: FFFFFFFF
  struct SamplingRate/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SamplingRate
    constexpr SamplingRate(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public POpusCodec.Enums.SamplingRate Sampling08000
    static constexpr const int Sampling08000 = 8000;
    // Get static field: static public POpusCodec.Enums.SamplingRate Sampling08000
    static ::POpusCodec::Enums::SamplingRate _get_Sampling08000();
    // Set static field: static public POpusCodec.Enums.SamplingRate Sampling08000
    static void _set_Sampling08000(::POpusCodec::Enums::SamplingRate value);
    // static field const value: static public POpusCodec.Enums.SamplingRate Sampling12000
    static constexpr const int Sampling12000 = 12000;
    // Get static field: static public POpusCodec.Enums.SamplingRate Sampling12000
    static ::POpusCodec::Enums::SamplingRate _get_Sampling12000();
    // Set static field: static public POpusCodec.Enums.SamplingRate Sampling12000
    static void _set_Sampling12000(::POpusCodec::Enums::SamplingRate value);
    // static field const value: static public POpusCodec.Enums.SamplingRate Sampling16000
    static constexpr const int Sampling16000 = 16000;
    // Get static field: static public POpusCodec.Enums.SamplingRate Sampling16000
    static ::POpusCodec::Enums::SamplingRate _get_Sampling16000();
    // Set static field: static public POpusCodec.Enums.SamplingRate Sampling16000
    static void _set_Sampling16000(::POpusCodec::Enums::SamplingRate value);
    // static field const value: static public POpusCodec.Enums.SamplingRate Sampling24000
    static constexpr const int Sampling24000 = 24000;
    // Get static field: static public POpusCodec.Enums.SamplingRate Sampling24000
    static ::POpusCodec::Enums::SamplingRate _get_Sampling24000();
    // Set static field: static public POpusCodec.Enums.SamplingRate Sampling24000
    static void _set_Sampling24000(::POpusCodec::Enums::SamplingRate value);
    // static field const value: static public POpusCodec.Enums.SamplingRate Sampling48000
    static constexpr const int Sampling48000 = 48000;
    // Get static field: static public POpusCodec.Enums.SamplingRate Sampling48000
    static ::POpusCodec::Enums::SamplingRate _get_Sampling48000();
    // Set static field: static public POpusCodec.Enums.SamplingRate Sampling48000
    static void _set_Sampling48000(::POpusCodec::Enums::SamplingRate value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // POpusCodec.Enums.SamplingRate
  #pragma pack(pop)
  static check_size<sizeof(SamplingRate), 0 + sizeof(int)> __POpusCodec_Enums_SamplingRateSizeCheck;
  static_assert(sizeof(SamplingRate) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"