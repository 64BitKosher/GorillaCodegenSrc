// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.VisualElement
#include "UnityEngine/UIElements/VisualElement.hpp"
// Including type: UnityEngine.UIElements.HelpBoxMessageType
#include "UnityEngine/UIElements/HelpBoxMessageType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Label
  class Label;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: HelpBox
  class HelpBox;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::HelpBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::HelpBox*, "UnityEngine.UIElements", "HelpBox");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.HelpBox
  // [TokenAttribute] Offset: FFFFFFFF
  class HelpBox : public ::UnityEngine::UIElements::VisualElement {
    public:
    // Nested type: ::UnityEngine::UIElements::HelpBox::UxmlFactory
    class UxmlFactory;
    // Nested type: ::UnityEngine::UIElements::HelpBox::UxmlTraits
    class UxmlTraits;
    public:
    // private UnityEngine.UIElements.HelpBoxMessageType m_HelpBoxMessageType
    // Size: 0x4
    // Offset: 0x3C0
    ::UnityEngine::UIElements::HelpBoxMessageType m_HelpBoxMessageType;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::HelpBoxMessageType) == 0x4);
    // private UnityEngine.UIElements.VisualElement m_Icon
    // Size: 0x8
    // Offset: 0x3C8
    ::UnityEngine::UIElements::VisualElement* m_Icon;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private System.String m_IconClass
    // Size: 0x8
    // Offset: 0x3D0
    ::StringW m_IconClass;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.UIElements.Label m_Label
    // Size: 0x8
    // Offset: 0x3D8
    ::UnityEngine::UIElements::Label* m_Label;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Label*) == 0x8);
    public:
    // Get static field: static public readonly System.String ussClassName
    static ::StringW _get_ussClassName();
    // Set static field: static public readonly System.String ussClassName
    static void _set_ussClassName(::StringW value);
    // Get static field: static public readonly System.String labelUssClassName
    static ::StringW _get_labelUssClassName();
    // Set static field: static public readonly System.String labelUssClassName
    static void _set_labelUssClassName(::StringW value);
    // Get static field: static public readonly System.String iconUssClassName
    static ::StringW _get_iconUssClassName();
    // Set static field: static public readonly System.String iconUssClassName
    static void _set_iconUssClassName(::StringW value);
    // Get static field: static public readonly System.String iconInfoUssClassName
    static ::StringW _get_iconInfoUssClassName();
    // Set static field: static public readonly System.String iconInfoUssClassName
    static void _set_iconInfoUssClassName(::StringW value);
    // Get static field: static public readonly System.String iconwarningUssClassName
    static ::StringW _get_iconwarningUssClassName();
    // Set static field: static public readonly System.String iconwarningUssClassName
    static void _set_iconwarningUssClassName(::StringW value);
    // Get static field: static public readonly System.String iconErrorUssClassName
    static ::StringW _get_iconErrorUssClassName();
    // Set static field: static public readonly System.String iconErrorUssClassName
    static void _set_iconErrorUssClassName(::StringW value);
    // Get instance field reference: private UnityEngine.UIElements.HelpBoxMessageType m_HelpBoxMessageType
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::HelpBoxMessageType& dyn_m_HelpBoxMessageType();
    // Get instance field reference: private UnityEngine.UIElements.VisualElement m_Icon
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_Icon();
    // Get instance field reference: private System.String m_IconClass
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_IconClass();
    // Get instance field reference: private UnityEngine.UIElements.Label m_Label
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Label*& dyn_m_Label();
    // public System.Void set_text(System.String value)
    // Offset: 0x55BC02C
    void set_text(::StringW value);
    // public System.Void set_messageType(UnityEngine.UIElements.HelpBoxMessageType value)
    // Offset: 0x55BC050
    void set_messageType(::UnityEngine::UIElements::HelpBoxMessageType value);
    // public System.Void .ctor(System.String text, UnityEngine.UIElements.HelpBoxMessageType messageType)
    // Offset: 0x55BC178
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelpBox* New_ctor(::StringW text, ::UnityEngine::UIElements::HelpBoxMessageType messageType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::HelpBox::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelpBox*, creationType>(text, messageType)));
    }
    // private System.String GetIconClass(UnityEngine.UIElements.HelpBoxMessageType messageType)
    // Offset: 0x55BC2E0
    ::StringW GetIconClass(::UnityEngine::UIElements::HelpBoxMessageType messageType);
    // private System.Void UpdateIcon(UnityEngine.UIElements.HelpBoxMessageType messageType)
    // Offset: 0x55BC068
    void UpdateIcon(::UnityEngine::UIElements::HelpBoxMessageType messageType);
    // public System.Void .ctor()
    // Offset: 0x55BC124
    // Implemented from: UnityEngine.UIElements.VisualElement
    // Base method: System.Void VisualElement::.ctor()
    // Base method: System.Void Focusable::.ctor()
    // Base method: System.Void CallbackEventHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelpBox* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::HelpBox::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelpBox*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x55BC3A8
    // Implemented from: UnityEngine.UIElements.VisualElement
    // Base method: System.Void VisualElement::.cctor()
    static void _cctor();
  }; // UnityEngine.UIElements.HelpBox
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::HelpBox::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::HelpBox::*)(::StringW)>(&UnityEngine::UIElements::HelpBox::set_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::HelpBox*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::HelpBox::set_messageType
// Il2CppName: set_messageType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::HelpBox::*)(::UnityEngine::UIElements::HelpBoxMessageType)>(&UnityEngine::UIElements::HelpBox::set_messageType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "HelpBoxMessageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::HelpBox*), "set_messageType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::HelpBox::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::HelpBox::GetIconClass
// Il2CppName: GetIconClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::HelpBox::*)(::UnityEngine::UIElements::HelpBoxMessageType)>(&UnityEngine::UIElements::HelpBox::GetIconClass)> {
  static const MethodInfo* get() {
    static auto* messageType = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "HelpBoxMessageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::HelpBox*), "GetIconClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageType});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::HelpBox::UpdateIcon
// Il2CppName: UpdateIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::HelpBox::*)(::UnityEngine::UIElements::HelpBoxMessageType)>(&UnityEngine::UIElements::HelpBox::UpdateIcon)> {
  static const MethodInfo* get() {
    static auto* messageType = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "HelpBoxMessageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::HelpBox*), "UpdateIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageType});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::HelpBox::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::HelpBox::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::HelpBox::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::HelpBox*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
