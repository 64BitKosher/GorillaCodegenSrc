// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ICancelAddNew
  class ICancelAddNew;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ICancelAddNew);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ICancelAddNew*, "System.ComponentModel", "ICancelAddNew");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ICancelAddNew
  // [TokenAttribute] Offset: FFFFFFFF
  class ICancelAddNew {
    public:
    // public System.Void CancelNew(System.Int32 itemIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CancelNew(int itemIndex);
    // public System.Void EndNew(System.Int32 itemIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void EndNew(int itemIndex);
  }; // System.ComponentModel.ICancelAddNew
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ICancelAddNew::CancelNew
// Il2CppName: CancelNew
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ICancelAddNew::*)(int)>(&System::ComponentModel::ICancelAddNew::CancelNew)> {
  static const MethodInfo* get() {
    static auto* itemIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ICancelAddNew*), "CancelNew", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{itemIndex});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ICancelAddNew::EndNew
// Il2CppName: EndNew
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ICancelAddNew::*)(int)>(&System::ComponentModel::ICancelAddNew::EndNew)> {
  static const MethodInfo* get() {
    static auto* itemIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ICancelAddNew*), "EndNew", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{itemIndex});
  }
};
