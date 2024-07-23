// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.BaseFieldMouseDragger
#include "UnityEngine/UIElements/BaseFieldMouseDragger.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IValueField`1<T>
  template<typename T>
  class IValueField_1;
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: PointerDownEvent
  class PointerDownEvent;
  // Forward declaring type: EventBase
  class EventBase;
  // Forward declaring type: PointerMoveEvent
  class PointerMoveEvent;
  // Forward declaring type: PointerUpEvent
  class PointerUpEvent;
  // Forward declaring type: KeyDownEvent
  class KeyDownEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: FieldMouseDragger`1<T>
  template<typename T>
  class FieldMouseDragger_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::FieldMouseDragger_1, "UnityEngine.UIElements", "FieldMouseDragger`1");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.FieldMouseDragger`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: FFFFFFFF
  template<typename T>
  class FieldMouseDragger_1 : public ::UnityEngine::UIElements::BaseFieldMouseDragger {
    public:
    public:
    // private readonly UnityEngine.UIElements.IValueField`1<T> m_DrivenField
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::IValueField_1<T>* m_DrivenField;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::IValueField_1<T>*) == 0x8);
    // private UnityEngine.UIElements.VisualElement m_DragElement
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::VisualElement* m_DragElement;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private UnityEngine.Rect m_DragHotZone
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Rect m_DragHotZone;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // private System.Boolean <dragging>k__BackingField
    // Size: 0x1
    // Offset: 0x0
    bool dragging;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private T <startValue>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T startValue;
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly UnityEngine.UIElements.IValueField`1<T> m_DrivenField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::IValueField_1<T>*& dyn_m_DrivenField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::dyn_m_DrivenField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_DrivenField"))->offset;
      return *reinterpret_cast<::UnityEngine::UIElements::IValueField_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.UIElements.VisualElement m_DragElement
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_DragElement() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::dyn_m_DragElement");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_DragElement"))->offset;
      return *reinterpret_cast<::UnityEngine::UIElements::VisualElement**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.Rect m_DragHotZone
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_m_DragHotZone() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::dyn_m_DragHotZone");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_DragHotZone"))->offset;
      return *reinterpret_cast<::UnityEngine::Rect*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean <dragging>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$dragging$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::dyn_$dragging$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<dragging>k__BackingField"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private T <startValue>k__BackingField
    [[deprecated("Use field access instead!")]] T& dyn_$startValue$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::dyn_$startValue$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<startValue>k__BackingField"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(UnityEngine.UIElements.IValueField`1<T> drivenField)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FieldMouseDragger_1<T>* New_ctor(::UnityEngine::UIElements::IValueField_1<T>* drivenField) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FieldMouseDragger_1<T>*, creationType>(drivenField)));
    }
    // public System.Boolean get_dragging()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_dragging() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::get_dragging");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_dragging", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Void set_dragging(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_dragging(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::set_dragging");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_dragging", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public T get_startValue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_startValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::get_startValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_startValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Void set_startValue(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_startValue(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::set_startValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_startValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // private System.Boolean CanStartDrag(System.Int32 button, UnityEngine.Vector2 localPosition)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool CanStartDrag(int button, ::UnityEngine::Vector2 localPosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::CanStartDrag");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CanStartDrag", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(button), ::il2cpp_utils::ExtractType(localPosition)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, button, localPosition);
    }
    // private System.Void UpdateValueOnPointerDown(UnityEngine.UIElements.PointerDownEvent evt)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdateValueOnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::UpdateValueOnPointerDown");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UpdateValueOnPointerDown", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(evt)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, evt);
    }
    // private System.Void ProcessDownEvent(UnityEngine.UIElements.EventBase evt)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ProcessDownEvent(::UnityEngine::UIElements::EventBase* evt) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::ProcessDownEvent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ProcessDownEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(evt)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, evt);
    }
    // private System.Void UpdateValueOnPointerMove(UnityEngine.UIElements.PointerMoveEvent evt)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdateValueOnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::UpdateValueOnPointerMove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UpdateValueOnPointerMove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(evt)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, evt);
    }
    // private System.Void ProcessMoveEvent(System.Boolean shiftKey, System.Boolean altKey, UnityEngine.Vector2 deltaPosition)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ProcessMoveEvent(bool shiftKey, bool altKey, ::UnityEngine::Vector2 deltaPosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::ProcessMoveEvent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ProcessMoveEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(shiftKey), ::il2cpp_utils::ExtractType(altKey), ::il2cpp_utils::ExtractType(deltaPosition)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, shiftKey, altKey, deltaPosition);
    }
    // private System.Void UpdateValueOnPointerUp(UnityEngine.UIElements.PointerUpEvent evt)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdateValueOnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::UpdateValueOnPointerUp");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UpdateValueOnPointerUp", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(evt)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, evt);
    }
    // private System.Void ProcessUpEvent(UnityEngine.UIElements.EventBase evt, System.Int32 pointerId)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ProcessUpEvent(::UnityEngine::UIElements::EventBase* evt, int pointerId) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::ProcessUpEvent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ProcessUpEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(evt), ::il2cpp_utils::ExtractType(pointerId)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, evt, pointerId);
    }
    // private System.Void UpdateValueOnKeyDown(UnityEngine.UIElements.KeyDownEvent evt)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdateValueOnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::UpdateValueOnKeyDown");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UpdateValueOnKeyDown", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(evt)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, evt);
    }
    // public override System.Void SetDragZone(UnityEngine.UIElements.VisualElement dragElement, UnityEngine.Rect hotZone)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BaseFieldMouseDragger
    // Base method: System.Void BaseFieldMouseDragger::SetDragZone(UnityEngine.UIElements.VisualElement dragElement, UnityEngine.Rect hotZone)
    void SetDragZone(::UnityEngine::UIElements::VisualElement* dragElement, ::UnityEngine::Rect hotZone) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FieldMouseDragger_1::SetDragZone");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BaseFieldMouseDragger*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, dragElement, hotZone);
    }
  }; // UnityEngine.UIElements.FieldMouseDragger`1
  // Could not write size check! Type: UnityEngine.UIElements.FieldMouseDragger`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"