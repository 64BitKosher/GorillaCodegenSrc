// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: ScreenSpaceAmbientOcclusionSettings
  class ScreenSpaceAmbientOcclusionSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionSettings");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class ScreenSpaceAmbientOcclusionSettings : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::DepthSource
    struct DepthSource;
    // Nested type: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::NormalQuality
    struct NormalQuality;
    // Nested type: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOSampleOption
    struct AOSampleOption;
    // Nested type: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOMethodOptions
    struct AOMethodOptions;
    // Nested type: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::BlurQualityOptions
    struct BlurQualityOptions;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/DepthSource
    // [TokenAttribute] Offset: FFFFFFFF
    struct DepthSource/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: DepthSource
      constexpr DepthSource(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/DepthSource Depth
      static constexpr const int Depth = 0;
      // Get static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/DepthSource Depth
      static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::DepthSource _get_Depth();
      // Set static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/DepthSource Depth
      static void _set_Depth(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::DepthSource value);
      // static field const value: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/DepthSource DepthNormals
      static constexpr const int DepthNormals = 1;
      // Get static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/DepthSource DepthNormals
      static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::DepthSource _get_DepthNormals();
      // Set static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/DepthSource DepthNormals
      static void _set_DepthNormals(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::DepthSource value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/DepthSource
    #pragma pack(pop)
    static check_size<sizeof(ScreenSpaceAmbientOcclusionSettings::DepthSource), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionSettings_DepthSourceSizeCheck;
    static_assert(sizeof(ScreenSpaceAmbientOcclusionSettings::DepthSource) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/NormalQuality
    // [TokenAttribute] Offset: FFFFFFFF
    struct NormalQuality/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: NormalQuality
      constexpr NormalQuality(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/NormalQuality Low
      static constexpr const int Low = 0;
      // Get static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/NormalQuality Low
      static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::NormalQuality _get_Low();
      // Set static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/NormalQuality Low
      static void _set_Low(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::NormalQuality value);
      // static field const value: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/NormalQuality Medium
      static constexpr const int Medium = 1;
      // Get static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/NormalQuality Medium
      static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::NormalQuality _get_Medium();
      // Set static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/NormalQuality Medium
      static void _set_Medium(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::NormalQuality value);
      // static field const value: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/NormalQuality High
      static constexpr const int High = 2;
      // Get static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/NormalQuality High
      static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::NormalQuality _get_High();
      // Set static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/NormalQuality High
      static void _set_High(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::NormalQuality value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/NormalQuality
    #pragma pack(pop)
    static check_size<sizeof(ScreenSpaceAmbientOcclusionSettings::NormalQuality), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionSettings_NormalQualitySizeCheck;
    static_assert(sizeof(ScreenSpaceAmbientOcclusionSettings::NormalQuality) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOSampleOption
    // [TokenAttribute] Offset: FFFFFFFF
    struct AOSampleOption/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: AOSampleOption
      constexpr AOSampleOption(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOSampleOption High
      static constexpr const int High = 0;
      // Get static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOSampleOption High
      static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOSampleOption _get_High();
      // Set static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOSampleOption High
      static void _set_High(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOSampleOption value);
      // static field const value: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOSampleOption Medium
      static constexpr const int Medium = 1;
      // Get static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOSampleOption Medium
      static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOSampleOption _get_Medium();
      // Set static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOSampleOption Medium
      static void _set_Medium(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOSampleOption value);
      // static field const value: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOSampleOption Low
      static constexpr const int Low = 2;
      // Get static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOSampleOption Low
      static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOSampleOption _get_Low();
      // Set static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOSampleOption Low
      static void _set_Low(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOSampleOption value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOSampleOption
    #pragma pack(pop)
    static check_size<sizeof(ScreenSpaceAmbientOcclusionSettings::AOSampleOption), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionSettings_AOSampleOptionSizeCheck;
    static_assert(sizeof(ScreenSpaceAmbientOcclusionSettings::AOSampleOption) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOMethodOptions
    // [TokenAttribute] Offset: FFFFFFFF
    struct AOMethodOptions/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: AOMethodOptions
      constexpr AOMethodOptions(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOMethodOptions BlueNoise
      static constexpr const int BlueNoise = 0;
      // Get static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOMethodOptions BlueNoise
      static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOMethodOptions _get_BlueNoise();
      // Set static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOMethodOptions BlueNoise
      static void _set_BlueNoise(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOMethodOptions value);
      // static field const value: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOMethodOptions InterleavedGradient
      static constexpr const int InterleavedGradient = 1;
      // Get static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOMethodOptions InterleavedGradient
      static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOMethodOptions _get_InterleavedGradient();
      // Set static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOMethodOptions InterleavedGradient
      static void _set_InterleavedGradient(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOMethodOptions value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOMethodOptions
    #pragma pack(pop)
    static check_size<sizeof(ScreenSpaceAmbientOcclusionSettings::AOMethodOptions), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionSettings_AOMethodOptionsSizeCheck;
    static_assert(sizeof(ScreenSpaceAmbientOcclusionSettings::AOMethodOptions) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions
    // [TokenAttribute] Offset: FFFFFFFF
    struct BlurQualityOptions/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: BlurQualityOptions
      constexpr BlurQualityOptions(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions High
      static constexpr const int High = 0;
      // Get static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions High
      static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::BlurQualityOptions _get_High();
      // Set static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions High
      static void _set_High(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::BlurQualityOptions value);
      // static field const value: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions Medium
      static constexpr const int Medium = 1;
      // Get static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions Medium
      static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::BlurQualityOptions _get_Medium();
      // Set static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions Medium
      static void _set_Medium(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::BlurQualityOptions value);
      // static field const value: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions Low
      static constexpr const int Low = 2;
      // Get static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions Low
      static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::BlurQualityOptions _get_Low();
      // Set static field: static public UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions Low
      static void _set_Low(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::BlurQualityOptions value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions
    #pragma pack(pop)
    static check_size<sizeof(ScreenSpaceAmbientOcclusionSettings::BlurQualityOptions), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionSettings_BlurQualityOptionsSizeCheck;
    static_assert(sizeof(ScreenSpaceAmbientOcclusionSettings::BlurQualityOptions) == 0x4);
    public:
    // UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOMethodOptions AOMethod
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOMethodOptions AOMethod;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOMethodOptions) == 0x4);
    // System.Boolean Downsample
    // Size: 0x1
    // Offset: 0x14
    bool Downsample;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean AfterOpaque
    // Size: 0x1
    // Offset: 0x15
    bool AfterOpaque;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: AfterOpaque and: Source
    char __padding2[0x2] = {};
    // UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/DepthSource Source
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::DepthSource Source;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::DepthSource) == 0x4);
    // UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/NormalQuality NormalSamples
    // Size: 0x4
    // Offset: 0x1C
    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::NormalQuality NormalSamples;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::NormalQuality) == 0x4);
    // System.Single Intensity
    // Size: 0x4
    // Offset: 0x20
    float Intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single DirectLightingStrength
    // Size: 0x4
    // Offset: 0x24
    float DirectLightingStrength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single Radius
    // Size: 0x4
    // Offset: 0x28
    float Radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOSampleOption Samples
    // Size: 0x4
    // Offset: 0x2C
    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOSampleOption Samples;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOSampleOption) == 0x4);
    // UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions BlurQuality
    // Size: 0x4
    // Offset: 0x30
    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::BlurQualityOptions BlurQuality;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::BlurQualityOptions) == 0x4);
    // System.Single Falloff
    // Size: 0x4
    // Offset: 0x34
    float Falloff;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Int32 SampleCount
    // Size: 0x4
    // Offset: 0x38
    int SampleCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOMethodOptions AOMethod
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOMethodOptions& dyn_AOMethod();
    // Get instance field reference: System.Boolean Downsample
    [[deprecated("Use field access instead!")]] bool& dyn_Downsample();
    // Get instance field reference: System.Boolean AfterOpaque
    [[deprecated("Use field access instead!")]] bool& dyn_AfterOpaque();
    // Get instance field reference: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/DepthSource Source
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::DepthSource& dyn_Source();
    // Get instance field reference: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/NormalQuality NormalSamples
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::NormalQuality& dyn_NormalSamples();
    // Get instance field reference: System.Single Intensity
    [[deprecated("Use field access instead!")]] float& dyn_Intensity();
    // Get instance field reference: System.Single DirectLightingStrength
    [[deprecated("Use field access instead!")]] float& dyn_DirectLightingStrength();
    // Get instance field reference: System.Single Radius
    [[deprecated("Use field access instead!")]] float& dyn_Radius();
    // Get instance field reference: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOSampleOption Samples
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOSampleOption& dyn_Samples();
    // Get instance field reference: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions BlurQuality
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::BlurQualityOptions& dyn_BlurQuality();
    // Get instance field reference: System.Single Falloff
    [[deprecated("Use field access instead!")]] float& dyn_Falloff();
    // Get instance field reference: System.Int32 SampleCount
    [[deprecated("Use field access instead!")]] int& dyn_SampleCount();
    // public System.Void .ctor()
    // Offset: 0x52D4954
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScreenSpaceAmbientOcclusionSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScreenSpaceAmbientOcclusionSettings*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings
  #pragma pack(pop)
  static check_size<sizeof(ScreenSpaceAmbientOcclusionSettings), 56 + sizeof(int)> __UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionSettingsSizeCheck;
  static_assert(sizeof(ScreenSpaceAmbientOcclusionSettings) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::BlurQualityOptions, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOMethodOptions, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionSettings/AOMethodOptions");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::AOSampleOption, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionSettings/AOSampleOption");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::NormalQuality, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionSettings/NormalQuality");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::DepthSource, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionSettings/DepthSource");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
