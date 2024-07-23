// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.Input.IAxis1D
#include "Oculus/Interaction/Input/IAxis1D.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IActiveState
  class IActiveState;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: Axis1DSwitch
  class Axis1DSwitch;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Axis1DSwitch);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Axis1DSwitch*, "Oculus.Interaction", "Axis1DSwitch");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Axis1DSwitch
  // [TokenAttribute] Offset: FFFFFFFF
  class Axis1DSwitch : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::Input::IAxis1D*/ {
    public:
    public:
    // private UnityEngine.Object _activeState
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* activeState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.IActiveState ActiveState
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::IActiveState* ActiveState;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IActiveState*) == 0x8);
    // private UnityEngine.Object _axisWhenActive
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Object* axisWhenActive;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private UnityEngine.Object _axisWhenInactive
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Object* axisWhenInactive;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // protected Oculus.Interaction.Input.IAxis1D AxisWhenActive
    // Size: 0x8
    // Offset: 0x40
    ::Oculus::Interaction::Input::IAxis1D* AxisWhenActive;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IAxis1D*) == 0x8);
    // protected Oculus.Interaction.Input.IAxis1D AxisWhenInactive
    // Size: 0x8
    // Offset: 0x48
    ::Oculus::Interaction::Input::IAxis1D* AxisWhenInactive;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IAxis1D*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Input::IAxis1D
    operator ::Oculus::Interaction::Input::IAxis1D() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Input::IAxis1D*>(this);
    }
    // Get instance field reference: private UnityEngine.Object _activeState
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__activeState();
    // Get instance field reference: private Oculus.Interaction.IActiveState ActiveState
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IActiveState*& dyn_ActiveState();
    // Get instance field reference: private UnityEngine.Object _axisWhenActive
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__axisWhenActive();
    // Get instance field reference: private UnityEngine.Object _axisWhenInactive
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__axisWhenInactive();
    // Get instance field reference: protected Oculus.Interaction.Input.IAxis1D AxisWhenActive
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IAxis1D*& dyn_AxisWhenActive();
    // Get instance field reference: protected Oculus.Interaction.Input.IAxis1D AxisWhenInactive
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IAxis1D*& dyn_AxisWhenInactive();
    // protected Oculus.Interaction.Input.IAxis1D get_Current()
    // Offset: 0x47782B0
    ::Oculus::Interaction::Input::IAxis1D* get_Current();
    // protected System.Void Awake()
    // Offset: 0x4778368
    void Awake();
    // protected System.Void Start()
    // Offset: 0x477844C
    void Start();
    // public System.Single Value()
    // Offset: 0x4778450
    float Value();
    // public System.Void InjectAllAxis1DSwitch(Oculus.Interaction.IActiveState activeState, Oculus.Interaction.Input.IAxis1D axisWhenActive, Oculus.Interaction.Input.IAxis1D axisWhenInactive)
    // Offset: 0x47784F8
    void InjectAllAxis1DSwitch(::Oculus::Interaction::IActiveState* activeState, ::Oculus::Interaction::Input::IAxis1D* axisWhenActive, ::Oculus::Interaction::Input::IAxis1D* axisWhenInactive);
    // public System.Void InjectActiveState(Oculus.Interaction.IActiveState activeState)
    // Offset: 0x4778530
    void InjectActiveState(::Oculus::Interaction::IActiveState* activeState);
    // private System.Void InjectAxisWhenActive(Oculus.Interaction.Input.IAxis1D axisWhenActive)
    // Offset: 0x4778600
    void InjectAxisWhenActive(::Oculus::Interaction::Input::IAxis1D* axisWhenActive);
    // private System.Void InjectAxisWhenInactive(Oculus.Interaction.Input.IAxis1D axisWhenInactive)
    // Offset: 0x47786CC
    void InjectAxisWhenInactive(::Oculus::Interaction::Input::IAxis1D* axisWhenInactive);
    // public System.Void .ctor()
    // Offset: 0x4778798
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Axis1DSwitch* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Axis1DSwitch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Axis1DSwitch*, creationType>()));
    }
  }; // Oculus.Interaction.Axis1DSwitch
  #pragma pack(pop)
  static check_size<sizeof(Axis1DSwitch), 72 + sizeof(::Oculus::Interaction::Input::IAxis1D*)> __Oculus_Interaction_Axis1DSwitchSizeCheck;
  static_assert(sizeof(Axis1DSwitch) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DSwitch::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::IAxis1D* (Oculus::Interaction::Axis1DSwitch::*)()>(&Oculus::Interaction::Axis1DSwitch::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Axis1DSwitch*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DSwitch::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Axis1DSwitch::*)()>(&Oculus::Interaction::Axis1DSwitch::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Axis1DSwitch*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DSwitch::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Axis1DSwitch::*)()>(&Oculus::Interaction::Axis1DSwitch::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Axis1DSwitch*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DSwitch::Value
// Il2CppName: Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Axis1DSwitch::*)()>(&Oculus::Interaction::Axis1DSwitch::Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Axis1DSwitch*), "Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DSwitch::InjectAllAxis1DSwitch
// Il2CppName: InjectAllAxis1DSwitch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Axis1DSwitch::*)(::Oculus::Interaction::IActiveState*, ::Oculus::Interaction::Input::IAxis1D*, ::Oculus::Interaction::Input::IAxis1D*)>(&Oculus::Interaction::Axis1DSwitch::InjectAllAxis1DSwitch)> {
  static const MethodInfo* get() {
    static auto* activeState = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IActiveState")->byval_arg;
    static auto* axisWhenActive = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IAxis1D")->byval_arg;
    static auto* axisWhenInactive = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IAxis1D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Axis1DSwitch*), "InjectAllAxis1DSwitch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activeState, axisWhenActive, axisWhenInactive});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DSwitch::InjectActiveState
// Il2CppName: InjectActiveState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Axis1DSwitch::*)(::Oculus::Interaction::IActiveState*)>(&Oculus::Interaction::Axis1DSwitch::InjectActiveState)> {
  static const MethodInfo* get() {
    static auto* activeState = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IActiveState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Axis1DSwitch*), "InjectActiveState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activeState});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DSwitch::InjectAxisWhenActive
// Il2CppName: InjectAxisWhenActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Axis1DSwitch::*)(::Oculus::Interaction::Input::IAxis1D*)>(&Oculus::Interaction::Axis1DSwitch::InjectAxisWhenActive)> {
  static const MethodInfo* get() {
    static auto* axisWhenActive = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IAxis1D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Axis1DSwitch*), "InjectAxisWhenActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axisWhenActive});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DSwitch::InjectAxisWhenInactive
// Il2CppName: InjectAxisWhenInactive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Axis1DSwitch::*)(::Oculus::Interaction::Input::IAxis1D*)>(&Oculus::Interaction::Axis1DSwitch::InjectAxisWhenInactive)> {
  static const MethodInfo* get() {
    static auto* axisWhenInactive = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IAxis1D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Axis1DSwitch*), "InjectAxisWhenInactive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axisWhenInactive});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DSwitch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
