// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: ILocalPrefabCreated
  class ILocalPrefabCreated;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::ILocalPrefabCreated);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::ILocalPrefabCreated*, "Fusion", "ILocalPrefabCreated");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.ILocalPrefabCreated
  // [TokenAttribute] Offset: FFFFFFFF
  class ILocalPrefabCreated {
    public:
    // public System.Void LocalPrefabCreated()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void LocalPrefabCreated();
  }; // Fusion.ILocalPrefabCreated
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::ILocalPrefabCreated::LocalPrefabCreated
// Il2CppName: LocalPrefabCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::ILocalPrefabCreated::*)()>(&Fusion::ILocalPrefabCreated::LocalPrefabCreated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::ILocalPrefabCreated*), "LocalPrefabCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
