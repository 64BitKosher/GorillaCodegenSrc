// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: UnitySourceGeneratedAssemblyMonoScriptTypes_v1
  class UnitySourceGeneratedAssemblyMonoScriptTypes_v1_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_*, "", "UnitySourceGeneratedAssemblyMonoScriptTypes_v1");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnitySourceGeneratedAssemblyMonoScriptTypes_v1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  // [EditorBrowsableAttribute] Offset: FFFFFFFF
  // [GeneratedCodeAttribute] Offset: FFFFFFFF
  class UnitySourceGeneratedAssemblyMonoScriptTypes_v1_ : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_::MonoScriptData
    struct MonoScriptData;
    // static private UnitySourceGeneratedAssemblyMonoScriptTypes_v1/MonoScriptData Get()
    // Offset: 0x27A965C
    static ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_::MonoScriptData Get();
    // public System.Void .ctor()
    // Offset: 0x27A9758
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnitySourceGeneratedAssemblyMonoScriptTypes_v1_* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnitySourceGeneratedAssemblyMonoScriptTypes_v1_*, creationType>()));
    }
  }; // UnitySourceGeneratedAssemblyMonoScriptTypes_v1
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_::MonoScriptData (*)()>(&GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_::Get)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
