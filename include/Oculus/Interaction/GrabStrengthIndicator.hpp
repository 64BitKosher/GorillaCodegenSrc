// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: Oculus::Interaction::HandGrab
namespace Oculus::Interaction::HandGrab {
  // Forward declaring type: IHandGrabInteractor
  class IHandGrabInteractor;
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IInteractor
  class IInteractor;
  // Forward declaring type: MaterialPropertyBlockEditor
  class MaterialPropertyBlockEditor;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: GrabStrengthIndicator
  class GrabStrengthIndicator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::GrabStrengthIndicator);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::GrabStrengthIndicator*, "Oculus.Interaction", "GrabStrengthIndicator");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x95
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.GrabStrengthIndicator
  // [TokenAttribute] Offset: FFFFFFFF
  class GrabStrengthIndicator : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Object _handGrabInteractor
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* handGrabInteractor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.HandGrab.IHandGrabInteractor <HandGrab>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::HandGrab::IHandGrabInteractor* HandGrab;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::HandGrab::IHandGrabInteractor*) == 0x8);
    // private Oculus.Interaction.IInteractor <Interactor>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Interaction::IInteractor* Interactor;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IInteractor*) == 0x8);
    // private Oculus.Interaction.MaterialPropertyBlockEditor _handMaterialPropertyBlockEditor
    // Size: 0x8
    // Offset: 0x38
    ::Oculus::Interaction::MaterialPropertyBlockEditor* handMaterialPropertyBlockEditor;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::MaterialPropertyBlockEditor*) == 0x8);
    // private System.Single _glowLerpSpeed
    // Size: 0x4
    // Offset: 0x40
    float glowLerpSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _glowColorLerpSpeed
    // Size: 0x4
    // Offset: 0x44
    float glowColorLerpSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _fingerGlowColorWithInteractable
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Color fingerGlowColorWithInteractable;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _fingerGlowColorWithNoInteractable
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Color fingerGlowColorWithNoInteractable;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _fingerGlowColorHover
    // Size: 0x10
    // Offset: 0x68
    ::UnityEngine::Color fingerGlowColorHover;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private readonly System.Int32[] _handShaderGlowPropertyIds
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<int> handShaderGlowPropertyIds;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private readonly System.Int32 _fingerGlowColorPropertyId
    // Size: 0x4
    // Offset: 0x80
    int fingerGlowColorPropertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Color _currentGlowColor
    // Size: 0x10
    // Offset: 0x84
    ::UnityEngine::Color currentGlowColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x94
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Object _handGrabInteractor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__handGrabInteractor();
    // Get instance field reference: private Oculus.Interaction.HandGrab.IHandGrabInteractor <HandGrab>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::HandGrab::IHandGrabInteractor*& dyn_$HandGrab$k__BackingField();
    // Get instance field reference: private Oculus.Interaction.IInteractor <Interactor>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IInteractor*& dyn_$Interactor$k__BackingField();
    // Get instance field reference: private Oculus.Interaction.MaterialPropertyBlockEditor _handMaterialPropertyBlockEditor
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::MaterialPropertyBlockEditor*& dyn__handMaterialPropertyBlockEditor();
    // Get instance field reference: private System.Single _glowLerpSpeed
    [[deprecated("Use field access instead!")]] float& dyn__glowLerpSpeed();
    // Get instance field reference: private System.Single _glowColorLerpSpeed
    [[deprecated("Use field access instead!")]] float& dyn__glowColorLerpSpeed();
    // Get instance field reference: private UnityEngine.Color _fingerGlowColorWithInteractable
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__fingerGlowColorWithInteractable();
    // Get instance field reference: private UnityEngine.Color _fingerGlowColorWithNoInteractable
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__fingerGlowColorWithNoInteractable();
    // Get instance field reference: private UnityEngine.Color _fingerGlowColorHover
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__fingerGlowColorHover();
    // Get instance field reference: private readonly System.Int32[] _handShaderGlowPropertyIds
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__handShaderGlowPropertyIds();
    // Get instance field reference: private readonly System.Int32 _fingerGlowColorPropertyId
    [[deprecated("Use field access instead!")]] int& dyn__fingerGlowColorPropertyId();
    // Get instance field reference: private UnityEngine.Color _currentGlowColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__currentGlowColor();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // private Oculus.Interaction.HandGrab.IHandGrabInteractor get_HandGrab()
    // Offset: 0x47730E8
    ::Oculus::Interaction::HandGrab::IHandGrabInteractor* get_HandGrab();
    // private System.Void set_HandGrab(Oculus.Interaction.HandGrab.IHandGrabInteractor value)
    // Offset: 0x47730F0
    void set_HandGrab(::Oculus::Interaction::HandGrab::IHandGrabInteractor* value);
    // private Oculus.Interaction.IInteractor get_Interactor()
    // Offset: 0x47730F8
    ::Oculus::Interaction::IInteractor* get_Interactor();
    // private System.Void set_Interactor(Oculus.Interaction.IInteractor value)
    // Offset: 0x4773100
    void set_Interactor(::Oculus::Interaction::IInteractor* value);
    // public System.Single get_GlowLerpSpeed()
    // Offset: 0x4773108
    float get_GlowLerpSpeed();
    // public System.Void set_GlowLerpSpeed(System.Single value)
    // Offset: 0x4773110
    void set_GlowLerpSpeed(float value);
    // public System.Single get_GlowColorLerpSpeed()
    // Offset: 0x4773118
    float get_GlowColorLerpSpeed();
    // public System.Void set_GlowColorLerpSpeed(System.Single value)
    // Offset: 0x4773120
    void set_GlowColorLerpSpeed(float value);
    // public UnityEngine.Color get_FingerGlowColorWithInteractable()
    // Offset: 0x4773128
    ::UnityEngine::Color get_FingerGlowColorWithInteractable();
    // public System.Void set_FingerGlowColorWithInteractable(UnityEngine.Color value)
    // Offset: 0x4773134
    void set_FingerGlowColorWithInteractable(::UnityEngine::Color value);
    // public UnityEngine.Color get_FingerGlowColorWithNoInteractable()
    // Offset: 0x4773140
    ::UnityEngine::Color get_FingerGlowColorWithNoInteractable();
    // public System.Void set_FingerGlowColorWithNoInteractable(UnityEngine.Color value)
    // Offset: 0x477314C
    void set_FingerGlowColorWithNoInteractable(::UnityEngine::Color value);
    // public UnityEngine.Color get_FingerGlowColorHover()
    // Offset: 0x4773158
    ::UnityEngine::Color get_FingerGlowColorHover();
    // public System.Void set_FingerGlowColorHover(UnityEngine.Color value)
    // Offset: 0x4773164
    void set_FingerGlowColorHover(::UnityEngine::Color value);
    // private System.Void Awake()
    // Offset: 0x4773170
    void Awake();
    // protected System.Void Start()
    // Offset: 0x4773200
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x4773230
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x4773330
    void OnDisable();
    // private System.Void UpdateVisual()
    // Offset: 0x4773430
    void UpdateVisual();
    // private System.Void UpdateGlowValue(System.Int32 fingerIndex, System.Single glowValue)
    // Offset: 0x4773D24
    void UpdateGlowValue(int fingerIndex, float glowValue);
    // public System.Void InjectAllGrabStrengthIndicator(Oculus.Interaction.HandGrab.IHandGrabInteractor handGrabInteractor, Oculus.Interaction.MaterialPropertyBlockEditor handMaterialPropertyBlockEditor)
    // Offset: 0x4773E04
    void InjectAllGrabStrengthIndicator(::Oculus::Interaction::HandGrab::IHandGrabInteractor* handGrabInteractor, ::Oculus::Interaction::MaterialPropertyBlockEditor* handMaterialPropertyBlockEditor);
    // public System.Void InjectHandGrab(Oculus.Interaction.HandGrab.IHandGrabInteractor handGrab)
    // Offset: 0x4773E30
    void InjectHandGrab(::Oculus::Interaction::HandGrab::IHandGrabInteractor* handGrab);
    // public System.Void InjectHandMaterialPropertyBlockEditor(Oculus.Interaction.MaterialPropertyBlockEditor handMaterialPropertyBlockEditor)
    // Offset: 0x4773F30
    void InjectHandMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor* handMaterialPropertyBlockEditor);
    // public System.Void .ctor()
    // Offset: 0x4773F38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrabStrengthIndicator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::GrabStrengthIndicator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrabStrengthIndicator*, creationType>()));
    }
  }; // Oculus.Interaction.GrabStrengthIndicator
  #pragma pack(pop)
  static check_size<sizeof(GrabStrengthIndicator), 148 + sizeof(bool)> __Oculus_Interaction_GrabStrengthIndicatorSizeCheck;
  static_assert(sizeof(GrabStrengthIndicator) == 0x95);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::get_HandGrab
