// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkRunner
  class NetworkRunner;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: IDespawned
  class IDespawned;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::IDespawned);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::IDespawned*, "Fusion", "IDespawned");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.IDespawned
  // [TokenAttribute] Offset: FFFFFFFF
  class IDespawned {
    public:
    // public System.Void Despawned(Fusion.NetworkRunner runner, System.Boolean hasState)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Despawned(::Fusion::NetworkRunner* runner, bool hasState);
  }; // Fusion.IDespawned
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::IDespawned::Despawned
// Il2CppName: Despawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::IDespawned::*)(::Fusion::NetworkRunner*, bool)>(&Fusion::IDespawned::Despawned)> {
  static const MethodInfo* get() {
    static auto* runner = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkRunner")->byval_arg;
    static auto* hasState = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::IDespawned*), "Despawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{runner, hasState});
  }
};
