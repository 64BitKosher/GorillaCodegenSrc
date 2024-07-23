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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::VirtualKeyboardInputStateFlags, "", "OVRPlugin/VirtualKeyboardInputStateFlags");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/VirtualKeyboardInputStateFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct OVRPlugin::VirtualKeyboardInputStateFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt64 value__
    // Size: 0x8
    // Offset: 0x0
    uint64_t value;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: VirtualKeyboardInputStateFlags
    constexpr VirtualKeyboardInputStateFlags(uint64_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/VirtualKeyboardInputStateFlags IsPressed
    static constexpr const uint64_t IsPressed = 1u;
    // Get static field: static public OVRPlugin/VirtualKeyboardInputStateFlags IsPressed
    static ::GlobalNamespace::OVRPlugin::VirtualKeyboardInputStateFlags _get_IsPressed();
    // Set static field: static public OVRPlugin/VirtualKeyboardInputStateFlags IsPressed
    static void _set_IsPressed(::GlobalNamespace::OVRPlugin::VirtualKeyboardInputStateFlags value);
    // Get instance field reference: public System.UInt64 value__
    [[deprecated("Use field access instead!")]] uint64_t& dyn_value__();
  }; // OVRPlugin/VirtualKeyboardInputStateFlags
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::VirtualKeyboardInputStateFlags), 0 + sizeof(uint64_t)> __GlobalNamespace_OVRPlugin_VirtualKeyboardInputStateFlagsSizeCheck;
  static_assert(sizeof(OVRPlugin::VirtualKeyboardInputStateFlags) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"