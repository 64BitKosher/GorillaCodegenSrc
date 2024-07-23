// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Pose
  struct Pose;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Grab
namespace Oculus::Interaction::Grab {
  // Forward declaring type: GrabPoseScore
  struct GrabPoseScore;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Grab::GrabPoseScore, "Oculus.Interaction.Grab", "GrabPoseScore");
// Type namespace: Oculus.Interaction.Grab
namespace Oculus::Interaction::Grab {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Oculus.Interaction.Grab.GrabPoseScore
  // [TokenAttribute] Offset: FFFFFFFF
  struct GrabPoseScore/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Single _translationScore
    // Size: 0x4
    // Offset: 0x0
    float translationScore;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rotationScore
    // Size: 0x4
    // Offset: 0x4
    float rotationScore;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rotationWeight
    // Size: 0x4
    // Offset: 0x8
    float rotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: GrabPoseScore
    constexpr GrabPoseScore(float translationScore_ = {}, float rotationScore_ = {}, float rotationWeight_ = {}) noexcept : translationScore{translationScore_}, rotationScore{rotationScore_}, rotationWeight{rotationWeight_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public readonly Oculus.Interaction.Grab.GrabPoseScore Max
    static ::Oculus::Interaction::Grab::GrabPoseScore _get_Max();
    // Set static field: static public readonly Oculus.Interaction.Grab.GrabPoseScore Max
    static void _set_Max(::Oculus::Interaction::Grab::GrabPoseScore value);
    // Get instance field reference: private System.Single _translationScore
    [[deprecated("Use field access instead!")]] float& dyn__translationScore();
    // Get instance field reference: private System.Single _rotationScore
    [[deprecated("Use field access instead!")]] float& dyn__rotationScore();
    // Get instance field reference: private System.Single _rotationWeight
    [[deprecated("Use field access instead!")]] float& dyn__rotationWeight();
    // public System.Void .ctor(System.Single translationScore, System.Single rotationScore, System.Single rotationWeight)
    // Offset: 0x483090C
    // ABORTED: conflicts with another method.  GrabPoseScore(float translationScore, float rotationScore, float rotationWeight);
    // public System.Void .ctor(UnityEngine.Vector3 fromPoint, UnityEngine.Vector3 toPoint, System.Boolean isInside)
    // Offset: 0x48306B8
    GrabPoseScore(::UnityEngine::Vector3 fromPoint, ::UnityEngine::Vector3 toPoint, bool isInside);
    // public System.Void .ctor(in UnityEngine.Pose poseA, in UnityEngine.Pose poseB, System.Single rotationWeight)
    // Offset: 0x4829764
    GrabPoseScore(ByRef<::UnityEngine::Pose> poseA, ByRef<::UnityEngine::Pose> poseB, float rotationWeight);
    // public System.Boolean IsValid()
    // Offset: 0x4830B44
    bool IsValid();
    // private System.Single Score(System.Single maxDistance)
    // Offset: 0x4830B78
    float Score(float maxDistance);
    // static private System.Single PositionalScore(in UnityEngine.Vector3 from, in UnityEngine.Vector3 to)
    // Offset: 0x4830918
    static float PositionalScore(ByRef<::UnityEngine::Vector3> from, ByRef<::UnityEngine::Vector3> to);
    // static private System.Single RotationalScore(in UnityEngine.Quaternion from, in UnityEngine.Quaternion to)
    // Offset: 0x4830948
    static float RotationalScore(ByRef<::UnityEngine::Quaternion> from, ByRef<::UnityEngine::Quaternion> to);
    // static public Oculus.Interaction.Grab.GrabPoseScore Lerp(in Oculus.Interaction.Grab.GrabPoseScore from, in Oculus.Interaction.Grab.GrabPoseScore to, System.Single t)
    // Offset: 0x4830BA8
    static ::Oculus::Interaction::Grab::GrabPoseScore Lerp(ByRef<::Oculus::Interaction::Grab::GrabPoseScore> from, ByRef<::Oculus::Interaction::Grab::GrabPoseScore> to, float t);
    // public System.Boolean IsBetterThan(Oculus.Interaction.Grab.GrabPoseScore referenceScore)
    // Offset: 0x482845C
    bool IsBetterThan(::Oculus::Interaction::Grab::GrabPoseScore referenceScore);
    // static private System.Void .cctor()
    // Offset: 0x4830BEC
    static void _cctor();
  }; // Oculus.Interaction.Grab.GrabPoseScore
  #pragma pack(pop)
  static check_size<sizeof(GrabPoseScore), 8 + sizeof(float)> __Oculus_Interaction_Grab_GrabPoseScoreSizeCheck;
  static_assert(sizeof(GrabPoseScore) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabPoseScore::GrabPoseScore
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabPoseScore::GrabPoseScore
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabPoseScore::GrabPoseScore
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabPoseScore::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Grab::GrabPoseScore::*)()>(&Oculus::Interaction::Grab::GrabPoseScore::IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabPoseScore), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabPoseScore::Score
// Il2CppName: Score
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Grab::GrabPoseScore::*)(float)>(&Oculus::Interaction::Grab::GrabPoseScore::Score)> {
  static const MethodInfo* get() {
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabPoseScore), "Score", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxDistance});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabPoseScore::PositionalScore
// Il2CppName: PositionalScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&Oculus::Interaction::Grab::GrabPoseScore::PositionalScore)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabPoseScore), "PositionalScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabPoseScore::RotationalScore
// Il2CppName: RotationalScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>)>(&Oculus::Interaction::Grab::GrabPoseScore::RotationalScore)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabPoseScore), "RotationalScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabPoseScore::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (*)(ByRef<::Oculus::Interaction::Grab::GrabPoseScore>, ByRef<::Oculus::Interaction::Grab::GrabPoseScore>, float)>(&Oculus::Interaction::Grab::GrabPoseScore::Lerp)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Grab", "GrabPoseScore")->this_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Grab", "GrabPoseScore")->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabPoseScore), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to, t});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabPoseScore::IsBetterThan
// Il2CppName: IsBetterThan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Grab::GrabPoseScore::*)(::Oculus::Interaction::Grab::GrabPoseScore)>(&Oculus::Interaction::Grab::GrabPoseScore::IsBetterThan)> {
  static const MethodInfo* get() {
    static auto* referenceScore = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Grab", "GrabPoseScore")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabPoseScore), "IsBetterThan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{referenceScore});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabPoseScore::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::Grab::GrabPoseScore::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabPoseScore), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};