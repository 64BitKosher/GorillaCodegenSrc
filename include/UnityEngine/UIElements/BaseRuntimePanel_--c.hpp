// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.BaseRuntimePanel
#include "UnityEngine/UIElements/BaseRuntimePanel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::BaseRuntimePanel::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseRuntimePanel::$$c*, "UnityEngine.UIElements", "BaseRuntimePanel/<>c");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.BaseRuntimePanel/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BaseRuntimePanel::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UIElements.BaseRuntimePanel/<>c <>9
    static ::UnityEngine::UIElements::BaseRuntimePanel::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UIElements.BaseRuntimePanel/<>c <>9
    static void _set_$$9(::UnityEngine::UIElements::BaseRuntimePanel::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x566915C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x56691C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseRuntimePanel::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::BaseRuntimePanel::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseRuntimePanel::$$c*, creationType>()));
    }
    // UnityEngine.Vector2 <.cctor>b__47_0(UnityEngine.Vector2 p)
    // Offset: 0x56691CC
    ::UnityEngine::Vector2 $_cctor$b__47_0(::UnityEngine::Vector2 p);
  }; // UnityEngine.UIElements.BaseRuntimePanel/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseRuntimePanel::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::BaseRuntimePanel::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseRuntimePanel::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseRuntimePanel::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseRuntimePanel::$$c::$_cctor$b__47_0
// Il2CppName: <.cctor>b__47_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::UIElements::BaseRuntimePanel::$$c::*)(::UnityEngine::Vector2)>(&UnityEngine::UIElements::BaseRuntimePanel::$$c::$_cctor$b__47_0)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseRuntimePanel::$$c*), "<.cctor>b__47_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
