// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.CustomStyleResolvedEvent
#include "UnityEngine/UIElements/CustomStyleResolvedEvent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::CustomStyleResolvedEvent::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CustomStyleResolvedEvent::$$c*, "UnityEngine.UIElements", "CustomStyleResolvedEvent/<>c");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.CustomStyleResolvedEvent/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CustomStyleResolvedEvent::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UIElements.CustomStyleResolvedEvent/<>c <>9
    static ::UnityEngine::UIElements::CustomStyleResolvedEvent::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UIElements.CustomStyleResolvedEvent/<>c <>9
    static void _set_$$9(::UnityEngine::UIElements::CustomStyleResolvedEvent::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x5657AF8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x5657B60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomStyleResolvedEvent::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::CustomStyleResolvedEvent::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomStyleResolvedEvent::$$c*, creationType>()));
    }
    // UnityEngine.UIElements.CustomStyleResolvedEvent <.cctor>b__0_0()
    // Offset: 0x5657B68
    ::UnityEngine::UIElements::CustomStyleResolvedEvent* $_cctor$b__0_0();
  }; // UnityEngine.UIElements.CustomStyleResolvedEvent/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::CustomStyleResolvedEvent::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::CustomStyleResolvedEvent::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CustomStyleResolvedEvent::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CustomStyleResolvedEvent::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::CustomStyleResolvedEvent::$$c::$_cctor$b__0_0
// Il2CppName: <.cctor>b__0_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::CustomStyleResolvedEvent* (UnityEngine::UIElements::CustomStyleResolvedEvent::$$c::*)()>(&UnityEngine::UIElements::CustomStyleResolvedEvent::$$c::$_cctor$b__0_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CustomStyleResolvedEvent::$$c*), "<.cctor>b__0_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
