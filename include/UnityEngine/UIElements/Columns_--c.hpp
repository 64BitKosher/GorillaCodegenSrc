// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.Columns
#include "UnityEngine/UIElements/Columns.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Column
  class Column;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::Columns::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Columns::$$c*, "UnityEngine.UIElements", "Columns/<>c");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.Columns/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Columns::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UIElements.Columns/<>c <>9
    static ::UnityEngine::UIElements::Columns::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UIElements.Columns/<>c <>9
    static void _set_$$9(::UnityEngine::UIElements::Columns::$$c* value);
    // Get static field: static public System.Predicate`1<UnityEngine.UIElements.Column> <>9__74_0
    static ::System::Predicate_1<::UnityEngine::UIElements::Column*>* _get_$$9__74_0();
    // Set static field: static public System.Predicate`1<UnityEngine.UIElements.Column> <>9__74_0
    static void _set_$$9__74_0(::System::Predicate_1<::UnityEngine::UIElements::Column*>* value);
    // static private System.Void .cctor()
    // Offset: 0x561F5C4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x561F62C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Columns::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Columns::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Columns::$$c*, creationType>()));
    }
    // System.Boolean <UpdateVisibleColumns>b__74_0(UnityEngine.UIElements.Column c)
    // Offset: 0x561F634
    bool $UpdateVisibleColumns$b__74_0(::UnityEngine::UIElements::Column* c);
  }; // UnityEngine.UIElements.Columns/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::Columns::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::Columns::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Columns::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Columns::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::Columns::$$c::$UpdateVisibleColumns$b__74_0
// Il2CppName: <UpdateVisibleColumns>b__74_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::Columns::$$c::*)(::UnityEngine::UIElements::Column*)>(&UnityEngine::UIElements::Columns::$$c::$UpdateVisibleColumns$b__74_0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Column")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Columns::$$c*), "<UpdateVisibleColumns>b__74_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};