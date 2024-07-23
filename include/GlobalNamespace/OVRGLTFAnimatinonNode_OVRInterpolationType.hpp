// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRGLTFAnimatinonNode
#include "GlobalNamespace/OVRGLTFAnimatinonNode.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAnimatinonNode::OVRInterpolationType, "", "OVRGLTFAnimatinonNode/OVRInterpolationType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRGLTFAnimatinonNode/OVRInterpolationType
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRGLTFAnimatinonNode::OVRInterpolationType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OVRInterpolationType
    constexpr OVRInterpolationType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRGLTFAnimatinonNode/OVRInterpolationType None
    static constexpr const int None = 0;
    // Get static field: static public OVRGLTFAnimatinonNode/OVRInterpolationType None
    static ::GlobalNamespace::OVRGLTFAnimatinonNode::OVRInterpolationType _get_None();
    // Set static field: static public OVRGLTFAnimatinonNode/OVRInterpolationType None
    static void _set_None(::GlobalNamespace::OVRGLTFAnimatinonNode::OVRInterpolationType value);
    // static field const value: static public OVRGLTFAnimatinonNode/OVRInterpolationType LINEAR
    static constexpr const int LINEAR = 1;
    // Get static field: static public OVRGLTFAnimatinonNode/OVRInterpolationType LINEAR
    static ::GlobalNamespace::OVRGLTFAnimatinonNode::OVRInterpolationType _get_LINEAR();
    // Set static field: static public OVRGLTFAnimatinonNode/OVRInterpolationType LINEAR
    static void _set_LINEAR(::GlobalNamespace::OVRGLTFAnimatinonNode::OVRInterpolationType value);
    // static field const value: static public OVRGLTFAnimatinonNode/OVRInterpolationType STEP
    static constexpr const int STEP = 2;
    // Get static field: static public OVRGLTFAnimatinonNode/OVRInterpolationType STEP
    static ::GlobalNamespace::OVRGLTFAnimatinonNode::OVRInterpolationType _get_STEP();
    // Set static field: static public OVRGLTFAnimatinonNode/OVRInterpolationType STEP
    static void _set_STEP(::GlobalNamespace::OVRGLTFAnimatinonNode::OVRInterpolationType value);
    // static field const value: static public OVRGLTFAnimatinonNode/OVRInterpolationType CUBICSPLINE
    static constexpr const int CUBICSPLINE = 3;
    // Get static field: static public OVRGLTFAnimatinonNode/OVRInterpolationType CUBICSPLINE
    static ::GlobalNamespace::OVRGLTFAnimatinonNode::OVRInterpolationType _get_CUBICSPLINE();
    // Set static field: static public OVRGLTFAnimatinonNode/OVRInterpolationType CUBICSPLINE
    static void _set_CUBICSPLINE(::GlobalNamespace::OVRGLTFAnimatinonNode::OVRInterpolationType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRGLTFAnimatinonNode/OVRInterpolationType
  #pragma pack(pop)
  static check_size<sizeof(OVRGLTFAnimatinonNode::OVRInterpolationType), 0 + sizeof(int)> __GlobalNamespace_OVRGLTFAnimatinonNode_OVRInterpolationTypeSizeCheck;
  static_assert(sizeof(OVRGLTFAnimatinonNode::OVRInterpolationType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"