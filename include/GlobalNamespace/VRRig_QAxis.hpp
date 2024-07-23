// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRRig
#include "GlobalNamespace/VRRig.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRRig::QAxis, "", "VRRig/QAxis");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: VRRig/QAxis
  // [TokenAttribute] Offset: FFFFFFFF
  struct VRRig::QAxis/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: QAxis
    constexpr QAxis(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VRRig/QAxis X
    static constexpr const int X = 0;
    // Get static field: static public VRRig/QAxis X
    static ::GlobalNamespace::VRRig::QAxis _get_X();
    // Set static field: static public VRRig/QAxis X
    static void _set_X(::GlobalNamespace::VRRig::QAxis value);
    // static field const value: static public VRRig/QAxis Y
    static constexpr const int Y = 1;
    // Get static field: static public VRRig/QAxis Y
    static ::GlobalNamespace::VRRig::QAxis _get_Y();
    // Set static field: static public VRRig/QAxis Y
    static void _set_Y(::GlobalNamespace::VRRig::QAxis value);
    // static field const value: static public VRRig/QAxis Z
    static constexpr const int Z = 2;
    // Get static field: static public VRRig/QAxis Z
    static ::GlobalNamespace::VRRig::QAxis _get_Z();
    // Set static field: static public VRRig/QAxis Z
    static void _set_Z(::GlobalNamespace::VRRig::QAxis value);
    // static field const value: static public VRRig/QAxis W
    static constexpr const int W = 3;
    // Get static field: static public VRRig/QAxis W
    static ::GlobalNamespace::VRRig::QAxis _get_W();
    // Set static field: static public VRRig/QAxis W
    static void _set_W(::GlobalNamespace::VRRig::QAxis value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // VRRig/QAxis
  #pragma pack(pop)
  static check_size<sizeof(VRRig::QAxis), 0 + sizeof(int)> __GlobalNamespace_VRRig_QAxisSizeCheck;
  static_assert(sizeof(VRRig::QAxis) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
