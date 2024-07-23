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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::InteractionProfile, "", "OVRPlugin/InteractionProfile");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/InteractionProfile
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::InteractionProfile/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InteractionProfile
    constexpr InteractionProfile(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/InteractionProfile None
    static constexpr const int None = 0;
    // Get static field: static public OVRPlugin/InteractionProfile None
    static ::GlobalNamespace::OVRPlugin::InteractionProfile _get_None();
    // Set static field: static public OVRPlugin/InteractionProfile None
    static void _set_None(::GlobalNamespace::OVRPlugin::InteractionProfile value);
    // static field const value: static public OVRPlugin/InteractionProfile Touch
    static constexpr const int Touch = 1;
    // Get static field: static public OVRPlugin/InteractionProfile Touch
    static ::GlobalNamespace::OVRPlugin::InteractionProfile _get_Touch();
    // Set static field: static public OVRPlugin/InteractionProfile Touch
    static void _set_Touch(::GlobalNamespace::OVRPlugin::InteractionProfile value);
    // static field const value: static public OVRPlugin/InteractionProfile TouchPro
    static constexpr const int TouchPro = 2;
    // Get static field: static public OVRPlugin/InteractionProfile TouchPro
    static ::GlobalNamespace::OVRPlugin::InteractionProfile _get_TouchPro();
    // Set static field: static public OVRPlugin/InteractionProfile TouchPro
    static void _set_TouchPro(::GlobalNamespace::OVRPlugin::InteractionProfile value);
    // static field const value: static public OVRPlugin/InteractionProfile TouchPlus
    static constexpr const int TouchPlus = 4;
    // Get static field: static public OVRPlugin/InteractionProfile TouchPlus
    static ::GlobalNamespace::OVRPlugin::InteractionProfile _get_TouchPlus();
    // Set static field: static public OVRPlugin/InteractionProfile TouchPlus
    static void _set_TouchPlus(::GlobalNamespace::OVRPlugin::InteractionProfile value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRPlugin/InteractionProfile
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::InteractionProfile), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_InteractionProfileSizeCheck;
  static_assert(sizeof(OVRPlugin::InteractionProfile) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