// Il2CppName: get_HandGrab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::HandGrab::IHandGrabInteractor* (Oculus::Interaction::GrabStrengthIndicator::*)()>(&Oculus::Interaction::GrabStrengthIndicator::get_HandGrab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "get_HandGrab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::set_HandGrab
// Il2CppName: set_HandGrab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabStrengthIndicator::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*)>(&Oculus::Interaction::GrabStrengthIndicator::set_HandGrab)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.HandGrab", "IHandGrabInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "set_HandGrab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::get_Interactor
// Il2CppName: get_Interactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::IInteractor* (Oculus::Interaction::GrabStrengthIndicator::*)()>(&Oculus::Interaction::GrabStrengthIndicator::get_Interactor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "get_Interactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::set_Interactor
// Il2CppName: set_Interactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabStrengthIndicator::*)(::Oculus::Interaction::IInteractor*)>(&Oculus::Interaction::GrabStrengthIndicator::set_Interactor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "set_Interactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::get_GlowLerpSpeed
// Il2CppName: get_GlowLerpSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::GrabStrengthIndicator::*)()>(&Oculus::Interaction::GrabStrengthIndicator::get_GlowLerpSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "get_GlowLerpSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::set_GlowLerpSpeed
// Il2CppName: set_GlowLerpSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabStrengthIndicator::*)(float)>(&Oculus::Interaction::GrabStrengthIndicator::set_GlowLerpSpeed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "set_GlowLerpSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::get_GlowColorLerpSpeed
// Il2CppName: get_GlowColorLerpSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::GrabStrengthIndicator::*)()>(&Oculus::Interaction::GrabStrengthIndicator::get_GlowColorLerpSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "get_GlowColorLerpSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::set_GlowColorLerpSpeed
// Il2CppName: set_GlowColorLerpSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabStrengthIndicator::*)(float)>(&Oculus::Interaction::GrabStrengthIndicator::set_GlowColorLerpSpeed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "set_GlowColorLerpSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::get_FingerGlowColorWithInteractable
// Il2CppName: get_FingerGlowColorWithInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Oculus::Interaction::GrabStrengthIndicator::*)()>(&Oculus::Interaction::GrabStrengthIndicator::get_FingerGlowColorWithInteractable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "get_FingerGlowColorWithInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::set_FingerGlowColorWithInteractable
// Il2CppName: set_FingerGlowColorWithInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabStrengthIndicator::*)(::UnityEngine::Color)>(&Oculus::Interaction::GrabStrengthIndicator::set_FingerGlowColorWithInteractable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "set_FingerGlowColorWithInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::get_FingerGlowColorWithNoInteractable
// Il2CppName: get_FingerGlowColorWithNoInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Oculus::Interaction::GrabStrengthIndicator::*)()>(&Oculus::Interaction::GrabStrengthIndicator::get_FingerGlowColorWithNoInteractable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "get_FingerGlowColorWithNoInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::set_FingerGlowColorWithNoInteractable
// Il2CppName: set_FingerGlowColorWithNoInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabStrengthIndicator::*)(::UnityEngine::Color)>(&Oculus::Interaction::GrabStrengthIndicator::set_FingerGlowColorWithNoInteractable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "set_FingerGlowColorWithNoInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::get_FingerGlowColorHover
// Il2CppName: get_FingerGlowColorHover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Oculus::Interaction::GrabStrengthIndicator::*)()>(&Oculus::Interaction::GrabStrengthIndicator::get_FingerGlowColorHover)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "get_FingerGlowColorHover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::set_FingerGlowColorHover
// Il2CppName: set_FingerGlowColorHover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabStrengthIndicator::*)(::UnityEngine::Color)>(&Oculus::Interaction::GrabStrengthIndicator::set_FingerGlowColorHover)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "set_FingerGlowColorHover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabStrengthIndicator::*)()>(&Oculus::Interaction::GrabStrengthIndicator::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabStrengthIndicator::*)()>(&Oculus::Interaction::GrabStrengthIndicator::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabStrengthIndicator::*)()>(&Oculus::Interaction::GrabStrengthIndicator::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabStrengthIndicator::*)()>(&Oculus::Interaction::GrabStrengthIndicator::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::UpdateVisual
// Il2CppName: UpdateVisual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabStrengthIndicator::*)()>(&Oculus::Interaction::GrabStrengthIndicator::UpdateVisual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "UpdateVisual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::UpdateGlowValue
// Il2CppName: UpdateGlowValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabStrengthIndicator::*)(int, float)>(&Oculus::Interaction::GrabStrengthIndicator::UpdateGlowValue)> {
  static const MethodInfo* get() {
    static auto* fingerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* glowValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "UpdateGlowValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fingerIndex, glowValue});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::InjectAllGrabStrengthIndicator
// Il2CppName: InjectAllGrabStrengthIndicator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabStrengthIndicator::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&Oculus::Interaction::GrabStrengthIndicator::InjectAllGrabStrengthIndicator)> {
  static const MethodInfo* get() {
    static auto* handGrabInteractor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.HandGrab", "IHandGrabInteractor")->byval_arg;
    static auto* handMaterialPropertyBlockEditor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "MaterialPropertyBlockEditor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "InjectAllGrabStrengthIndicator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handGrabInteractor, handMaterialPropertyBlockEditor});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::InjectHandGrab
// Il2CppName: InjectHandGrab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabStrengthIndicator::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*)>(&Oculus::Interaction::GrabStrengthIndicator::InjectHandGrab)> {
  static const MethodInfo* get() {
    static auto* handGrab = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.HandGrab", "IHandGrabInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "InjectHandGrab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handGrab});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::InjectHandMaterialPropertyBlockEditor
// Il2CppName: InjectHandMaterialPropertyBlockEditor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabStrengthIndicator::*)(::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&Oculus::Interaction::GrabStrengthIndicator::InjectHandMaterialPropertyBlockEditor)> {
  static const MethodInfo* get() {
    static auto* handMaterialPropertyBlockEditor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "MaterialPropertyBlockEditor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabStrengthIndicator*), "InjectHandMaterialPropertyBlockEditor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handMaterialPropertyBlockEditor});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabStrengthIndicator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!