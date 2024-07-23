// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.Input.Handedness
#include "Oculus/Interaction/Input/Handedness.hpp"
// Including type: UnityEngine.Pose
#include "UnityEngine/Pose.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: TransformJointData
  class TransformJointData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::TransformJointData);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::TransformJointData*, "Oculus.Interaction.PoseDetection", "TransformJointData");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.TransformJointData
  // [TokenAttribute] Offset: FFFFFFFF
  class TransformJointData : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean IsValid
    // Size: 0x1
    // Offset: 0x10
    bool IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsValid and: Handedness
    char __padding0[0x3] = {};
    // public Oculus.Interaction.Input.Handedness Handedness
    // Size: 0x4
    // Offset: 0x14
    ::Oculus::Interaction::Input::Handedness Handedness;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::Handedness) == 0x4);
    // public UnityEngine.Pose CenterEyePose
    // Size: 0x1C
    // Offset: 0x18
    ::UnityEngine::Pose CenterEyePose;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // public UnityEngine.Pose WristPose
    // Size: 0x1C
    // Offset: 0x34
    ::UnityEngine::Pose WristPose;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // public UnityEngine.Vector3 TrackingSystemUp
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 TrackingSystemUp;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 TrackingSystemForward
    // Size: 0xC
    // Offset: 0x5C
    ::UnityEngine::Vector3 TrackingSystemForward;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public System.Boolean IsValid
    [[deprecated("Use field access instead!")]] bool& dyn_IsValid();
    // Get instance field reference: public Oculus.Interaction.Input.Handedness Handedness
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::Handedness& dyn_Handedness();
    // Get instance field reference: public UnityEngine.Pose CenterEyePose
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_CenterEyePose();
    // Get instance field reference: public UnityEngine.Pose WristPose
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_WristPose();
    // Get instance field reference: public UnityEngine.Vector3 TrackingSystemUp
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_TrackingSystemUp();
    // Get instance field reference: public UnityEngine.Vector3 TrackingSystemForward
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_TrackingSystemForward();
    // public System.Void .ctor()
    // Offset: 0x47F3E90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransformJointData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::TransformJointData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransformJointData*, creationType>()));
    }
  }; // Oculus.Interaction.PoseDetection.TransformJointData
  #pragma pack(pop)
  static check_size<sizeof(TransformJointData), 92 + sizeof(::UnityEngine::Vector3)> __Oculus_Interaction_PoseDetection_TransformJointDataSizeCheck;
  static_assert(sizeof(TransformJointData) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformJointData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
