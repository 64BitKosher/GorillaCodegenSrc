// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: IBeforeUpdateRemotePrefabs
  class IBeforeUpdateRemotePrefabs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::IBeforeUpdateRemotePrefabs);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::IBeforeUpdateRemotePrefabs*, "Fusion", "IBeforeUpdateRemotePrefabs");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.IBeforeUpdateRemotePrefabs
  // [TokenAttribute] Offset: FFFFFFFF
  class IBeforeUpdateRemotePrefabs {
    public:
    // public System.Void BeforeUpdateRemotePrefabs()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void BeforeUpdateRemotePrefabs();
  }; // Fusion.IBeforeUpdateRemotePrefabs
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::IBeforeUpdateRemotePrefabs::BeforeUpdateRemotePrefabs
// Il2CppName: BeforeUpdateRemotePrefabs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::IBeforeUpdateRemotePrefabs::*)()>(&Fusion::IBeforeUpdateRemotePrefabs::BeforeUpdateRemotePrefabs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::IBeforeUpdateRemotePrefabs*), "BeforeUpdateRemotePrefabs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};