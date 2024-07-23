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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::TrackedKeyboardPresentationStyles, "", "OVRPlugin/TrackedKeyboardPresentationStyles");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/TrackedKeyboardPresentationStyles
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::TrackedKeyboardPresentationStyles/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TrackedKeyboardPresentationStyles
    constexpr TrackedKeyboardPresentationStyles(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/TrackedKeyboardPresentationStyles Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public OVRPlugin/TrackedKeyboardPresentationStyles Unknown
    static ::GlobalNamespace::OVRPlugin::TrackedKeyboardPresentationStyles _get_Unknown();
    // Set static field: static public OVRPlugin/TrackedKeyboardPresentationStyles Unknown
    static void _set_Unknown(::GlobalNamespace::OVRPlugin::TrackedKeyboardPresentationStyles value);
    // static field const value: static public OVRPlugin/TrackedKeyboardPresentationStyles Opaque
    static constexpr const int Opaque = 1;
    // Get static field: static public OVRPlugin/TrackedKeyboardPresentationStyles Opaque
    static ::GlobalNamespace::OVRPlugin::TrackedKeyboardPresentationStyles _get_Opaque();
    // Set static field: static public OVRPlugin/TrackedKeyboardPresentationStyles Opaque
    static void _set_Opaque(::GlobalNamespace::OVRPlugin::TrackedKeyboardPresentationStyles value);
    // static field const value: static public OVRPlugin/TrackedKeyboardPresentationStyles MR
    static constexpr const int MR = 2;
    // Get static field: static public OVRPlugin/TrackedKeyboardPresentationStyles MR
    static ::GlobalNamespace::OVRPlugin::TrackedKeyboardPresentationStyles _get_MR();
    // Set static field: static public OVRPlugin/TrackedKeyboardPresentationStyles MR
    static void _set_MR(::GlobalNamespace::OVRPlugin::TrackedKeyboardPresentationStyles value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRPlugin/TrackedKeyboardPresentationStyles
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::TrackedKeyboardPresentationStyles), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_TrackedKeyboardPresentationStylesSizeCheck;
  static_assert(sizeof(OVRPlugin::TrackedKeyboardPresentationStyles) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
