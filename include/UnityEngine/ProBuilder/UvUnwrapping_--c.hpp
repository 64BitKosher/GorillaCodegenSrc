// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.UvUnwrapping
#include "UnityEngine/ProBuilder/UvUnwrapping.hpp"
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
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::UvUnwrapping::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::UvUnwrapping::$$c*, "UnityEngine.ProBuilder", "UvUnwrapping/<>c");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.UvUnwrapping/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UvUnwrapping::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.ProBuilder.UvUnwrapping/<>c <>9
    static ::UnityEngine::ProBuilder::UvUnwrapping::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.UvUnwrapping/<>c <>9
    static void _set_$$9(::UnityEngine::ProBuilder::UvUnwrapping::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Boolean> <>9__0_0
    static ::System::Func_2<::UnityEngine::ProBuilder::Face*, bool>* _get_$$9__0_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Boolean> <>9__0_0
    static void _set_$$9__0_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x51E4370
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x51E43D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UvUnwrapping::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::UvUnwrapping::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UvUnwrapping::$$c*, creationType>()));
    }
    // System.Boolean <SetAutoUV>b__0_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x51E43E0
    bool $SetAutoUV$b__0_0(::UnityEngine::ProBuilder::Face* x);
  }; // UnityEngine.ProBuilder.UvUnwrapping/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UvUnwrapping::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::UvUnwrapping::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UvUnwrapping::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UvUnwrapping::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UvUnwrapping::$$c::$SetAutoUV$b__0_0
// Il2CppName: <SetAutoUV>b__0_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::UvUnwrapping::$$c::*)(::UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::UvUnwrapping::$$c::$SetAutoUV$b__0_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UvUnwrapping::$$c*), "<SetAutoUV>b__0_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
