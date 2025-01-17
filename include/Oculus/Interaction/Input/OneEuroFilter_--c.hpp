// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.Input.OneEuroFilter
#include "Oculus/Interaction/Input/OneEuroFilter.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Input::OneEuroFilter::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Input::OneEuroFilter::$$c*, "Oculus.Interaction.Input", "OneEuroFilter/<>c");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Input.OneEuroFilter/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OneEuroFilter::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Oculus.Interaction.Input.OneEuroFilter/<>c <>9
    static ::Oculus::Interaction::Input::OneEuroFilter::$$c* _get_$$9();
    // Set static field: static public readonly Oculus.Interaction.Input.OneEuroFilter/<>c <>9
    static void _set_$$9(::Oculus::Interaction::Input::OneEuroFilter::$$c* value);
    // Get static field: static public System.Func`2<System.Single[],UnityEngine.Vector2> <>9__16_0
    static ::System::Func_2<::ArrayW<float>, ::UnityEngine::Vector2>* _get_$$9__16_0();
    // Set static field: static public System.Func`2<System.Single[],UnityEngine.Vector2> <>9__16_0
    static void _set_$$9__16_0(::System::Func_2<::ArrayW<float>, ::UnityEngine::Vector2>* value);
    // Get static field: static public System.Func`3<UnityEngine.Vector2,System.Int32,System.Single> <>9__16_1
    static ::System::Func_3<::UnityEngine::Vector2, int, float>* _get_$$9__16_1();
    // Set static field: static public System.Func`3<UnityEngine.Vector2,System.Int32,System.Single> <>9__16_1
    static void _set_$$9__16_1(::System::Func_3<::UnityEngine::Vector2, int, float>* value);
    // Get static field: static public System.Func`2<System.Single[],UnityEngine.Vector3> <>9__17_0
    static ::System::Func_2<::ArrayW<float>, ::UnityEngine::Vector3>* _get_$$9__17_0();
    // Set static field: static public System.Func`2<System.Single[],UnityEngine.Vector3> <>9__17_0
    static void _set_$$9__17_0(::System::Func_2<::ArrayW<float>, ::UnityEngine::Vector3>* value);
    // Get static field: static public System.Func`3<UnityEngine.Vector3,System.Int32,System.Single> <>9__17_1
    static ::System::Func_3<::UnityEngine::Vector3, int, float>* _get_$$9__17_1();
    // Set static field: static public System.Func`3<UnityEngine.Vector3,System.Int32,System.Single> <>9__17_1
    static void _set_$$9__17_1(::System::Func_3<::UnityEngine::Vector3, int, float>* value);
    // Get static field: static public System.Func`2<System.Single[],UnityEngine.Vector4> <>9__18_0
    static ::System::Func_2<::ArrayW<float>, ::UnityEngine::Vector4>* _get_$$9__18_0();
    // Set static field: static public System.Func`2<System.Single[],UnityEngine.Vector4> <>9__18_0
    static void _set_$$9__18_0(::System::Func_2<::ArrayW<float>, ::UnityEngine::Vector4>* value);
    // Get static field: static public System.Func`3<UnityEngine.Vector4,System.Int32,System.Single> <>9__18_1
    static ::System::Func_3<::UnityEngine::Vector4, int, float>* _get_$$9__18_1();
    // Set static field: static public System.Func`3<UnityEngine.Vector4,System.Int32,System.Single> <>9__18_1
    static void _set_$$9__18_1(::System::Func_3<::UnityEngine::Vector4, int, float>* value);
    // Get static field: static public System.Func`2<System.Single[],UnityEngine.Quaternion> <>9__19_0
    static ::System::Func_2<::ArrayW<float>, ::UnityEngine::Quaternion>* _get_$$9__19_0();
    // Set static field: static public System.Func`2<System.Single[],UnityEngine.Quaternion> <>9__19_0
    static void _set_$$9__19_0(::System::Func_2<::ArrayW<float>, ::UnityEngine::Quaternion>* value);
    // Get static field: static public System.Func`3<UnityEngine.Quaternion,System.Int32,System.Single> <>9__19_1
    static ::System::Func_3<::UnityEngine::Quaternion, int, float>* _get_$$9__19_1();
    // Set static field: static public System.Func`3<UnityEngine.Quaternion,System.Int32,System.Single> <>9__19_1
    static void _set_$$9__19_1(::System::Func_3<::UnityEngine::Quaternion, int, float>* value);
    // static private System.Void .cctor()
    // Offset: 0x481F180
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x481F1E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OneEuroFilter::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::OneEuroFilter::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OneEuroFilter::$$c*, creationType>()));
    }
    // UnityEngine.Vector2 <CreateVector2>b__16_0(System.Single[] values)
    // Offset: 0x481F1F0
    ::UnityEngine::Vector2 $CreateVector2$b__16_0(::ArrayW<float> values);
    // System.Single <CreateVector2>b__16_1(UnityEngine.Vector2 value, System.Int32 index)
    // Offset: 0x481F21C
    float $CreateVector2$b__16_1(::UnityEngine::Vector2 value, int index);
    // UnityEngine.Vector3 <CreateVector3>b__17_0(System.Single[] values)
    // Offset: 0x481F27C
    ::UnityEngine::Vector3 $CreateVector3$b__17_0(::ArrayW<float> values);
    // System.Single <CreateVector3>b__17_1(UnityEngine.Vector3 value, System.Int32 index)
    // Offset: 0x481F2B4
    float $CreateVector3$b__17_1(::UnityEngine::Vector3 value, int index);
    // UnityEngine.Vector4 <CreateVector4>b__18_0(System.Single[] values)
    // Offset: 0x481F324
    ::UnityEngine::Vector4 $CreateVector4$b__18_0(::ArrayW<float> values);
    // System.Single <CreateVector4>b__18_1(UnityEngine.Vector4 value, System.Int32 index)
    // Offset: 0x481F364
    float $CreateVector4$b__18_1(::UnityEngine::Vector4 value, int index);
    // UnityEngine.Quaternion <CreateQuaternion>b__19_0(System.Single[] values)
    // Offset: 0x481F3EC
    ::UnityEngine::Quaternion $CreateQuaternion$b__19_0(::ArrayW<float> values);
    // System.Single <CreateQuaternion>b__19_1(UnityEngine.Quaternion value, System.Int32 index)
    // Offset: 0x481F4E4
    float $CreateQuaternion$b__19_1(::UnityEngine::Quaternion value, int index);
  }; // Oculus.Interaction.Input.OneEuroFilter/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilter::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::Input::OneEuroFilter::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OneEuroFilter::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilter::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilter::$$c::$CreateVector2$b__16_0
