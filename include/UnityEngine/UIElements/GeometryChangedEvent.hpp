// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.EventBase`1
#include "UnityEngine/UIElements/EventBase_1.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: GeometryChangedEvent
  class GeometryChangedEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::GeometryChangedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GeometryChangedEvent*, "UnityEngine.UIElements", "GeometryChangedEvent");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.GeometryChangedEvent
  // [TokenAttribute] Offset: FFFFFFFF
  // [EventCategoryAttribute] Offset: FFFFFFFF
  class GeometryChangedEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::GeometryChangedEvent*> {
    public:
    // Nested type: ::UnityEngine::UIElements::GeometryChangedEvent::$$c
    class $$c;
    public:
    // private UnityEngine.Rect <oldRect>k__BackingField
    // Size: 0x10
    // Offset: 0x84
    ::UnityEngine::Rect oldRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // private UnityEngine.Rect <newRect>k__BackingField
    // Size: 0x10
    // Offset: 0x94
    ::UnityEngine::Rect newRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // private System.Int32 <layoutPass>k__BackingField
    // Size: 0x4
    // Offset: 0xA4
    int layoutPass;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Rect <oldRect>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_$oldRect$k__BackingField();
    // Get instance field reference: private UnityEngine.Rect <newRect>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_$newRect$k__BackingField();
    // Get instance field reference: private System.Int32 <layoutPass>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$layoutPass$k__BackingField();
    // static public UnityEngine.UIElements.GeometryChangedEvent GetPooled(UnityEngine.Rect oldRect, UnityEngine.Rect newRect)
    // Offset: 0x564E19C
    static ::UnityEngine::UIElements::GeometryChangedEvent* GetPooled(::UnityEngine::Rect oldRect, ::UnityEngine::Rect newRect);
    // public UnityEngine.Rect get_oldRect()
    // Offset: 0x564E2E0
    ::UnityEngine::Rect get_oldRect();
    // private System.Void set_oldRect(UnityEngine.Rect value)
    // Offset: 0x564E2EC
    void set_oldRect(::UnityEngine::Rect value);
    // public UnityEngine.Rect get_newRect()
    // Offset: 0x564E2F8
    ::UnityEngine::Rect get_newRect();
    // private System.Void set_newRect(UnityEngine.Rect value)
    // Offset: 0x564E304
    void set_newRect(::UnityEngine::Rect value);
    // System.Int32 get_layoutPass()
    // Offset: 0x564E310
    int get_layoutPass();
    // System.Void set_layoutPass(System.Int32 value)
    // Offset: 0x564E318
    void set_layoutPass(int value);
    // static private System.Void .cctor()
    // Offset: 0x564E0B8
    // Implemented from: UnityEngine.UIElements.EventBase`1
    // Base method: System.Void EventBase_1::.cctor()
    static void _cctor();
    // protected override System.Void Init()
    // Offset: 0x564E25C
    // Implemented from: UnityEngine.UIElements.EventBase`1
    // Base method: System.Void EventBase_1::Init()
    void Init();
    // private System.Void LocalInit()
    // Offset: 0x564E2AC
    // Implemented from: UnityEngine.UIElements.EventBase
    // Base method: System.Void EventBase::LocalInit()
    void LocalInit();
    // public System.Void .ctor()
    // Offset: 0x564E320
    // Implemented from: UnityEngine.UIElements.EventBase`1
    // Base method: System.Void EventBase_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GeometryChangedEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::GeometryChangedEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GeometryChangedEvent*, creationType>()));
    }
  }; // UnityEngine.UIElements.GeometryChangedEvent
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::GeometryChangedEvent::GetPooled
// Il2CppName: GetPooled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::GeometryChangedEvent* (*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(&UnityEngine::UIElements::GeometryChangedEvent::GetPooled)> {
  static const MethodInfo* get() {
    static auto* oldRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* newRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::GeometryChangedEvent*), "GetPooled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldRect, newRect});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::GeometryChangedEvent::get_oldRect
// Il2CppName: get_oldRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (UnityEngine::UIElements::GeometryChangedEvent::*)()>(&UnityEngine::UIElements::GeometryChangedEvent::get_oldRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::GeometryChangedEvent*), "get_oldRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::GeometryChangedEvent::set_oldRect
// Il2CppName: set_oldRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GeometryChangedEvent::*)(::UnityEngine::Rect)>(&UnityEngine::UIElements::GeometryChangedEvent::set_oldRect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::GeometryChangedEvent*), "set_oldRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::GeometryChangedEvent::get_newRect
// Il2CppName: get_newRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (UnityEngine::UIElements::GeometryChangedEvent::*)()>(&UnityEngine::UIElements::GeometryChangedEvent::get_newRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::GeometryChangedEvent*), "get_newRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::GeometryChangedEvent::set_newRect
// Il2CppName: set_newRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GeometryChangedEvent::*)(::UnityEngine::Rect)>(&UnityEngine::UIElements::GeometryChangedEvent::set_newRect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::GeometryChangedEvent*), "set_newRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::GeometryChangedEvent::get_layoutPass
// Il2CppName: get_layoutPass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::GeometryChangedEvent::*)()>(&UnityEngine::UIElements::GeometryChangedEvent::get_layoutPass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::GeometryChangedEvent*), "get_layoutPass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::GeometryChangedEvent::set_layoutPass
// Il2CppName: set_layoutPass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GeometryChangedEvent::*)(int)>(&UnityEngine::UIElements::GeometryChangedEvent::set_layoutPass)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::GeometryChangedEvent*), "set_layoutPass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::GeometryChangedEvent::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::GeometryChangedEvent::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::GeometryChangedEvent*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::GeometryChangedEvent::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GeometryChangedEvent::*)()>(&UnityEngine::UIElements::GeometryChangedEvent::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::GeometryChangedEvent*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::GeometryChangedEvent::LocalInit
// Il2CppName: LocalInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GeometryChangedEvent::*)()>(&UnityEngine::UIElements::GeometryChangedEvent::LocalInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::GeometryChangedEvent*), "LocalInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::GeometryChangedEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
