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
// Forward declaring namespace: Oculus::Interaction::DistanceReticles
namespace Oculus::Interaction::DistanceReticles {
  // Forward declaring type: IReticleData
  class IReticleData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IDistanceInteractor
  class IDistanceInteractor;
  // Forward declaring type: InteractorStateChangeArgs
  struct InteractorStateChangeArgs;
  // Forward declaring type: IRelativeToRef
  class IRelativeToRef;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.DistanceReticles
namespace Oculus::Interaction::DistanceReticles {
  // Forward declaring type: DistantInteractionLineVisual
  class DistantInteractionLineVisual;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*, "Oculus.Interaction.DistanceReticles", "DistantInteractionLineVisual");
// Type namespace: Oculus.Interaction.DistanceReticles
namespace Oculus::Interaction::DistanceReticles {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual
  // [TokenAttribute] Offset: FFFFFFFF
  class DistantInteractionLineVisual : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle
    class DummyPointReticle;
    public:
    // private UnityEngine.Object _distanceInteractor
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* distanceInteractor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.IDistanceInteractor <DistanceInteractor>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::IDistanceInteractor* DistanceInteractor;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IDistanceInteractor*) == 0x8);
    // private System.Single _visualOffset
    // Size: 0x4
    // Offset: 0x30
    float visualOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: visualOffset and: linePoints
    char __padding2[0x4] = {};
    // private UnityEngine.Vector3[] _linePoints
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::Vector3> linePoints;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private System.Boolean _visibleDuringNormal
    // Size: 0x1
    // Offset: 0x40
    bool visibleDuringNormal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: visibleDuringNormal and: target
    char __padding4[0x7] = {};
    // private Oculus.Interaction.DistanceReticles.IReticleData _target
    // Size: 0x8
    // Offset: 0x48
    ::Oculus::Interaction::DistanceReticles::IReticleData* target;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::DistanceReticles::IReticleData*) == 0x8);
    // private System.Int32 _numLinePoints
    // Size: 0x4
    // Offset: 0x50
    int numLinePoints;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _targetlessLength
    // Size: 0x4
    // Offset: 0x54
    float targetlessLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x58
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _shouldDrawLine
    // Size: 0x1
    // Offset: 0x59
    bool shouldDrawLine;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: shouldDrawLine and: dummyTarget
    char __padding9[0x6] = {};
    // private Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle _dummyTarget
    // Size: 0x8
    // Offset: 0x60
    ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle* dummyTarget;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Object _distanceInteractor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__distanceInteractor();
    // Get instance field reference: private Oculus.Interaction.IDistanceInteractor <DistanceInteractor>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IDistanceInteractor*& dyn_$DistanceInteractor$k__BackingField();
    // Get instance field reference: private System.Single _visualOffset
    [[deprecated("Use field access instead!")]] float& dyn__visualOffset();
    // Get instance field reference: private UnityEngine.Vector3[] _linePoints
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__linePoints();
    // Get instance field reference: private System.Boolean _visibleDuringNormal
    [[deprecated("Use field access instead!")]] bool& dyn__visibleDuringNormal();
    // Get instance field reference: private Oculus.Interaction.DistanceReticles.IReticleData _target
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::DistanceReticles::IReticleData*& dyn__target();
    // Get instance field reference: private System.Int32 _numLinePoints
    [[deprecated("Use field access instead!")]] int& dyn__numLinePoints();
    // Get instance field reference: private System.Single _targetlessLength
    [[deprecated("Use field access instead!")]] float& dyn__targetlessLength();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // Get instance field reference: private System.Boolean _shouldDrawLine
    [[deprecated("Use field access instead!")]] bool& dyn__shouldDrawLine();
    // Get instance field reference: private Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle _dummyTarget
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle*& dyn__dummyTarget();
    // public Oculus.Interaction.IDistanceInteractor get_DistanceInteractor()
    // Offset: 0x483CEB4
    ::Oculus::Interaction::IDistanceInteractor* get_DistanceInteractor();
    // protected System.Void set_DistanceInteractor(Oculus.Interaction.IDistanceInteractor value)
    // Offset: 0x483CEBC
    void set_DistanceInteractor(::Oculus::Interaction::IDistanceInteractor* value);
    // public System.Single get_VisualOffset()
    // Offset: 0x483CEC4
    float get_VisualOffset();
    // public System.Void set_VisualOffset(System.Single value)
    // Offset: 0x483CECC
    void set_VisualOffset(float value);
    // protected System.Int32 get_NumLinePoints()
    // Offset: 0x483CED4
    int get_NumLinePoints();
    // protected System.Single get_TargetlessLength()
    // Offset: 0x483CEDC
    float get_TargetlessLength();
    // private System.Void Awake()
    // Offset: 0x483CEE4
    void Awake();
    // protected System.Void Start()
    // Offset: 0x483CC54
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x483CF3C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x483D100
    void OnDisable();
    // private System.Void HandleStateChanged(Oculus.Interaction.InteractorStateChangeArgs args)
    // Offset: 0x483D2C4
    void HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs args);
    // private System.Void HandlePostProcessed()
    // Offset: 0x483D3F8
    void HandlePostProcessed();
    // protected System.Void InteractableSet(Oculus.Interaction.IRelativeToRef interactable)
    // Offset: 0x483D758
    void InteractableSet(::Oculus::Interaction::IRelativeToRef* interactable);
    // protected System.Void InteractableUnset()
    // Offset: 0x483D8FC
    void InteractableUnset();
    // private System.Void UpdateLine()
    // Offset: 0x483D410
    void UpdateLine();
    // protected System.Void RenderLine(UnityEngine.Vector3[] linePoints)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RenderLine(::ArrayW<::UnityEngine::Vector3> linePoints);
    // protected System.Void HideLine()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HideLine();
    // protected UnityEngine.Vector3 TargetHit(UnityEngine.Vector3 hitPoint)
    // Offset: 0x483D908
    ::UnityEngine::Vector3 TargetHit(::UnityEngine::Vector3 hitPoint);
    // static protected UnityEngine.Vector3 EvaluateBezier(UnityEngine.Vector3 start, UnityEngine.Vector3 middle, UnityEngine.Vector3 end, System.Single t)
    // Offset: 0x483DB08
    static ::UnityEngine::Vector3 EvaluateBezier(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 middle, ::UnityEngine::Vector3 end, float t);
    // public System.Void InjectAllDistantInteractionLineVisual(Oculus.Interaction.IDistanceInteractor interactor)
    // Offset: 0x483DB7C
    void InjectAllDistantInteractionLineVisual(::Oculus::Interaction::IDistanceInteractor* interactor);
    // public System.Void InjectDistanceInteractor(Oculus.Interaction.IDistanceInteractor interactor)
    // Offset: 0x483CD54
    void InjectDistanceInteractor(::Oculus::Interaction::IDistanceInteractor* interactor);
    // protected System.Void .ctor()
    // Offset: 0x483CE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DistantInteractionLineVisual* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DistantInteractionLineVisual*, creationType>()));
    }
  }; // Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual
  #pragma pack(pop)
  static check_size<sizeof(DistantInteractionLineVisual), 96 + sizeof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DummyPointReticle*)> __Oculus_Interaction_DistanceReticles_DistantInteractionLineVisualSizeCheck;
  static_assert(sizeof(DistantInteractionLineVisual) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::get_DistanceInteractor
// Il2CppName: get_DistanceInteractor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::IDistanceInteractor* (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::get_DistanceInteractor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "get_DistanceInteractor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::set_DistanceInteractor
// Il2CppName: set_DistanceInteractor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)(::Oculus::Interaction::IDistanceInteractor*)>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::set_DistanceInteractor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IDistanceInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "set_DistanceInteractor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::get_VisualOffset
// Il2CppName: get_VisualOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::get_VisualOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "get_VisualOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::set_VisualOffset
// Il2CppName: set_VisualOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)(float)>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::set_VisualOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "set_VisualOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::get_NumLinePoints
// Il2CppName: get_NumLinePoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::get_NumLinePoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "get_NumLinePoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::get_TargetlessLength
// Il2CppName: get_TargetlessLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::get_TargetlessLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "get_TargetlessLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::HandleStateChanged
// Il2CppName: HandleStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::HandleStateChanged)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "InteractorStateChangeArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "HandleStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::HandlePostProcessed
// Il2CppName: HandlePostProcessed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::HandlePostProcessed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "HandlePostProcessed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::InteractableSet
// Il2CppName: InteractableSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)(::Oculus::Interaction::IRelativeToRef*)>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::InteractableSet)> {
  static const MethodInfo* get() {
    static auto* interactable = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IRelativeToRef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "InteractableSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactable});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::InteractableUnset
// Il2CppName: InteractableUnset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::InteractableUnset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "InteractableUnset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::UpdateLine
// Il2CppName: UpdateLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::UpdateLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "UpdateLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::RenderLine
// Il2CppName: RenderLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)(::ArrayW<::UnityEngine::Vector3>)>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::RenderLine)> {
  static const MethodInfo* get() {
    static auto* linePoints = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "RenderLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{linePoints});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::HideLine
// Il2CppName: HideLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::HideLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "HideLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::TargetHit
// Il2CppName: TargetHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)(::UnityEngine::Vector3)>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::TargetHit)> {
  static const MethodInfo* get() {
    static auto* hitPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "TargetHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hitPoint});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::EvaluateBezier
// Il2CppName: EvaluateBezier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::EvaluateBezier)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* middle = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "EvaluateBezier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, middle, end, t});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::InjectAllDistantInteractionLineVisual
// Il2CppName: InjectAllDistantInteractionLineVisual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)(::Oculus::Interaction::IDistanceInteractor*)>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::InjectAllDistantInteractionLineVisual)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IDistanceInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "InjectAllDistantInteractionLineVisual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::InjectDistanceInteractor
// Il2CppName: InjectDistanceInteractor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)(::Oculus::Interaction::IDistanceInteractor*)>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::InjectDistanceInteractor)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IDistanceInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*), "InjectDistanceInteractor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
