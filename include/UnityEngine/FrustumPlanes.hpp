// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: FrustumPlanes
  struct FrustumPlanes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FrustumPlanes, "UnityEngine", "FrustumPlanes");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.FrustumPlanes
  // [TokenAttribute] Offset: FFFFFFFF
  struct FrustumPlanes/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single left
    // Size: 0x4
    // Offset: 0x0
    float left;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single right
    // Size: 0x4
    // Offset: 0x4
    float right;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single bottom
    // Size: 0x4
    // Offset: 0x8
    float bottom;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single top
    // Size: 0x4
    // Offset: 0xC
    float top;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single zNear
    // Size: 0x4
    // Offset: 0x10
    float zNear;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single zFar
    // Size: 0x4
    // Offset: 0x14
    float zFar;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: FrustumPlanes
    constexpr FrustumPlanes(float left_ = {}, float right_ = {}, float bottom_ = {}, float top_ = {}, float zNear_ = {}, float zFar_ = {}) noexcept : left{left_}, right{right_}, bottom{bottom_}, top{top_}, zNear{zNear_}, zFar{zFar_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single left
    [[deprecated("Use field access instead!")]] float& dyn_left();
    // Get instance field reference: public System.Single right
    [[deprecated("Use field access instead!")]] float& dyn_right();
    // Get instance field reference: public System.Single bottom
    [[deprecated("Use field access instead!")]] float& dyn_bottom();
    // Get instance field reference: public System.Single top
    [[deprecated("Use field access instead!")]] float& dyn_top();
    // Get instance field reference: public System.Single zNear
    [[deprecated("Use field access instead!")]] float& dyn_zNear();
    // Get instance field reference: public System.Single zFar
    [[deprecated("Use field access instead!")]] float& dyn_zFar();
  }; // UnityEngine.FrustumPlanes
  #pragma pack(pop)
  static check_size<sizeof(FrustumPlanes), 20 + sizeof(float)> __UnityEngine_FrustumPlanesSizeCheck;
  static_assert(sizeof(FrustumPlanes) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
