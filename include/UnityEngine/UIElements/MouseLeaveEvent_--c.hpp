// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.MouseLeaveEvent
#include "UnityEngine/UIElements/MouseLeaveEvent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::MouseLeaveEvent::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseLeaveEvent::$$c*, "UnityEngine.UIElements", "MouseLeaveEvent/<>c");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.MouseLeaveEvent/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MouseLeaveEvent::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UIElements.MouseLeaveEvent/<>c <>9
    static ::UnityEngine::UIElements::MouseLeaveEvent::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UIElements.MouseLeaveEvent/<>c <>9
    static void _set_$$9(::UnityEngine::UIElements::MouseLeaveEvent::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x5650B74
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x5650BDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MouseLeaveEvent::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::MouseLeaveEvent::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MouseLeaveEvent::$$c*, creationType>()));
    }
    // UnityEngine.UIElements.MouseLeaveEvent <.cctor>b__0_0()
    // Offset: 0x5650BE4
    ::UnityEngine::UIElements::MouseLeaveEvent* $_cctor$b__0_0();
  }; // UnityEngine.UIElements.MouseLeaveEvent/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::MouseLeaveEvent::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::MouseLeaveEvent::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MouseLeaveEvent::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MouseLeaveEvent::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::MouseLeaveEvent::$$c::$_cctor$b__0_0
// Il2CppName: <.cctor>b__0_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MouseLeaveEvent* (UnityEngine::UIElements::MouseLeaveEvent::$$c::*)()>(&UnityEngine::UIElements::MouseLeaveEvent::$$c::$_cctor$b__0_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MouseLeaveEvent::$$c*), "<.cctor>b__0_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};