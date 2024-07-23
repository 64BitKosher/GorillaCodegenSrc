// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: EventBase
  class EventBase;
  // Forward declaring type: IPanel
  class IPanel;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IEventDispatchingStrategy
  class IEventDispatchingStrategy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::IEventDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IEventDispatchingStrategy*, "UnityEngine.UIElements", "IEventDispatchingStrategy");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.IEventDispatchingStrategy
  // [TokenAttribute] Offset: FFFFFFFF
  class IEventDispatchingStrategy {
    public:
    // public System.Boolean CanDispatchEvent(UnityEngine.UIElements.EventBase evt)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool CanDispatchEvent(::UnityEngine::UIElements::EventBase* evt);
    // public System.Void DispatchEvent(UnityEngine.UIElements.EventBase evt, UnityEngine.UIElements.IPanel panel)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void DispatchEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel);
  }; // UnityEngine.UIElements.IEventDispatchingStrategy
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::IEventDispatchingStrategy::CanDispatchEvent
// Il2CppName: CanDispatchEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::IEventDispatchingStrategy::*)(::UnityEngine::UIElements::EventBase*)>(&UnityEngine::UIElements::IEventDispatchingStrategy::CanDispatchEvent)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IEventDispatchingStrategy*), "CanDispatchEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IEventDispatchingStrategy::DispatchEvent
// Il2CppName: DispatchEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IEventDispatchingStrategy::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::IEventDispatchingStrategy::DispatchEvent)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IEventDispatchingStrategy*), "DispatchEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt, panel});
  }
};
