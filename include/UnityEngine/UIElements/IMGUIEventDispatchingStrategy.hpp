// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.IEventDispatchingStrategy
#include "UnityEngine/UIElements/IEventDispatchingStrategy.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: IMGUIEventDispatchingStrategy
  class IMGUIEventDispatchingStrategy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::IMGUIEventDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMGUIEventDispatchingStrategy*, "UnityEngine.UIElements", "IMGUIEventDispatchingStrategy");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.IMGUIEventDispatchingStrategy
  // [TokenAttribute] Offset: FFFFFFFF
  class IMGUIEventDispatchingStrategy : public ::Il2CppObject/*, public ::UnityEngine::UIElements::IEventDispatchingStrategy*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::UIElements::IEventDispatchingStrategy
    operator ::UnityEngine::UIElements::IEventDispatchingStrategy() noexcept {
      return *reinterpret_cast<::UnityEngine::UIElements::IEventDispatchingStrategy*>(this);
    }
    // public System.Boolean CanDispatchEvent(UnityEngine.UIElements.EventBase evt)
    // Offset: 0x564C7DC
    bool CanDispatchEvent(::UnityEngine::UIElements::EventBase* evt);
    // public System.Void DispatchEvent(UnityEngine.UIElements.EventBase evt, UnityEngine.UIElements.IPanel panel)
    // Offset: 0x564C854
    void DispatchEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel);
    // public System.Void .ctor()
    // Offset: 0x5646740
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IMGUIEventDispatchingStrategy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::IMGUIEventDispatchingStrategy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IMGUIEventDispatchingStrategy*, creationType>()));
    }
  }; // UnityEngine.UIElements.IMGUIEventDispatchingStrategy
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIEventDispatchingStrategy::CanDispatchEvent
// Il2CppName: CanDispatchEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::IMGUIEventDispatchingStrategy::*)(::UnityEngine::UIElements::EventBase*)>(&UnityEngine::UIElements::IMGUIEventDispatchingStrategy::CanDispatchEvent)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIEventDispatchingStrategy*), "CanDispatchEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIEventDispatchingStrategy::DispatchEvent
// Il2CppName: DispatchEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IMGUIEventDispatchingStrategy::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::IMGUIEventDispatchingStrategy::DispatchEvent)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIEventDispatchingStrategy*), "DispatchEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt, panel});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIEventDispatchingStrategy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
