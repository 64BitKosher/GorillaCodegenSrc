// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IChangeTracking
  class IChangeTracking;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::IChangeTracking);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IChangeTracking*, "System.ComponentModel", "IChangeTracking");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.IChangeTracking
  // [TokenAttribute] Offset: FFFFFFFF
  class IChangeTracking {
    public:
    // public System.Boolean get_IsChanged()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsChanged();
    // public System.Void AcceptChanges()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AcceptChanges();
  }; // System.ComponentModel.IChangeTracking
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::IChangeTracking::get_IsChanged
// Il2CppName: get_IsChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::IChangeTracking::*)()>(&System::ComponentModel::IChangeTracking::get_IsChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IChangeTracking*), "get_IsChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IChangeTracking::AcceptChanges
// Il2CppName: AcceptChanges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::IChangeTracking::*)()>(&System::ComponentModel::IChangeTracking::AcceptChanges)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IChangeTracking*), "AcceptChanges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
