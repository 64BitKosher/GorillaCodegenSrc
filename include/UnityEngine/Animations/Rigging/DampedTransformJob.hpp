// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Animations.Rigging.IWeightedAnimationJob
#include "UnityEngine/Animations/Rigging/IWeightedAnimationJob.hpp"
// Including type: UnityEngine.Animations.Rigging.ReadWriteTransformHandle
#include "UnityEngine/Animations/Rigging/ReadWriteTransformHandle.hpp"
// Including type: UnityEngine.Animations.Rigging.ReadOnlyTransformHandle
#include "UnityEngine/Animations/Rigging/ReadOnlyTransformHandle.hpp"
// Including type: UnityEngine.Animations.Rigging.AffineTransform
#include "UnityEngine/Animations/Rigging/AffineTransform.hpp"
// Including type: UnityEngine.Animations.Rigging.FloatProperty
#include "UnityEngine/Animations/Rigging/FloatProperty.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Skipping declaration: AnimationStream because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: DampedTransformJob
  struct DampedTransformJob;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::DampedTransformJob, "UnityEngine.Animations.Rigging", "DampedTransformJob");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x98
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.Rigging.DampedTransformJob
  // [TokenAttribute] Offset: FFFFFFFF
  // [BurstCompileAttribute] Offset: FFFFFFFF
  struct DampedTransformJob/*, public ::System::ValueType, public ::UnityEngine::Animations::Rigging::IWeightedAnimationJob*/ {
    public:
    public:
    // public UnityEngine.Animations.Rigging.ReadWriteTransformHandle driven
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Animations::Rigging::ReadWriteTransformHandle driven;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::ReadWriteTransformHandle) == 0xC);
    // public UnityEngine.Animations.Rigging.ReadOnlyTransformHandle source
    // Size: 0x15
    // Offset: 0xC
    ::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle source;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle) == 0x15);
    // Padding between fields: source and: localBindTx
    char __padding1[0x3] = {};
    // public UnityEngine.Animations.Rigging.AffineTransform localBindTx
    // Size: 0x1C
    // Offset: 0x24
    ::UnityEngine::Animations::Rigging::AffineTransform localBindTx;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::AffineTransform) == 0x1C);
    // public UnityEngine.Vector3 aimBindAxis
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 aimBindAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Animations.Rigging.AffineTransform prevDrivenTx
    // Size: 0x1C
    // Offset: 0x4C
    ::UnityEngine::Animations::Rigging::AffineTransform prevDrivenTx;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::AffineTransform) == 0x1C);
    // public UnityEngine.Animations.Rigging.FloatProperty dampPosition
    // Size: 0x10
    // Offset: 0x68
    ::UnityEngine::Animations::Rigging::FloatProperty dampPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::FloatProperty) == 0x10);
    // public UnityEngine.Animations.Rigging.FloatProperty dampRotation
    // Size: 0x10
    // Offset: 0x78
    ::UnityEngine::Animations::Rigging::FloatProperty dampRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::FloatProperty) == 0x10);
    // private UnityEngine.Animations.Rigging.FloatProperty <jobWeight>k__BackingField
    // Size: 0x10
    // Offset: 0x88
    ::UnityEngine::Animations::Rigging::FloatProperty jobWeight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::FloatProperty) == 0x10);
    public:
    // Creating value type constructor for type: DampedTransformJob
    constexpr DampedTransformJob(::UnityEngine::Animations::Rigging::ReadWriteTransformHandle driven_ = {}, ::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle source_ = {}, ::UnityEngine::Animations::Rigging::AffineTransform localBindTx_ = {}, ::UnityEngine::Vector3 aimBindAxis_ = {}, ::UnityEngine::Animations::Rigging::AffineTransform prevDrivenTx_ = {}, ::UnityEngine::Animations::Rigging::FloatProperty dampPosition_ = {}, ::UnityEngine::Animations::Rigging::FloatProperty dampRotation_ = {}, ::UnityEngine::Animations::Rigging::FloatProperty jobWeight_ = {}) noexcept : driven{driven_}, source{source_}, localBindTx{localBindTx_}, aimBindAxis{aimBindAxis_}, prevDrivenTx{prevDrivenTx_}, dampPosition{dampPosition_}, dampRotation{dampRotation_}, jobWeight{jobWeight_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Animations::Rigging::IWeightedAnimationJob
    operator ::UnityEngine::Animations::Rigging::IWeightedAnimationJob() noexcept {
      return *reinterpret_cast<::UnityEngine::Animations::Rigging::IWeightedAnimationJob*>(this);
    }
    // static field const value: static private System.Single k_FixedDt
    static constexpr const float k_FixedDt = 0.01667;
    // Get static field: static private System.Single k_FixedDt
    static float _get_k_FixedDt();
    // Set static field: static private System.Single k_FixedDt
    static void _set_k_FixedDt(float value);
    // static field const value: static private System.Single k_DampFactor
    static constexpr const float k_DampFactor = 40;
    // Get static field: static private System.Single k_DampFactor
    static float _get_k_DampFactor();
    // Set static field: static private System.Single k_DampFactor
    static void _set_k_DampFactor(float value);
    // Get instance field reference: public UnityEngine.Animations.Rigging.ReadWriteTransformHandle driven
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::ReadWriteTransformHandle& dyn_driven();
    // Get instance field reference: public UnityEngine.Animations.Rigging.ReadOnlyTransformHandle source
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle& dyn_source();
    // Get instance field reference: public UnityEngine.Animations.Rigging.AffineTransform localBindTx
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::AffineTransform& dyn_localBindTx();
    // Get instance field reference: public UnityEngine.Vector3 aimBindAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_aimBindAxis();
    // Get instance field reference: public UnityEngine.Animations.Rigging.AffineTransform prevDrivenTx
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::AffineTransform& dyn_prevDrivenTx();
    // Get instance field reference: public UnityEngine.Animations.Rigging.FloatProperty dampPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::FloatProperty& dyn_dampPosition();
    // Get instance field reference: public UnityEngine.Animations.Rigging.FloatProperty dampRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::FloatProperty& dyn_dampRotation();
    // Get instance field reference: private UnityEngine.Animations.Rigging.FloatProperty <jobWeight>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::FloatProperty& dyn_$jobWeight$k__BackingField();
    // public UnityEngine.Animations.Rigging.FloatProperty get_jobWeight()
    // Offset: 0x506AEA8
    ::UnityEngine::Animations::Rigging::FloatProperty get_jobWeight();
    // public System.Void set_jobWeight(UnityEngine.Animations.Rigging.FloatProperty value)
    // Offset: 0x506AEB4
    void set_jobWeight(::UnityEngine::Animations::Rigging::FloatProperty value);
    // public System.Void ProcessRootMotion(UnityEngine.Animations.AnimationStream stream)
    // Offset: 0x506AEBC
    void ProcessRootMotion(::UnityEngine::Animations::AnimationStream stream);
    // public System.Void ProcessAnimation(UnityEngine.Animations.AnimationStream stream)
    // Offset: 0x506AEC0
    void ProcessAnimation(::UnityEngine::Animations::AnimationStream stream);
  }; // UnityEngine.Animations.Rigging.DampedTransformJob
  #pragma pack(pop)
  static check_size<sizeof(DampedTransformJob), 136 + sizeof(::UnityEngine::Animations::Rigging::FloatProperty)> __UnityEngine_Animations_Rigging_DampedTransformJobSizeCheck;
  static_assert(sizeof(DampedTransformJob) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::DampedTransformJob::get_jobWeight
// Il2CppName: get_jobWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::FloatProperty (UnityEngine::Animations::Rigging::DampedTransformJob::*)()>(&UnityEngine::Animations::Rigging::DampedTransformJob::get_jobWeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::DampedTransformJob), "get_jobWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::DampedTransformJob::set_jobWeight
// Il2CppName: set_jobWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::DampedTransformJob::*)(::UnityEngine::Animations::Rigging::FloatProperty)>(&UnityEngine::Animations::Rigging::DampedTransformJob::set_jobWeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "FloatProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::DampedTransformJob), "set_jobWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::DampedTransformJob::ProcessRootMotion
// Il2CppName: ProcessRootMotion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::DampedTransformJob::*)(::UnityEngine::Animations::AnimationStream)>(&UnityEngine::Animations::Rigging::DampedTransformJob::ProcessRootMotion)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::DampedTransformJob), "ProcessRootMotion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::DampedTransformJob::ProcessAnimation
// Il2CppName: ProcessAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::DampedTransformJob::*)(::UnityEngine::Animations::AnimationStream)>(&UnityEngine::Animations::Rigging::DampedTransformJob::ProcessAnimation)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::DampedTransformJob), "ProcessAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};