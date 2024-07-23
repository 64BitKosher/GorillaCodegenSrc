// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput::HapticsLocation, "", "OVRInput/HapticsLocation");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/HapticsLocation
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRInput::HapticsLocation/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HapticsLocation
    constexpr HapticsLocation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRInput/HapticsLocation None
    static constexpr const int None = 0;
    // Get static field: static public OVRInput/HapticsLocation None
    static ::GlobalNamespace::OVRInput::HapticsLocation _get_None();
    // Set static field: static public OVRInput/HapticsLocation None
    static void _set_None(::GlobalNamespace::OVRInput::HapticsLocation value);
    // static field const value: static public OVRInput/HapticsLocation Hand
    static constexpr const int Hand = 1;
    // Get static field: static public OVRInput/HapticsLocation Hand
    static ::GlobalNamespace::OVRInput::HapticsLocation _get_Hand();
    // Set static field: static public OVRInput/HapticsLocation Hand
    static void _set_Hand(::GlobalNamespace::OVRInput::HapticsLocation value);
    // static field const value: static public OVRInput/HapticsLocation Thumb
    static constexpr const int Thumb = 2;
    // Get static field: static public OVRInput/HapticsLocation Thumb
    static ::GlobalNamespace::OVRInput::HapticsLocation _get_Thumb();
    // Set static field: static public OVRInput/HapticsLocation Thumb
    static void _set_Thumb(::GlobalNamespace::OVRInput::HapticsLocation value);
    // static field const value: static public OVRInput/HapticsLocation Index
    static constexpr const int Index = 4;
    // Get static field: static public OVRInput/HapticsLocation Index
    static ::GlobalNamespace::OVRInput::HapticsLocation _get_Index();
    // Set static field: static public OVRInput/HapticsLocation Index
    static void _set_Index(::GlobalNamespace::OVRInput::HapticsLocation value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRInput/HapticsLocation
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::HapticsLocation), 0 + sizeof(int)> __GlobalNamespace_OVRInput_HapticsLocationSizeCheck;
  static_assert(sizeof(OVRInput::HapticsLocation) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"