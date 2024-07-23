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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::SpaceQueryType, "", "OVRPlugin/SpaceQueryType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/SpaceQueryType
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::SpaceQueryType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SpaceQueryType
    constexpr SpaceQueryType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/SpaceQueryType Action
    static constexpr const int Action = 0;
    // Get static field: static public OVRPlugin/SpaceQueryType Action
    static ::GlobalNamespace::OVRPlugin::SpaceQueryType _get_Action();
    // Set static field: static public OVRPlugin/SpaceQueryType Action
    static void _set_Action(::GlobalNamespace::OVRPlugin::SpaceQueryType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRPlugin/SpaceQueryType
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::SpaceQueryType), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_SpaceQueryTypeSizeCheck;
  static_assert(sizeof(OVRPlugin::SpaceQueryType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
