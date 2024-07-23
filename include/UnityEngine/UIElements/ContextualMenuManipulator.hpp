// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.MouseManipulator
#include "UnityEngine/UIElements/MouseManipulator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ContextualMenuPopulateEvent
  class ContextualMenuPopulateEvent;
  // Forward declaring type: IMouseEvent
  class IMouseEvent;
  // Forward declaring type: MouseDownEvent
  class MouseDownEvent;
  // Forward declaring type: MouseUpEvent
  class MouseUpEvent;
  // Forward declaring type: KeyUpEvent
  class KeyUpEvent;
  // Forward declaring type: EventBase
  class EventBase;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ContextualMenuManipulator
  class ContextualMenuManipulator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::ContextualMenuManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ContextualMenuManipulator*, "UnityEngine.UIElements", "ContextualMenuManipulator");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.ContextualMenuManipulator
  // [TokenAttribute] Offset: FFFFFFFF
  class ContextualMenuManipulator : public ::UnityEngine::UIElements::MouseManipulator {
    public:
    // Writing base type padding for base size: 0x2C to desired offset: 0x30
    char ___base_padding[0x4] = {};
    public:
    // private System.Action`1<UnityEngine.UIElements.ContextualMenuPopulateEvent> m_MenuBuilder
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>* m_MenuBuilder;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>*) == 0x8);
    public:
    // Get instance field reference: private System.Action`1<UnityEngine.UIElements.ContextualMenuPopulateEvent> m_MenuBuilder
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>*& dyn_m_MenuBuilder();
    // public System.Void .ctor(System.Action`1<UnityEngine.UIElements.ContextualMenuPopulateEvent> menuBuilder)
    // Offset: 0x55A22F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContextualMenuManipulator* New_ctor(::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>* menuBuilder) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::ContextualMenuManipulator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContextualMenuManipulator*, creationType>(menuBuilder)));
    }
    // private System.Void OnMouseUpDownEvent(UnityEngine.UIElements.IMouseEvent evt)
    // Offset: 0x55A2A10
    void OnMouseUpDownEvent(::UnityEngine::UIElements::IMouseEvent* evt);
    // private System.Void OnMouseDownEventOSX(UnityEngine.UIElements.MouseDownEvent evt)
    // Offset: 0x55A2B4C
    void OnMouseDownEventOSX(::UnityEngine::UIElements::MouseDownEvent* evt);
    // private System.Void OnMouseUpEventOSX(UnityEngine.UIElements.MouseUpEvent evt)
    // Offset: 0x55A2BD4
    void OnMouseUpEventOSX(::UnityEngine::UIElements::MouseUpEvent* evt);
    // private System.Void OnKeyUpEvent(UnityEngine.UIElements.KeyUpEvent evt)
    // Offset: 0x55A2C4C
    void OnKeyUpEvent(::UnityEngine::UIElements::KeyUpEvent* evt);
    // private System.Void DoDisplayMenu(UnityEngine.UIElements.EventBase evt)
    // Offset: 0x55A2AB0
    void DoDisplayMenu(::UnityEngine::UIElements::EventBase* evt);
    // private System.Void OnContextualMenuEvent(UnityEngine.UIElements.ContextualMenuPopulateEvent evt)
    // Offset: 0x55A2CB0
    void OnContextualMenuEvent(::UnityEngine::UIElements::ContextualMenuPopulateEvent* evt);
    // protected override System.Void RegisterCallbacksOnTarget()
    // Offset: 0x55A2480
    // Implemented from: UnityEngine.UIElements.Manipulator
    // Base method: System.Void Manipulator::RegisterCallbacksOnTarget()
    void RegisterCallbacksOnTarget();
    // protected override System.Void UnregisterCallbacksFromTarget()
    // Offset: 0x55A2748
    // Implemented from: UnityEngine.UIElements.Manipulator
    // Base method: System.Void Manipulator::UnregisterCallbacksFromTarget()
    void UnregisterCallbacksFromTarget();
  }; // UnityEngine.UIElements.ContextualMenuManipulator
  #pragma pack(pop)
  static check_size<sizeof(ContextualMenuManipulator), 48 + sizeof(::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>*)> __UnityEngine_UIElements_ContextualMenuManipulatorSizeCheck;
  static_assert(sizeof(ContextualMenuManipulator) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::ContextualMenuManipulator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::ContextualMenuManipulator::OnMouseUpDownEvent
// Il2CppName: OnMouseUpDownEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ContextualMenuManipulator::*)(::UnityEngine::UIElements::IMouseEvent*)>(&UnityEngine::UIElements::ContextualMenuManipulator::OnMouseUpDownEvent)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IMouseEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ContextualMenuManipulator*), "OnMouseUpDownEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ContextualMenuManipulator::OnMouseDownEventOSX
// Il2CppName: OnMouseDownEventOSX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ContextualMenuManipulator::*)(::UnityEngine::UIElements::MouseDownEvent*)>(&UnityEngine::UIElements::ContextualMenuManipulator::OnMouseDownEventOSX)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "MouseDownEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ContextualMenuManipulator*), "OnMouseDownEventOSX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ContextualMenuManipulator::OnMouseUpEventOSX
// Il2CppName: OnMouseUpEventOSX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ContextualMenuManipulator::*)(::UnityEngine::UIElements::MouseUpEvent*)>(&UnityEngine::UIElements::ContextualMenuManipulator::OnMouseUpEventOSX)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "MouseUpEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ContextualMenuManipulator*), "OnMouseUpEventOSX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ContextualMenuManipulator::OnKeyUpEvent
// Il2CppName: OnKeyUpEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ContextualMenuManipulator::*)(::UnityEngine::UIElements::KeyUpEvent*)>(&UnityEngine::UIElements::ContextualMenuManipulator::OnKeyUpEvent)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "KeyUpEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ContextualMenuManipulator*), "OnKeyUpEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ContextualMenuManipulator::DoDisplayMenu
// Il2CppName: DoDisplayMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ContextualMenuManipulator::*)(::UnityEngine::UIElements::EventBase*)>(&UnityEngine::UIElements::ContextualMenuManipulator::DoDisplayMenu)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ContextualMenuManipulator*), "DoDisplayMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ContextualMenuManipulator::OnContextualMenuEvent
// Il2CppName: OnContextualMenuEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ContextualMenuManipulator::*)(::UnityEngine::UIElements::ContextualMenuPopulateEvent*)>(&UnityEngine::UIElements::ContextualMenuManipulator::OnContextualMenuEvent)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ContextualMenuPopulateEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ContextualMenuManipulator*), "OnContextualMenuEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ContextualMenuManipulator::RegisterCallbacksOnTarget
// Il2CppName: RegisterCallbacksOnTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ContextualMenuManipulator::*)()>(&UnityEngine::UIElements::ContextualMenuManipulator::RegisterCallbacksOnTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ContextualMenuManipulator*), "RegisterCallbacksOnTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ContextualMenuManipulator::UnregisterCallbacksFromTarget
// Il2CppName: UnregisterCallbacksFromTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ContextualMenuManipulator::*)()>(&UnityEngine::UIElements::ContextualMenuManipulator::UnregisterCallbacksFromTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ContextualMenuManipulator*), "UnregisterCallbacksFromTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};