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
  // Forward declaring type: LongField
  class LongField;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::LongField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::LongField*, "UnityEngine.UIElements", "LongField");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.LongField
  // [TokenAttribute] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: FFFFFFFF
  class LongField : public ::UnityEngine::UIElements::TextValueField_1<int64_t> {
    public:
    // Nested type: ::UnityEngine::UIElements::LongField::UxmlFactory
    class UxmlFactory;
    // Nested type: ::UnityEngine::UIElements::LongField::UxmlTraits
    class UxmlTraits;
    // Nested type: ::UnityEngine::UIElements::LongField::LongInput
    class LongInput;
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
    // private UnityEngine.UIElements.LongField/LongInput get_longInput()
    // Offset: 0x5615CF8
    ::UnityEngine::UIElements::LongField::LongInput* get_longInput();
    // protected System.String ValueToString(System.Int64 v)
    // Offset: 0x5615D7C
    ::StringW ValueToString(int64_t v);
    // protected System.Int64 StringToValue(System.String str)
    // Offset: 0x5615E34
    int64_t StringToValue(::StringW str);
    // public System.Void .ctor(System.String label, System.Int32 maxLength)
    // Offset: 0x5615F1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LongField* New_ctor(::StringW label, int maxLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::LongField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LongField*, creationType>(label, maxLength)));
    }
    // public System.Void ApplyInputDeviceDelta(UnityEngine.Vector3 delta, UnityEngine.UIElements.DeltaSpeed speed, System.Int64 startValue)
    // Offset: 0x5616128
    void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, int64_t startValue);
    // public System.Void .ctor()
    // Offset: 0x5615F10
    // Implemented from: UnityEngine.UIElements.BindableElement
    // Base method: System.Void BindableElement::.ctor()
    // Base method: System.Void VisualElement::.ctor()
    // Base method: System.Void Focusable::.ctor()
    // Base method: System.Void CallbackEventHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LongField* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::LongField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LongField*, creationType>()));
    }
    // override System.Boolean CanTryParse(System.String textString)
    // Offset: 0x5616104
    // Implemented from: UnityEngine.UIElements.TextValueField`1
    // Base method: System.Boolean TextValueField_1::CanTryParse(System.String textString)
    bool CanTryParse(::StringW textString);
    // static private System.Void .cctor()
    // Offset: 0x561618C
    // Implemented from: UnityEngine.UIElements.TextInputBaseField`1
    // Base method: System.Void TextInputBaseField_1::.cctor()
    // Base method: System.Void BaseField_1::.cctor()
    // Base method: System.Void VisualElement::.cctor()
    static void _cctor();
  }; // UnityEngine.UIElements.LongField
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::LongField::get_longInput
// Il2CppName: get_longInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::LongField::LongInput* (UnityEngine::UIElements::LongField::*)()>(&UnityEngine::UIElements::LongField::get_longInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::LongField*), "get_longInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::LongField::ValueToString
// Il2CppName: ValueToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::LongField::*)(int64_t)>(&UnityEngine::UIElements::LongField::ValueToString)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::LongField*), "ValueToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::LongField::StringToValue
// Il2CppName: StringToValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::UIElements::LongField::*)(::StringW)>(&UnityEngine::UIElements::LongField::StringToValue)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::LongField*), "StringToValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::LongField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::LongField::ApplyInputDeviceDelta
// Il2CppName: ApplyInputDeviceDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::LongField::*)(::UnityEngine::Vector3, ::UnityEngine::UIElements::DeltaSpeed, int64_t)>(&UnityEngine::UIElements::LongField::ApplyInputDeviceDelta)> {
  static const MethodInfo* get() {
    static auto* delta = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* speed = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "DeltaSpeed")->byval_arg;
    static auto* startValue = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::LongField*), "ApplyInputDeviceDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delta, speed, startValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::LongField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::LongField::CanTryParse
// Il2CppName: CanTryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::LongField::*)(::StringW)>(&UnityEngine::UIElements::LongField::CanTryParse)> {
  static const MethodInfo* get() {
    static auto* textString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::LongField*), "CanTryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textString});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::LongField::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::LongField::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::LongField*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
