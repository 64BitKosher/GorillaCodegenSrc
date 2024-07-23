// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSpatialAnchor
#include "GlobalNamespace/OVRSpatialAnchor.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor::MultiAnchorActionType, "", "OVRSpatialAnchor/MultiAnchorActionType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRSpatialAnchor/MultiAnchorActionType
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRSpatialAnchor::MultiAnchorActionType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MultiAnchorActionType
    constexpr MultiAnchorActionType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRSpatialAnchor/MultiAnchorActionType Save
    static constexpr const int Save = 0;
    // Get static field: static public OVRSpatialAnchor/MultiAnchorActionType Save
    static ::GlobalNamespace::OVRSpatialAnchor::MultiAnchorActionType _get_Save();
    // Set static field: static public OVRSpatialAnchor/MultiAnchorActionType Save
    static void _set_Save(::GlobalNamespace::OVRSpatialAnchor::MultiAnchorActionType value);
    // static field const value: static public OVRSpatialAnchor/MultiAnchorActionType Share
    static constexpr const int Share = 1;
    // Get static field: static public OVRSpatialAnchor/MultiAnchorActionType Share
    static ::GlobalNamespace::OVRSpatialAnchor::MultiAnchorActionType _get_Share();
    // Set static field: static public OVRSpatialAnchor/MultiAnchorActionType Share
    static void _set_Share(::GlobalNamespace::OVRSpatialAnchor::MultiAnchorActionType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRSpatialAnchor/MultiAnchorActionType
  #pragma pack(pop)
  static check_size<sizeof(OVRSpatialAnchor::MultiAnchorActionType), 0 + sizeof(int)> __GlobalNamespace_OVRSpatialAnchor_MultiAnchorActionTypeSizeCheck;
  static_assert(sizeof(OVRSpatialAnchor::MultiAnchorActionType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
