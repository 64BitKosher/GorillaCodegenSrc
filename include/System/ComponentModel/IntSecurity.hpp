// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IntSecurity
  class IntSecurity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::IntSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IntSecurity*, "System.ComponentModel", "IntSecurity");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.IntSecurity
  // [TokenAttribute] Offset: FFFFFFFF
  class IntSecurity : public ::Il2CppObject {
    public:
    // static public System.String UnsafeGetFullPath(System.String fileName)
    // Offset: 0x4F20D6C
    static ::StringW UnsafeGetFullPath(::StringW fileName);
  }; // System.ComponentModel.IntSecurity
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::IntSecurity::UnsafeGetFullPath
// Il2CppName: UnsafeGetFullPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::ComponentModel::IntSecurity::UnsafeGetFullPath)> {
  static const MethodInfo* get() {
    static auto* fileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IntSecurity*), "UnsafeGetFullPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fileName});
  }
};
