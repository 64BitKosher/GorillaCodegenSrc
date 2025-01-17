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
  // Forward declaring type: IInteractorView
  class IInteractorView;
  // Forward declaring type: InteractorStateChangeArgs
  struct InteractorStateChangeArgs;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: InteractorUnityEventWrapper
  class InteractorUnityEventWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::InteractorUnityEventWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::InteractorUnityEventWrapper*, "Oculus.Interaction", "InteractorUnityEventWrapper");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.InteractorUnityEventWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractorUnityEventWrapper : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Object _interactorView
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* interactorView;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.IInteractorView InteractorView
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::IInteractorView* InteractorView;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IInteractorView*) == 0x8);
    // private UnityEngine.Events.UnityEvent _whenEnabled
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Events::UnityEvent* whenEnabled;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private UnityEngine.Events.UnityEvent _whenDisabled
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Events::UnityEvent* whenDisabled;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private UnityEngine.Events.UnityEvent _whenHover
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Events::UnityEvent* whenHover;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private UnityEngine.Events.UnityEvent _whenUnhover
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Events::UnityEvent* whenUnhover;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private UnityEngine.Events.UnityEvent _whenSelect
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Events::UnityEvent* whenSelect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private UnityEngine.Events.UnityEvent _whenUnselect
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Events::UnityEvent* whenUnselect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x60
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Object _interactorView
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__interactorView();
    // Get instance field reference: private Oculus.Interaction.IInteractorView InteractorView
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IInteractorView*& dyn_InteractorView();
    // Get instance field reference: private UnityEngine.Events.UnityEvent _whenEnabled
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn__whenEnabled();
    // Get instance field reference: private UnityEngine.Events.UnityEvent _whenDisabled
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn__whenDisabled();
    // Get instance field reference: private UnityEngine.Events.UnityEvent _whenHover
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn__whenHover();
    // Get instance field reference: private UnityEngine.Events.UnityEvent _whenUnhover
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn__whenUnhover();
    // Get instance field reference: private UnityEngine.Events.UnityEvent _whenSelect
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn__whenSelect();
    // Get instance field reference: private UnityEngine.Events.UnityEvent _whenUnselect
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn__whenUnselect();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // public UnityEngine.Events.UnityEvent get_WhenDisabled()
    // Offset: 0x47D5DB8
    ::UnityEngine::Events::UnityEvent* get_WhenDisabled();
    // public UnityEngine.Events.UnityEvent get_WhenEnabled()
    // Offset: 0x47D5DC0
    ::UnityEngine::Events::UnityEvent* get_WhenEnabled();
    // public UnityEngine.Events.UnityEvent get_WhenHover()
    // Offset: 0x47D5DC8
    ::UnityEngine::Events::UnityEvent* get_WhenHover();
    // public UnityEngine.Events.UnityEvent get_WhenUnhover()
    // Offset: 0x47D5DD0
    ::UnityEngine::Events::UnityEvent* get_WhenUnhover();
    // public UnityEngine.Events.UnityEvent get_WhenSelect()
    // Offset: 0x47D5DD8
    ::UnityEngine::Events::UnityEvent* get_WhenSelect();
    // public UnityEngine.Events.UnityEvent get_WhenUnselect()
    // Offset: 0x47D5DE0
    ::UnityEngine::Events::UnityEvent* get_WhenUnselect();
    // protected System.Void Awake()
    // Offset: 0x47D5DE8
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47D5E50
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x47D5E88
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x47D5F88
    void OnDisable();
    // private System.Void HandleStateChanged(Oculus.Interaction.InteractorStateChangeArgs args)
    // Offset: 0x47D6088
    void HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs args);
    // public System.Void InjectAllInteractorUnityEventWrapper(Oculus.Interaction.IInteractorView interactorView)
    // Offset: 0x47D612C
    void InjectAllInteractorUnityEventWrapper(::Oculus::Interaction::IInteractorView* interactorView);
    // public System.Void InjectInteractorView(Oculus.Interaction.IInteractorView interactorView)
    // Offset: 0x47D6130
    void InjectInteractorView(::Oculus::Interaction::IInteractorView* interactorView);
    // public System.Void .ctor()
    // Offset: 0x47D6200
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractorUnityEventWrapper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::InteractorUnityEventWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractorUnityEventWrapper*, creationType>()));
    }
  }; // Oculus.Interaction.InteractorUnityEventWrapper
  #pragma pack(pop)
  static check_size<sizeof(InteractorUnityEventWrapper), 96 + sizeof(bool)> __Oculus_Interaction_InteractorUnityEventWrapperSizeCheck;
  static_assert(sizeof(InteractorUnityEventWrapper) == 0x61);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::InteractorUnityEventWrapper::get_WhenDisabled
