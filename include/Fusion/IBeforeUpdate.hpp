// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: IBeforeUpdate
  class IBeforeUpdate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::IBeforeUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::IBeforeUpdate*, "Fusion", "IBeforeUpdate");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.IBeforeUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  class IBeforeUpdate {
    public:
    // public System.Void BeforeUpdate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void BeforeUpdate();
  }; // Fusion.IBeforeUpdate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::IBeforeUpdate::BeforeUpdate
// Il2CppName: BeforeUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::IBeforeUpdate::*)()>(&Fusion::IBeforeUpdate::BeforeUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::IBeforeUpdate*), "BeforeUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};