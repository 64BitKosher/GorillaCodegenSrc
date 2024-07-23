// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.CallbackPhase
#include "UnityEngine/UIElements/CallbackPhase.hpp"
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
  // Forward declaring type: EventBase
  class EventBase;
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
  // Forward declaring type: EventCallbackFunctorBase
  class EventCallbackFunctorBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::EventCallbackFunctorBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventCallbackFunctorBase*, "UnityEngine.UIElements", "EventCallbackFunctorBase");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.EventCallbackFunctorBase
  // [TokenAttribute] Offset: FFFFFFFF
  class EventCallbackFunctorBase : public ::Il2CppObject {
    public:
    public:
    // private readonly UnityEngine.UIElements.CallbackPhase <phase>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::UIElements::CallbackPhase phase;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::CallbackPhase) == 0x4);
    // private readonly UnityEngine.UIElements.InvokePolicy <invokePolicy>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    ::UnityEngine::UIElements::InvokePolicy invokePolicy;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::InvokePolicy) == 0x4);
    public:
    // Get instance field reference: private readonly UnityEngine.UIElements.CallbackPhase <phase>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::CallbackPhase& dyn_$phase$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.UIElements.InvokePolicy <invokePolicy>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::InvokePolicy& dyn_$invokePolicy$k__BackingField();
    // public UnityEngine.UIElements.CallbackPhase get_phase()
    // Offset: 0x564A4B4
    ::UnityEngine::UIElements::CallbackPhase get_phase();
    // public UnityEngine.UIElements.InvokePolicy get_invokePolicy()
    // Offset: 0x564A4BC
    ::UnityEngine::UIElements::InvokePolicy get_invokePolicy();
    // protected System.Void .ctor(UnityEngine.UIElements.CallbackPhase phase, UnityEngine.UIElements.InvokePolicy invokePolicy)
    // Offset: 0x564A4C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventCallbackFunctorBase* New_ctor(::UnityEngine::UIElements::CallbackPhase phase, ::UnityEngine::UIElements::InvokePolicy invokePolicy) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::EventCallbackFunctorBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventCallbackFunctorBase*, creationType>(phase, invokePolicy)));
    }
    // public System.Void Invoke(UnityEngine.UIElements.EventBase evt, UnityEngine.UIElements.PropagationPhase propagationPhase)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Invoke(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::PropagationPhase propagationPhase);
    // public System.Boolean IsEquivalentTo(System.Int64 eventTypeId, System.Delegate callback, UnityEngine.UIElements.CallbackPhase phase)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsEquivalentTo(int64_t eventTypeId, ::System::Delegate* callback, ::UnityEngine::UIElements::CallbackPhase phase);
    // protected System.Boolean PhaseMatches(UnityEngine.UIElements.PropagationPhase propagationPhase)
    // Offset: 0x564A4F0
    bool PhaseMatches(::UnityEngine::UIElements::PropagationPhase propagationPhase);
  }; // UnityEngine.UIElements.EventCallbackFunctorBase
  #pragma pack(pop)
  static check_size<sizeof(EventCallbackFunctorBase), 20 + sizeof(::UnityEngine::UIElements::InvokePolicy)> __UnityEngine_UIElements_EventCallbackFunctorBaseSizeCheck;
  static_assert(sizeof(EventCallbackFunctorBase) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackFunctorBase::get_phase
// Il2CppName: get_phase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::CallbackPhase (UnityEngine::UIElements::EventCallbackFunctorBase::*)()>(&UnityEngine::UIElements::EventCallbackFunctorBase::get_phase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackFunctorBase*), "get_phase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackFunctorBase::get_invokePolicy
// Il2CppName: get_invokePolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::InvokePolicy (UnityEngine::UIElements::EventCallbackFunctorBase::*)()>(&UnityEngine::UIElements::EventCallbackFunctorBase::get_invokePolicy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackFunctorBase*), "get_invokePolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackFunctorBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackFunctorBase::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::EventCallbackFunctorBase::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::PropagationPhase)>(&UnityEngine::UIElements::EventCallbackFunctorBase::Invoke)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    static auto* propagationPhase = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PropagationPhase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackFunctorBase*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt, propagationPhase});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackFunctorBase::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::EventCallbackFunctorBase::*)(int64_t, ::System::Delegate*, ::UnityEngine::UIElements::CallbackPhase)>(&UnityEngine::UIElements::EventCallbackFunctorBase::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* eventTypeId = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    static auto* phase = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "CallbackPhase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackFunctorBase*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventTypeId, callback, phase});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackFunctorBase::PhaseMatches
// Il2CppName: PhaseMatches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::EventCallbackFunctorBase::*)(::UnityEngine::UIElements::PropagationPhase)>(&UnityEngine::UIElements::EventCallbackFunctorBase::PhaseMatches)> {
  static const MethodInfo* get() {
    static auto* propagationPhase = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PropagationPhase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackFunctorBase*), "PhaseMatches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propagationPhase});
  }
};
