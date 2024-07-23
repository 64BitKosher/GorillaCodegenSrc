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
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: Hitbox
  class Hitbox;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: HitboxHit
  struct HitboxHit;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::HitboxHit, "Fusion", "HitboxHit");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x3C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.HitboxHit
  // [TokenAttribute] Offset: FFFFFFFF
  struct HitboxHit/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector3 Point
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 Point;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 Normal
    // Size: 0xC
    // Offset: 0xC
    ::UnityEngine::Vector3 Normal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single Distance
    // Size: 0x4
    // Offset: 0x18
    float Distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: Distance and: Hitbox
    char __padding2[0x4] = {};
    // public Fusion.Hitbox Hitbox
    // Size: 0x8
    // Offset: 0x20
    ::Fusion::Hitbox* Hitbox;
    // Field size check
    static_assert(sizeof(::Fusion::Hitbox*) == 0x8);
    // public UnityEngine.Vector3 DebugPosition
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 DebugPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Int32 DebugTick
    // Size: 0x4
    // Offset: 0x34
    int DebugTick;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single Alpha
    // Size: 0x4
    // Offset: 0x38
    float Alpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: HitboxHit
    constexpr HitboxHit(::UnityEngine::Vector3 Point_ = {}, ::UnityEngine::Vector3 Normal_ = {}, float Distance_ = {}, ::Fusion::Hitbox* Hitbox_ = {}, ::UnityEngine::Vector3 DebugPosition_ = {}, int DebugTick_ = {}, float Alpha_ = {}) noexcept : Point{Point_}, Normal{Normal_}, Distance{Distance_}, Hitbox{Hitbox_}, DebugPosition{DebugPosition_}, DebugTick{DebugTick_}, Alpha{Alpha_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector3 Point
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_Point();
    // Get instance field reference: public UnityEngine.Vector3 Normal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_Normal();
    // Get instance field reference: public System.Single Distance
    [[deprecated("Use field access instead!")]] float& dyn_Distance();
    // Get instance field reference: public Fusion.Hitbox Hitbox
    [[deprecated("Use field access instead!")]] ::Fusion::Hitbox*& dyn_Hitbox();
    // Get instance field reference: public UnityEngine.Vector3 DebugPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_DebugPosition();
    // Get instance field reference: public System.Int32 DebugTick
    [[deprecated("Use field access instead!")]] int& dyn_DebugTick();
    // Get instance field reference: public System.Single Alpha
    [[deprecated("Use field access instead!")]] float& dyn_Alpha();
  }; // Fusion.HitboxHit
  #pragma pack(pop)
  static check_size<sizeof(HitboxHit), 56 + sizeof(float)> __Fusion_HitboxHitSizeCheck;
  static_assert(sizeof(HitboxHit) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
