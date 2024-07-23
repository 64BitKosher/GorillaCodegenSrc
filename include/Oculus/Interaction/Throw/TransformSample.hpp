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
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Type namespace: Oculus.Interaction.Throw
namespace Oculus::Interaction::Throw {
  // Forward declaring type: TransformSample
  struct TransformSample;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Throw::TransformSample, "Oculus.Interaction.Throw", "TransformSample");
// Type namespace: Oculus.Interaction.Throw
namespace Oculus::Interaction::Throw {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Oculus.Interaction.Throw.TransformSample
  // [TokenAttribute] Offset: FFFFFFFF
  struct TransformSample/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly UnityEngine.Vector3 Position
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 Position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public readonly UnityEngine.Quaternion Rotation
    // Size: 0x10
    // Offset: 0xC
    ::UnityEngine::Quaternion Rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public readonly System.Single SampleTime
    // Size: 0x4
    // Offset: 0x1C
    float SampleTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Int32 FrameIndex
    // Size: 0x4
    // Offset: 0x20
    int FrameIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TransformSample
    constexpr TransformSample(::UnityEngine::Vector3 Position_ = {}, ::UnityEngine::Quaternion Rotation_ = {}, float SampleTime_ = {}, int FrameIndex_ = {}) noexcept : Position{Position_}, Rotation{Rotation_}, SampleTime{SampleTime_}, FrameIndex{FrameIndex_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly UnityEngine.Vector3 Position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_Position();
    // Get instance field reference: public readonly UnityEngine.Quaternion Rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_Rotation();
    // Get instance field reference: public readonly System.Single SampleTime
    [[deprecated("Use field access instead!")]] float& dyn_SampleTime();
    // Get instance field reference: public readonly System.Int32 FrameIndex
    [[deprecated("Use field access instead!")]] int& dyn_FrameIndex();
    // public System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, System.Single time, System.Int32 frameIndex)
    // Offset: 0x47E2CC4
    // ABORTED: conflicts with another method.  TransformSample(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float time, int frameIndex);
    // static public Oculus.Interaction.Throw.TransformSample Interpolate(Oculus.Interaction.Throw.TransformSample start, Oculus.Interaction.Throw.TransformSample fin, System.Single time)
    // Offset: 0x47E2CDC
    static ::Oculus::Interaction::Throw::TransformSample Interpolate(::Oculus::Interaction::Throw::TransformSample start, ::Oculus::Interaction::Throw::TransformSample fin, float time);
  }; // Oculus.Interaction.Throw.TransformSample
  #pragma pack(pop)
  static check_size<sizeof(TransformSample), 32 + sizeof(int)> __Oculus_Interaction_Throw_TransformSampleSizeCheck;
  static_assert(sizeof(TransformSample) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Throw::TransformSample::TransformSample
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Throw::TransformSample::Interpolate
// Il2CppName: Interpolate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Throw::TransformSample (*)(::Oculus::Interaction::Throw::TransformSample, ::Oculus::Interaction::Throw::TransformSample, float)>(&Oculus::Interaction::Throw::TransformSample::Interpolate)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Throw", "TransformSample")->byval_arg;
    static auto* fin = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Throw", "TransformSample")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Throw::TransformSample), "Interpolate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, fin, time});
  }
};
