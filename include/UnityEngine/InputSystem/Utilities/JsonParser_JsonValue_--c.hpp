// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
#include "UnityEngine/InputSystem/Utilities/JsonParser_JsonValue.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
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
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::JsonParser::JsonValue::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::JsonParser::JsonValue::$$c*, "UnityEngine.InputSystem.Utilities", "JsonParser/JsonValue/<>c");
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Utilities.JsonParser/JsonValue/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class JsonParser::JsonValue::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.InputSystem.Utilities.JsonParser/JsonValue/<>c <>9
    static ::UnityEngine::InputSystem::Utilities::JsonParser::JsonValue::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.InputSystem.Utilities.JsonParser/JsonValue/<>c <>9
    static void _set_$$9(::UnityEngine::InputSystem::Utilities::JsonParser::JsonValue::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.String> <>9__11_0
    static ::System::Func_2<::UnityEngine::InputSystem::Utilities::JsonParser::JsonValue, ::StringW>* _get_$$9__11_0();
    // Set static field: static public System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.String> <>9__11_0
    static void _set_$$9__11_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::JsonParser::JsonValue, ::StringW>* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.String> <>9__11_1
    static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser::JsonValue>, ::StringW>* _get_$$9__11_1();
    // Set static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.String> <>9__11_1
    static void _set_$$9__11_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser::JsonValue>, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x5175B9C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x5175C04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonParser::JsonValue::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::JsonParser::JsonValue::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonParser::JsonValue::$$c*, creationType>()));
    }
    // System.String <ToString>b__11_0(UnityEngine.InputSystem.Utilities.JsonParser/JsonValue x)
    // Offset: 0x5175C0C
    ::StringW $ToString$b__11_0(::UnityEngine::InputSystem::Utilities::JsonParser::JsonValue x);
    // System.String <ToString>b__11_1(System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue> pair)
    // Offset: 0x5175C14
    ::StringW $ToString$b__11_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser::JsonValue> pair);
  }; // UnityEngine.InputSystem.Utilities.JsonParser/JsonValue/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::JsonParser::JsonValue::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::Utilities::JsonParser::JsonValue::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::JsonParser::JsonValue::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::JsonParser::JsonValue::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::JsonParser::JsonValue::$$c::$ToString$b__11_0
// Il2CppName: <ToString>b__11_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Utilities::JsonParser::JsonValue::$$c::*)(::UnityEngine::InputSystem::Utilities::JsonParser::JsonValue)>(&UnityEngine::InputSystem::Utilities::JsonParser::JsonValue::$$c::$ToString$b__11_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Utilities", "JsonParser/JsonValue")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::JsonParser::JsonValue::$$c*), "<ToString>b__11_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::JsonParser::JsonValue::$$c::$ToString$b__11_1
// Il2CppName: <ToString>b__11_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Utilities::JsonParser::JsonValue::$$c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser::JsonValue>)>(&UnityEngine::InputSystem::Utilities::JsonParser::JsonValue::$$c::$ToString$b__11_1)> {
  static const MethodInfo* get() {
    static auto* pair = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Utilities", "JsonParser/JsonValue")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::JsonParser::JsonValue::$$c*), "<ToString>b__11_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pair});
  }
};
