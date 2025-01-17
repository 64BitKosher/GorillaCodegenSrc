// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.BasePopupField`2
#include "UnityEngine/UIElements/BasePopupField_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Skipping declaration: <>c__DisplayClass26_0 because it is already included!
  // Forward declaring type: IGenericMenu
  class IGenericMenu;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: PopupField`1<T>
  template<typename T>
  class PopupField_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::PopupField_1, "UnityEngine.UIElements", "PopupField`1");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.PopupField`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: FFFFFFFF
  template<typename T>
  class PopupField_1 : public ::UnityEngine::UIElements::BasePopupField_2<T, T> {
    public:
    // Nested type: ::UnityEngine::UIElements::PopupField_1::$$c__DisplayClass26_0<T>
    class $$c__DisplayClass26_0;
    // WARNING Size may be invalid!
    // Autogenerated type: UnityEngine.UIElements.PopupField`1/<>c__DisplayClass26_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass26_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = PopupField_1<T>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass26_0";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // public T item
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      T item;
      // public UnityEngine.UIElements.PopupField`1<T> <>4__this
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::UIElements::PopupField_1<T>* $$4__this;
      // Field size check
      static_assert(sizeof(::UnityEngine::UIElements::PopupField_1<T>*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public T item
      [[deprecated("Use field access instead!")]] T& dyn_item() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::$$c__DisplayClass26_0::dyn_item");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "item"))->offset;
        return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public UnityEngine.UIElements.PopupField`1<T> <>4__this
      [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::PopupField_1<T>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::$$c__DisplayClass26_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<::UnityEngine::UIElements::PopupField_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename PopupField_1<T>::$$c__DisplayClass26_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::$$c__DisplayClass26_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename PopupField_1<T>::$$c__DisplayClass26_0*, creationType>()));
      }
      // System.Void <AddMenuItems>b__0()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void $AddMenuItems$b__0() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::$$c__DisplayClass26_0::<AddMenuItems>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<AddMenuItems>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
    }; // UnityEngine.UIElements.PopupField`1/<>c__DisplayClass26_0
    // Could not write size check! Type: UnityEngine.UIElements.PopupField`1/<>c__DisplayClass26_0 is generic, or has no fields that are valid for size checks!
    public:
    // private System.Int32 m_Index
    // Size: 0x4
    // Offset: 0x0
    int m_Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Index;
    }
    // Autogenerated static field getter
    // Get static field: static public readonly System.String ussClassName
    static ::StringW _get_ussClassName() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::_get_ussClassName");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::StringW>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PopupField_1<T>*>::get(), "ussClassName"));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly System.String ussClassName
    static void _set_ussClassName(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::_set_ussClassName");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PopupField_1<T>*>::get(), "ussClassName", value));
    }
    // Autogenerated static field getter
    // Get static field: static public readonly System.String labelUssClassName
    static ::StringW _get_labelUssClassName() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::_get_labelUssClassName");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::StringW>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PopupField_1<T>*>::get(), "labelUssClassName"));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly System.String labelUssClassName
    static void _set_labelUssClassName(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::_set_labelUssClassName");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PopupField_1<T>*>::get(), "labelUssClassName", value));
    }
    // Autogenerated static field getter
    // Get static field: static public readonly System.String inputUssClassName
    static ::StringW _get_inputUssClassName() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::_get_inputUssClassName");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::StringW>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PopupField_1<T>*>::get(), "inputUssClassName"));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly System.String inputUssClassName
    static void _set_inputUssClassName(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::_set_inputUssClassName");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PopupField_1<T>*>::get(), "inputUssClassName", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 m_Index
    [[deprecated("Use field access instead!")]] int& dyn_m_Index() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::dyn_m_Index");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Index"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void set_index(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_index(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::set_index");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_index", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // private System.Void ChangeValueFromMenu(T menuItem)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ChangeValueFromMenu(T menuItem) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::ChangeValueFromMenu");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ChangeValueFromMenu", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(menuItem)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, menuItem);
    }
    // override System.String GetValueToDisplay()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BasePopupField`2
    // Base method: System.String BasePopupField_2::GetValueToDisplay()
    ::StringW GetValueToDisplay() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::GetValueToDisplay");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // override System.String GetListItemToDisplay(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BasePopupField`2
    // Base method: System.String BasePopupField_2::GetListItemToDisplay(T value)
    ::StringW GetListItemToDisplay(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::GetListItemToDisplay");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method, value);
    }
    // public override T get_value()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BaseField`1
    // Base method: TValueType BaseField_1::get_value()
    T get_value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::get_value");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BaseField_1<TValueType>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public override System.Void set_value(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BaseField`1
    // Base method: System.Void BaseField_1::set_value(T value)
    void set_value(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::set_value");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BaseField_1<TValueType>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public override System.Void SetValueWithoutNotify(T newValue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BasePopupField`2
    // Base method: System.Void BasePopupField_2::SetValueWithoutNotify(T newValue)
    void SetValueWithoutNotify(T newValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::SetValueWithoutNotify");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, newValue);
    }
    // public System.Void .ctor(System.String label)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BasePopupField`2
    // Base method: System.Void BasePopupField_2::.ctor(System.String label)
    // Base method: System.Void BaseField_1::.ctor(System.String label)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PopupField_1<T>* New_ctor(::StringW label) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PopupField_1<T>*, creationType>(label)));
    }
    // override System.Void AddMenuItems(UnityEngine.UIElements.IGenericMenu menu)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BasePopupField`2
    // Base method: System.Void BasePopupField_2::AddMenuItems(UnityEngine.UIElements.IGenericMenu menu)
    void AddMenuItems(::UnityEngine::UIElements::IGenericMenu* menu) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::AddMenuItems");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, menu);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BasePopupField`2
    // Base method: System.Void BasePopupField_2::.cctor()
    // Base method: System.Void BaseField_1::.cctor()
    // Base method: System.Void VisualElement::.cctor()
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupField_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PopupField_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // UnityEngine.UIElements.PopupField`1
  // Could not write size check! Type: UnityEngine.UIElements.PopupField`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
