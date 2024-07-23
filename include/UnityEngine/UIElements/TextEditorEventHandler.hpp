// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TextElement
  class TextElement;
  // Forward declaring type: EventBase
  class EventBase;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextEditingUtilities
  class TextEditingUtilities;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TextEditorEventHandler
  class TextEditorEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::TextEditorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextEditorEventHandler*, "UnityEngine.UIElements", "TextEditorEventHandler");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.TextEditorEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class TextEditorEventHandler : public ::Il2CppObject {
    public:
    public:
    // protected UnityEngine.UIElements.TextElement textElement
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UIElements::TextElement* textElement;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::TextElement*) == 0x8);
    // protected UnityEngine.TextEditingUtilities editingUtilities
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::TextEditingUtilities* editingUtilities;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextEditingUtilities*) == 0x8);
    public:
    // Get instance field reference: protected UnityEngine.UIElements.TextElement textElement
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::TextElement*& dyn_textElement();
    // Get instance field reference: protected UnityEngine.TextEditingUtilities editingUtilities
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextEditingUtilities*& dyn_editingUtilities();
    // protected System.Void .ctor(UnityEngine.UIElements.TextElement textElement, UnityEngine.TextEditingUtilities editingUtilities)
    // Offset: 0x56122F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextEditorEventHandler* New_ctor(::UnityEngine::UIElements::TextElement* textElement, ::UnityEngine::TextEditingUtilities* editingUtilities) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::TextEditorEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextEditorEventHandler*, creationType>(textElement, editingUtilities)));
    }
    // public System.Void ExecuteDefaultActionAtTarget(UnityEngine.UIElements.EventBase evt)
    // Offset: 0x561233C
    void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt);
  }; // UnityEngine.UIElements.TextEditorEventHandler
  #pragma pack(pop)
  static check_size<sizeof(TextEditorEventHandler), 24 + sizeof(::UnityEngine::TextEditingUtilities*)> __UnityEngine_UIElements_TextEditorEventHandlerSizeCheck;
  static_assert(sizeof(TextEditorEventHandler) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::TextEditorEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::TextEditorEventHandler::ExecuteDefaultActionAtTarget
// Il2CppName: ExecuteDefaultActionAtTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextEditorEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(&UnityEngine::UIElements::TextEditorEventHandler::ExecuteDefaultActionAtTarget)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextEditorEventHandler*), "ExecuteDefaultActionAtTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