// Il2CppName: <CreateVector2>b__16_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (Oculus::Interaction::Input::OneEuroFilter::$$c::*)(::ArrayW<float>)>(&Oculus::Interaction::Input::OneEuroFilter::$$c::$CreateVector2$b__16_0)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OneEuroFilter::$$c*), "<CreateVector2>b__16_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilter::$$c::$CreateVector2$b__16_1
// Il2CppName: <CreateVector2>b__16_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Input::OneEuroFilter::$$c::*)(::UnityEngine::Vector2, int)>(&Oculus::Interaction::Input::OneEuroFilter::$$c::$CreateVector2$b__16_1)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OneEuroFilter::$$c*), "<CreateVector2>b__16_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, index});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilter::$$c::$CreateVector3$b__17_0
// Il2CppName: <CreateVector3>b__17_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::Input::OneEuroFilter::$$c::*)(::ArrayW<float>)>(&Oculus::Interaction::Input::OneEuroFilter::$$c::$CreateVector3$b__17_0)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OneEuroFilter::$$c*), "<CreateVector3>b__17_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilter::$$c::$CreateVector3$b__17_1
// Il2CppName: <CreateVector3>b__17_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Input::OneEuroFilter::$$c::*)(::UnityEngine::Vector3, int)>(&Oculus::Interaction::Input::OneEuroFilter::$$c::$CreateVector3$b__17_1)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OneEuroFilter::$$c*), "<CreateVector3>b__17_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, index});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilter::$$c::$CreateVector4$b__18_0
// Il2CppName: <CreateVector4>b__18_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (Oculus::Interaction::Input::OneEuroFilter::$$c::*)(::ArrayW<float>)>(&Oculus::Interaction::Input::OneEuroFilter::$$c::$CreateVector4$b__18_0)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OneEuroFilter::$$c*), "<CreateVector4>b__18_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilter::$$c::$CreateVector4$b__18_1
// Il2CppName: <CreateVector4>b__18_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Input::OneEuroFilter::$$c::*)(::UnityEngine::Vector4, int)>(&Oculus::Interaction::Input::OneEuroFilter::$$c::$CreateVector4$b__18_1)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OneEuroFilter::$$c*), "<CreateVector4>b__18_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, index});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilter::$$c::$CreateQuaternion$b__19_0
// Il2CppName: <CreateQuaternion>b__19_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (Oculus::Interaction::Input::OneEuroFilter::$$c::*)(::ArrayW<float>)>(&Oculus::Interaction::Input::OneEuroFilter::$$c::$CreateQuaternion$b__19_0)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OneEuroFilter::$$c*), "<CreateQuaternion>b__19_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilter::$$c::$CreateQuaternion$b__19_1
// Il2CppName: <CreateQuaternion>b__19_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Input::OneEuroFilter::$$c::*)(::UnityEngine::Quaternion, int)>(&Oculus::Interaction::Input::OneEuroFilter::$$c::$CreateQuaternion$b__19_1)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OneEuroFilter::$$c*), "<CreateQuaternion>b__19_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, index});
  }
};
