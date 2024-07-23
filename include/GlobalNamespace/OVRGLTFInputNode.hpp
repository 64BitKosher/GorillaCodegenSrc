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
  // Forward declaring type: OVRGLTFInputNode
  struct OVRGLTFInputNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFInputNode, "", "OVRGLTFInputNode");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRGLTFInputNode
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRGLTFInputNode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OVRGLTFInputNode
    constexpr OVRGLTFInputNode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRGLTFInputNode None
    static constexpr const int None = 0;
    // Get static field: static public OVRGLTFInputNode None
    static ::GlobalNamespace::OVRGLTFInputNode _get_None();
    // Set static field: static public OVRGLTFInputNode None
    static void _set_None(::GlobalNamespace::OVRGLTFInputNode value);
    // static field const value: static public OVRGLTFInputNode Button_A_X
    static constexpr const int Button_A_X = 1;
    // Get static field: static public OVRGLTFInputNode Button_A_X
    static ::GlobalNamespace::OVRGLTFInputNode _get_Button_A_X();
    // Set static field: static public OVRGLTFInputNode Button_A_X
    static void _set_Button_A_X(::GlobalNamespace::OVRGLTFInputNode value);
    // static field const value: static public OVRGLTFInputNode Button_B_Y
    static constexpr const int Button_B_Y = 2;
    // Get static field: static public OVRGLTFInputNode Button_B_Y
    static ::GlobalNamespace::OVRGLTFInputNode _get_Button_B_Y();
    // Set static field: static public OVRGLTFInputNode Button_B_Y
    static void _set_Button_B_Y(::GlobalNamespace::OVRGLTFInputNode value);
    // static field const value: static public OVRGLTFInputNode Button_Oculus_Menu
    static constexpr const int Button_Oculus_Menu = 3;
    // Get static field: static public OVRGLTFInputNode Button_Oculus_Menu
    static ::GlobalNamespace::OVRGLTFInputNode _get_Button_Oculus_Menu();
    // Set static field: static public OVRGLTFInputNode Button_Oculus_Menu
    static void _set_Button_Oculus_Menu(::GlobalNamespace::OVRGLTFInputNode value);
    // static field const value: static public OVRGLTFInputNode Trigger_Grip
    static constexpr const int Trigger_Grip = 4;
    // Get static field: static public OVRGLTFInputNode Trigger_Grip
    static ::GlobalNamespace::OVRGLTFInputNode _get_Trigger_Grip();
    // Set static field: static public OVRGLTFInputNode Trigger_Grip
    static void _set_Trigger_Grip(::GlobalNamespace::OVRGLTFInputNode value);
    // static field const value: static public OVRGLTFInputNode Trigger_Front
    static constexpr const int Trigger_Front = 5;
    // Get static field: static public OVRGLTFInputNode Trigger_Front
    static ::GlobalNamespace::OVRGLTFInputNode _get_Trigger_Front();
    // Set static field: static public OVRGLTFInputNode Trigger_Front
    static void _set_Trigger_Front(::GlobalNamespace::OVRGLTFInputNode value);
    // static field const value: static public OVRGLTFInputNode ThumbStick
    static constexpr const int ThumbStick = 6;
    // Get static field: static public OVRGLTFInputNode ThumbStick
    static ::GlobalNamespace::OVRGLTFInputNode _get_ThumbStick();
    // Set static field: static public OVRGLTFInputNode ThumbStick
    static void _set_ThumbStick(::GlobalNamespace::OVRGLTFInputNode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRGLTFInputNode
  #pragma pack(pop)
  static check_size<sizeof(OVRGLTFInputNode), 0 + sizeof(int)> __GlobalNamespace_OVRGLTFInputNodeSizeCheck;
  static_assert(sizeof(OVRGLTFInputNode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
