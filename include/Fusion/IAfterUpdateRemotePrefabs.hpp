// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: IAfterUpdateRemotePrefabs
  class IAfterUpdateRemotePrefabs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::IAfterUpdateRemotePrefabs);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::IAfterUpdateRemotePrefabs*, "Fusion", "IAfterUpdateRemotePrefabs");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.IAfterUpdateRemotePrefabs
  // [TokenAttribute] Offset: FFFFFFFF
  class IAfterUpdateRemotePrefabs {
    public:
    // public System.Void AfterUpdateRemotePrefabs()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AfterUpdateRemotePrefabs();
  }; // Fusion.IAfterUpdateRemotePrefabs
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::IAfterUpdateRemotePrefabs::AfterUpdateRemotePrefabs
// Il2CppName: AfterUpdateRemotePrefabs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::IAfterUpdateRemotePrefabs::*)()>(&Fusion::IAfterUpdateRemotePrefabs::AfterUpdateRemotePrefabs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::IAfterUpdateRemotePrefabs*), "AfterUpdateRemotePrefabs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
