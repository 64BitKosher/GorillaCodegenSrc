// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.IContainer
#include "System/ComponentModel/IContainer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IComponent
  class IComponent;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: INestedContainer
  class INestedContainer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::INestedContainer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::INestedContainer*, "System.ComponentModel", "INestedContainer");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.INestedContainer
  // [TokenAttribute] Offset: FFFFFFFF
  class INestedContainer/*, public ::System::ComponentModel::IContainer*/ {
    public:
    // Creating interface conversion operator: operator ::System::ComponentModel::IContainer
    operator ::System::ComponentModel::IContainer() noexcept {
      return *reinterpret_cast<::System::ComponentModel::IContainer*>(this);
    }
    // public System.ComponentModel.IComponent get_Owner()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ComponentModel::IComponent* get_Owner();
  }; // System.ComponentModel.INestedContainer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::INestedContainer::get_Owner
// Il2CppName: get_Owner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::IComponent* (System::ComponentModel::INestedContainer::*)()>(&System::ComponentModel::INestedContainer::get_Owner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::INestedContainer*), "get_Owner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