// Il2CppName: get_WhenDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (Oculus::Interaction::InteractorUnityEventWrapper::*)()>(&Oculus::Interaction::InteractorUnityEventWrapper::get_WhenDisabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::InteractorUnityEventWrapper*), "get_WhenDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::InteractorUnityEventWrapper::get_WhenEnabled
// Il2CppName: get_WhenEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (Oculus::Interaction::InteractorUnityEventWrapper::*)()>(&Oculus::Interaction::InteractorUnityEventWrapper::get_WhenEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::InteractorUnityEventWrapper*), "get_WhenEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::InteractorUnityEventWrapper::get_WhenHover
// Il2CppName: get_WhenHover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (Oculus::Interaction::InteractorUnityEventWrapper::*)()>(&Oculus::Interaction::InteractorUnityEventWrapper::get_WhenHover)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::InteractorUnityEventWrapper*), "get_WhenHover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::InteractorUnityEventWrapper::get_WhenUnhover
// Il2CppName: get_WhenUnhover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (Oculus::Interaction::InteractorUnityEventWrapper::*)()>(&Oculus::Interaction::InteractorUnityEventWrapper::get_WhenUnhover)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::InteractorUnityEventWrapper*), "get_WhenUnhover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::InteractorUnityEventWrapper::get_WhenSelect
// Il2CppName: get_WhenSelect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (Oculus::Interaction::InteractorUnityEventWrapper::*)()>(&Oculus::Interaction::InteractorUnityEventWrapper::get_WhenSelect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::InteractorUnityEventWrapper*), "get_WhenSelect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::InteractorUnityEventWrapper::get_WhenUnselect
// Il2CppName: get_WhenUnselect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (Oculus::Interaction::InteractorUnityEventWrapper::*)()>(&Oculus::Interaction::InteractorUnityEventWrapper::get_WhenUnselect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::InteractorUnityEventWrapper*), "get_WhenUnselect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::InteractorUnityEventWrapper::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::InteractorUnityEventWrapper::*)()>(&Oculus::Interaction::InteractorUnityEventWrapper::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::InteractorUnityEventWrapper*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::InteractorUnityEventWrapper::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::InteractorUnityEventWrapper::*)()>(&Oculus::Interaction::InteractorUnityEventWrapper::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::InteractorUnityEventWrapper*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::InteractorUnityEventWrapper::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::InteractorUnityEventWrapper::*)()>(&Oculus::Interaction::InteractorUnityEventWrapper::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::InteractorUnityEventWrapper*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::InteractorUnityEventWrapper::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::InteractorUnityEventWrapper::*)()>(&Oculus::Interaction::InteractorUnityEventWrapper::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::InteractorUnityEventWrapper*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::InteractorUnityEventWrapper::HandleStateChanged
// Il2CppName: HandleStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::InteractorUnityEventWrapper::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&Oculus::Interaction::InteractorUnityEventWrapper::HandleStateChanged)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "InteractorStateChangeArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::InteractorUnityEventWrapper*), "HandleStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::InteractorUnityEventWrapper::InjectAllInteractorUnityEventWrapper
// Il2CppName: InjectAllInteractorUnityEventWrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::InteractorUnityEventWrapper::*)(::Oculus::Interaction::IInteractorView*)>(&Oculus::Interaction::InteractorUnityEventWrapper::InjectAllInteractorUnityEventWrapper)> {
  static const MethodInfo* get() {
    static auto* interactorView = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IInteractorView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::InteractorUnityEventWrapper*), "InjectAllInteractorUnityEventWrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactorView});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::InteractorUnityEventWrapper::InjectInteractorView
// Il2CppName: InjectInteractorView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::InteractorUnityEventWrapper::*)(::Oculus::Interaction::IInteractorView*)>(&Oculus::Interaction::InteractorUnityEventWrapper::InjectInteractorView)> {
  static const MethodInfo* get() {
    static auto* interactorView = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IInteractorView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::InteractorUnityEventWrapper*), "InjectInteractorView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactorView});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::InteractorUnityEventWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
