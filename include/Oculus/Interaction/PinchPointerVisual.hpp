// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
  // Forward declaring type: SkinnedMeshRenderer
  class SkinnedMeshRenderer;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IInteractor
  class IInteractor;
  // Forward declaring type: InteractorStateChangeArgs
  struct InteractorStateChangeArgs;
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IAxis1D
  class IAxis1D;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: PinchPointerVisual
  class PinchPointerVisual;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PinchPointerVisual);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PinchPointerVisual*, "Oculus.Interaction", "PinchPointerVisual");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x79
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PinchPointerVisual
  // [TokenAttribute] Offset: FFFFFFFF
  class PinchPointerVisual : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Object _interactor
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* interactor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.IInteractor Interactor
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::IInteractor* Interactor;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IInteractor*) == 0x8);
    // private UnityEngine.SkinnedMeshRenderer _skinnedMeshRenderer
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::SkinnedMeshRenderer* skinnedMeshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::SkinnedMeshRenderer*) == 0x8);
    // private UnityEngine.Vector3 _localOffset
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 localOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: localOffset and: remapCurve
    char __padding3[0x4] = {};
    // private UnityEngine.AnimationCurve _remapCurve
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::AnimationCurve* remapCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.Vector2 _alphaRange
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Vector2 alphaRange;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Color _tint
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Color tint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Object _progress
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Object* progress;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Input.IAxis1D Progress
    // Size: 0x8
    // Offset: 0x70
    ::Oculus::Interaction::Input::IAxis1D* Progress;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IAxis1D*) == 0x8);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x78
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Object _interactor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__interactor();
    // Get instance field reference: private Oculus.Interaction.IInteractor Interactor
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IInteractor*& dyn_Interactor();
    // Get instance field reference: private UnityEngine.SkinnedMeshRenderer _skinnedMeshRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::SkinnedMeshRenderer*& dyn__skinnedMeshRenderer();
    // Get instance field reference: private UnityEngine.Vector3 _localOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__localOffset();
    // Get instance field reference: private UnityEngine.AnimationCurve _remapCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__remapCurve();
    // Get instance field reference: private UnityEngine.Vector2 _alphaRange
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__alphaRange();
    // Get instance field reference: private UnityEngine.Color _tint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__tint();
    // Get instance field reference: private UnityEngine.Object _progress
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__progress();
    // Get instance field reference: private Oculus.Interaction.Input.IAxis1D Progress
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IAxis1D*& dyn_Progress();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // public UnityEngine.Vector3 get_LocalOffset()
    // Offset: 0x47AC590
    ::UnityEngine::Vector3 get_LocalOffset();
    // public System.Void set_LocalOffset(UnityEngine.Vector3 value)
    // Offset: 0x47AC59C
    void set_LocalOffset(::UnityEngine::Vector3 value);
    // public UnityEngine.AnimationCurve get_RemapCurve()
    // Offset: 0x47AC5A8
    ::UnityEngine::AnimationCurve* get_RemapCurve();
    // public System.Void set_RemapCurve(UnityEngine.AnimationCurve value)
    // Offset: 0x47AC5B0
    void set_RemapCurve(::UnityEngine::AnimationCurve* value);
    // public UnityEngine.Vector2 get_AlphaRange()
    // Offset: 0x47AC5B8
    ::UnityEngine::Vector2 get_AlphaRange();
    // public System.Void set_AlphaRange(UnityEngine.Vector2 value)
    // Offset: 0x47AC5C0
    void set_AlphaRange(::UnityEngine::Vector2 value);
    // public UnityEngine.Color get_Tint()
    // Offset: 0x47AC5C8
    ::UnityEngine::Color get_Tint();
    // public System.Void set_Tint(UnityEngine.Color value)
    // Offset: 0x47AC5D4
    void set_Tint(::UnityEngine::Color value);
    // protected System.Void Awake()
    // Offset: 0x47AC5E0
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47AC694
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x47AC6CC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x47AC890
    void OnDisable();
    // public System.Void SetPositionAndRotation(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x47ACA54
    void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);
    // private System.Void HandleStateChanged(Oculus.Interaction.InteractorStateChangeArgs stateArgs)
    // Offset: 0x47ACB0C
    void HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs stateArgs);
    // private System.Void HandlePostprocessed()
    // Offset: 0x47ACB34
    void HandlePostprocessed();
    // private System.Void UpdateColor(System.Boolean highlight, System.Single mappedPinchStrength)
    // Offset: 0x47ACCBC
    void UpdateColor(bool highlight, float mappedPinchStrength);
    // public System.Void InjectAllPinchPointerVisual(Oculus.Interaction.IInteractor interactor, UnityEngine.SkinnedMeshRenderer skinnedMeshRenderer)
    // Offset: 0x47ACD44
    void InjectAllPinchPointerVisual(::Oculus::Interaction::IInteractor* interactor, ::UnityEngine::SkinnedMeshRenderer* skinnedMeshRenderer);
    // public System.Void InjectInteractor(Oculus.Interaction.IInteractor interactor)
    // Offset: 0x47ACD70
    void InjectInteractor(::Oculus::Interaction::IInteractor* interactor);
    // public System.Void InjectSkinnedMeshRenderer(UnityEngine.SkinnedMeshRenderer skinnedMeshRenderer)
    // Offset: 0x47ACE3C
    void InjectSkinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer* skinnedMeshRenderer);
    // public System.Void .ctor()
    // Offset: 0x47ACE44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PinchPointerVisual* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PinchPointerVisual::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PinchPointerVisual*, creationType>()));
    }
  }; // Oculus.Interaction.PinchPointerVisual
  #pragma pack(pop)
  static check_size<sizeof(PinchPointerVisual), 120 + sizeof(bool)> __Oculus_Interaction_PinchPointerVisualSizeCheck;
  static_assert(sizeof(PinchPointerVisual) == 0x79);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::get_LocalOffset
