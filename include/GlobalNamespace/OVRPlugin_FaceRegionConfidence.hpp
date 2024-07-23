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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::FaceRegionConfidence, "", "OVRPlugin/FaceRegionConfidence");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/FaceRegionConfidence
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::FaceRegionConfidence/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FaceRegionConfidence
    constexpr FaceRegionConfidence(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/FaceRegionConfidence Lower
    static constexpr const int Lower = 0;
    // Get static field: static public OVRPlugin/FaceRegionConfidence Lower
    static ::GlobalNamespace::OVRPlugin::FaceRegionConfidence _get_Lower();
    // Set static field: static public OVRPlugin/FaceRegionConfidence Lower
    static void _set_Lower(::GlobalNamespace::OVRPlugin::FaceRegionConfidence value);
    // static field const value: static public OVRPlugin/FaceRegionConfidence Upper
    static constexpr const int Upper = 1;
    // Get static field: static public OVRPlugin/FaceRegionConfidence Upper
    static ::GlobalNamespace::OVRPlugin::FaceRegionConfidence _get_Upper();
    // Set static field: static public OVRPlugin/FaceRegionConfidence Upper
    static void _set_Upper(::GlobalNamespace::OVRPlugin::FaceRegionConfidence value);
    // static field const value: static public OVRPlugin/FaceRegionConfidence Max
    static constexpr const int Max = 2;
    // Get static field: static public OVRPlugin/FaceRegionConfidence Max
    static ::GlobalNamespace::OVRPlugin::FaceRegionConfidence _get_Max();
    // Set static field: static public OVRPlugin/FaceRegionConfidence Max
    static void _set_Max(::GlobalNamespace::OVRPlugin::FaceRegionConfidence value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRPlugin/FaceRegionConfidence
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::FaceRegionConfidence), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_FaceRegionConfidenceSizeCheck;
  static_assert(sizeof(OVRPlugin::FaceRegionConfidence) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
