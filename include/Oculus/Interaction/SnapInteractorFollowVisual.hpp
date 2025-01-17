// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Pose
#include "UnityEngine/Pose.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: SnapInteractor
  class SnapInteractor;
  // Forward declaring type: ProgressCurve
  class ProgressCurve;
  // Forward declaring type: InteractorStateChangeArgs
  struct InteractorStateChangeArgs;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: SnapInteractorFollowVisual
  class SnapInteractorFollowVisual;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::SnapInteractorFollowVisual);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::SnapInteractorFollowVisual*, "Oculus.Interaction", "SnapInteractorFollowVisual");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.SnapInteractorFollowVisual
  // [TokenAttribute] Offset: FFFFFFFF
  class SnapInteractorFollowVisual : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private Oculus.Interaction.SnapInteractor _snapInteractor
    // Size: 0x8
    // Offset: 0x20
    ::Oculus::Interaction::SnapInteractor* snapInteractor;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::SnapInteractor*) == 0x8);
    // private System.Single _hoverOffset
    // Size: 0x4
    // Offset: 0x28
    float hoverOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: hoverOffset and: easeCurve
    char __padding1[0x4] = {};
    // private Oculus.Interaction.ProgressCurve _easeCurve
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Interaction::ProgressCurve* easeCurve;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::ProgressCurve*) == 0x8);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x40
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: started and: from
    char __padding4[0x3] = {};
    // private UnityEngine.Pose _from
    // Size: 0x1C
    // Offset: 0x44
    ::UnityEngine::Pose from;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // private UnityEngine.Pose _to
    // Size: 0x1C
    // Offset: 0x60
    ::UnityEngine::Pose to;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    public:
    // Get instance field reference: private Oculus.Interaction.SnapInteractor _snapInteractor
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::SnapInteractor*& dyn__snapInteractor();
    // Get instance field reference: private System.Single _hoverOffset
    [[deprecated("Use field access instead!")]] float& dyn__hoverOffset();
    // Get instance field reference: private Oculus.Interaction.ProgressCurve _easeCurve
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::ProgressCurve*& dyn__easeCurve();
    // Get instance field reference: private UnityEngine.Transform _transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__transform();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // Get instance field reference: private UnityEngine.Pose _from
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn__from();
    // Get instance field reference: private UnityEngine.Pose _to
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn__to();
    // public System.Single get_HoverOffset()
    // Offset: 0x47BC368
    float get_HoverOffset();
    // public System.Void set_HoverOffset(System.Single value)
    // Offset: 0x47BC370
    void set_HoverOffset(float value);
    // public Oculus.Interaction.ProgressCurve get_EaseCurve()
    // Offset: 0x47BC378
    ::Oculus::Interaction::ProgressCurve* get_EaseCurve();
    // public System.Void set_EaseCurve(Oculus.Interaction.ProgressCurve value)
    // Offset: 0x47BC380
    void set_EaseCurve(::Oculus::Interaction::ProgressCurve* value);
    // protected System.Void Start()
    // Offset: 0x47BC388
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x47BC49C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x47BC54C
    void OnDisable();
    // private System.Void HandleStateChanged(Oculus.Interaction.InteractorStateChangeArgs args)
    // Offset: 0x47BC5FC
    void HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs args);
    // protected UnityEngine.Pose ComputeTargetPose()
    // Offset: 0x47BC694
    ::UnityEngine::Pose ComputeTargetPose();
    // protected System.Void Update()
    // Offset: 0x47BC7D0
    void Update();
    // public System.Void InjectAllSnapInteractorFollowVisual(Oculus.Interaction.SnapInteractor snapInteractor)
    // Offset: 0x47BC894
    void InjectAllSnapInteractorFollowVisual(::Oculus::Interaction::SnapInteractor* snapInteractor);
    // public System.Void InjectOptionalTransform(UnityEngine.Transform transform)
    // Offset: 0x47BC89C
    void InjectOptionalTransform(::UnityEngine::Transform* transform);
    // public System.Void .ctor()
    // Offset: 0x47BC8A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SnapInteractorFollowVisual* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::SnapInteractorFollowVisual::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SnapInteractorFollowVisual*, creationType>()));
    }
  }; // Oculus.Interaction.SnapInteractorFollowVisual
  #pragma pack(pop)
  static check_size<sizeof(SnapInteractorFollowVisual), 96 + sizeof(::UnityEngine::Pose)> __Oculus_Interaction_SnapInteractorFollowVisualSizeCheck;
  static_assert(sizeof(SnapInteractorFollowVisual) == 0x7C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::SnapInteractorFollowVisual::get_HoverOffset
// Il2CppName: get_HoverOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::SnapInteractorFollowVisual::*)()>(&Oculus::Interaction::SnapInteractorFollowVisual::get_HoverOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::SnapInteractorFollowVisual*), "get_HoverOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::SnapInteractorFollowVisual::set_HoverOffset
// Il2CppName: set_HoverOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::SnapInteractorFollowVisual::*)(float)>(&Oculus::Interaction::SnapInteractorFollowVisual::set_HoverOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::SnapInteractorFollowVisual*), "set_HoverOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::SnapInteractorFollowVisual::get_EaseCurve
// Il2CppName: get_EaseCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::ProgressCurve* (Oculus::Interaction::SnapInteractorFollowVisual::*)()>(&Oculus::Interaction::SnapInteractorFollowVisual::get_EaseCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::SnapInteractorFollowVisual*), "get_EaseCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::SnapInteractorFollowVisual::set_EaseCurve
// Il2CppName: set_EaseCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::SnapInteractorFollowVisual::*)(::Oculus::Interaction::ProgressCurve*)>(&Oculus::Interaction::SnapInteractorFollowVisual::set_EaseCurve)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "ProgressCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::SnapInteractorFollowVisual*), "set_EaseCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::SnapInteractorFollowVisual::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::SnapInteractorFollowVisual::*)()>(&Oculus::Interaction::SnapInteractorFollowVisual::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::SnapInteractorFollowVisual*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::SnapInteractorFollowVisual::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::SnapInteractorFollowVisual::*)()>(&Oculus::Interaction::SnapInteractorFollowVisual::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::SnapInteractorFollowVisual*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::SnapInteractorFollowVisual::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::SnapInteractorFollowVisual::*)()>(&Oculus::Interaction::SnapInteractorFollowVisual::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::SnapInteractorFollowVisual*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::SnapInteractorFollowVisual::HandleStateChanged
// Il2CppName: HandleStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::SnapInteractorFollowVisual::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&Oculus::Interaction::SnapInteractorFollowVisual::HandleStateChanged)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "InteractorStateChangeArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::SnapInteractorFollowVisual*), "HandleStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::SnapInteractorFollowVisual::ComputeTargetPose
// Il2CppName: ComputeTargetPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (Oculus::Interaction::SnapInteractorFollowVisual::*)()>(&Oculus::Interaction::SnapInteractorFollowVisual::ComputeTargetPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::SnapInteractorFollowVisual*), "ComputeTargetPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::SnapInteractorFollowVisual::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::SnapInteractorFollowVisual::*)()>(&Oculus::Interaction::SnapInteractorFollowVisual::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::SnapInteractorFollowVisual*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::SnapInteractorFollowVisual::InjectAllSnapInteractorFollowVisual
// Il2CppName: InjectAllSnapInteractorFollowVisual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::SnapInteractorFollowVisual::*)(::Oculus::Interaction::SnapInteractor*)>(&Oculus::Interaction::SnapInteractorFollowVisual::InjectAllSnapInteractorFollowVisual)> {
  static const MethodInfo* get() {
    static auto* snapInteractor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "SnapInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::SnapInteractorFollowVisual*), "InjectAllSnapInteractorFollowVisual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{snapInteractor});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::SnapInteractorFollowVisual::InjectOptionalTransform
// Il2CppName: InjectOptionalTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::SnapInteractorFollowVisual::*)(::UnityEngine::Transform*)>(&Oculus::Interaction::SnapInteractorFollowVisual::InjectOptionalTransform)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::SnapInteractorFollowVisual*), "InjectOptionalTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::SnapInteractorFollowVisual::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
