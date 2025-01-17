// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.INetworkStruct
#include "Fusion/INetworkStruct.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: TransferrableObject/PositionState
#include "GlobalNamespace/TransferrableObject.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: InputStruct
  struct InputStruct;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InputStruct, "", "InputStruct");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: InputStruct
  // [TokenAttribute] Offset: FFFFFFFF
  // [NetworkStructWeavedAttribute] Offset: FFFFFFFF
  struct InputStruct/*, public ::System::ValueType, public ::Fusion::INetworkStruct*/ {
    public:
    public:
    // public UnityEngine.Quaternion headRotation
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Quaternion headRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 rightHandPosition
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 rightHandPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion rightHandRotation
    // Size: 0x10
    // Offset: 0x1C
    ::UnityEngine::Quaternion rightHandRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 leftHandPosition
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 leftHandPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion leftHandRotation
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Quaternion leftHandRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x48
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Int32 roundedRotation
    // Size: 0x4
    // Offset: 0x54
    int roundedRotation;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 handPosition
    // Size: 0x4
    // Offset: 0x58
    int handPosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public TransferrableObject/PositionState state
    // Size: 0x4
    // Offset: 0x5C
    ::GlobalNamespace::TransferrableObject::PositionState state;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TransferrableObject::PositionState) == 0x4);
    // public System.Int32 grabbedRopeIndex
    // Size: 0x4
    // Offset: 0x60
    int grabbedRopeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 ropeBoneIndex
    // Size: 0x4
    // Offset: 0x64
    int ropeBoneIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean ropeGrabIsLeft
    // Size: 0x1
    // Offset: 0x68
    bool ropeGrabIsLeft;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ropeGrabIsLeft and: ropeGrabOffset
    char __padding11[0x3] = {};
    // public UnityEngine.Vector3 ropeGrabOffset
    // Size: 0xC
    // Offset: 0x6C
    ::UnityEngine::Vector3 ropeGrabOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Double serverTimeStamp
    // Size: 0x8
    // Offset: 0x78
    double serverTimeStamp;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Boolean remoteUseReplacementVoice
    // Size: 0x1
    // Offset: 0x80
    bool remoteUseReplacementVoice;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: remoteUseReplacementVoice and: speakingLoudness
    char __padding14[0x3] = {};
    // public System.Single speakingLoudness
    // Size: 0x4
    // Offset: 0x84
    float speakingLoudness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: InputStruct
    constexpr InputStruct(::UnityEngine::Quaternion headRotation_ = {}, ::UnityEngine::Vector3 rightHandPosition_ = {}, ::UnityEngine::Quaternion rightHandRotation_ = {}, ::UnityEngine::Vector3 leftHandPosition_ = {}, ::UnityEngine::Quaternion leftHandRotation_ = {}, ::UnityEngine::Vector3 position_ = {}, int roundedRotation_ = {}, int handPosition_ = {}, ::GlobalNamespace::TransferrableObject::PositionState state_ = {}, int grabbedRopeIndex_ = {}, int ropeBoneIndex_ = {}, bool ropeGrabIsLeft_ = {}, ::UnityEngine::Vector3 ropeGrabOffset_ = {}, double serverTimeStamp_ = {}, bool remoteUseReplacementVoice_ = {}, float speakingLoudness_ = {}) noexcept : headRotation{headRotation_}, rightHandPosition{rightHandPosition_}, rightHandRotation{rightHandRotation_}, leftHandPosition{leftHandPosition_}, leftHandRotation{leftHandRotation_}, position{position_}, roundedRotation{roundedRotation_}, handPosition{handPosition_}, state{state_}, grabbedRopeIndex{grabbedRopeIndex_}, ropeBoneIndex{ropeBoneIndex_}, ropeGrabIsLeft{ropeGrabIsLeft_}, ropeGrabOffset{ropeGrabOffset_}, serverTimeStamp{serverTimeStamp_}, remoteUseReplacementVoice{remoteUseReplacementVoice_}, speakingLoudness{speakingLoudness_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Fusion::INetworkStruct
    operator ::Fusion::INetworkStruct() noexcept {
      return *reinterpret_cast<::Fusion::INetworkStruct*>(this);
    }
    // Get instance field reference: public UnityEngine.Quaternion headRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_headRotation();
    // Get instance field reference: public UnityEngine.Vector3 rightHandPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_rightHandPosition();
    // Get instance field reference: public UnityEngine.Quaternion rightHandRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_rightHandRotation();
    // Get instance field reference: public UnityEngine.Vector3 leftHandPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_leftHandPosition();
    // Get instance field reference: public UnityEngine.Quaternion leftHandRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_leftHandRotation();
    // Get instance field reference: public UnityEngine.Vector3 position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public System.Int32 roundedRotation
    [[deprecated("Use field access instead!")]] int& dyn_roundedRotation();
    // Get instance field reference: public System.Int32 handPosition
    [[deprecated("Use field access instead!")]] int& dyn_handPosition();
    // Get instance field reference: public TransferrableObject/PositionState state
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TransferrableObject::PositionState& dyn_state();
    // Get instance field reference: public System.Int32 grabbedRopeIndex
    [[deprecated("Use field access instead!")]] int& dyn_grabbedRopeIndex();
    // Get instance field reference: public System.Int32 ropeBoneIndex
    [[deprecated("Use field access instead!")]] int& dyn_ropeBoneIndex();
    // Get instance field reference: public System.Boolean ropeGrabIsLeft
    [[deprecated("Use field access instead!")]] bool& dyn_ropeGrabIsLeft();
    // Get instance field reference: public UnityEngine.Vector3 ropeGrabOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_ropeGrabOffset();
    // Get instance field reference: public System.Double serverTimeStamp
    [[deprecated("Use field access instead!")]] double& dyn_serverTimeStamp();
    // Get instance field reference: public System.Boolean remoteUseReplacementVoice
    [[deprecated("Use field access instead!")]] bool& dyn_remoteUseReplacementVoice();
    // Get instance field reference: public System.Single speakingLoudness
    [[deprecated("Use field access instead!")]] float& dyn_speakingLoudness();
  }; // InputStruct
  #pragma pack(pop)
  static check_size<sizeof(InputStruct), 132 + sizeof(float)> __GlobalNamespace_InputStructSizeCheck;
  static_assert(sizeof(InputStruct) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
