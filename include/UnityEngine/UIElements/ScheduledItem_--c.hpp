// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.ScheduledItem
#include "UnityEngine/UIElements/ScheduledItem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::ScheduledItem::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ScheduledItem::$$c*, "UnityEngine.UIElements", "ScheduledItem/<>c");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.ScheduledItem/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ScheduledItem::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UIElements.ScheduledItem/<>c <>9
    static ::UnityEngine::UIElements::ScheduledItem::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UIElements.ScheduledItem/<>c <>9
    static void _set_$$9(::UnityEngine::UIElements::ScheduledItem::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x568B4F0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x568B558
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScheduledItem::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::ScheduledItem::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScheduledItem::$$c*, creationType>()));
    }
    // System.Boolean <.cctor>b__25_0()
    // Offset: 0x568B560
    bool $_cctor$b__25_0();
    // System.Boolean <.cctor>b__25_1()
    // Offset: 0x568B568
    bool $_cctor$b__25_1();
  }; // UnityEngine.UIElements.ScheduledItem/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::ScheduledItem::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::ScheduledItem::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ScheduledItem::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ScheduledItem::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::ScheduledItem::$$c::$_cctor$b__25_0
// Il2CppName: <.cctor>b__25_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ScheduledItem::$$c::*)()>(&UnityEngine::UIElements::ScheduledItem::$$c::$_cctor$b__25_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ScheduledItem::$$c*), "<.cctor>b__25_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ScheduledItem::$$c::$_cctor$b__25_1
// Il2CppName: <.cctor>b__25_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ScheduledItem::$$c::*)()>(&UnityEngine::UIElements::ScheduledItem::$$c::$_cctor$b__25_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ScheduledItem::$$c*), "<.cctor>b__25_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