// Il2CppName: get_LocalOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::PinchPointerVisual::*)()>(&Oculus::Interaction::PinchPointerVisual::get_LocalOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "get_LocalOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::set_LocalOffset
// Il2CppName: set_LocalOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PinchPointerVisual::*)(::UnityEngine::Vector3)>(&Oculus::Interaction::PinchPointerVisual::set_LocalOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "set_LocalOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::get_RemapCurve
// Il2CppName: get_RemapCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (Oculus::Interaction::PinchPointerVisual::*)()>(&Oculus::Interaction::PinchPointerVisual::get_RemapCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "get_RemapCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::set_RemapCurve
// Il2CppName: set_RemapCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PinchPointerVisual::*)(::UnityEngine::AnimationCurve*)>(&Oculus::Interaction::PinchPointerVisual::set_RemapCurve)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "set_RemapCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::get_AlphaRange
// Il2CppName: get_AlphaRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (Oculus::Interaction::PinchPointerVisual::*)()>(&Oculus::Interaction::PinchPointerVisual::get_AlphaRange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "get_AlphaRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::set_AlphaRange
// Il2CppName: set_AlphaRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PinchPointerVisual::*)(::UnityEngine::Vector2)>(&Oculus::Interaction::PinchPointerVisual::set_AlphaRange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "set_AlphaRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::get_Tint
// Il2CppName: get_Tint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Oculus::Interaction::PinchPointerVisual::*)()>(&Oculus::Interaction::PinchPointerVisual::get_Tint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "get_Tint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::set_Tint
// Il2CppName: set_Tint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PinchPointerVisual::*)(::UnityEngine::Color)>(&Oculus::Interaction::PinchPointerVisual::set_Tint)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "set_Tint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PinchPointerVisual::*)()>(&Oculus::Interaction::PinchPointerVisual::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PinchPointerVisual::*)()>(&Oculus::Interaction::PinchPointerVisual::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PinchPointerVisual::*)()>(&Oculus::Interaction::PinchPointerVisual::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PinchPointerVisual::*)()>(&Oculus::Interaction::PinchPointerVisual::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::SetPositionAndRotation
// Il2CppName: SetPositionAndRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PinchPointerVisual::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&Oculus::Interaction::PinchPointerVisual::SetPositionAndRotation)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "SetPositionAndRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, rotation});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::HandleStateChanged
// Il2CppName: HandleStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PinchPointerVisual::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&Oculus::Interaction::PinchPointerVisual::HandleStateChanged)> {
  static const MethodInfo* get() {
    static auto* stateArgs = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "InteractorStateChangeArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "HandleStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateArgs});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::HandlePostprocessed
// Il2CppName: HandlePostprocessed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PinchPointerVisual::*)()>(&Oculus::Interaction::PinchPointerVisual::HandlePostprocessed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "HandlePostprocessed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::UpdateColor
// Il2CppName: UpdateColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PinchPointerVisual::*)(bool, float)>(&Oculus::Interaction::PinchPointerVisual::UpdateColor)> {
  static const MethodInfo* get() {
    static auto* highlight = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* mappedPinchStrength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "UpdateColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{highlight, mappedPinchStrength});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::InjectAllPinchPointerVisual
// Il2CppName: InjectAllPinchPointerVisual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PinchPointerVisual::*)(::Oculus::Interaction::IInteractor*, ::UnityEngine::SkinnedMeshRenderer*)>(&Oculus::Interaction::PinchPointerVisual::InjectAllPinchPointerVisual)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IInteractor")->byval_arg;
    static auto* skinnedMeshRenderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "SkinnedMeshRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "InjectAllPinchPointerVisual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor, skinnedMeshRenderer});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::InjectInteractor
// Il2CppName: InjectInteractor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PinchPointerVisual::*)(::Oculus::Interaction::IInteractor*)>(&Oculus::Interaction::PinchPointerVisual::InjectInteractor)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "InjectInteractor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::InjectSkinnedMeshRenderer
// Il2CppName: InjectSkinnedMeshRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PinchPointerVisual::*)(::UnityEngine::SkinnedMeshRenderer*)>(&Oculus::Interaction::PinchPointerVisual::InjectSkinnedMeshRenderer)> {
  static const MethodInfo* get() {
    static auto* skinnedMeshRenderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "SkinnedMeshRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PinchPointerVisual*), "InjectSkinnedMeshRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skinnedMeshRenderer});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PinchPointerVisual::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
