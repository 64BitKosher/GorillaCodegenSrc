// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TouchScreenKeyboardType
  struct TouchScreenKeyboardType;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ITextEdition
  class ITextEdition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::ITextEdition);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ITextEdition*, "UnityEngine.UIElements", "ITextEdition");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.ITextEdition
  // [TokenAttribute] Offset: FFFFFFFF
  class ITextEdition {
    public:
    // System.Boolean get_multiline()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_multiline();
    // System.Void set_multiline(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_multiline(bool value);
    // public System.Boolean get_isReadOnly()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_isReadOnly();
    // public System.Void set_isReadOnly(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_isReadOnly(bool value);
    // public System.Int32 get_maxLength()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_maxLength();
    // public System.Void set_maxLength(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_maxLength(int value);
    // public System.Boolean get_isDelayed()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_isDelayed();
    // public System.Void set_isDelayed(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_isDelayed(bool value);
    // System.Void ResetValueAndText()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ResetValueAndText();
    // System.Void SaveValueAndText()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SaveValueAndText();
    // System.Void RestoreValueAndText()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RestoreValueAndText();
    // System.Func`2<System.Char,System.Boolean> get_AcceptCharacter()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Func_2<::Il2CppChar, bool>* get_AcceptCharacter();
    // System.Void set_AcceptCharacter(System.Func`2<System.Char,System.Boolean> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_AcceptCharacter(::System::Func_2<::Il2CppChar, bool>* value);
    // System.Action`1<System.Boolean> get_UpdateScrollOffset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Action_1<bool>* get_UpdateScrollOffset();
    // System.Void set_UpdateScrollOffset(System.Action`1<System.Boolean> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_UpdateScrollOffset(::System::Action_1<bool>* value);
    // System.Action get_UpdateValueFromText()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Action* get_UpdateValueFromText();
    // System.Void set_UpdateValueFromText(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_UpdateValueFromText(::System::Action* value);
    // System.Action get_UpdateTextFromValue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Action* get_UpdateTextFromValue();
    // System.Void set_UpdateTextFromValue(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_UpdateTextFromValue(::System::Action* value);
    // System.Action get_MoveFocusToCompositeRoot()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Action* get_MoveFocusToCompositeRoot();
    // System.Void set_MoveFocusToCompositeRoot(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_MoveFocusToCompositeRoot(::System::Action* value);
    // System.Void UpdateText(System.String value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdateText(::StringW value);
    // System.String CullString(System.String s)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW CullString(::StringW s);
    // public System.Void set_maskChar(System.Char value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_maskChar(::Il2CppChar value);
    // public System.Boolean get_isPassword()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_isPassword();
    // public System.Void set_isPassword(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_isPassword(bool value);
    // public System.Boolean get_autoCorrection()
    // Offset: 0x56BDD48
    bool get_autoCorrection();
    // public System.Void set_autoCorrection(System.Boolean value)
    // Offset: 0x56BDE10
    void set_autoCorrection(bool value);
    // public System.Boolean get_hideMobileInput()
    // Offset: 0x56BDED0
    bool get_hideMobileInput();
    // public System.Void set_hideMobileInput(System.Boolean value)
    // Offset: 0x56BDF98
    void set_hideMobileInput(bool value);
    // public UnityEngine.TouchScreenKeyboardType get_keyboardType()
    // Offset: 0x56BE058
    ::UnityEngine::TouchScreenKeyboardType get_keyboardType();
    // public System.Void set_keyboardType(UnityEngine.TouchScreenKeyboardType value)
    // Offset: 0x56BE120
    void set_keyboardType(::UnityEngine::TouchScreenKeyboardType value);
  }; // UnityEngine.UIElements.ITextEdition
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::get_multiline
// Il2CppName: get_multiline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ITextEdition::*)()>(&UnityEngine::UIElements::ITextEdition::get_multiline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "get_multiline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::set_multiline
// Il2CppName: set_multiline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)(bool)>(&UnityEngine::UIElements::ITextEdition::set_multiline)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "set_multiline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::get_isReadOnly
// Il2CppName: get_isReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ITextEdition::*)()>(&UnityEngine::UIElements::ITextEdition::get_isReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "get_isReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::set_isReadOnly
// Il2CppName: set_isReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)(bool)>(&UnityEngine::UIElements::ITextEdition::set_isReadOnly)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "set_isReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::get_maxLength
// Il2CppName: get_maxLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::ITextEdition::*)()>(&UnityEngine::UIElements::ITextEdition::get_maxLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "get_maxLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::set_maxLength
// Il2CppName: set_maxLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)(int)>(&UnityEngine::UIElements::ITextEdition::set_maxLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "set_maxLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::get_isDelayed
// Il2CppName: get_isDelayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ITextEdition::*)()>(&UnityEngine::UIElements::ITextEdition::get_isDelayed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "get_isDelayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::set_isDelayed
// Il2CppName: set_isDelayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)(bool)>(&UnityEngine::UIElements::ITextEdition::set_isDelayed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "set_isDelayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::ResetValueAndText
// Il2CppName: ResetValueAndText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)()>(&UnityEngine::UIElements::ITextEdition::ResetValueAndText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "ResetValueAndText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::SaveValueAndText
// Il2CppName: SaveValueAndText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)()>(&UnityEngine::UIElements::ITextEdition::SaveValueAndText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "SaveValueAndText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::RestoreValueAndText
// Il2CppName: RestoreValueAndText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)()>(&UnityEngine::UIElements::ITextEdition::RestoreValueAndText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "RestoreValueAndText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::get_AcceptCharacter
// Il2CppName: get_AcceptCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<::Il2CppChar, bool>* (UnityEngine::UIElements::ITextEdition::*)()>(&UnityEngine::UIElements::ITextEdition::get_AcceptCharacter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "get_AcceptCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::set_AcceptCharacter
// Il2CppName: set_AcceptCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)(::System::Func_2<::Il2CppChar, bool>*)>(&UnityEngine::UIElements::ITextEdition::set_AcceptCharacter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "set_AcceptCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::get_UpdateScrollOffset
// Il2CppName: get_UpdateScrollOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<bool>* (UnityEngine::UIElements::ITextEdition::*)()>(&UnityEngine::UIElements::ITextEdition::get_UpdateScrollOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "get_UpdateScrollOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::set_UpdateScrollOffset
// Il2CppName: set_UpdateScrollOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)(::System::Action_1<bool>*)>(&UnityEngine::UIElements::ITextEdition::set_UpdateScrollOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "set_UpdateScrollOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::get_UpdateValueFromText
// Il2CppName: get_UpdateValueFromText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (UnityEngine::UIElements::ITextEdition::*)()>(&UnityEngine::UIElements::ITextEdition::get_UpdateValueFromText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "get_UpdateValueFromText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::set_UpdateValueFromText
// Il2CppName: set_UpdateValueFromText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)(::System::Action*)>(&UnityEngine::UIElements::ITextEdition::set_UpdateValueFromText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "set_UpdateValueFromText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::get_UpdateTextFromValue
// Il2CppName: get_UpdateTextFromValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (UnityEngine::UIElements::ITextEdition::*)()>(&UnityEngine::UIElements::ITextEdition::get_UpdateTextFromValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "get_UpdateTextFromValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::set_UpdateTextFromValue
// Il2CppName: set_UpdateTextFromValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)(::System::Action*)>(&UnityEngine::UIElements::ITextEdition::set_UpdateTextFromValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "set_UpdateTextFromValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::get_MoveFocusToCompositeRoot
// Il2CppName: get_MoveFocusToCompositeRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (UnityEngine::UIElements::ITextEdition::*)()>(&UnityEngine::UIElements::ITextEdition::get_MoveFocusToCompositeRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "get_MoveFocusToCompositeRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::set_MoveFocusToCompositeRoot
// Il2CppName: set_MoveFocusToCompositeRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)(::System::Action*)>(&UnityEngine::UIElements::ITextEdition::set_MoveFocusToCompositeRoot)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "set_MoveFocusToCompositeRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::UpdateText
// Il2CppName: UpdateText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)(::StringW)>(&UnityEngine::UIElements::ITextEdition::UpdateText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "UpdateText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::CullString
// Il2CppName: CullString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::ITextEdition::*)(::StringW)>(&UnityEngine::UIElements::ITextEdition::CullString)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "CullString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::set_maskChar
// Il2CppName: set_maskChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)(::Il2CppChar)>(&UnityEngine::UIElements::ITextEdition::set_maskChar)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "set_maskChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::get_isPassword
// Il2CppName: get_isPassword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ITextEdition::*)()>(&UnityEngine::UIElements::ITextEdition::get_isPassword)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "get_isPassword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::set_isPassword
// Il2CppName: set_isPassword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)(bool)>(&UnityEngine::UIElements::ITextEdition::set_isPassword)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "set_isPassword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::get_autoCorrection
// Il2CppName: get_autoCorrection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ITextEdition::*)()>(&UnityEngine::UIElements::ITextEdition::get_autoCorrection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "get_autoCorrection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::set_autoCorrection
// Il2CppName: set_autoCorrection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)(bool)>(&UnityEngine::UIElements::ITextEdition::set_autoCorrection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "set_autoCorrection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::get_hideMobileInput
// Il2CppName: get_hideMobileInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ITextEdition::*)()>(&UnityEngine::UIElements::ITextEdition::get_hideMobileInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "get_hideMobileInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::set_hideMobileInput
// Il2CppName: set_hideMobileInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)(bool)>(&UnityEngine::UIElements::ITextEdition::set_hideMobileInput)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "set_hideMobileInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::get_keyboardType
// Il2CppName: get_keyboardType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TouchScreenKeyboardType (UnityEngine::UIElements::ITextEdition::*)()>(&UnityEngine::UIElements::ITextEdition::get_keyboardType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "get_keyboardType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ITextEdition::set_keyboardType
// Il2CppName: set_keyboardType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ITextEdition::*)(::UnityEngine::TouchScreenKeyboardType)>(&UnityEngine::UIElements::ITextEdition::set_keyboardType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "TouchScreenKeyboardType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ITextEdition*), "set_keyboardType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
