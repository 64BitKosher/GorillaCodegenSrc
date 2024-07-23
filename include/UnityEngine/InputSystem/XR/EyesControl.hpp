// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputControl`1
#include "UnityEngine/InputSystem/InputControl_1.hpp"
// Including type: UnityEngine.InputSystem.XR.Eyes
#include "UnityEngine/InputSystem/XR/Eyes.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: Vector3Control
  class Vector3Control;
  // Forward declaring type: QuaternionControl
  class QuaternionControl;
  // Forward declaring type: AxisControl
  class AxisControl;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // Forward declaring type: EyesControl
  class EyesControl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::XR::EyesControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::EyesControl*, "UnityEngine.InputSystem.XR", "EyesControl");
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.XR.EyesControl
  // [TokenAttribute] Offset: FFFFFFFF
  class EyesControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::XR::Eyes> {
    public:
    public:
    // private UnityEngine.InputSystem.Controls.Vector3Control <leftEyePosition>k__BackingField
    // Size: 0x8
    // Offset: 0x198
    ::UnityEngine::InputSystem::Controls::Vector3Control* leftEyePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector3Control*) == 0x8);
    // private UnityEngine.InputSystem.Controls.QuaternionControl <leftEyeRotation>k__BackingField
    // Size: 0x8
    // Offset: 0x1A0
    ::UnityEngine::InputSystem::Controls::QuaternionControl* leftEyeRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::QuaternionControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.Vector3Control <rightEyePosition>k__BackingField
    // Size: 0x8
    // Offset: 0x1A8
    ::UnityEngine::InputSystem::Controls::Vector3Control* rightEyePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector3Control*) == 0x8);
    // private UnityEngine.InputSystem.Controls.QuaternionControl <rightEyeRotation>k__BackingField
    // Size: 0x8
    // Offset: 0x1B0
    ::UnityEngine::InputSystem::Controls::QuaternionControl* rightEyeRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::QuaternionControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.Vector3Control <fixationPoint>k__BackingField
    // Size: 0x8
    // Offset: 0x1B8
    ::UnityEngine::InputSystem::Controls::Vector3Control* fixationPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector3Control*) == 0x8);
    // private UnityEngine.InputSystem.Controls.AxisControl <leftEyeOpenAmount>k__BackingField
    // Size: 0x8
    // Offset: 0x1C0
    ::UnityEngine::InputSystem::Controls::AxisControl* leftEyeOpenAmount;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.AxisControl <rightEyeOpenAmount>k__BackingField
    // Size: 0x8
    // Offset: 0x1C8
    ::UnityEngine::InputSystem::Controls::AxisControl* rightEyeOpenAmount;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector3Control <leftEyePosition>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector3Control*& dyn_$leftEyePosition$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.QuaternionControl <leftEyeRotation>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::QuaternionControl*& dyn_$leftEyeRotation$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector3Control <rightEyePosition>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector3Control*& dyn_$rightEyePosition$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.QuaternionControl <rightEyeRotation>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::QuaternionControl*& dyn_$rightEyeRotation$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector3Control <fixationPoint>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector3Control*& dyn_$fixationPoint$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.AxisControl <leftEyeOpenAmount>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::AxisControl*& dyn_$leftEyeOpenAmount$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.AxisControl <rightEyeOpenAmount>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::AxisControl*& dyn_$rightEyeOpenAmount$k__BackingField();
    // public UnityEngine.InputSystem.Controls.Vector3Control get_leftEyePosition()
    // Offset: 0x5129DE0
    ::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyePosition();
    // private System.Void set_leftEyePosition(UnityEngine.InputSystem.Controls.Vector3Control value)
    // Offset: 0x5129DE8
    void set_leftEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);
    // public UnityEngine.InputSystem.Controls.QuaternionControl get_leftEyeRotation()
    // Offset: 0x5129DF8
    ::UnityEngine::InputSystem::Controls::QuaternionControl* get_leftEyeRotation();
    // private System.Void set_leftEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl value)
    // Offset: 0x5129E00
    void set_leftEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);
    // public UnityEngine.InputSystem.Controls.Vector3Control get_rightEyePosition()
    // Offset: 0x5129E10
    ::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyePosition();
    // private System.Void set_rightEyePosition(UnityEngine.InputSystem.Controls.Vector3Control value)
    // Offset: 0x5129E18
    void set_rightEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);
    // public UnityEngine.InputSystem.Controls.QuaternionControl get_rightEyeRotation()
    // Offset: 0x5129E28
    ::UnityEngine::InputSystem::Controls::QuaternionControl* get_rightEyeRotation();
    // private System.Void set_rightEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl value)
    // Offset: 0x5129E30
    void set_rightEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);
    // public UnityEngine.InputSystem.Controls.Vector3Control get_fixationPoint()
    // Offset: 0x5129E40
    ::UnityEngine::InputSystem::Controls::Vector3Control* get_fixationPoint();
    // private System.Void set_fixationPoint(UnityEngine.InputSystem.Controls.Vector3Control value)
    // Offset: 0x5129E48
    void set_fixationPoint(::UnityEngine::InputSystem::Controls::Vector3Control* value);
    // public UnityEngine.InputSystem.Controls.AxisControl get_leftEyeOpenAmount()
    // Offset: 0x5129E58
    ::UnityEngine::InputSystem::Controls::AxisControl* get_leftEyeOpenAmount();
    // private System.Void set_leftEyeOpenAmount(UnityEngine.InputSystem.Controls.AxisControl value)
    // Offset: 0x5129E60
    void set_leftEyeOpenAmount(::UnityEngine::InputSystem::Controls::AxisControl* value);
    // public UnityEngine.InputSystem.Controls.AxisControl get_rightEyeOpenAmount()
    // Offset: 0x5129E70
    ::UnityEngine::InputSystem::Controls::AxisControl* get_rightEyeOpenAmount();
    // private System.Void set_rightEyeOpenAmount(UnityEngine.InputSystem.Controls.AxisControl value)
    // Offset: 0x5129E78
    void set_rightEyeOpenAmount(::UnityEngine::InputSystem::Controls::AxisControl* value);
    // public UnityEngine.InputSystem.XR.Eyes ReadUnprocessedValueFromState(System.Void* statePtr)
    // Offset: 0x512A098
    ::UnityEngine::InputSystem::XR::Eyes ReadUnprocessedValueFromState(void* statePtr);
    // public System.Void WriteValueIntoState(UnityEngine.InputSystem.XR.Eyes value, System.Void* statePtr)
    // Offset: 0x512A264
    void WriteValueIntoState(::UnityEngine::InputSystem::XR::Eyes value, void* statePtr);
    // protected override System.Void FinishSetup()
    // Offset: 0x5129E88
    // Implemented from: UnityEngine.InputSystem.InputControl`1
    // Base method: System.Void InputControl_1::FinishSetup()
    void FinishSetup();
    // public System.Void .ctor()
    // Offset: 0x512A378
    // Implemented from: UnityEngine.InputSystem.InputControl`1
    // Base method: System.Void InputControl_1::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EyesControl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::XR::EyesControl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EyesControl*, creationType>()));
    }
  }; // UnityEngine.InputSystem.XR.EyesControl
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::get_leftEyePosition
// Il2CppName: get_leftEyePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (UnityEngine::InputSystem::XR::EyesControl::*)()>(&UnityEngine::InputSystem::XR::EyesControl::get_leftEyePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::EyesControl*), "get_leftEyePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::set_leftEyePosition
// Il2CppName: set_leftEyePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::EyesControl::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(&UnityEngine::InputSystem::XR::EyesControl::set_leftEyePosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector3Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::EyesControl*), "set_leftEyePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::get_leftEyeRotation
// Il2CppName: get_leftEyeRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (UnityEngine::InputSystem::XR::EyesControl::*)()>(&UnityEngine::InputSystem::XR::EyesControl::get_leftEyeRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::EyesControl*), "get_leftEyeRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::set_leftEyeRotation
// Il2CppName: set_leftEyeRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::EyesControl::*)(::UnityEngine::InputSystem::Controls::QuaternionControl*)>(&UnityEngine::InputSystem::XR::EyesControl::set_leftEyeRotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "QuaternionControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::EyesControl*), "set_leftEyeRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::get_rightEyePosition
// Il2CppName: get_rightEyePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (UnityEngine::InputSystem::XR::EyesControl::*)()>(&UnityEngine::InputSystem::XR::EyesControl::get_rightEyePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::EyesControl*), "get_rightEyePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::set_rightEyePosition
// Il2CppName: set_rightEyePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::EyesControl::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(&UnityEngine::InputSystem::XR::EyesControl::set_rightEyePosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector3Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::EyesControl*), "set_rightEyePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::get_rightEyeRotation
// Il2CppName: get_rightEyeRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (UnityEngine::InputSystem::XR::EyesControl::*)()>(&UnityEngine::InputSystem::XR::EyesControl::get_rightEyeRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::EyesControl*), "get_rightEyeRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::set_rightEyeRotation
// Il2CppName: set_rightEyeRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::EyesControl::*)(::UnityEngine::InputSystem::Controls::QuaternionControl*)>(&UnityEngine::InputSystem::XR::EyesControl::set_rightEyeRotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "QuaternionControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::EyesControl*), "set_rightEyeRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::get_fixationPoint
// Il2CppName: get_fixationPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (UnityEngine::InputSystem::XR::EyesControl::*)()>(&UnityEngine::InputSystem::XR::EyesControl::get_fixationPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::EyesControl*), "get_fixationPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::set_fixationPoint
// Il2CppName: set_fixationPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::EyesControl::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(&UnityEngine::InputSystem::XR::EyesControl::set_fixationPoint)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector3Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::EyesControl*), "set_fixationPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::get_leftEyeOpenAmount
// Il2CppName: get_leftEyeOpenAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (UnityEngine::InputSystem::XR::EyesControl::*)()>(&UnityEngine::InputSystem::XR::EyesControl::get_leftEyeOpenAmount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::EyesControl*), "get_leftEyeOpenAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::set_leftEyeOpenAmount
// Il2CppName: set_leftEyeOpenAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::EyesControl::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&UnityEngine::InputSystem::XR::EyesControl::set_leftEyeOpenAmount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "AxisControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::EyesControl*), "set_leftEyeOpenAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::get_rightEyeOpenAmount
// Il2CppName: get_rightEyeOpenAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (UnityEngine::InputSystem::XR::EyesControl::*)()>(&UnityEngine::InputSystem::XR::EyesControl::get_rightEyeOpenAmount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::EyesControl*), "get_rightEyeOpenAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::set_rightEyeOpenAmount
// Il2CppName: set_rightEyeOpenAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::EyesControl::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&UnityEngine::InputSystem::XR::EyesControl::set_rightEyeOpenAmount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "AxisControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::EyesControl*), "set_rightEyeOpenAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::ReadUnprocessedValueFromState
// Il2CppName: ReadUnprocessedValueFromState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::Eyes (UnityEngine::InputSystem::XR::EyesControl::*)(void*)>(&UnityEngine::InputSystem::XR::EyesControl::ReadUnprocessedValueFromState)> {
  static const MethodInfo* get() {
    static auto* statePtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::EyesControl*), "ReadUnprocessedValueFromState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{statePtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::WriteValueIntoState
// Il2CppName: WriteValueIntoState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::EyesControl::*)(::UnityEngine::InputSystem::XR::Eyes, void*)>(&UnityEngine::InputSystem::XR::EyesControl::WriteValueIntoState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.XR", "Eyes")->byval_arg;
    static auto* statePtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::EyesControl*), "WriteValueIntoState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, statePtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::EyesControl::*)()>(&UnityEngine::InputSystem::XR::EyesControl::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::EyesControl*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::EyesControl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!