// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.UxmlFloatAttributeDescription
#include "UnityEngine/UIElements/UxmlFloatAttributeDescription.hpp"
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
NEED_NO_BOX(::UnityEngine::UIElements::UxmlFloatAttributeDescription::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlFloatAttributeDescription::$$c*, "UnityEngine.UIElements", "UxmlFloatAttributeDescription/<>c");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UxmlFloatAttributeDescription/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UxmlFloatAttributeDescription::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UIElements.UxmlFloatAttributeDescription/<>c <>9
    static ::UnityEngine::UIElements::UxmlFloatAttributeDescription::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UIElements.UxmlFloatAttributeDescription/<>c <>9
    static void _set_$$9(::UnityEngine::UIElements::UxmlFloatAttributeDescription::$$c* value);
    // Get static field: static public System.Func`3<System.String,System.Single,System.Single> <>9__3_0
    static ::System::Func_3<::StringW, float, float>* _get_$$9__3_0();
    // Set static field: static public System.Func`3<System.String,System.Single,System.Single> <>9__3_0
    static void _set_$$9__3_0(::System::Func_3<::StringW, float, float>* value);
    // static private System.Void .cctor()
    // Offset: 0x56C5948
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x56C59B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UxmlFloatAttributeDescription::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UxmlFloatAttributeDescription::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UxmlFloatAttributeDescription::$$c*, creationType>()));
    }
    // System.Single <GetValueFromBag>b__3_0(System.String s, System.Single f)
    // Offset: 0x56C59B8
    float $GetValueFromBag$b__3_0(::StringW s, float f);
  }; // UnityEngine.UIElements.UxmlFloatAttributeDescription/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlFloatAttributeDescription::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UxmlFloatAttributeDescription::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlFloatAttributeDescription::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlFloatAttributeDescription::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlFloatAttributeDescription::$$c::$GetValueFromBag$b__3_0
// Il2CppName: <GetValueFromBag>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::UxmlFloatAttributeDescription::$$c::*)(::StringW, float)>(&UnityEngine::UIElements::UxmlFloatAttributeDescription::$$c::$GetValueFromBag$b__3_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlFloatAttributeDescription::$$c*), "<GetValueFromBag>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, f});
  }
};
