// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.UxmlIntAttributeDescription
#include "UnityEngine/UIElements/UxmlIntAttributeDescription.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UxmlIntAttributeDescription::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlIntAttributeDescription::$$c*, "UnityEngine.UIElements", "UxmlIntAttributeDescription/<>c");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UxmlIntAttributeDescription/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UxmlIntAttributeDescription::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UIElements.UxmlIntAttributeDescription/<>c <>9
    static ::UnityEngine::UIElements::UxmlIntAttributeDescription::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UIElements.UxmlIntAttributeDescription/<>c <>9
    static void _set_$$9(::UnityEngine::UIElements::UxmlIntAttributeDescription::$$c* value);
    // Get static field: static public System.Func`3<System.String,System.Int32,System.Int32> <>9__3_0
    static ::System::Func_3<::StringW, int, int>* _get_$$9__3_0();
    // Set static field: static public System.Func`3<System.String,System.Int32,System.Int32> <>9__3_0
    static void _set_$$9__3_0(::System::Func_3<::StringW, int, int>* value);
    // Get static field: static public System.Func`3<System.String,System.Int32,System.Int32> <>9__4_0
    static ::System::Func_3<::StringW, int, int>* _get_$$9__4_0();
    // Set static field: static public System.Func`3<System.String,System.Int32,System.Int32> <>9__4_0
    static void _set_$$9__4_0(::System::Func_3<::StringW, int, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x56C6078
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x56C60E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UxmlIntAttributeDescription::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UxmlIntAttributeDescription::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UxmlIntAttributeDescription::$$c*, creationType>()));
    }
    // System.Int32 <GetValueFromBag>b__3_0(System.String s, System.Int32 i)
    // Offset: 0x56C60E8
    int $GetValueFromBag$b__3_0(::StringW s, int i);
    // System.Int32 <TryGetValueFromBag>b__4_0(System.String s, System.Int32 i)
    // Offset: 0x56C6128
    int $TryGetValueFromBag$b__4_0(::StringW s, int i);
  }; // UnityEngine.UIElements.UxmlIntAttributeDescription/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlIntAttributeDescription::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UxmlIntAttributeDescription::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlIntAttributeDescription::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlIntAttributeDescription::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlIntAttributeDescription::$$c::$GetValueFromBag$b__3_0
// Il2CppName: <GetValueFromBag>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::UxmlIntAttributeDescription::$$c::*)(::StringW, int)>(&UnityEngine::UIElements::UxmlIntAttributeDescription::$$c::$GetValueFromBag$b__3_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlIntAttributeDescription::$$c*), "<GetValueFromBag>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, i});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlIntAttributeDescription::$$c::$TryGetValueFromBag$b__4_0
// Il2CppName: <TryGetValueFromBag>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::UxmlIntAttributeDescription::$$c::*)(::StringW, int)>(&UnityEngine::UIElements::UxmlIntAttributeDescription::$$c::$TryGetValueFromBag$b__4_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlIntAttributeDescription::$$c*), "<TryGetValueFromBag>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, i});
  }
};
