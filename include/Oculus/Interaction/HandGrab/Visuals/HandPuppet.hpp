// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Oculus::Interaction::HandGrab::Visuals
namespace Oculus::Interaction::HandGrab::Visuals {
  // Forward declaring type: HandJointMap
  class HandJointMap;
  // Forward declaring type: JointCollection
  class JointCollection;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Pose
  struct Pose;
}
// Forward declaring namespace: Oculus::Interaction::HandGrab
namespace Oculus::Interaction::HandGrab {
  // Forward declaring type: HandPose
  class HandPose;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.HandGrab.Visuals
namespace Oculus::Interaction::HandGrab::Visuals {
  // Forward declaring type: HandPuppet
  class HandPuppet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::HandGrab::Visuals::HandPuppet);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandGrab::Visuals::HandPuppet*, "Oculus.Interaction.HandGrab.Visuals", "HandPuppet");
// Type namespace: Oculus.Interaction.HandGrab.Visuals
namespace Oculus::Interaction::HandGrab::Visuals {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.HandGrab.Visuals.HandPuppet
  // [TokenAttribute] Offset: FFFFFFFF
  class HandPuppet : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.Visuals.HandJointMap> _jointMaps
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>* jointMaps;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*) == 0x8);
    // private Oculus.Interaction.HandGrab.Visuals.JointCollection _jointsCache
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::HandGrab::Visuals::JointCollection* jointsCache;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::HandGrab::Visuals::JointCollection*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.Visuals.HandJointMap> _jointMaps
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*& dyn__jointMaps();
    // Get instance field reference: private Oculus.Interaction.HandGrab.Visuals.JointCollection _jointsCache
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::HandGrab::Visuals::JointCollection*& dyn__jointsCache();
    // public System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.Visuals.HandJointMap> get_JointMaps()
    // Offset: 0x482FF98
    ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>* get_JointMaps();
    // public System.Single get_Scale()
    // Offset: 0x482FFA0
    float get_Scale();
    // public System.Void set_Scale(System.Single value)
    // Offset: 0x482FFC0
    void set_Scale(float value);
    // private Oculus.Interaction.HandGrab.Visuals.JointCollection get_JointsCache()
    // Offset: 0x4830040
    ::Oculus::Interaction::HandGrab::Visuals::JointCollection* get_JointsCache();
    // public System.Void SetJointRotations(in UnityEngine.Quaternion[] jointRotations)
    // Offset: 0x482F8A8
    void SetJointRotations(ByRef<::ArrayW<::UnityEngine::Quaternion>> jointRotations);
    // public System.Void SetRootPose(in UnityEngine.Pose rootPose)
    // Offset: 0x482FB78
    void SetRootPose(ByRef<::UnityEngine::Pose> rootPose);
    // public System.Void CopyCachedJoints(ref Oculus.Interaction.HandGrab.HandPose result)
    // Offset: 0x48300C0
    void CopyCachedJoints(ByRef<::Oculus::Interaction::HandGrab::HandPose*> result);
    // public System.Void .ctor()
    // Offset: 0x48301AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandPuppet* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::HandGrab::Visuals::HandPuppet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandPuppet*, creationType>()));
    }
  }; // Oculus.Interaction.HandGrab.Visuals.HandPuppet
  #pragma pack(pop)
  static check_size<sizeof(HandPuppet), 40 + sizeof(::Oculus::Interaction::HandGrab::Visuals::JointCollection*)> __Oculus_Interaction_HandGrab_Visuals_HandPuppetSizeCheck;
  static_assert(sizeof(HandPuppet) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::Visuals::HandPuppet::get_JointMaps
// Il2CppName: get_JointMaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>* (Oculus::Interaction::HandGrab::Visuals::HandPuppet::*)()>(&Oculus::Interaction::HandGrab::Visuals::HandPuppet::get_JointMaps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::Visuals::HandPuppet*), "get_JointMaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::Visuals::HandPuppet::get_Scale
// Il2CppName: get_Scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::HandGrab::Visuals::HandPuppet::*)()>(&Oculus::Interaction::HandGrab::Visuals::HandPuppet::get_Scale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::Visuals::HandPuppet*), "get_Scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::Visuals::HandPuppet::set_Scale
// Il2CppName: set_Scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::Visuals::HandPuppet::*)(float)>(&Oculus::Interaction::HandGrab::Visuals::HandPuppet::set_Scale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::Visuals::HandPuppet*), "set_Scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::Visuals::HandPuppet::get_JointsCache
// Il2CppName: get_JointsCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::HandGrab::Visuals::JointCollection* (Oculus::Interaction::HandGrab::Visuals::HandPuppet::*)()>(&Oculus::Interaction::HandGrab::Visuals::HandPuppet::get_JointsCache)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::Visuals::HandPuppet*), "get_JointsCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::Visuals::HandPuppet::SetJointRotations
// Il2CppName: SetJointRotations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::Visuals::HandPuppet::*)(ByRef<::ArrayW<::UnityEngine::Quaternion>>)>(&Oculus::Interaction::HandGrab::Visuals::HandPuppet::SetJointRotations)> {
  static const MethodInfo* get() {
    static auto* jointRotations = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::Visuals::HandPuppet*), "SetJointRotations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jointRotations});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::Visuals::HandPuppet::SetRootPose
// Il2CppName: SetRootPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::Visuals::HandPuppet::*)(ByRef<::UnityEngine::Pose>)>(&Oculus::Interaction::HandGrab::Visuals::HandPuppet::SetRootPose)> {
  static const MethodInfo* get() {
    static auto* rootPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::Visuals::HandPuppet*), "SetRootPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rootPose});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::Visuals::HandPuppet::CopyCachedJoints
// Il2CppName: CopyCachedJoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::Visuals::HandPuppet::*)(ByRef<::Oculus::Interaction::HandGrab::HandPose*>)>(&Oculus::Interaction::HandGrab::Visuals::HandPuppet::CopyCachedJoints)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.HandGrab", "HandPose")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::Visuals::HandPuppet*), "CopyCachedJoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::Visuals::HandPuppet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
