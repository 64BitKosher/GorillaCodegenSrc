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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IActiveState
  class IActiveState;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection.Debug
namespace Oculus::Interaction::PoseDetection::Debug {
  // Forward declaring type: ActiveStateDebugVisual
  class ActiveStateDebugVisual;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*, "Oculus.Interaction.PoseDetection.Debug", "ActiveStateDebugVisual");
// Type namespace: Oculus.Interaction.PoseDetection.Debug
namespace Oculus::Interaction::PoseDetection::Debug {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.Debug.ActiveStateDebugVisual
  // [TokenAttribute] Offset: FFFFFFFF
  class ActiveStateDebugVisual : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Object _activeState
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* activeState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.IActiveState <ActiveState>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::IActiveState* ActiveState;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IActiveState*) == 0x8);
    // private UnityEngine.Renderer _target
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Renderer* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.Color _normalColor
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color normalColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _activeColor
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Color activeColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Material _material
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private System.Boolean _lastActiveValue
    // Size: 0x1
    // Offset: 0x60
    bool lastActiveValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Object _activeState
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__activeState();
    // Get instance field reference: private Oculus.Interaction.IActiveState <ActiveState>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IActiveState*& dyn_$ActiveState$k__BackingField();
    // Get instance field reference: private UnityEngine.Renderer _target
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn__target();
    // Get instance field reference: private UnityEngine.Color _normalColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__normalColor();
    // Get instance field reference: private UnityEngine.Color _activeColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__activeColor();
    // Get instance field reference: private UnityEngine.Material _material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__material();
    // Get instance field reference: private System.Boolean _lastActiveValue
    [[deprecated("Use field access instead!")]] bool& dyn__lastActiveValue();
    // private Oculus.Interaction.IActiveState get_ActiveState()
    // Offset: 0x47F7A04
    ::Oculus::Interaction::IActiveState* get_ActiveState();
    // private System.Void set_ActiveState(Oculus.Interaction.IActiveState value)
    // Offset: 0x47F7A0C
    void set_ActiveState(::Oculus::Interaction::IActiveState* value);
    // protected System.Void Awake()
    // Offset: 0x47F7A14
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x47F7B28
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x47F7B84
    void Update();
    // private System.Void SetMaterialColor(UnityEngine.Color activeColor)
    // Offset: 0x47F7ADC
    void SetMaterialColor(::UnityEngine::Color activeColor);
    // public System.Void .ctor()
    // Offset: 0x47F7C7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActiveStateDebugVisual* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActiveStateDebugVisual*, creationType>()));
    }
  }; // Oculus.Interaction.PoseDetection.Debug.ActiveStateDebugVisual
  #pragma pack(pop)
  static check_size<sizeof(ActiveStateDebugVisual), 96 + sizeof(bool)> __Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugVisualSizeCheck;
  static_assert(sizeof(ActiveStateDebugVisual) == 0x61);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::get_ActiveState
// Il2CppName: get_ActiveState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::IActiveState* (Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::*)()>(&Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::get_ActiveState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*), "get_ActiveState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::set_ActiveState
// Il2CppName: set_ActiveState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::*)(::Oculus::Interaction::IActiveState*)>(&Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::set_ActiveState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IActiveState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*), "set_ActiveState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::*)()>(&Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::*)()>(&Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::*)()>(&Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::SetMaterialColor
// Il2CppName: SetMaterialColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::*)(::UnityEngine::Color)>(&Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::SetMaterialColor)> {
  static const MethodInfo* get() {
    static auto* activeColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*), "SetMaterialColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activeColor});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
