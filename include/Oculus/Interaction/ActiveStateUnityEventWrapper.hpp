// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IActiveState
  class IActiveState;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: ActiveStateUnityEventWrapper
  class ActiveStateUnityEventWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::ActiveStateUnityEventWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::ActiveStateUnityEventWrapper*, "Oculus.Interaction", "ActiveStateUnityEventWrapper");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x43
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.ActiveStateUnityEventWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class ActiveStateUnityEventWrapper : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Object _activeState
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* activeState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.IActiveState ActiveState
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::IActiveState* ActiveState;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IActiveState*) == 0x8);
    // private UnityEngine.Events.UnityEvent _whenActivated
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Events::UnityEvent* whenActivated;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private UnityEngine.Events.UnityEvent _whenDeactivated
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Events::UnityEvent* whenDeactivated;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private System.Boolean _emitOnFirstUpdate
    // Size: 0x1
    // Offset: 0x40
    bool emitOnFirstUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _emittedOnFirstUpdate
    // Size: 0x1
    // Offset: 0x41
    bool emittedOnFirstUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _savedState
    // Size: 0x1
    // Offset: 0x42
    bool savedState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Object _activeState
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__activeState();
    // Get instance field reference: private Oculus.Interaction.IActiveState ActiveState
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IActiveState*& dyn_ActiveState();
    // Get instance field reference: private UnityEngine.Events.UnityEvent _whenActivated
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn__whenActivated();
    // Get instance field reference: private UnityEngine.Events.UnityEvent _whenDeactivated
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn__whenDeactivated();
    // Get instance field reference: private System.Boolean _emitOnFirstUpdate
    [[deprecated("Use field access instead!")]] bool& dyn__emitOnFirstUpdate();
    // Get instance field reference: private System.Boolean _emittedOnFirstUpdate
    [[deprecated("Use field access instead!")]] bool& dyn__emittedOnFirstUpdate();
    // Get instance field reference: private System.Boolean _savedState
    [[deprecated("Use field access instead!")]] bool& dyn__savedState();
    // public UnityEngine.Events.UnityEvent get_WhenActivated()
    // Offset: 0x47D50F8
    ::UnityEngine::Events::UnityEvent* get_WhenActivated();
    // public UnityEngine.Events.UnityEvent get_WhenDeactivated()
    // Offset: 0x47D5100
    ::UnityEngine::Events::UnityEvent* get_WhenDeactivated();
    // protected System.Void Awake()
    // Offset: 0x47D5108
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47D5170
    void Start();
    // protected System.Void Update()
    // Offset: 0x47D5178
    void Update();
    // private System.Void InvokeEvent()
    // Offset: 0x47D52D0
    void InvokeEvent();
    // public System.Void InjectAllActiveStateUnityEventWrapper(Oculus.Interaction.IActiveState activeState)
    // Offset: 0x47D52FC
    void InjectAllActiveStateUnityEventWrapper(::Oculus::Interaction::IActiveState* activeState);
    // public System.Void InjectActiveState(Oculus.Interaction.IActiveState activeState)
    // Offset: 0x47D5300
    void InjectActiveState(::Oculus::Interaction::IActiveState* activeState);
    // public System.Void InjectOptionalEmitOnFirstUpdate(System.Boolean emitOnFirstUpdate)
    // Offset: 0x47D53D0
    void InjectOptionalEmitOnFirstUpdate(bool emitOnFirstUpdate);
    // public System.Void InjectOptionalWhenActivated(UnityEngine.Events.UnityEvent whenActivated)
    // Offset: 0x47D53DC
    void InjectOptionalWhenActivated(::UnityEngine::Events::UnityEvent* whenActivated);
    // public System.Void InjectOptionalWhenDeactivated(UnityEngine.Events.UnityEvent whenDeactivated)
    // Offset: 0x47D53E4
    void InjectOptionalWhenDeactivated(::UnityEngine::Events::UnityEvent* whenDeactivated);
    // public System.Void .ctor()
    // Offset: 0x47D53EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActiveStateUnityEventWrapper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::ActiveStateUnityEventWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActiveStateUnityEventWrapper*, creationType>()));
    }
  }; // Oculus.Interaction.ActiveStateUnityEventWrapper
  #pragma pack(pop)
  static check_size<sizeof(ActiveStateUnityEventWrapper), 66 + sizeof(bool)> __Oculus_Interaction_ActiveStateUnityEventWrapperSizeCheck;
  static_assert(sizeof(ActiveStateUnityEventWrapper) == 0x43);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateUnityEventWrapper::get_WhenActivated
