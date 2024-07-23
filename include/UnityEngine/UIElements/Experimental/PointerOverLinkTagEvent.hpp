// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.PointerEventBase`1
#include "UnityEngine/UIElements/PointerEventBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements::Experimental
namespace UnityEngine::UIElements::Experimental {
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Skipping declaration: IPointerEvent because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements.Experimental
namespace UnityEngine::UIElements::Experimental {
  // Forward declaring type: PointerOverLinkTagEvent
  class PointerOverLinkTagEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent*, "UnityEngine.UIElements.Experimental", "PointerOverLinkTagEvent");
// Type namespace: UnityEngine.UIElements.Experimental
namespace UnityEngine::UIElements::Experimental {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.Experimental.PointerOverLinkTagEvent
  // [TokenAttribute] Offset: FFFFFFFF
  // [EventCategoryAttribute] Offset: FFFFFFFF
  class PointerOverLinkTagEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent*> {
    public:
    // Nested type: ::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::$$c
    class $$c;
    public:
    // private System.String <linkID>k__BackingField
    // Size: 0x8
    // Offset: 0x108
    ::StringW linkID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <linkText>k__BackingField
    // Size: 0x8
    // Offset: 0x110
    ::StringW linkText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String <linkID>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$linkID$k__BackingField();
    // Get instance field reference: private System.String <linkText>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$linkText$k__BackingField();
    // private System.Void set_linkID(System.String value)
    // Offset: 0x560541C
    void set_linkID(::StringW value);
    // private System.Void set_linkText(System.String value)
    // Offset: 0x560542C
    void set_linkText(::StringW value);
    // static public UnityEngine.UIElements.Experimental.PointerOverLinkTagEvent GetPooled(UnityEngine.UIElements.IPointerEvent evt, System.String linkID, System.String linkText)
    // Offset: 0x560549C
    static ::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent* GetPooled(::UnityEngine::UIElements::IPointerEvent* evt, ::StringW linkID, ::StringW linkText);
    // static private System.Void .cctor()
    // Offset: 0x5605338
    // Implemented from: UnityEngine.UIElements.EventBase`1
    // Base method: System.Void EventBase_1::.cctor()
    static void _cctor();
    // protected override System.Void Init()
    // Offset: 0x560543C
    // Implemented from: UnityEngine.UIElements.PointerEventBase`1
    // Base method: System.Void PointerEventBase_1::Init()
    void Init();
    // private System.Void LocalInit()
    // Offset: 0x5605490
    // Implemented from: UnityEngine.UIElements.PointerEventBase`1
    // Base method: System.Void PointerEventBase_1::LocalInit()
    // Base method: System.Void EventBase::LocalInit()
    void LocalInit();
    // public System.Void .ctor()
    // Offset: 0x5605528
    // Implemented from: UnityEngine.UIElements.PointerEventBase`1
    // Base method: System.Void PointerEventBase_1::.ctor()
    // Base method: System.Void EventBase_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerOverLinkTagEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerOverLinkTagEvent*, creationType>()));
    }
  }; // UnityEngine.UIElements.Experimental.PointerOverLinkTagEvent
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::set_linkID
// Il2CppName: set_linkID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::*)(::StringW)>(&UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::set_linkID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent*), "set_linkID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::set_linkText
// Il2CppName: set_linkText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::*)(::StringW)>(&UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::set_linkText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent*), "set_linkText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::GetPooled
// Il2CppName: GetPooled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent* (*)(::UnityEngine::UIElements::IPointerEvent*, ::StringW, ::StringW)>(&UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::GetPooled)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPointerEvent")->byval_arg;
    static auto* linkID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* linkText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent*), "GetPooled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt, linkID, linkText});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::*)()>(&UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::LocalInit
// Il2CppName: LocalInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::*)()>(&UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::LocalInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent*), "LocalInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!