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
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Body::PoseDetection
namespace Oculus::Interaction::Body::PoseDetection {
  // Forward declaring type: BodyPoseComparerActiveState
  class BodyPoseComparerActiveState;
  // Forward declaring type: IBodyPose
  class IBodyPose;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Body.PoseDetection
namespace Oculus::Interaction::Body::PoseDetection {
  // Forward declaring type: BodyPoseComparerActiveStateDebugVisual
  class BodyPoseComparerActiveStateDebugVisual;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual*, "Oculus.Interaction.Body.PoseDetection", "BodyPoseComparerActiveStateDebugVisual");
// Type namespace: Oculus.Interaction.Body.PoseDetection
namespace Oculus::Interaction::Body::PoseDetection {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual
  // [TokenAttribute] Offset: FFFFFFFF
  class BodyPoseComparerActiveStateDebugVisual : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState _bodyPoseComparer
    // Size: 0x8
    // Offset: 0x20
    ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState* bodyPoseComparer;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*) == 0x8);
    // private UnityEngine.Object _bodyPose
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Object* bodyPose;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Body.PoseDetection.IBodyPose BodyPose
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Interaction::Body::PoseDetection::IBodyPose* BodyPose;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Body::PoseDetection::IBodyPose*) == 0x8);
    // private UnityEngine.Transform _root
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* root;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Single _radius
    // Size: 0x4
    // Offset: 0x40
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState _bodyPoseComparer
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*& dyn__bodyPoseComparer();
    // Get instance field reference: private UnityEngine.Object _bodyPose
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__bodyPose();
    // Get instance field reference: private Oculus.Interaction.Body.PoseDetection.IBodyPose BodyPose
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Body::PoseDetection::IBodyPose*& dyn_BodyPose();
    // Get instance field reference: private UnityEngine.Transform _root
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__root();
    // Get instance field reference: private System.Single _radius
    [[deprecated("Use field access instead!")]] float& dyn__radius();
    // public System.Single get_Radius()
    // Offset: 0x484271C
    float get_Radius();
    // public System.Void set_Radius(System.Single value)
    // Offset: 0x4842724
    void set_Radius(float value);
    // protected System.Void Awake()
    // Offset: 0x484272C
    void Awake();
    // protected System.Void Start()
    // Offset: 0x4842794
    void Start();
    // protected System.Void Update()
    // Offset: 0x4842798
    void Update();
    // private System.Void DrawJointSpheres()
    // Offset: 0x484279C
    void DrawJointSpheres();
    // public System.Void InjectAllBodyPoseComparerActiveStateDebugVisual(Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState bodyPoseComparer, Oculus.Interaction.Body.PoseDetection.IBodyPose bodyPose, UnityEngine.Transform root)
    // Offset: 0x4842C94
    void InjectAllBodyPoseComparerActiveStateDebugVisual(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState* bodyPoseComparer, ::Oculus::Interaction::Body::PoseDetection::IBodyPose* bodyPose, ::UnityEngine::Transform* root);
    // public System.Void InjectRootTransform(UnityEngine.Transform root)
    // Offset: 0x4842DA4
    void InjectRootTransform(::UnityEngine::Transform* root);
    // public System.Void InjectBodyPoseComparer(Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState bodyPoseComparer)
    // Offset: 0x4842DAC
    void InjectBodyPoseComparer(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState* bodyPoseComparer);
    // public System.Void InjectBodyPose(Oculus.Interaction.Body.PoseDetection.IBodyPose bodyPose)
    // Offset: 0x4842CD4
    void InjectBodyPose(::Oculus::Interaction::Body::PoseDetection::IBodyPose* bodyPose);
    // public System.Void .ctor()
    // Offset: 0x4842DB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BodyPoseComparerActiveStateDebugVisual* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BodyPoseComparerActiveStateDebugVisual*, creationType>()));
    }
  }; // Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual
  #pragma pack(pop)
  static check_size<sizeof(BodyPoseComparerActiveStateDebugVisual), 64 + sizeof(float)> __Oculus_Interaction_Body_PoseDetection_BodyPoseComparerActiveStateDebugVisualSizeCheck;
  static_assert(sizeof(BodyPoseComparerActiveStateDebugVisual) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::get_Radius
// Il2CppName: get_Radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::*)()>(&Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::get_Radius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual*), "get_Radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::set_Radius
// Il2CppName: set_Radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::*)(float)>(&Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::set_Radius)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual*), "set_Radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::*)()>(&Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::*)()>(&Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::*)()>(&Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::DrawJointSpheres
// Il2CppName: DrawJointSpheres
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::*)()>(&Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::DrawJointSpheres)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual*), "DrawJointSpheres", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::InjectAllBodyPoseComparerActiveStateDebugVisual
// Il2CppName: InjectAllBodyPoseComparerActiveStateDebugVisual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::*)(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*, ::Oculus::Interaction::Body::PoseDetection::IBodyPose*, ::UnityEngine::Transform*)>(&Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::InjectAllBodyPoseComparerActiveStateDebugVisual)> {
  static const MethodInfo* get() {
    static auto* bodyPoseComparer = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Body.PoseDetection", "BodyPoseComparerActiveState")->byval_arg;
    static auto* bodyPose = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Body.PoseDetection", "IBodyPose")->byval_arg;
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual*), "InjectAllBodyPoseComparerActiveStateDebugVisual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bodyPoseComparer, bodyPose, root});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::InjectRootTransform
// Il2CppName: InjectRootTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::*)(::UnityEngine::Transform*)>(&Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::InjectRootTransform)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual*), "InjectRootTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::InjectBodyPoseComparer
// Il2CppName: InjectBodyPoseComparer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::*)(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*)>(&Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::InjectBodyPoseComparer)> {
  static const MethodInfo* get() {
    static auto* bodyPoseComparer = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Body.PoseDetection", "BodyPoseComparerActiveState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual*), "InjectBodyPoseComparer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bodyPoseComparer});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::InjectBodyPose
// Il2CppName: InjectBodyPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::*)(::Oculus::Interaction::Body::PoseDetection::IBodyPose*)>(&Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::InjectBodyPose)> {
  static const MethodInfo* get() {
    static auto* bodyPose = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Body.PoseDetection", "IBodyPose")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual*), "InjectBodyPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bodyPose});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveStateDebugVisual::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
