// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputControl`1
#include "UnityEngine/InputSystem/InputControl_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: AxisControl
  class AxisControl;
}
// Forward declaring namespace: UnityEngine::InputSystem::Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Skipping declaration: FourCC because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: Vector2Control
  class Vector2Control;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::Vector2Control);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::Vector2Control*, "UnityEngine.InputSystem.Controls", "Vector2Control");
// Type namespace: UnityEngine.InputSystem.Controls
namespace UnityEngine::InputSystem::Controls {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.Controls.Vector2Control
  // [TokenAttribute] Offset: FFFFFFFF
  class Vector2Control : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2> {
    public:
    public:
    // private UnityEngine.InputSystem.Controls.AxisControl <x>k__BackingField
    // Size: 0x8
    // Offset: 0x110
    ::UnityEngine::InputSystem::Controls::AxisControl* x;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.AxisControl <y>k__BackingField
    // Size: 0x8
    // Offset: 0x118
    ::UnityEngine::InputSystem::Controls::AxisControl* y;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.InputSystem.Controls.AxisControl <x>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::AxisControl*& dyn_$x$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.AxisControl <y>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::AxisControl*& dyn_$y$k__BackingField();
    // public UnityEngine.InputSystem.Controls.AxisControl get_x()
    // Offset: 0x516E788
    ::UnityEngine::InputSystem::Controls::AxisControl* get_x();
    // public System.Void set_x(UnityEngine.InputSystem.Controls.AxisControl value)
    // Offset: 0x516E790
    void set_x(::UnityEngine::InputSystem::Controls::AxisControl* value);
    // public UnityEngine.InputSystem.Controls.AxisControl get_y()
    // Offset: 0x516E7A0
    ::UnityEngine::InputSystem::Controls::AxisControl* get_y();
    // public System.Void set_y(UnityEngine.InputSystem.Controls.AxisControl value)
    // Offset: 0x516E7A8
    void set_y(::UnityEngine::InputSystem::Controls::AxisControl* value);
    // public UnityEngine.Vector2 ReadUnprocessedValueFromState(System.Void* statePtr)
    // Offset: 0x516E7B8
    ::UnityEngine::Vector2 ReadUnprocessedValueFromState(void* statePtr);
    // public System.Void WriteValueIntoState(UnityEngine.Vector2 value, System.Void* statePtr)
    // Offset: 0x516E860
    void WriteValueIntoState(::UnityEngine::Vector2 value, void* statePtr);
    // public System.Void .ctor()
    // Offset: 0x516C6A0
    // Implemented from: UnityEngine.InputSystem.InputControl`1
    // Base method: System.Void InputControl_1::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector2Control* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Controls::Vector2Control::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector2Control*, creationType>()));
    }
    // protected override System.Void FinishSetup()
    // Offset: 0x516C5C8
    // Implemented from: UnityEngine.InputSystem.InputControl`1
    // Base method: System.Void InputControl_1::FinishSetup()
    void FinishSetup();
    // public override System.Single EvaluateMagnitude(System.Void* statePtr)
    // Offset: 0x516E8F4
    // Implemented from: UnityEngine.InputSystem.InputControl
    // Base method: System.Single InputControl::EvaluateMagnitude(System.Void* statePtr)
    float EvaluateMagnitude(void* statePtr);
    // protected override UnityEngine.InputSystem.Utilities.FourCC CalculateOptimizedControlDataType()
    // Offset: 0x516E9A8
    // Implemented from: UnityEngine.InputSystem.InputControl
    // Base method: UnityEngine.InputSystem.Utilities.FourCC InputControl::CalculateOptimizedControlDataType()
    ::UnityEngine::InputSystem::Utilities::FourCC CalculateOptimizedControlDataType();
  }; // UnityEngine.InputSystem.Controls.Vector2Control
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::Vector2Control::get_x
// Il2CppName: get_x
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (UnityEngine::InputSystem::Controls::Vector2Control::*)()>(&UnityEngine::InputSystem::Controls::Vector2Control::get_x)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::Vector2Control*), "get_x", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::Vector2Control::set_x
// Il2CppName: set_x
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::Vector2Control::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&UnityEngine::InputSystem::Controls::Vector2Control::set_x)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "AxisControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::Vector2Control*), "set_x", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::Vector2Control::get_y
// Il2CppName: get_y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (UnityEngine::InputSystem::Controls::Vector2Control::*)()>(&UnityEngine::InputSystem::Controls::Vector2Control::get_y)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::Vector2Control*), "get_y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::Vector2Control::set_y
// Il2CppName: set_y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::Vector2Control::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&UnityEngine::InputSystem::Controls::Vector2Control::set_y)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "AxisControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::Vector2Control*), "set_y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::Vector2Control::ReadUnprocessedValueFromState
// Il2CppName: ReadUnprocessedValueFromState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::InputSystem::Controls::Vector2Control::*)(void*)>(&UnityEngine::InputSystem::Controls::Vector2Control::ReadUnprocessedValueFromState)> {
  static const MethodInfo* get() {
    static auto* statePtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::Vector2Control*), "ReadUnprocessedValueFromState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{statePtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::Vector2Control::WriteValueIntoState
// Il2CppName: WriteValueIntoState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::Vector2Control::*)(::UnityEngine::Vector2, void*)>(&UnityEngine::InputSystem::Controls::Vector2Control::WriteValueIntoState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* statePtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::Vector2Control*), "WriteValueIntoState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, statePtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::Vector2Control::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::Vector2Control::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::Vector2Control::*)()>(&UnityEngine::InputSystem::Controls::Vector2Control::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::Vector2Control*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::Vector2Control::EvaluateMagnitude
// Il2CppName: EvaluateMagnitude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::InputSystem::Controls::Vector2Control::*)(void*)>(&UnityEngine::InputSystem::Controls::Vector2Control::EvaluateMagnitude)> {
  static const MethodInfo* get() {
    static auto* statePtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::Vector2Control*), "EvaluateMagnitude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{statePtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::Vector2Control::CalculateOptimizedControlDataType
// Il2CppName: CalculateOptimizedControlDataType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::Controls::Vector2Control::*)()>(&UnityEngine::InputSystem::Controls::Vector2Control::CalculateOptimizedControlDataType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::Vector2Control*), "CalculateOptimizedControlDataType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};