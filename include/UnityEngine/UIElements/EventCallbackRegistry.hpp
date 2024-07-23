// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.TrickleDown
#include "UnityEngine/UIElements/TrickleDown.hpp"
// Including type: UnityEngine.UIElements.InvokePolicy
#include "UnityEngine/UIElements/InvokePolicy.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: EventCallbackList
  class EventCallbackList;
  // Forward declaring type: EventCallbackListPool
  class EventCallbackListPool;
  // Forward declaring type: EventBase
  class EventBase;
  // Forward declaring type: EventBase`1<T>
  template<typename T>
  class EventBase_1;
  // Forward declaring type: EventCallback`1<TEventType>
  template<typename TEventType>
  class EventCallback_1;
  // Forward declaring type: PropagationPhase
  struct PropagationPhase;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: EventCallbackRegistry
  class EventCallbackRegistry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::EventCallbackRegistry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventCallbackRegistry*, "UnityEngine.UIElements", "EventCallbackRegistry");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.EventCallbackRegistry
  // [TokenAttribute] Offset: FFFFFFFF
  class EventCallbackRegistry : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.UIElements.EventCallbackList m_Callbacks
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UIElements::EventCallbackList* m_Callbacks;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::EventCallbackList*) == 0x8);
    // private UnityEngine.UIElements.EventCallbackList m_TemporaryCallbacks
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UIElements::EventCallbackList* m_TemporaryCallbacks;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::EventCallbackList*) == 0x8);
    // private System.Int32 m_IsInvoking
    // Size: 0x4
    // Offset: 0x20
    int m_IsInvoking;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static private readonly UnityEngine.UIElements.EventCallbackListPool s_ListPool
    static ::UnityEngine::UIElements::EventCallbackListPool* _get_s_ListPool();
    // Set static field: static private readonly UnityEngine.UIElements.EventCallbackListPool s_ListPool
    static void _set_s_ListPool(::UnityEngine::UIElements::EventCallbackListPool* value);
    // Get instance field reference: private UnityEngine.UIElements.EventCallbackList m_Callbacks
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::EventCallbackList*& dyn_m_Callbacks();
    // Get instance field reference: private UnityEngine.UIElements.EventCallbackList m_TemporaryCallbacks
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::EventCallbackList*& dyn_m_TemporaryCallbacks();
    // Get instance field reference: private System.Int32 m_IsInvoking
    [[deprecated("Use field access instead!")]] int& dyn_m_IsInvoking();
    // static private UnityEngine.UIElements.EventCallbackList GetCallbackList(UnityEngine.UIElements.EventCallbackList initializer)
    // Offset: 0x564ADC0
    static ::UnityEngine::UIElements::EventCallbackList* GetCallbackList(::UnityEngine::UIElements::EventCallbackList* initializer);
    // static private System.Void ReleaseCallbackList(UnityEngine.UIElements.EventCallbackList toRelease)
    // Offset: 0x564AE28
    static void ReleaseCallbackList(::UnityEngine::UIElements::EventCallbackList* toRelease);
    // public System.Void .ctor()
    // Offset: 0x564AE90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventCallbackRegistry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::EventCallbackRegistry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventCallbackRegistry*, creationType>()));
    }
    // private UnityEngine.UIElements.EventCallbackList GetCallbackListForWriting()
    // Offset: 0x564AEAC
    ::UnityEngine::UIElements::EventCallbackList* GetCallbackListForWriting();
    // private UnityEngine.UIElements.EventCallbackList GetCallbackListForReading()
    // Offset: 0x564AF88
    ::UnityEngine::UIElements::EventCallbackList* GetCallbackListForReading();
    // private System.Boolean UnregisterCallback(System.Int64 eventTypeId, System.Delegate callback, UnityEngine.UIElements.TrickleDown useTrickleDown)
    // Offset: 0x564AFA4
    bool UnregisterCallback(int64_t eventTypeId, ::System::Delegate* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown);
    // public System.Void RegisterCallback(UnityEngine.UIElements.EventCallback`1<TEventType> callback, UnityEngine.UIElements.TrickleDown useTrickleDown, UnityEngine.UIElements.InvokePolicy invokePolicy)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TEventType>
    void RegisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown, ::UnityEngine::UIElements::InvokePolicy invokePolicy) {
      static_assert(std::is_convertible_v<TEventType, ::UnityEngine::UIElements::EventBase_1<TEventType>*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::EventCallbackRegistry::RegisterCallback");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RegisterCallback", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(useTrickleDown), ::il2cpp_utils::ExtractType(invokePolicy)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, callback, useTrickleDown, invokePolicy);
    }
    // public System.Boolean UnregisterCallback(UnityEngine.UIElements.EventCallback`1<TEventType> callback, UnityEngine.UIElements.TrickleDown useTrickleDown)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TEventType>
    bool UnregisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown) {
      static_assert(std::is_convertible_v<TEventType, ::UnityEngine::UIElements::EventBase_1<TEventType>*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::EventCallbackRegistry::UnregisterCallback");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UnregisterCallback", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(useTrickleDown)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method, callback, useTrickleDown);
    }
    // public System.Void InvokeCallbacks(UnityEngine.UIElements.EventBase evt, UnityEngine.UIElements.PropagationPhase propagationPhase)
    // Offset: 0x564AFF8
    void InvokeCallbacks(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::PropagationPhase propagationPhase);
    // public System.Boolean HasTrickleDownHandlers()
    // Offset: 0x564B1CC
    bool HasTrickleDownHandlers();
    // public System.Boolean HasBubbleHandlers()
    // Offset: 0x564B1EC
    bool HasBubbleHandlers();
    // static private System.Void .cctor()
    // Offset: 0x564B20C
    static void _cctor();
  }; // UnityEngine.UIElements.EventCallbackRegistry
  #pragma pack(pop)
  static check_size<sizeof(EventCallbackRegistry), 32 + sizeof(int)> __UnityEngine_UIElements_EventCallbackRegistrySizeCheck;
  static_assert(sizeof(EventCallbackRegistry) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackRegistry::GetCallbackList
// Il2CppName: GetCallbackList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventCallbackList* (*)(::UnityEngine::UIElements::EventCallbackList*)>(&UnityEngine::UIElements::EventCallbackRegistry::GetCallbackList)> {
  static const MethodInfo* get() {
    static auto* initializer = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventCallbackList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackRegistry*), "GetCallbackList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initializer});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackRegistry::ReleaseCallbackList
// Il2CppName: ReleaseCallbackList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::EventCallbackList*)>(&UnityEngine::UIElements::EventCallbackRegistry::ReleaseCallbackList)> {
  static const MethodInfo* get() {
    static auto* toRelease = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventCallbackList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackRegistry*), "ReleaseCallbackList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toRelease});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackRegistry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackRegistry::GetCallbackListForWriting
// Il2CppName: GetCallbackListForWriting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventCallbackList* (UnityEngine::UIElements::EventCallbackRegistry::*)()>(&UnityEngine::UIElements::EventCallbackRegistry::GetCallbackListForWriting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackRegistry*), "GetCallbackListForWriting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackRegistry::GetCallbackListForReading
// Il2CppName: GetCallbackListForReading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventCallbackList* (UnityEngine::UIElements::EventCallbackRegistry::*)()>(&UnityEngine::UIElements::EventCallbackRegistry::GetCallbackListForReading)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackRegistry*), "GetCallbackListForReading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackRegistry::UnregisterCallback
// Il2CppName: UnregisterCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::EventCallbackRegistry::*)(int64_t, ::System::Delegate*, ::UnityEngine::UIElements::TrickleDown)>(&UnityEngine::UIElements::EventCallbackRegistry::UnregisterCallback)> {
  static const MethodInfo* get() {
    static auto* eventTypeId = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    static auto* useTrickleDown = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "TrickleDown")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackRegistry*), "UnregisterCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventTypeId, callback, useTrickleDown});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackRegistry::RegisterCallback
// Il2CppName: RegisterCallback
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackRegistry::UnregisterCallback
// Il2CppName: UnregisterCallback
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackRegistry::InvokeCallbacks
// Il2CppName: InvokeCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::EventCallbackRegistry::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::PropagationPhase)>(&UnityEngine::UIElements::EventCallbackRegistry::InvokeCallbacks)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    static auto* propagationPhase = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PropagationPhase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackRegistry*), "InvokeCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt, propagationPhase});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackRegistry::HasTrickleDownHandlers
// Il2CppName: HasTrickleDownHandlers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::EventCallbackRegistry::*)()>(&UnityEngine::UIElements::EventCallbackRegistry::HasTrickleDownHandlers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackRegistry*), "HasTrickleDownHandlers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackRegistry::HasBubbleHandlers
// Il2CppName: HasBubbleHandlers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::EventCallbackRegistry::*)()>(&UnityEngine::UIElements::EventCallbackRegistry::HasBubbleHandlers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackRegistry*), "HasBubbleHandlers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackRegistry::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::EventCallbackRegistry::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackRegistry*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
