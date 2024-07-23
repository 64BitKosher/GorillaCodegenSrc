// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.TextValueField`1
#include "UnityEngine/UIElements/TextValueField_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Skipping declaration: DeltaSpeed because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: FloatField
  class FloatField;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::FloatField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FloatField*, "UnityEngine.UIElements", "FloatField");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.FloatField
  // [TokenAttribute] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: FFFFFFFF
  class FloatField : public ::UnityEngine::UIElements::TextValueField_1<float> {
    public:
    // Nested type: ::UnityEngine::UIElements::FloatField::UxmlFactory
    class UxmlFactory;
    // Nested type: ::UnityEngine::UIElements::FloatField::UxmlTraits
    class UxmlTraits;
    // Nested type: ::UnityEngine::UIElements::FloatField::FloatInput
    class FloatInput;
    // Get static field: static public readonly System.String ussClassName
    static ::StringW _get_ussClassName();
    // Set static field: static public readonly System.String ussClassName
    static void _set_ussClassName(::StringW value);
    // Get static field: static public readonly System.String labelUssClassName
    static ::StringW _get_labelUssClassName();
    // Set static field: static public readonly System.String labelUssClassName
    static void _set_labelUssClassName(::StringW value);
    // Get static field: static public readonly System.String inputUssClassName
    static ::StringW _get_inputUssClassName();
    // Set static field: static public readonly System.String inputUssClassName
    static void _set_inputUssClassName(::StringW value);
    // private UnityEngine.UIElements.FloatField/FloatInput get_floatInput()
    // Offset: 0x55B6E80
    ::UnityEngine::UIElements::FloatField::FloatInput* get_floatInput();
    // protected System.String ValueToString(System.Single v)
    // Offset: 0x55B6F04
    ::StringW ValueToString(float v);
    // protected System.Single StringToValue(System.String str)
    // Offset: 0x55B6FBC
    float StringToValue(::StringW str);
    // public System.Void .ctor(System.String label, System.Int32 maxLength)
    // Offset: 0x55B70A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloatField* New_ctor(::StringW label, int maxLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FloatField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloatField*, creationType>(label, maxLength)));
    }
    // public System.Void ApplyInputDeviceDelta(UnityEngine.Vector3 delta, UnityEngine.UIElements.DeltaSpeed speed, System.Single startValue)
    // Offset: 0x55B72B0
    void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, float startValue);
    // public System.Void .ctor()
    // Offset: 0x55B7098
    // Implemented from: UnityEngine.UIElements.BindableElement
    // Base method: System.Void BindableElement::.ctor()
    // Base method: System.Void VisualElement::.ctor()
    // Base method: System.Void Focusable::.ctor()
    // Base method: System.Void CallbackEventHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloatField* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FloatField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloatField*, creationType>()));
    }
    // override System.Boolean CanTryParse(System.String textString)
    // Offset: 0x55B728C
    // Implemented from: UnityEngine.UIElements.TextValueField`1
    // Base method: System.Boolean TextValueField_1::CanTryParse(System.String textString)
    bool CanTryParse(::StringW textString);
    // static private System.Void .cctor()
    // Offset: 0x55B730C
    // Implemented from: UnityEngine.UIElements.TextInputBaseField`1
    // Base method: System.Void TextInputBaseField_1::.cctor()
    // Base method: System.Void BaseField_1::.cctor()
    // Base method: System.Void VisualElement::.cctor()
    static void _cctor();
  }; // UnityEngine.UIElements.FloatField
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::FloatField::get_floatInput
// Il2CppName: get_floatInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FloatField::FloatInput* (UnityEngine::UIElements::FloatField::*)()>(&UnityEngine::UIElements::FloatField::get_floatInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FloatField*), "get_floatInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FloatField::ValueToString
// Il2CppName: ValueToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::FloatField::*)(float)>(&UnityEngine::UIElements::FloatField::ValueToString)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FloatField*), "ValueToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FloatField::StringToValue
// Il2CppName: StringToValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::FloatField::*)(::StringW)>(&UnityEngine::UIElements::FloatField::StringToValue)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FloatField*), "StringToValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FloatField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::FloatField::ApplyInputDeviceDelta
// Il2CppName: ApplyInputDeviceDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::FloatField::*)(::UnityEngine::Vector3, ::UnityEngine::UIElements::DeltaSpeed, float)>(&UnityEngine::UIElements::FloatField::ApplyInputDeviceDelta)> {
  static const MethodInfo* get() {
    static auto* delta = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* speed = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "DeltaSpeed")->byval_arg;
    static auto* startValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FloatField*), "ApplyInputDeviceDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delta, speed, startValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FloatField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::FloatField::CanTryParse
// Il2CppName: CanTryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::FloatField::*)(::StringW)>(&UnityEngine::UIElements::FloatField::CanTryParse)> {
  static const MethodInfo* get() {
    static auto* textString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FloatField*), "CanTryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textString});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FloatField::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::FloatField::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FloatField*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
