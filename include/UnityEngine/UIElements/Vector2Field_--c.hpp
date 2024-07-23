// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.Vector2Field
#include "UnityEngine/UIElements/Vector2Field.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.UIElements.BaseCompositeField`3/FieldDescription
#include "UnityEngine/UIElements/BaseCompositeField_3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: FloatField
  class FloatField;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::Vector2Field::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Vector2Field::$$c*, "UnityEngine.UIElements", "Vector2Field/<>c");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.Vector2Field/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Vector2Field::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UIElements.Vector2Field/<>c <>9
    static ::UnityEngine::UIElements::Vector2Field::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UIElements.Vector2Field/<>c <>9
    static void _set_$$9(::UnityEngine::UIElements::Vector2Field::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.Vector2,System.Single> <>9__0_0
    static ::System::Func_2<::UnityEngine::Vector2, float>* _get_$$9__0_0();
    // Set static field: static public System.Func`2<UnityEngine.Vector2,System.Single> <>9__0_0
    static void _set_$$9__0_0(::System::Func_2<::UnityEngine::Vector2, float>* value);
    // Get static field: static public UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2,UnityEngine.UIElements.FloatField,System.Single> <>9__0_1
    static typename ::UnityEngine::UIElements::BaseCompositeField_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::FloatField*, float>::FieldDescription::WriteDelegate* _get_$$9__0_1();
    // Set static field: static public UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2,UnityEngine.UIElements.FloatField,System.Single> <>9__0_1
    static void _set_$$9__0_1(typename ::UnityEngine::UIElements::BaseCompositeField_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::FloatField*, float>::FieldDescription::WriteDelegate* value);
    // Get static field: static public System.Func`2<UnityEngine.Vector2,System.Single> <>9__0_2
    static ::System::Func_2<::UnityEngine::Vector2, float>* _get_$$9__0_2();
    // Set static field: static public System.Func`2<UnityEngine.Vector2,System.Single> <>9__0_2
    static void _set_$$9__0_2(::System::Func_2<::UnityEngine::Vector2, float>* value);
    // Get static field: static public UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2,UnityEngine.UIElements.FloatField,System.Single> <>9__0_3
    static typename ::UnityEngine::UIElements::BaseCompositeField_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::FloatField*, float>::FieldDescription::WriteDelegate* _get_$$9__0_3();
    // Set static field: static public UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2,UnityEngine.UIElements.FloatField,System.Single> <>9__0_3
    static void _set_$$9__0_3(typename ::UnityEngine::UIElements::BaseCompositeField_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::FloatField*, float>::FieldDescription::WriteDelegate* value);
    // static private System.Void .cctor()
    // Offset: 0x55B1958
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x55B19C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector2Field::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Vector2Field::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector2Field::$$c*, creationType>()));
    }
    // System.Single <DescribeFields>b__0_0(UnityEngine.Vector2 r)
    // Offset: 0x55B19C8
    float $DescribeFields$b__0_0(::UnityEngine::Vector2 r);
    // System.Void <DescribeFields>b__0_1(ref UnityEngine.Vector2 r, System.Single v)
    // Offset: 0x55B19CC
    void $DescribeFields$b__0_1(ByRef<::UnityEngine::Vector2> r, float v);
    // System.Single <DescribeFields>b__0_2(UnityEngine.Vector2 r)
    // Offset: 0x55B19D4
    float $DescribeFields$b__0_2(::UnityEngine::Vector2 r);
    // System.Void <DescribeFields>b__0_3(ref UnityEngine.Vector2 r, System.Single v)
    // Offset: 0x55B19DC
    void $DescribeFields$b__0_3(ByRef<::UnityEngine::Vector2> r, float v);
  }; // UnityEngine.UIElements.Vector2Field/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::Vector2Field::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::Vector2Field::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Vector2Field::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Vector2Field::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::Vector2Field::$$c::$DescribeFields$b__0_0
// Il2CppName: <DescribeFields>b__0_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::Vector2Field::$$c::*)(::UnityEngine::Vector2)>(&UnityEngine::UIElements::Vector2Field::$$c::$DescribeFields$b__0_0)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Vector2Field::$$c*), "<DescribeFields>b__0_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Vector2Field::$$c::$DescribeFields$b__0_1
// Il2CppName: <DescribeFields>b__0_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Vector2Field::$$c::*)(ByRef<::UnityEngine::Vector2>, float)>(&UnityEngine::UIElements::Vector2Field::$$c::$DescribeFields$b__0_1)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Vector2Field::$$c*), "<DescribeFields>b__0_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, v});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Vector2Field::$$c::$DescribeFields$b__0_2
// Il2CppName: <DescribeFields>b__0_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::Vector2Field::$$c::*)(::UnityEngine::Vector2)>(&UnityEngine::UIElements::Vector2Field::$$c::$DescribeFields$b__0_2)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Vector2Field::$$c*), "<DescribeFields>b__0_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Vector2Field::$$c::$DescribeFields$b__0_3
// Il2CppName: <DescribeFields>b__0_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Vector2Field::$$c::*)(ByRef<::UnityEngine::Vector2>, float)>(&UnityEngine::UIElements::Vector2Field::$$c::$DescribeFields$b__0_3)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Vector2Field::$$c*), "<DescribeFields>b__0_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, v});
  }
};
