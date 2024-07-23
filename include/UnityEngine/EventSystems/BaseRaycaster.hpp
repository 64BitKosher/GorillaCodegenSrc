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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseRaycaster
  class BaseRaycaster;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::BaseRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::BaseRaycaster*, "UnityEngine.EventSystems", "BaseRaycaster");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.BaseRaycaster
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseRaycaster : public ::UnityEngine::EventSystems::UIBehaviour {
    public:
    public:
    // private UnityEngine.EventSystems.BaseRaycaster m_RootRaycaster
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::EventSystems::BaseRaycaster* m_RootRaycaster;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::BaseRaycaster*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.EventSystems.BaseRaycaster m_RootRaycaster
    [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::BaseRaycaster*& dyn_m_RootRaycaster();
    // public System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);
    // public UnityEngine.Camera get_eventCamera()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Camera* get_eventCamera();
    // public System.Int32 get_priority()
    // Offset: 0x5706A04
    int get_priority();
    // public System.Int32 get_sortOrderPriority()
    // Offset: 0x5706A0C
    int get_sortOrderPriority();
    // public System.Int32 get_renderOrderPriority()
    // Offset: 0x5706A14
    int get_renderOrderPriority();
    // public UnityEngine.EventSystems.BaseRaycaster get_rootRaycaster()
    // Offset: 0x56FD544
    ::UnityEngine::EventSystems::BaseRaycaster* get_rootRaycaster();
    // public override System.String ToString()
    // Offset: 0x5706A1C
    // Implemented from: UnityEngine.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // protected override System.Void OnEnable()
    // Offset: 0x5706C68
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x5706CBC
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnCanvasHierarchyChanged()
    // Offset: 0x5706D10
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnCanvasHierarchyChanged()
    void OnCanvasHierarchyChanged();
    // protected override System.Void OnTransformParentChanged()
    // Offset: 0x5706D20
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnTransformParentChanged()
    void OnTransformParentChanged();
    // protected System.Void .ctor()
    // Offset: 0x56FB64C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseRaycaster* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::BaseRaycaster::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseRaycaster*, creationType>()));
    }
  }; // UnityEngine.EventSystems.BaseRaycaster
  #pragma pack(pop)
  static check_size<sizeof(BaseRaycaster), 32 + sizeof(::UnityEngine::EventSystems::BaseRaycaster*)> __UnityEngine_EventSystems_BaseRaycasterSizeCheck;
  static_assert(sizeof(BaseRaycaster) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseRaycaster::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::BaseRaycaster::*)(::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&UnityEngine::EventSystems::BaseRaycaster::Raycast)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* resultAppendList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "RaycastResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseRaycaster*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData, resultAppendList});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseRaycaster::get_eventCamera
// Il2CppName: get_eventCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (UnityEngine::EventSystems::BaseRaycaster::*)()>(&UnityEngine::EventSystems::BaseRaycaster::get_eventCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseRaycaster*), "get_eventCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseRaycaster::get_priority
// Il2CppName: get_priority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EventSystems::BaseRaycaster::*)()>(&UnityEngine::EventSystems::BaseRaycaster::get_priority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseRaycaster*), "get_priority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseRaycaster::get_sortOrderPriority
// Il2CppName: get_sortOrderPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EventSystems::BaseRaycaster::*)()>(&UnityEngine::EventSystems::BaseRaycaster::get_sortOrderPriority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseRaycaster*), "get_sortOrderPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseRaycaster::get_renderOrderPriority
// Il2CppName: get_renderOrderPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EventSystems::BaseRaycaster::*)()>(&UnityEngine::EventSystems::BaseRaycaster::get_renderOrderPriority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseRaycaster*), "get_renderOrderPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseRaycaster::get_rootRaycaster
// Il2CppName: get_rootRaycaster
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::BaseRaycaster* (UnityEngine::EventSystems::BaseRaycaster::*)()>(&UnityEngine::EventSystems::BaseRaycaster::get_rootRaycaster)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseRaycaster*), "get_rootRaycaster", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseRaycaster::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::EventSystems::BaseRaycaster::*)()>(&UnityEngine::EventSystems::BaseRaycaster::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseRaycaster*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseRaycaster::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::BaseRaycaster::*)()>(&UnityEngine::EventSystems::BaseRaycaster::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseRaycaster*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseRaycaster::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::BaseRaycaster::*)()>(&UnityEngine::EventSystems::BaseRaycaster::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseRaycaster*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseRaycaster::OnCanvasHierarchyChanged
// Il2CppName: OnCanvasHierarchyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::BaseRaycaster::*)()>(&UnityEngine::EventSystems::BaseRaycaster::OnCanvasHierarchyChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseRaycaster*), "OnCanvasHierarchyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseRaycaster::OnTransformParentChanged
// Il2CppName: OnTransformParentChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::BaseRaycaster::*)()>(&UnityEngine::EventSystems::BaseRaycaster::OnTransformParentChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseRaycaster*), "OnTransformParentChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseRaycaster::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!