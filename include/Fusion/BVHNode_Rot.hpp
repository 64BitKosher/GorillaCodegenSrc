// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.BVHNode
#include "Fusion/BVHNode.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::BVHNode::Rot, "Fusion", "BVHNode/Rot");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.BVHNode/Rot
  // [TokenAttribute] Offset: FFFFFFFF
  struct BVHNode::Rot/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Rot
    constexpr Rot(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.BVHNode/Rot NONE
    static constexpr const int NONE = 0;
    // Get static field: static public Fusion.BVHNode/Rot NONE
    static ::Fusion::BVHNode::Rot _get_NONE();
    // Set static field: static public Fusion.BVHNode/Rot NONE
    static void _set_NONE(::Fusion::BVHNode::Rot value);
    // static field const value: static public Fusion.BVHNode/Rot L_RL
    static constexpr const int L_RL = 1;
    // Get static field: static public Fusion.BVHNode/Rot L_RL
    static ::Fusion::BVHNode::Rot _get_L_RL();
    // Set static field: static public Fusion.BVHNode/Rot L_RL
    static void _set_L_RL(::Fusion::BVHNode::Rot value);
    // static field const value: static public Fusion.BVHNode/Rot L_RR
    static constexpr const int L_RR = 2;
    // Get static field: static public Fusion.BVHNode/Rot L_RR
    static ::Fusion::BVHNode::Rot _get_L_RR();
    // Set static field: static public Fusion.BVHNode/Rot L_RR
    static void _set_L_RR(::Fusion::BVHNode::Rot value);
    // static field const value: static public Fusion.BVHNode/Rot R_LL
    static constexpr const int R_LL = 3;
    // Get static field: static public Fusion.BVHNode/Rot R_LL
    static ::Fusion::BVHNode::Rot _get_R_LL();
    // Set static field: static public Fusion.BVHNode/Rot R_LL
    static void _set_R_LL(::Fusion::BVHNode::Rot value);
    // static field const value: static public Fusion.BVHNode/Rot R_LR
    static constexpr const int R_LR = 4;
    // Get static field: static public Fusion.BVHNode/Rot R_LR
    static ::Fusion::BVHNode::Rot _get_R_LR();
    // Set static field: static public Fusion.BVHNode/Rot R_LR
    static void _set_R_LR(::Fusion::BVHNode::Rot value);
    // static field const value: static public Fusion.BVHNode/Rot LL_RR
    static constexpr const int LL_RR = 5;
    // Get static field: static public Fusion.BVHNode/Rot LL_RR
    static ::Fusion::BVHNode::Rot _get_LL_RR();
    // Set static field: static public Fusion.BVHNode/Rot LL_RR
    static void _set_LL_RR(::Fusion::BVHNode::Rot value);
    // static field const value: static public Fusion.BVHNode/Rot LL_RL
    static constexpr const int LL_RL = 6;
    // Get static field: static public Fusion.BVHNode/Rot LL_RL
    static ::Fusion::BVHNode::Rot _get_LL_RL();
    // Set static field: static public Fusion.BVHNode/Rot LL_RL
    static void _set_LL_RL(::Fusion::BVHNode::Rot value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Fusion.BVHNode/Rot
  #pragma pack(pop)
  static check_size<sizeof(BVHNode::Rot), 0 + sizeof(int)> __Fusion_BVHNode_RotSizeCheck;
  static_assert(sizeof(BVHNode::Rot) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
