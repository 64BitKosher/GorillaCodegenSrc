// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.IChangeTracking
#include "System/ComponentModel/IChangeTracking.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IRevertibleChangeTracking
  class IRevertibleChangeTracking;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::IRevertibleChangeTracking);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IRevertibleChangeTracking*, "System.ComponentModel", "IRevertibleChangeTracking");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.IRevertibleChangeTracking
  // [TokenAttribute] Offset: FFFFFFFF
  class IRevertibleChangeTracking/*, public ::System::ComponentModel::IChangeTracking*/ {
    public:
    // Creating interface conversion operator: operator ::System::ComponentModel::IChangeTracking
    operator ::System::ComponentModel::IChangeTracking() noexcept {
      return *reinterpret_cast<::System::ComponentModel::IChangeTracking*>(this);
    }
    // public System.Void RejectChanges()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RejectChanges();
  }; // System.ComponentModel.IRevertibleChangeTracking
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::IRevertibleChangeTracking::RejectChanges
// Il2CppName: RejectChanges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::IRevertibleChangeTracking::*)()>(&System::ComponentModel::IRevertibleChangeTracking::RejectChanges)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IRevertibleChangeTracking*), "RejectChanges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
