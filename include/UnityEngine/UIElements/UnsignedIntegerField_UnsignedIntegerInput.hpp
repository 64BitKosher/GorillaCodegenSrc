// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.UnsignedIntegerField
#include "UnityEngine/UIElements/UnsignedIntegerField.hpp"
// Including type: UnityEngine.UIElements.TextValueField`1/TextValueInput
#include "UnityEngine/UIElements/TextValueField_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Skipping declaration: DeltaSpeed because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput*, "UnityEngine.UIElements", "UnsignedIntegerField/UnsignedIntegerInput");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.UnsignedIntegerField/UnsignedIntegerInput
  // [TokenAttribute] Offset: FFFFFFFF
  class UnsignedIntegerField::UnsignedIntegerInput : public ::UnityEngine::UIElements::TextValueField_1<uint>::TextValueInput {
    public:
    // private UnityEngine.UIElements.UnsignedIntegerField get_parentUnsignedIntegerField()
    // Offset: 0x56352B8
    ::UnityEngine::UIElements::UnsignedIntegerField* get_parentUnsignedIntegerField();
    // public System.Void ApplyInputDeviceDelta(UnityEngine.Vector3 delta, UnityEngine.UIElements.DeltaSpeed speed, System.UInt32 startValue)
    // Offset: 0x5635390
    void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, uint startValue);
    // protected System.String ValueToString(System.UInt32 v)
    // Offset: 0x56355E0
    ::StringW ValueToString(uint v);
    // protected System.UInt32 StringToValue(System.String str)
    // Offset: 0x563562C
    uint StringToValue(::StringW str);
    // System.Void .ctor()
    // Offset: 0x563500C
    // Implemented from: UnityEngine.UIElements.TextValueField`1/TextValueInput
    // Base method: System.Void TextValueInput::.ctor()
    // Base method: System.Void TextInputBase::.ctor()
    // Base method: System.Void VisualElement::.ctor()
    // Base method: System.Void Focusable::.ctor()
    // Base method: System.Void CallbackEventHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnsignedIntegerField::UnsignedIntegerInput* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnsignedIntegerField::UnsignedIntegerInput*, creationType>()));
    }
    // protected override System.String get_allowedCharacters()
    // Offset: 0x5635338
    // Implemented from: UnityEngine.UIElements.TextValueField`1/TextValueInput
    // Base method: System.String TextValueInput::get_allowedCharacters()
    ::StringW get_allowedCharacters();
  }; // UnityEngine.UIElements.UnsignedIntegerField/UnsignedIntegerInput
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput::get_parentUnsignedIntegerField
// Il2CppName: get_parentUnsignedIntegerField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UnsignedIntegerField* (UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput::*)()>(&UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput::get_parentUnsignedIntegerField)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput*), "get_parentUnsignedIntegerField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput::ApplyInputDeviceDelta
// Il2CppName: ApplyInputDeviceDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput::*)(::UnityEngine::Vector3, ::UnityEngine::UIElements::DeltaSpeed, uint)>(&UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput::ApplyInputDeviceDelta)> {
  static const MethodInfo* get() {
    static auto* delta = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* speed = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "DeltaSpeed")->byval_arg;
    static auto* startValue = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput*), "ApplyInputDeviceDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delta, speed, startValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput::ValueToString
// Il2CppName: ValueToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput::*)(uint)>(&UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput::ValueToString)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput*), "ValueToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput::StringToValue
// Il2CppName: StringToValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput::*)(::StringW)>(&UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput::StringToValue)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput*), "StringToValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput::get_allowedCharacters
// Il2CppName: get_allowedCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput::*)()>(&UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput::get_allowedCharacters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UnsignedIntegerField::UnsignedIntegerInput*), "get_allowedCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
