// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::InsightPassthroughColorMapType, "", "OVRPlugin/InsightPassthroughColorMapType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/InsightPassthroughColorMapType
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::InsightPassthroughColorMapType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InsightPassthroughColorMapType
    constexpr InsightPassthroughColorMapType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/InsightPassthroughColorMapType None
    static constexpr const int None = 0;
    // Get static field: static public OVRPlugin/InsightPassthroughColorMapType None
    static ::GlobalNamespace::OVRPlugin::InsightPassthroughColorMapType _get_None();
    // Set static field: static public OVRPlugin/InsightPassthroughColorMapType None
    static void _set_None(::GlobalNamespace::OVRPlugin::InsightPassthroughColorMapType value);
    // static field const value: static public OVRPlugin/InsightPassthroughColorMapType MonoToRgba
    static constexpr const int MonoToRgba = 1;
    // Get static field: static public OVRPlugin/InsightPassthroughColorMapType MonoToRgba
    static ::GlobalNamespace::OVRPlugin::InsightPassthroughColorMapType _get_MonoToRgba();
    // Set static field: static public OVRPlugin/InsightPassthroughColorMapType MonoToRgba
    static void _set_MonoToRgba(::GlobalNamespace::OVRPlugin::InsightPassthroughColorMapType value);
    // static field const value: static public OVRPlugin/InsightPassthroughColorMapType MonoToMono
    static constexpr const int MonoToMono = 2;
    // Get static field: static public OVRPlugin/InsightPassthroughColorMapType MonoToMono
    static ::GlobalNamespace::OVRPlugin::InsightPassthroughColorMapType _get_MonoToMono();
    // Set static field: static public OVRPlugin/InsightPassthroughColorMapType MonoToMono
    static void _set_MonoToMono(::GlobalNamespace::OVRPlugin::InsightPassthroughColorMapType value);
    // static field const value: static public OVRPlugin/InsightPassthroughColorMapType BrightnessContrastSaturation
    static constexpr const int BrightnessContrastSaturation = 4;
    // Get static field: static public OVRPlugin/InsightPassthroughColorMapType BrightnessContrastSaturation
    static ::GlobalNamespace::OVRPlugin::InsightPassthroughColorMapType _get_BrightnessContrastSaturation();
    // Set static field: static public OVRPlugin/InsightPassthroughColorMapType BrightnessContrastSaturation
    static void _set_BrightnessContrastSaturation(::GlobalNamespace::OVRPlugin::InsightPassthroughColorMapType value);
    // static field const value: static public OVRPlugin/InsightPassthroughColorMapType ColorLut
    static constexpr const int ColorLut = 6;
    // Get static field: static public OVRPlugin/InsightPassthroughColorMapType ColorLut
    static ::GlobalNamespace::OVRPlugin::InsightPassthroughColorMapType _get_ColorLut();
    // Set static field: static public OVRPlugin/InsightPassthroughColorMapType ColorLut
    static void _set_ColorLut(::GlobalNamespace::OVRPlugin::InsightPassthroughColorMapType value);
    // static field const value: static public OVRPlugin/InsightPassthroughColorMapType InterpolatedColorLut
    static constexpr const int InterpolatedColorLut = 7;
    // Get static field: static public OVRPlugin/InsightPassthroughColorMapType InterpolatedColorLut
    static ::GlobalNamespace::OVRPlugin::InsightPassthroughColorMapType _get_InterpolatedColorLut();
    // Set static field: static public OVRPlugin/InsightPassthroughColorMapType InterpolatedColorLut
    static void _set_InterpolatedColorLut(::GlobalNamespace::OVRPlugin::InsightPassthroughColorMapType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRPlugin/InsightPassthroughColorMapType
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::InsightPassthroughColorMapType), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_InsightPassthroughColorMapTypeSizeCheck;
  static_assert(sizeof(OVRPlugin::InsightPassthroughColorMapType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
