// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DepthQuality
  struct OVRManager_DepthQuality;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_DepthQuality, "", "OVRManager/DepthQuality");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRManager/DepthQuality
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  struct OVRManager_DepthQuality/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OVRManager_DepthQuality
    constexpr OVRManager_DepthQuality(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRManager/DepthQuality Low
    static constexpr const int Low = 0;
    // Get static field: static public OVRManager/DepthQuality Low
    static ::GlobalNamespace::OVRManager_DepthQuality _get_Low();
    // Set static field: static public OVRManager/DepthQuality Low
    static void _set_Low(::GlobalNamespace::OVRManager_DepthQuality value);
    // static field const value: static public OVRManager/DepthQuality Medium
    static constexpr const int Medium = 1;
    // Get static field: static public OVRManager/DepthQuality Medium
    static ::GlobalNamespace::OVRManager_DepthQuality _get_Medium();
    // Set static field: static public OVRManager/DepthQuality Medium
    static void _set_Medium(::GlobalNamespace::OVRManager_DepthQuality value);
    // static field const value: static public OVRManager/DepthQuality High
    static constexpr const int High = 2;
    // Get static field: static public OVRManager/DepthQuality High
    static ::GlobalNamespace::OVRManager_DepthQuality _get_High();
    // Set static field: static public OVRManager/DepthQuality High
    static void _set_High(::GlobalNamespace::OVRManager_DepthQuality value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRManager/DepthQuality
  #pragma pack(pop)
  static check_size<sizeof(OVRManager_DepthQuality), 0 + sizeof(int)> __GlobalNamespace_OVRManager_DepthQualitySizeCheck;
  static_assert(sizeof(OVRManager_DepthQuality) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
