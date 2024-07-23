// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: EventModifiers
  struct EventModifiers;
  // Forward declaring type: KeyCode
  struct KeyCode;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IKeyboardEvent
  class IKeyboardEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::IKeyboardEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IKeyboardEvent*, "UnityEngine.UIElements", "IKeyboardEvent");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.IKeyboardEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class IKeyboardEvent {
    public:
    // public UnityEngine.EventModifiers get_modifiers()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::EventModifiers get_modifiers();
    // public System.Char get_character()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppChar get_character();
    // public UnityEngine.KeyCode get_keyCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::KeyCode get_keyCode();
  }; // UnityEngine.UIElements.IKeyboardEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::IKeyboardEvent::get_modifiers
// Il2CppName: get_modifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventModifiers (UnityEngine::UIElements::IKeyboardEvent::*)()>(&UnityEngine::UIElements::IKeyboardEvent::get_modifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IKeyboardEvent*), "get_modifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IKeyboardEvent::get_character
// Il2CppName: get_character
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (UnityEngine::UIElements::IKeyboardEvent::*)()>(&UnityEngine::UIElements::IKeyboardEvent::get_character)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IKeyboardEvent*), "get_character", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IKeyboardEvent::get_keyCode
// Il2CppName: get_keyCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::KeyCode (UnityEngine::UIElements::IKeyboardEvent::*)()>(&UnityEngine::UIElements::IKeyboardEvent::get_keyCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IKeyboardEvent*), "get_keyCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};