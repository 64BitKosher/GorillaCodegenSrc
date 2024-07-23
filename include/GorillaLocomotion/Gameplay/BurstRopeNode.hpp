// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: GorillaLocomotion.Gameplay
namespace GorillaLocomotion::Gameplay {
  // Forward declaring type: BurstRopeNode
  struct BurstRopeNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Gameplay::BurstRopeNode, "GorillaLocomotion.Gameplay", "BurstRopeNode");
// Type namespace: GorillaLocomotion.Gameplay
namespace GorillaLocomotion::Gameplay {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: GorillaLocomotion.Gameplay.BurstRopeNode
  // [TokenAttribute] Offset: FFFFFFFF
  struct BurstRopeNode/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector3 lastPos
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 lastPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 curPos
    // Size: 0xC
    // Offset: 0xC
    ::UnityEngine::Vector3 curPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: BurstRopeNode
    constexpr BurstRopeNode(::UnityEngine::Vector3 lastPos_ = {}, ::UnityEngine::Vector3 curPos_ = {}) noexcept : lastPos{lastPos_}, curPos{curPos_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector3 lastPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastPos();
    // Get instance field reference: public UnityEngine.Vector3 curPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_curPos();
  }; // GorillaLocomotion.Gameplay.BurstRopeNode
  #pragma pack(pop)
  static check_size<sizeof(BurstRopeNode), 12 + sizeof(::UnityEngine::Vector3)> __GorillaLocomotion_Gameplay_BurstRopeNodeSizeCheck;
  static_assert(sizeof(BurstRopeNode) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
