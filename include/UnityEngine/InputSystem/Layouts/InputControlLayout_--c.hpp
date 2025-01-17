// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Layouts.InputControlLayout
#include "UnityEngine/InputSystem/Layouts/InputControlLayout.hpp"
// Including type: UnityEngine.InputSystem.Utilities.InternedString
#include "UnityEngine/InputSystem/Utilities/InternedString.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::InputControlLayout::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayout::$$c*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/<>c");
// Type namespace: UnityEngine.InputSystem.Layouts
namespace UnityEngine::InputSystem::Layouts {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Layouts.InputControlLayout/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class InputControlLayout::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.InputSystem.Layouts.InputControlLayout/<>c <>9
    static ::UnityEngine::InputSystem::Layouts::InputControlLayout::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.InputSystem.Layouts.InputControlLayout/<>c <>9
    static void _set_$$9(::UnityEngine::InputSystem::Layouts::InputControlLayout::$$c* value);
    // Get static field: static public System.Func`2<System.String,UnityEngine.InputSystem.Utilities.InternedString> <>9__52_0
    static ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* _get_$$9__52_0();
    // Set static field: static public System.Func`2<System.String,UnityEngine.InputSystem.Utilities.InternedString> <>9__52_0
    static void _set_$$9__52_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value);
    // Get static field: static public System.Func`2<System.String,UnityEngine.InputSystem.Utilities.InternedString> <>9__75_0
    static ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* _get_$$9__75_0();
    // Set static field: static public System.Func`2<System.String,UnityEngine.InputSystem.Utilities.InternedString> <>9__75_0
    static void _set_$$9__75_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value);
    // Get static field: static public System.Func`2<System.String,UnityEngine.InputSystem.Utilities.InternedString> <>9__75_1
    static ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* _get_$$9__75_1();
    // Set static field: static public System.Func`2<System.String,UnityEngine.InputSystem.Utilities.InternedString> <>9__75_1
    static void _set_$$9__75_1(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value);
    // static private System.Void .cctor()
    // Offset: 0x5164D20
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x5164D88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputControlLayout::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Layouts::InputControlLayout::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputControlLayout::$$c*, creationType>()));
    }
    // UnityEngine.InputSystem.Utilities.InternedString <FromType>b__52_0(System.String x)
    // Offset: 0x5164D90
    ::UnityEngine::InputSystem::Utilities::InternedString $FromType$b__52_0(::StringW x);
    // UnityEngine.InputSystem.Utilities.InternedString <CreateControlItemFromMember>b__75_0(System.String x)
    // Offset: 0x5164DB8
    ::UnityEngine::InputSystem::Utilities::InternedString $CreateControlItemFromMember$b__75_0(::StringW x);
    // UnityEngine.InputSystem.Utilities.InternedString <CreateControlItemFromMember>b__75_1(System.String x)
    // Offset: 0x5164DE0
    ::UnityEngine::InputSystem::Utilities::InternedString $CreateControlItemFromMember$b__75_1(::StringW x);
  }; // UnityEngine.InputSystem.Layouts.InputControlLayout/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::$$c::$FromType$b__52_0
// Il2CppName: <FromType>b__52_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::Layouts::InputControlLayout::$$c::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::$$c::$FromType$b__52_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::$$c*), "<FromType>b__52_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::$$c::$CreateControlItemFromMember$b__75_0
// Il2CppName: <CreateControlItemFromMember>b__75_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::Layouts::InputControlLayout::$$c::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::$$c::$CreateControlItemFromMember$b__75_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::$$c*), "<CreateControlItemFromMember>b__75_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayout::$$c::$CreateControlItemFromMember$b__75_1
// Il2CppName: <CreateControlItemFromMember>b__75_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::Layouts::InputControlLayout::$$c::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::$$c::$CreateControlItemFromMember$b__75_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayout::$$c*), "<CreateControlItemFromMember>b__75_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
