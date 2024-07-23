// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/PassthroughCapabilityFields
#include "GlobalNamespace/OVRPlugin_PassthroughCapabilityFields.hpp"
// Including type: OVRPlugin/PassthroughCapabilityFlags
#include "GlobalNamespace/OVRPlugin_PassthroughCapabilityFlags.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::PassthroughCapabilities, "", "OVRPlugin/PassthroughCapabilities");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/PassthroughCapabilities
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::PassthroughCapabilities/*, public ::System::ValueType*/ {
    public:
    public:
    // public OVRPlugin/PassthroughCapabilityFields Fields
    // Size: 0x4
    // Offset: 0x0
    ::GlobalNamespace::OVRPlugin::PassthroughCapabilityFields Fields;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::PassthroughCapabilityFields) == 0x4);
    // public OVRPlugin/PassthroughCapabilityFlags Flags
    // Size: 0x4
    // Offset: 0x4
    ::GlobalNamespace::OVRPlugin::PassthroughCapabilityFlags Flags;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::PassthroughCapabilityFlags) == 0x4);
    // public System.UInt32 MaxColorLutResolution
    // Size: 0x4
    // Offset: 0x8
    uint MaxColorLutResolution;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: PassthroughCapabilities
    constexpr PassthroughCapabilities(::GlobalNamespace::OVRPlugin::PassthroughCapabilityFields Fields_ = {}, ::GlobalNamespace::OVRPlugin::PassthroughCapabilityFlags Flags_ = {}, uint MaxColorLutResolution_ = {}) noexcept : Fields{Fields_}, Flags{Flags_}, MaxColorLutResolution{MaxColorLutResolution_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public OVRPlugin/PassthroughCapabilityFields Fields
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::PassthroughCapabilityFields& dyn_Fields();
    // Get instance field reference: public OVRPlugin/PassthroughCapabilityFlags Flags
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::PassthroughCapabilityFlags& dyn_Flags();
    // Get instance field reference: public System.UInt32 MaxColorLutResolution
    [[deprecated("Use field access instead!")]] uint& dyn_MaxColorLutResolution();
  }; // OVRPlugin/PassthroughCapabilities
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::PassthroughCapabilities), 8 + sizeof(uint)> __GlobalNamespace_OVRPlugin_PassthroughCapabilitiesSizeCheck;
  static_assert(sizeof(OVRPlugin::PassthroughCapabilities) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"