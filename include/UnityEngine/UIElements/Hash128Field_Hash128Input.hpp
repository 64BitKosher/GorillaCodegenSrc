// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.Hash128Field
#include "UnityEngine/UIElements/Hash128Field.hpp"
// Including type: UnityEngine.UIElements.TextInputBaseField`1/TextInputBase
#include "UnityEngine/UIElements/TextInputBaseField_1.hpp"
// Including type: UnityEngine.Hash128
#include "UnityEngine/Hash128.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::Hash128Field::Hash128Input);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Hash128Field::Hash128Input*, "UnityEngine.UIElements", "Hash128Field/Hash128Input");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.Hash128Field/Hash128Input
  // [TokenAttribute] Offset: FFFFFFFF
  class Hash128Field::Hash128Input : public ::UnityEngine::UIElements::TextInputBaseField_1<::UnityEngine::Hash128>::TextInputBase {
    public:
    // protected System.String get_allowedCharacters()
    // Offset: 0x55BBF2C
    ::StringW get_allowedCharacters();
    // protected UnityEngine.Hash128 StringToValue(System.String str)
    // Offset: 0x55BC024
    ::UnityEngine::Hash128 StringToValue(::StringW str);
    // static UnityEngine.Hash128 Parse(System.String str)
    // Offset: 0x55BBB40
    static ::UnityEngine::Hash128 Parse(::StringW str);
    // System.Void .ctor()
    // Offset: 0x55BB668
    // Implemented from: UnityEngine.UIElements.TextInputBaseField`1/TextInputBase
    // Base method: System.Void TextInputBase::.ctor()
    // Base method: System.Void VisualElement::.ctor()
    // Base method: System.Void Focusable::.ctor()
    // Base method: System.Void CallbackEventHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hash128Field::Hash128Input* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Hash128Field::Hash128Input::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hash128Field::Hash128Input*, creationType>()));
    }
    // override System.Boolean AcceptCharacter(System.Char c)
    // Offset: 0x55BBF6C
    // Implemented from: UnityEngine.UIElements.TextInputBaseField`1/TextInputBase
    // Base method: System.Boolean TextInputBase::AcceptCharacter(System.Char c)
    bool AcceptCharacter(::Il2CppChar c);
  }; // UnityEngine.UIElements.Hash128Field/Hash128Input
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::Hash128Field::Hash128Input::get_allowedCharacters
// Il2CppName: get_allowedCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::Hash128Field::Hash128Input::*)()>(&UnityEngine::UIElements::Hash128Field::Hash128Input::get_allowedCharacters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Hash128Field::Hash128Input*), "get_allowedCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Hash128Field::Hash128Input::StringToValue
// Il2CppName: StringToValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Hash128 (UnityEngine::UIElements::Hash128Field::Hash128Input::*)(::StringW)>(&UnityEngine::UIElements::Hash128Field::Hash128Input::StringToValue)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Hash128Field::Hash128Input*), "StringToValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Hash128Field::Hash128Input::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Hash128 (*)(::StringW)>(&UnityEngine::UIElements::Hash128Field::Hash128Input::Parse)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Hash128Field::Hash128Input*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Hash128Field::Hash128Input::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::Hash128Field::Hash128Input::AcceptCharacter
// Il2CppName: AcceptCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::Hash128Field::Hash128Input::*)(::Il2CppChar)>(&UnityEngine::UIElements::Hash128Field::Hash128Input::AcceptCharacter)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Hash128Field::Hash128Input*), "AcceptCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
