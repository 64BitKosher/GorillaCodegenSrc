// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: EventCallbackFunctorBase
  class EventCallbackFunctorBase;
  // Forward declaring type: CallbackPhase
  struct CallbackPhase;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: EventCallbackList
  class EventCallbackList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::EventCallbackList);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventCallbackList*, "UnityEngine.UIElements", "EventCallbackList");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.EventCallbackList
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class EventCallbackList : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.List`1<UnityEngine.UIElements.EventCallbackFunctorBase> m_List
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>* m_List;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>*) == 0x8);
    // private System.Int32 <trickleDownCallbackCount>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int trickleDownCallbackCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <bubbleUpCallbackCount>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int bubbleUpCallbackCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.UIElements.EventCallbackFunctorBase> m_List
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>*& dyn_m_List();
    // Get instance field reference: private System.Int32 <trickleDownCallbackCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$trickleDownCallbackCount$k__BackingField();
    // Get instance field reference: private System.Int32 <bubbleUpCallbackCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$bubbleUpCallbackCount$k__BackingField();
    // public System.Int32 get_trickleDownCallbackCount()
    // Offset: 0x564AA00
    int get_trickleDownCallbackCount();
    // private System.Void set_trickleDownCallbackCount(System.Int32 value)
    // Offset: 0x564AA08
    void set_trickleDownCallbackCount(int value);
    // public System.Int32 get_bubbleUpCallbackCount()
    // Offset: 0x564AA10
    int get_bubbleUpCallbackCount();
    // private System.Void set_bubbleUpCallbackCount(System.Int32 value)
    // Offset: 0x564AA18
    void set_bubbleUpCallbackCount(int value);
    // public System.Void .ctor()
    // Offset: 0x564A688
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventCallbackList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::EventCallbackList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventCallbackList*, creationType>()));
    }
    // public System.Void .ctor(UnityEngine.UIElements.EventCallbackList source)
    // Offset: 0x564A5EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventCallbackList* New_ctor(::UnityEngine::UIElements::EventCallbackList* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::EventCallbackList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventCallbackList*, creationType>(source)));
    }
    // public System.Boolean Contains(System.Int64 eventTypeId, System.Delegate callback, UnityEngine.UIElements.CallbackPhase phase)
    // Offset: 0x564AA20
    bool Contains(int64_t eventTypeId, ::System::Delegate* callback, ::UnityEngine::UIElements::CallbackPhase phase);
    // public UnityEngine.UIElements.EventCallbackFunctorBase Find(System.Int64 eventTypeId, System.Delegate callback, UnityEngine.UIElements.CallbackPhase phase)
    // Offset: 0x564AA38
    ::UnityEngine::UIElements::EventCallbackFunctorBase* Find(int64_t eventTypeId, ::System::Delegate* callback, ::UnityEngine::UIElements::CallbackPhase phase);
    // public System.Boolean Remove(System.Int64 eventTypeId, System.Delegate callback, UnityEngine.UIElements.CallbackPhase phase)
    // Offset: 0x564AB20
    bool Remove(int64_t eventTypeId, ::System::Delegate* callback, ::UnityEngine::UIElements::CallbackPhase phase);
    // public System.Void Add(UnityEngine.UIElements.EventCallbackFunctorBase item)
    // Offset: 0x564AC40
    void Add(::UnityEngine::UIElements::EventCallbackFunctorBase* item);
    // public System.Void AddRange(UnityEngine.UIElements.EventCallbackList list)
    // Offset: 0x564A718
    void AddRange(::UnityEngine::UIElements::EventCallbackList* list);
    // public System.Int32 get_Count()
    // Offset: 0x564AD20
    int get_Count();
    // public UnityEngine.UIElements.EventCallbackFunctorBase get_Item(System.Int32 i)
    // Offset: 0x564AD68
    ::UnityEngine::UIElements::EventCallbackFunctorBase* get_Item(int i);
    // public System.Void Clear()
    // Offset: 0x564A90C
    void Clear();
  }; // UnityEngine.UIElements.EventCallbackList
  #pragma pack(pop)
  static check_size<sizeof(EventCallbackList), 28 + sizeof(int)> __UnityEngine_UIElements_EventCallbackListSizeCheck;
  static_assert(sizeof(EventCallbackList) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackList::get_trickleDownCallbackCount
// Il2CppName: get_trickleDownCallbackCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::EventCallbackList::*)()>(&UnityEngine::UIElements::EventCallbackList::get_trickleDownCallbackCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackList*), "get_trickleDownCallbackCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackList::set_trickleDownCallbackCount
// Il2CppName: set_trickleDownCallbackCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::EventCallbackList::*)(int)>(&UnityEngine::UIElements::EventCallbackList::set_trickleDownCallbackCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackList*), "set_trickleDownCallbackCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackList::get_bubbleUpCallbackCount
// Il2CppName: get_bubbleUpCallbackCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::EventCallbackList::*)()>(&UnityEngine::UIElements::EventCallbackList::get_bubbleUpCallbackCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackList*), "get_bubbleUpCallbackCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackList::set_bubbleUpCallbackCount
// Il2CppName: set_bubbleUpCallbackCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::EventCallbackList::*)(int)>(&UnityEngine::UIElements::EventCallbackList::set_bubbleUpCallbackCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackList*), "set_bubbleUpCallbackCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackList::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::EventCallbackList::*)(int64_t, ::System::Delegate*, ::UnityEngine::UIElements::CallbackPhase)>(&UnityEngine::UIElements::EventCallbackList::Contains)> {
  static const MethodInfo* get() {
    static auto* eventTypeId = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    static auto* phase = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "CallbackPhase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackList*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventTypeId, callback, phase});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackList::Find
// Il2CppName: Find
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventCallbackFunctorBase* (UnityEngine::UIElements::EventCallbackList::*)(int64_t, ::System::Delegate*, ::UnityEngine::UIElements::CallbackPhase)>(&UnityEngine::UIElements::EventCallbackList::Find)> {
  static const MethodInfo* get() {
    static auto* eventTypeId = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    static auto* phase = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "CallbackPhase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackList*), "Find", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventTypeId, callback, phase});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackList::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::EventCallbackList::*)(int64_t, ::System::Delegate*, ::UnityEngine::UIElements::CallbackPhase)>(&UnityEngine::UIElements::EventCallbackList::Remove)> {
  static const MethodInfo* get() {
    static auto* eventTypeId = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    static auto* phase = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "CallbackPhase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackList*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventTypeId, callback, phase});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackList::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::EventCallbackList::*)(::UnityEngine::UIElements::EventCallbackFunctorBase*)>(&UnityEngine::UIElements::EventCallbackList::Add)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventCallbackFunctorBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackList*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackList::AddRange
// Il2CppName: AddRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::EventCallbackList::*)(::UnityEngine::UIElements::EventCallbackList*)>(&UnityEngine::UIElements::EventCallbackList::AddRange)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventCallbackList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackList*), "AddRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackList::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::EventCallbackList::*)()>(&UnityEngine::UIElements::EventCallbackList::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackList*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackList::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventCallbackFunctorBase* (UnityEngine::UIElements::EventCallbackList::*)(int)>(&UnityEngine::UIElements::EventCallbackList::get_Item)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackList*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::EventCallbackList::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::EventCallbackList::*)()>(&UnityEngine::UIElements::EventCallbackList::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::EventCallbackList*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
