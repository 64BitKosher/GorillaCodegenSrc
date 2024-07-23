// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.EventSystems.RaycastResult
#include "UnityEngine/EventSystems/RaycastResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: AxisEventData
  class AxisEventData;
  // Forward declaring type: EventSystem
  class EventSystem;
  // Forward declaring type: BaseEventData
  class BaseEventData;
  // Forward declaring type: BaseInput
  class BaseInput;
  // Forward declaring type: MoveDirection
  struct MoveDirection;
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseInputModule
  class BaseInputModule;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::BaseInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::BaseInputModule*, "UnityEngine.EventSystems", "BaseInputModule");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.BaseInputModule
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class BaseInputModule : public ::UnityEngine::EventSystems::UIBehaviour {
    public:
    public:
    // protected System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> m_RaycastResultCache
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* m_RaycastResultCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*) == 0x8);
    // private System.Boolean m_SendPointerHoverToParent
    // Size: 0x1
    // Offset: 0x28
    bool m_SendPointerHoverToParent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_SendPointerHoverToParent and: m_AxisEventData
    char __padding1[0x7] = {};
    // private UnityEngine.EventSystems.AxisEventData m_AxisEventData
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::EventSystems::AxisEventData* m_AxisEventData;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::AxisEventData*) == 0x8);
    // private UnityEngine.EventSystems.EventSystem m_EventSystem
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::EventSystems::EventSystem* m_EventSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::EventSystem*) == 0x8);
    // private UnityEngine.EventSystems.BaseEventData m_BaseEventData
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::EventSystems::BaseEventData* m_BaseEventData;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::BaseEventData*) == 0x8);
    // protected UnityEngine.EventSystems.BaseInput m_InputOverride
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::EventSystems::BaseInput* m_InputOverride;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::BaseInput*) == 0x8);
    // private UnityEngine.EventSystems.BaseInput m_DefaultInput
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::EventSystems::BaseInput* m_DefaultInput;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::BaseInput*) == 0x8);
    public:
    // Get instance field reference: protected System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> m_RaycastResultCache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*& dyn_m_RaycastResultCache();
    // Get instance field reference: private System.Boolean m_SendPointerHoverToParent
    [[deprecated("Use field access instead!")]] bool& dyn_m_SendPointerHoverToParent();
    // Get instance field reference: private UnityEngine.EventSystems.AxisEventData m_AxisEventData
    [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::AxisEventData*& dyn_m_AxisEventData();
    // Get instance field reference: private UnityEngine.EventSystems.EventSystem m_EventSystem
    [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::EventSystem*& dyn_m_EventSystem();
    // Get instance field reference: private UnityEngine.EventSystems.BaseEventData m_BaseEventData
    [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::BaseEventData*& dyn_m_BaseEventData();
    // Get instance field reference: protected UnityEngine.EventSystems.BaseInput m_InputOverride
    [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::BaseInput*& dyn_m_InputOverride();
    // Get instance field reference: private UnityEngine.EventSystems.BaseInput m_DefaultInput
    [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::BaseInput*& dyn_m_DefaultInput();
    // System.Boolean get_sendPointerHoverToParent()
    // Offset: 0x5700DD4
    bool get_sendPointerHoverToParent();
    // System.Void set_sendPointerHoverToParent(System.Boolean value)
    // Offset: 0x5700DDC
    void set_sendPointerHoverToParent(bool value);
    // public UnityEngine.EventSystems.BaseInput get_input()
    // Offset: 0x5700DE8
    ::UnityEngine::EventSystems::BaseInput* get_input();
    // public UnityEngine.EventSystems.BaseInput get_inputOverride()
    // Offset: 0x5701018
    ::UnityEngine::EventSystems::BaseInput* get_inputOverride();
    // public System.Void set_inputOverride(UnityEngine.EventSystems.BaseInput value)
    // Offset: 0x5701020
    void set_inputOverride(::UnityEngine::EventSystems::BaseInput* value);
    // protected UnityEngine.EventSystems.EventSystem get_eventSystem()
    // Offset: 0x5701028
    ::UnityEngine::EventSystems::EventSystem* get_eventSystem();
    // public System.Void Process()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Process();
    // static protected UnityEngine.EventSystems.RaycastResult FindFirstRaycast(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> candidates)
    // Offset: 0x57010B0
    static ::UnityEngine::EventSystems::RaycastResult FindFirstRaycast(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* candidates);
    // static protected UnityEngine.EventSystems.MoveDirection DetermineMoveDirection(System.Single x, System.Single y)
    // Offset: 0x57011C4
    static ::UnityEngine::EventSystems::MoveDirection DetermineMoveDirection(float x, float y);
    // static protected UnityEngine.EventSystems.MoveDirection DetermineMoveDirection(System.Single x, System.Single y, System.Single deadZone)
    // Offset: 0x5701218
    static ::UnityEngine::EventSystems::MoveDirection DetermineMoveDirection(float x, float y, float deadZone);
    // static protected UnityEngine.GameObject FindCommonRoot(UnityEngine.GameObject g1, UnityEngine.GameObject g2)
    // Offset: 0x5701268
    static ::UnityEngine::GameObject* FindCommonRoot(::UnityEngine::GameObject* g1, ::UnityEngine::GameObject* g2);
    // protected System.Void HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData currentPointerData, UnityEngine.GameObject newEnterTarget)
    // Offset: 0x57013DC
    void HandlePointerExitAndEnter(::UnityEngine::EventSystems::PointerEventData* currentPointerData, ::UnityEngine::GameObject* newEnterTarget);
    // protected UnityEngine.EventSystems.AxisEventData GetAxisEventData(System.Single x, System.Single y, System.Single moveDeadZone)
    // Offset: 0x5701E98
    ::UnityEngine::EventSystems::AxisEventData* GetAxisEventData(float x, float y, float moveDeadZone);
    // protected UnityEngine.EventSystems.BaseEventData GetBaseEventData()
    // Offset: 0x5701FB0
    ::UnityEngine::EventSystems::BaseEventData* GetBaseEventData();
    // public System.Boolean IsPointerOverGameObject(System.Int32 pointerId)
    // Offset: 0x5702058
    bool IsPointerOverGameObject(int pointerId);
    // public System.Boolean ShouldActivateModule()
    // Offset: 0x5702060
    bool ShouldActivateModule();
    // public System.Void DeactivateModule()
    // Offset: 0x57020A0
    void DeactivateModule();
    // public System.Void ActivateModule()
    // Offset: 0x57020A4
    void ActivateModule();
    // public System.Void UpdateModule()
    // Offset: 0x57020A8
    void UpdateModule();
    // public System.Boolean IsModuleSupported()
    // Offset: 0x57020AC
    bool IsModuleSupported();
    // public System.Int32 ConvertUIToolkitPointerId(UnityEngine.EventSystems.PointerEventData sourcePointerData)
    // Offset: 0x57020B4
    int ConvertUIToolkitPointerId(::UnityEngine::EventSystems::PointerEventData* sourcePointerData);
    // protected override System.Void OnEnable()
    // Offset: 0x5701030
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x5701098
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected System.Void .ctor()
    // Offset: 0x5702130
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseInputModule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::BaseInputModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseInputModule*, creationType>()));
    }
  }; // UnityEngine.EventSystems.BaseInputModule
  #pragma pack(pop)
  static check_size<sizeof(BaseInputModule), 80 + sizeof(::UnityEngine::EventSystems::BaseInput*)> __UnityEngine_EventSystems_BaseInputModuleSizeCheck;
  static_assert(sizeof(BaseInputModule) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::get_sendPointerHoverToParent
// Il2CppName: get_sendPointerHoverToParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::BaseInputModule::*)()>(&UnityEngine::EventSystems::BaseInputModule::get_sendPointerHoverToParent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "get_sendPointerHoverToParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::set_sendPointerHoverToParent
// Il2CppName: set_sendPointerHoverToParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::BaseInputModule::*)(bool)>(&UnityEngine::EventSystems::BaseInputModule::set_sendPointerHoverToParent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "set_sendPointerHoverToParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::get_input
// Il2CppName: get_input
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::BaseInput* (UnityEngine::EventSystems::BaseInputModule::*)()>(&UnityEngine::EventSystems::BaseInputModule::get_input)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "get_input", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::get_inputOverride
// Il2CppName: get_inputOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::BaseInput* (UnityEngine::EventSystems::BaseInputModule::*)()>(&UnityEngine::EventSystems::BaseInputModule::get_inputOverride)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "get_inputOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::set_inputOverride
// Il2CppName: set_inputOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::BaseInputModule::*)(::UnityEngine::EventSystems::BaseInput*)>(&UnityEngine::EventSystems::BaseInputModule::set_inputOverride)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseInput")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "set_inputOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::get_eventSystem
// Il2CppName: get_eventSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::EventSystem* (UnityEngine::EventSystems::BaseInputModule::*)()>(&UnityEngine::EventSystems::BaseInputModule::get_eventSystem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "get_eventSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::BaseInputModule::*)()>(&UnityEngine::EventSystems::BaseInputModule::Process)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::FindFirstRaycast
// Il2CppName: FindFirstRaycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::RaycastResult (*)(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&UnityEngine::EventSystems::BaseInputModule::FindFirstRaycast)> {
  static const MethodInfo* get() {
    static auto* candidates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "RaycastResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "FindFirstRaycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{candidates});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::DetermineMoveDirection
// Il2CppName: DetermineMoveDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::MoveDirection (*)(float, float)>(&UnityEngine::EventSystems::BaseInputModule::DetermineMoveDirection)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "DetermineMoveDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::DetermineMoveDirection
// Il2CppName: DetermineMoveDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::MoveDirection (*)(float, float, float)>(&UnityEngine::EventSystems::BaseInputModule::DetermineMoveDirection)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deadZone = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "DetermineMoveDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, deadZone});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::FindCommonRoot
// Il2CppName: FindCommonRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(&UnityEngine::EventSystems::BaseInputModule::FindCommonRoot)> {
  static const MethodInfo* get() {
    static auto* g1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* g2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "FindCommonRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{g1, g2});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::HandlePointerExitAndEnter
// Il2CppName: HandlePointerExitAndEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::BaseInputModule::*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::GameObject*)>(&UnityEngine::EventSystems::BaseInputModule::HandlePointerExitAndEnter)> {
  static const MethodInfo* get() {
    static auto* currentPointerData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* newEnterTarget = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "HandlePointerExitAndEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentPointerData, newEnterTarget});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::GetAxisEventData
// Il2CppName: GetAxisEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::AxisEventData* (UnityEngine::EventSystems::BaseInputModule::*)(float, float, float)>(&UnityEngine::EventSystems::BaseInputModule::GetAxisEventData)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* moveDeadZone = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "GetAxisEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, moveDeadZone});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::GetBaseEventData
// Il2CppName: GetBaseEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::BaseEventData* (UnityEngine::EventSystems::BaseInputModule::*)()>(&UnityEngine::EventSystems::BaseInputModule::GetBaseEventData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "GetBaseEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::IsPointerOverGameObject
// Il2CppName: IsPointerOverGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::BaseInputModule::*)(int)>(&UnityEngine::EventSystems::BaseInputModule::IsPointerOverGameObject)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "IsPointerOverGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::ShouldActivateModule
// Il2CppName: ShouldActivateModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::BaseInputModule::*)()>(&UnityEngine::EventSystems::BaseInputModule::ShouldActivateModule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "ShouldActivateModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::DeactivateModule
// Il2CppName: DeactivateModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::BaseInputModule::*)()>(&UnityEngine::EventSystems::BaseInputModule::DeactivateModule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "DeactivateModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::ActivateModule
// Il2CppName: ActivateModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::BaseInputModule::*)()>(&UnityEngine::EventSystems::BaseInputModule::ActivateModule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "ActivateModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::UpdateModule
// Il2CppName: UpdateModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::BaseInputModule::*)()>(&UnityEngine::EventSystems::BaseInputModule::UpdateModule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "UpdateModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::IsModuleSupported
// Il2CppName: IsModuleSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::BaseInputModule::*)()>(&UnityEngine::EventSystems::BaseInputModule::IsModuleSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "IsModuleSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::ConvertUIToolkitPointerId
// Il2CppName: ConvertUIToolkitPointerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EventSystems::BaseInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::BaseInputModule::ConvertUIToolkitPointerId)> {
  static const MethodInfo* get() {
    static auto* sourcePointerData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "ConvertUIToolkitPointerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourcePointerData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::BaseInputModule::*)()>(&UnityEngine::EventSystems::BaseInputModule::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::BaseInputModule::*)()>(&UnityEngine::EventSystems::BaseInputModule::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInputModule*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInputModule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!