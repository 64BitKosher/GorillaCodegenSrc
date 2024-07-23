// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkTransform
#include "Fusion/NetworkTransform.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkTransform::InterpolatedTransformParameters, "Fusion", "NetworkTransform/InterpolatedTransformParameters");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x74
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.NetworkTransform/InterpolatedTransformParameters
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetworkTransform::InterpolatedTransformParameters/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single InterpolationAlpha
    // Size: 0x4
    // Offset: 0x0
    float InterpolationAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 UninterpolatedPositionFrom
    // Size: 0xC
    // Offset: 0x4
    ::UnityEngine::Vector3 UninterpolatedPositionFrom;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 UninterpolatedPositionTo
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 UninterpolatedPositionTo;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 InterpolatedPosition
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 InterpolatedPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 InterpolatedPositionErrorCorrection
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 InterpolatedPositionErrorCorrection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion UninterpolatedRotationFrom
    // Size: 0x10
    // Offset: 0x34
    ::UnityEngine::Quaternion UninterpolatedRotationFrom;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Quaternion UninterpolatedRotationTo
    // Size: 0x10
    // Offset: 0x44
    ::UnityEngine::Quaternion UninterpolatedRotationTo;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Quaternion InterpolatedRotation
    // Size: 0x10
    // Offset: 0x54
    ::UnityEngine::Quaternion InterpolatedRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Quaternion InterpolatedRotationErrorCorrection
    // Size: 0x10
    // Offset: 0x64
    ::UnityEngine::Quaternion InterpolatedRotationErrorCorrection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Creating value type constructor for type: InterpolatedTransformParameters
    constexpr InterpolatedTransformParameters(float InterpolationAlpha_ = {}, ::UnityEngine::Vector3 UninterpolatedPositionFrom_ = {}, ::UnityEngine::Vector3 UninterpolatedPositionTo_ = {}, ::UnityEngine::Vector3 InterpolatedPosition_ = {}, ::UnityEngine::Vector3 InterpolatedPositionErrorCorrection_ = {}, ::UnityEngine::Quaternion UninterpolatedRotationFrom_ = {}, ::UnityEngine::Quaternion UninterpolatedRotationTo_ = {}, ::UnityEngine::Quaternion InterpolatedRotation_ = {}, ::UnityEngine::Quaternion InterpolatedRotationErrorCorrection_ = {}) noexcept : InterpolationAlpha{InterpolationAlpha_}, UninterpolatedPositionFrom{UninterpolatedPositionFrom_}, UninterpolatedPositionTo{UninterpolatedPositionTo_}, InterpolatedPosition{InterpolatedPosition_}, InterpolatedPositionErrorCorrection{InterpolatedPositionErrorCorrection_}, UninterpolatedRotationFrom{UninterpolatedRotationFrom_}, UninterpolatedRotationTo{UninterpolatedRotationTo_}, InterpolatedRotation{InterpolatedRotation_}, InterpolatedRotationErrorCorrection{InterpolatedRotationErrorCorrection_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single InterpolationAlpha
    [[deprecated("Use field access instead!")]] float& dyn_InterpolationAlpha();
    // Get instance field reference: public UnityEngine.Vector3 UninterpolatedPositionFrom
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_UninterpolatedPositionFrom();
    // Get instance field reference: public UnityEngine.Vector3 UninterpolatedPositionTo
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_UninterpolatedPositionTo();
    // Get instance field reference: public UnityEngine.Vector3 InterpolatedPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_InterpolatedPosition();
    // Get instance field reference: public UnityEngine.Vector3 InterpolatedPositionErrorCorrection
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_InterpolatedPositionErrorCorrection();
    // Get instance field reference: public UnityEngine.Quaternion UninterpolatedRotationFrom
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_UninterpolatedRotationFrom();
    // Get instance field reference: public UnityEngine.Quaternion UninterpolatedRotationTo
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_UninterpolatedRotationTo();
    // Get instance field reference: public UnityEngine.Quaternion InterpolatedRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_InterpolatedRotation();
    // Get instance field reference: public UnityEngine.Quaternion InterpolatedRotationErrorCorrection
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_InterpolatedRotationErrorCorrection();
  }; // Fusion.NetworkTransform/InterpolatedTransformParameters
  #pragma pack(pop)
  static check_size<sizeof(NetworkTransform::InterpolatedTransformParameters), 100 + sizeof(::UnityEngine::Quaternion)> __Fusion_NetworkTransform_InterpolatedTransformParametersSizeCheck;
  static_assert(sizeof(NetworkTransform::InterpolatedTransformParameters) == 0x74);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
