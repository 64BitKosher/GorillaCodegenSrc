// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.CoreUtils
#include "UnityEngine/Rendering/CoreUtils.hpp"
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
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::CoreUtils::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CoreUtils::$$c*, "UnityEngine.Rendering", "CoreUtils/<>c");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.CoreUtils/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CoreUtils::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.Rendering.CoreUtils/<>c <>9
    static ::UnityEngine::Rendering::CoreUtils::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Rendering.CoreUtils/<>c <>9
    static void _set_$$9(::UnityEngine::Rendering::CoreUtils::$$c* value);
    // Get static field: static public System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>> <>9__87_0
    static ::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* _get_$$9__87_0();
    // Set static field: static public System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>> <>9__87_0
    static void _set_$$9__87_0(::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x525E0E4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x525E14C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CoreUtils::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::CoreUtils::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CoreUtils::$$c*, creationType>()));
    }
    // System.Collections.Generic.IEnumerable`1<System.Type> <GetAllAssemblyTypes>b__87_0(System.Reflection.Assembly t)
    // Offset: 0x525E154
    ::System::Collections::Generic::IEnumerable_1<::System::Type*>* $GetAllAssemblyTypes$b__87_0(::System::Reflection::Assembly* t);
  }; // UnityEngine.Rendering.CoreUtils/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::CoreUtils::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::CoreUtils::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CoreUtils::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CoreUtils::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::CoreUtils::$$c::$GetAllAssemblyTypes$b__87_0
// Il2CppName: <GetAllAssemblyTypes>b__87_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (UnityEngine::Rendering::CoreUtils::$$c::*)(::System::Reflection::Assembly*)>(&UnityEngine::Rendering::CoreUtils::$$c::$GetAllAssemblyTypes$b__87_0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CoreUtils::$$c*), "<GetAllAssemblyTypes>b__87_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
