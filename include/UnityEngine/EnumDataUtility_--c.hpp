// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EnumDataUtility
#include "UnityEngine/EnumDataUtility.hpp"
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
  // Forward declaring type: Enum
  class Enum;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EnumDataUtility::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EnumDataUtility::$$c*, "UnityEngine", "EnumDataUtility/<>c");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EnumDataUtility/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class EnumDataUtility::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.EnumDataUtility/<>c <>9
    static ::UnityEngine::EnumDataUtility::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.EnumDataUtility/<>c <>9
    static void _set_$$9(::UnityEngine::EnumDataUtility::$$c* value);
    // Get static field: static public System.Func`2<System.Reflection.FieldInfo,System.Int32> <>9__2_5
    static ::System::Func_2<::System::Reflection::FieldInfo*, int>* _get_$$9__2_5();
    // Set static field: static public System.Func`2<System.Reflection.FieldInfo,System.Int32> <>9__2_5
    static void _set_$$9__2_5(::System::Func_2<::System::Reflection::FieldInfo*, int>* value);
    // Get static field: static public System.Func`2<System.Reflection.FieldInfo,System.String> <>9__2_1
    static ::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>* _get_$$9__2_1();
    // Set static field: static public System.Func`2<System.Reflection.FieldInfo,System.String> <>9__2_1
    static void _set_$$9__2_1(::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>* value);
    // Get static field: static public System.Func`2<System.Reflection.FieldInfo,System.Enum> <>9__2_2
    static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Enum*>* _get_$$9__2_2();
    // Set static field: static public System.Func`2<System.Reflection.FieldInfo,System.Enum> <>9__2_2
    static void _set_$$9__2_2(::System::Func_2<::System::Reflection::FieldInfo*, ::System::Enum*>* value);
    // Get static field: static public System.Func`2<System.Enum,System.Int32> <>9__2_3
    static ::System::Func_2<::System::Enum*, int>* _get_$$9__2_3();
    // Set static field: static public System.Func`2<System.Enum,System.Int32> <>9__2_3
    static void _set_$$9__2_3(::System::Func_2<::System::Enum*, int>* value);
    // Get static field: static public System.Func`2<System.Enum,System.Int32> <>9__2_4
    static ::System::Func_2<::System::Enum*, int>* _get_$$9__2_4();
    // Set static field: static public System.Func`2<System.Enum,System.Int32> <>9__2_4
    static void _set_$$9__2_4(::System::Func_2<::System::Enum*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x54C537C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x54C53E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumDataUtility::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EnumDataUtility::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumDataUtility::$$c*, creationType>()));
    }
    // System.Int32 <GetCachedEnumData>b__2_5(System.Reflection.FieldInfo f)
    // Offset: 0x54C53EC
    int $GetCachedEnumData$b__2_5(::System::Reflection::FieldInfo* f);
    // System.String <GetCachedEnumData>b__2_1(System.Reflection.FieldInfo f)
    // Offset: 0x54C5414
    ::StringW $GetCachedEnumData$b__2_1(::System::Reflection::FieldInfo* f);
    // System.Enum <GetCachedEnumData>b__2_2(System.Reflection.FieldInfo f)
    // Offset: 0x54C5468
    ::System::Enum* $GetCachedEnumData$b__2_2(::System::Reflection::FieldInfo* f);
    // System.Int32 <GetCachedEnumData>b__2_3(System.Enum v)
    // Offset: 0x54C54FC
    int $GetCachedEnumData$b__2_3(::System::Enum* v);
    // System.Int32 <GetCachedEnumData>b__2_4(System.Enum v)
    // Offset: 0x54C5558
    int $GetCachedEnumData$b__2_4(::System::Enum* v);
  }; // UnityEngine.EnumDataUtility/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EnumDataUtility::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::EnumDataUtility::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EnumDataUtility::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EnumDataUtility::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::EnumDataUtility::$$c::$GetCachedEnumData$b__2_5
// Il2CppName: <GetCachedEnumData>b__2_5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EnumDataUtility::$$c::*)(::System::Reflection::FieldInfo*)>(&UnityEngine::EnumDataUtility::$$c::$GetCachedEnumData$b__2_5)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EnumDataUtility::$$c*), "<GetCachedEnumData>b__2_5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::EnumDataUtility::$$c::$GetCachedEnumData$b__2_1
// Il2CppName: <GetCachedEnumData>b__2_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::EnumDataUtility::$$c::*)(::System::Reflection::FieldInfo*)>(&UnityEngine::EnumDataUtility::$$c::$GetCachedEnumData$b__2_1)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EnumDataUtility::$$c*), "<GetCachedEnumData>b__2_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::EnumDataUtility::$$c::$GetCachedEnumData$b__2_2
// Il2CppName: <GetCachedEnumData>b__2_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Enum* (UnityEngine::EnumDataUtility::$$c::*)(::System::Reflection::FieldInfo*)>(&UnityEngine::EnumDataUtility::$$c::$GetCachedEnumData$b__2_2)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EnumDataUtility::$$c*), "<GetCachedEnumData>b__2_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::EnumDataUtility::$$c::$GetCachedEnumData$b__2_3
// Il2CppName: <GetCachedEnumData>b__2_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EnumDataUtility::$$c::*)(::System::Enum*)>(&UnityEngine::EnumDataUtility::$$c::$GetCachedEnumData$b__2_3)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Enum")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EnumDataUtility::$$c*), "<GetCachedEnumData>b__2_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: UnityEngine::EnumDataUtility::$$c::$GetCachedEnumData$b__2_4
// Il2CppName: <GetCachedEnumData>b__2_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EnumDataUtility::$$c::*)(::System::Enum*)>(&UnityEngine::EnumDataUtility::$$c::$GetCachedEnumData$b__2_4)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Enum")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EnumDataUtility::$$c*), "<GetCachedEnumData>b__2_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};