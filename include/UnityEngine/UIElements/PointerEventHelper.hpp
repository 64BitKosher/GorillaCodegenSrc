// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: EventBase
  class EventBase;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: EventType
  struct EventType;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: EventModifiers
  struct EventModifiers;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: PointerEventHelper
  class PointerEventHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::PointerEventHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerEventHelper*, "UnityEngine.UIElements", "PointerEventHelper");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.PointerEventHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class PointerEventHelper : public ::Il2CppObject {
    public:
    // static public UnityEngine.UIElements.EventBase GetPooled(UnityEngine.EventType eventType, UnityEngine.Vector3 mousePosition, UnityEngine.Vector2 delta, System.Int32 button, System.Int32 clickCount, UnityEngine.EventModifiers modifiers)
    // Offset: 0x5654954
    static ::UnityEngine::UIElements::EventBase* GetPooled(::UnityEngine::EventType eventType, ::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector2 delta, int button, int clickCount, ::UnityEngine::EventModifiers modifiers);
  }; // UnityEngine.UIElements.PointerEventHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerEventHelper::GetPooled
// Il2CppName: GetPooled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (*)(::UnityEngine::EventType, ::UnityEngine::Vector3, ::UnityEngine::Vector2, int, int, ::UnityEngine::EventModifiers)>(&UnityEngine::UIElements::PointerEventHelper::GetPooled)> {
  static const MethodInfo* get() {
    static auto* eventType = &::il2cpp_utils::GetClassFromName("UnityEngine", "EventType")->byval_arg;
    static auto* mousePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* delta = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* button = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* clickCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* modifiers = &::il2cpp_utils::GetClassFromName("UnityEngine", "EventModifiers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerEventHelper*), "GetPooled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventType, mousePosition, delta, button, clickCount, modifiers});
  }
};