// Il2CppName: get_WhenActivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (Oculus::Interaction::ActiveStateUnityEventWrapper::*)()>(&Oculus::Interaction::ActiveStateUnityEventWrapper::get_WhenActivated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateUnityEventWrapper*), "get_WhenActivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateUnityEventWrapper::get_WhenDeactivated
// Il2CppName: get_WhenDeactivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (Oculus::Interaction::ActiveStateUnityEventWrapper::*)()>(&Oculus::Interaction::ActiveStateUnityEventWrapper::get_WhenDeactivated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateUnityEventWrapper*), "get_WhenDeactivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateUnityEventWrapper::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateUnityEventWrapper::*)()>(&Oculus::Interaction::ActiveStateUnityEventWrapper::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateUnityEventWrapper*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateUnityEventWrapper::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateUnityEventWrapper::*)()>(&Oculus::Interaction::ActiveStateUnityEventWrapper::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateUnityEventWrapper*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateUnityEventWrapper::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateUnityEventWrapper::*)()>(&Oculus::Interaction::ActiveStateUnityEventWrapper::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateUnityEventWrapper*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateUnityEventWrapper::InvokeEvent
// Il2CppName: InvokeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateUnityEventWrapper::*)()>(&Oculus::Interaction::ActiveStateUnityEventWrapper::InvokeEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateUnityEventWrapper*), "InvokeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateUnityEventWrapper::InjectAllActiveStateUnityEventWrapper
// Il2CppName: InjectAllActiveStateUnityEventWrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateUnityEventWrapper::*)(::Oculus::Interaction::IActiveState*)>(&Oculus::Interaction::ActiveStateUnityEventWrapper::InjectAllActiveStateUnityEventWrapper)> {
  static const MethodInfo* get() {
    static auto* activeState = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IActiveState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateUnityEventWrapper*), "InjectAllActiveStateUnityEventWrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activeState});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateUnityEventWrapper::InjectActiveState
// Il2CppName: InjectActiveState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateUnityEventWrapper::*)(::Oculus::Interaction::IActiveState*)>(&Oculus::Interaction::ActiveStateUnityEventWrapper::InjectActiveState)> {
  static const MethodInfo* get() {
    static auto* activeState = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IActiveState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateUnityEventWrapper*), "InjectActiveState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activeState});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateUnityEventWrapper::InjectOptionalEmitOnFirstUpdate
// Il2CppName: InjectOptionalEmitOnFirstUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateUnityEventWrapper::*)(bool)>(&Oculus::Interaction::ActiveStateUnityEventWrapper::InjectOptionalEmitOnFirstUpdate)> {
  static const MethodInfo* get() {
    static auto* emitOnFirstUpdate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateUnityEventWrapper*), "InjectOptionalEmitOnFirstUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{emitOnFirstUpdate});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateUnityEventWrapper::InjectOptionalWhenActivated
// Il2CppName: InjectOptionalWhenActivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateUnityEventWrapper::*)(::UnityEngine::Events::UnityEvent*)>(&Oculus::Interaction::ActiveStateUnityEventWrapper::InjectOptionalWhenActivated)> {
  static const MethodInfo* get() {
    static auto* whenActivated = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateUnityEventWrapper*), "InjectOptionalWhenActivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{whenActivated});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateUnityEventWrapper::InjectOptionalWhenDeactivated
// Il2CppName: InjectOptionalWhenDeactivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateUnityEventWrapper::*)(::UnityEngine::Events::UnityEvent*)>(&Oculus::Interaction::ActiveStateUnityEventWrapper::InjectOptionalWhenDeactivated)> {
  static const MethodInfo* get() {
    static auto* whenDeactivated = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateUnityEventWrapper*), "InjectOptionalWhenDeactivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{whenDeactivated});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateUnityEventWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
