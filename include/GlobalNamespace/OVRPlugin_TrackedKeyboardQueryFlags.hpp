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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::TrackedKeyboardQueryFlags, "", "OVRPlugin/TrackedKeyboardQueryFlags");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/TrackedKeyboardQueryFlags
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::TrackedKeyboardQueryFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TrackedKeyboardQueryFlags
    constexpr TrackedKeyboardQueryFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/TrackedKeyboardQueryFlags Local
    static constexpr const int Local = 2;
    // Get static field: static public OVRPlugin/TrackedKeyboardQueryFlags Local
    static ::GlobalNamespace::OVRPlugin::TrackedKeyboardQueryFlags _get_Local();
    // Set static field: static public OVRPlugin/TrackedKeyboardQueryFlags Local
    static void _set_Local(::GlobalNamespace::OVRPlugin::TrackedKeyboardQueryFlags value);
    // static field const value: static public OVRPlugin/TrackedKeyboardQueryFlags Remote
    static constexpr const int Remote = 4;
    // Get static field: static public OVRPlugin/TrackedKeyboardQueryFlags Remote
    static ::GlobalNamespace::OVRPlugin::TrackedKeyboardQueryFlags _get_Remote();
    // Set static field: static public OVRPlugin/TrackedKeyboardQueryFlags Remote
    static void _set_Remote(::GlobalNamespace::OVRPlugin::TrackedKeyboardQueryFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRPlugin/TrackedKeyboardQueryFlags
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::TrackedKeyboardQueryFlags), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_TrackedKeyboardQueryFlagsSizeCheck;
  static_assert(sizeof(OVRPlugin::TrackedKeyboardQueryFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
