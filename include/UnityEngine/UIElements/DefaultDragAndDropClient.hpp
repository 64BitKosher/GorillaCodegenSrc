// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.DragAndDropData
#include "UnityEngine/UIElements/DragAndDropData.hpp"
// Including type: UnityEngine.UIElements.IDragAndDrop
#include "UnityEngine/UIElements/IDragAndDrop.hpp"
// Including type: UnityEngine.UIElements.DragVisualMode
#include "UnityEngine/UIElements/DragVisualMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Label
  class Label;
  // Forward declaring type: StartDragArgs
  struct StartDragArgs;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: DefaultDragAndDropClient
  class DefaultDragAndDropClient;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::DefaultDragAndDropClient);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DefaultDragAndDropClient*, "UnityEngine.UIElements", "DefaultDragAndDropClient");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.DefaultDragAndDropClient
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultDragAndDropClient : public ::UnityEngine::UIElements::DragAndDropData/*, public ::UnityEngine::UIElements::IDragAndDrop*/ {
    public:
    public:
    // private readonly System.Collections.Hashtable m_GenericData
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Hashtable* m_GenericData;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private UnityEngine.UIElements.Label m_DraggedInfoLabel
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UIElements::Label* m_DraggedInfoLabel;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Label*) == 0x8);
    // private UnityEngine.UIElements.DragVisualMode m_VisualMode
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::UIElements::DragVisualMode m_VisualMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::DragVisualMode) == 0x4);
    // Padding between fields: m_VisualMode and: m_UnityObjectReferences
    char __padding2[0x4] = {};
    // private System.Collections.Generic.IEnumerable`1<UnityEngine.Object> m_UnityObjectReferences
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>* m_UnityObjectReferences;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::UIElements::IDragAndDrop
    operator ::UnityEngine::UIElements::IDragAndDrop() noexcept {
      return *reinterpret_cast<::UnityEngine::UIElements::IDragAndDrop*>(this);
    }
    // Get instance field reference: private readonly System.Collections.Hashtable m_GenericData
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_m_GenericData();
    // Get instance field reference: private UnityEngine.UIElements.Label m_DraggedInfoLabel
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Label*& dyn_m_DraggedInfoLabel();
    // Get instance field reference: private UnityEngine.UIElements.DragVisualMode m_VisualMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::DragVisualMode& dyn_m_VisualMode();
    // Get instance field reference: private System.Collections.Generic.IEnumerable`1<UnityEngine.Object> m_UnityObjectReferences
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*& dyn_m_UnityObjectReferences();
    // public System.Void StartDrag(UnityEngine.UIElements.StartDragArgs args, UnityEngine.Vector3 pointerPosition)
    // Offset: 0x563ADF0
    void StartDrag(::UnityEngine::UIElements::StartDragArgs args, ::UnityEngine::Vector3 pointerPosition);
    // public System.Void UpdateDrag(UnityEngine.Vector3 pointerPosition)
    // Offset: 0x563B4BC
    void UpdateDrag(::UnityEngine::Vector3 pointerPosition);
    // public System.Void AcceptDrag()
    // Offset: 0x563B650
    void AcceptDrag();
    // public System.Void SetVisualMode(UnityEngine.UIElements.DragVisualMode mode)
    // Offset: 0x563B654
    void SetVisualMode(::UnityEngine::UIElements::DragVisualMode mode);
    // public System.Void DragCleanup()
    // Offset: 0x563B65C
    void DragCleanup();
    // public UnityEngine.UIElements.DragAndDropData get_data()
    // Offset: 0x563B6BC
    ::UnityEngine::UIElements::DragAndDropData* get_data();
    // public override System.Object get_source()
    // Offset: 0x563AD3C
    // Implemented from: UnityEngine.UIElements.DragAndDropData
    // Base method: System.Object DragAndDropData::get_source()
    ::Il2CppObject* get_source();
    // public override System.Object GetGenericData(System.String key)
    // Offset: 0x563AD8C
    // Implemented from: UnityEngine.UIElements.DragAndDropData
    // Base method: System.Object DragAndDropData::GetGenericData(System.String key)
    ::Il2CppObject* GetGenericData(::StringW key);
    // public System.Void .ctor()
    // Offset: 0x563ACD0
    // Implemented from: UnityEngine.UIElements.DragAndDropData
    // Base method: System.Void DragAndDropData::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultDragAndDropClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DefaultDragAndDropClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultDragAndDropClient*, creationType>()));
    }
  }; // UnityEngine.UIElements.DefaultDragAndDropClient
  #pragma pack(pop)
  static check_size<sizeof(DefaultDragAndDropClient), 40 + sizeof(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*)> __UnityEngine_UIElements_DefaultDragAndDropClientSizeCheck;
  static_assert(sizeof(DefaultDragAndDropClient) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::DefaultDragAndDropClient::StartDrag
// Il2CppName: StartDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DefaultDragAndDropClient::*)(::UnityEngine::UIElements::StartDragArgs, ::UnityEngine::Vector3)>(&UnityEngine::UIElements::DefaultDragAndDropClient::StartDrag)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "StartDragArgs")->byval_arg;
    static auto* pointerPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DefaultDragAndDropClient*), "StartDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args, pointerPosition});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DefaultDragAndDropClient::UpdateDrag
// Il2CppName: UpdateDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DefaultDragAndDropClient::*)(::UnityEngine::Vector3)>(&UnityEngine::UIElements::DefaultDragAndDropClient::UpdateDrag)> {
  static const MethodInfo* get() {
    static auto* pointerPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DefaultDragAndDropClient*), "UpdateDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerPosition});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DefaultDragAndDropClient::AcceptDrag
// Il2CppName: AcceptDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DefaultDragAndDropClient::*)()>(&UnityEngine::UIElements::DefaultDragAndDropClient::AcceptDrag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DefaultDragAndDropClient*), "AcceptDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DefaultDragAndDropClient::SetVisualMode
// Il2CppName: SetVisualMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DefaultDragAndDropClient::*)(::UnityEngine::UIElements::DragVisualMode)>(&UnityEngine::UIElements::DefaultDragAndDropClient::SetVisualMode)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "DragVisualMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DefaultDragAndDropClient*), "SetVisualMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DefaultDragAndDropClient::DragCleanup
// Il2CppName: DragCleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DefaultDragAndDropClient::*)()>(&UnityEngine::UIElements::DefaultDragAndDropClient::DragCleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DefaultDragAndDropClient*), "DragCleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DefaultDragAndDropClient::get_data
// Il2CppName: get_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DragAndDropData* (UnityEngine::UIElements::DefaultDragAndDropClient::*)()>(&UnityEngine::UIElements::DefaultDragAndDropClient::get_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DefaultDragAndDropClient*), "get_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DefaultDragAndDropClient::get_source
// Il2CppName: get_source
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::UIElements::DefaultDragAndDropClient::*)()>(&UnityEngine::UIElements::DefaultDragAndDropClient::get_source)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DefaultDragAndDropClient*), "get_source", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DefaultDragAndDropClient::GetGenericData
// Il2CppName: GetGenericData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::UIElements::DefaultDragAndDropClient::*)(::StringW)>(&UnityEngine::UIElements::DefaultDragAndDropClient::GetGenericData)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DefaultDragAndDropClient*), "GetGenericData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DefaultDragAndDropClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!