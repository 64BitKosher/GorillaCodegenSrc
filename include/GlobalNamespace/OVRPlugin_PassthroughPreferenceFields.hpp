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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::PassthroughPreferenceFields, "", "OVRPlugin/PassthroughPreferenceFields");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/PassthroughPreferenceFields
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct OVRPlugin::PassthroughPreferenceFields/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PassthroughPreferenceFields
    constexpr PassthroughPreferenceFields(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/PassthroughPreferenceFields Flags
    static constexpr const int Flags = 1;
    // Get static field: static public OVRPlugin/PassthroughPreferenceFields Flags
    static ::GlobalNamespace::OVRPlugin::PassthroughPreferenceFields _get_Flags();
    // Set static field: static public OVRPlugin/PassthroughPreferenceFields Flags
    static void _set_Flags(::GlobalNamespace::OVRPlugin::PassthroughPreferenceFields value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRPlugin/PassthroughPreferenceFields
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::PassthroughPreferenceFields), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_PassthroughPreferenceFieldsSizeCheck;
  static_assert(sizeof(OVRPlugin::PassthroughPreferenceFields) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
