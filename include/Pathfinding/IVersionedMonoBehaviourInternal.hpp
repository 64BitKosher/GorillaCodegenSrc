// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: IVersionedMonoBehaviourInternal
  class IVersionedMonoBehaviourInternal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::IVersionedMonoBehaviourInternal);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::IVersionedMonoBehaviourInternal*, "Pathfinding", "IVersionedMonoBehaviourInternal");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.IVersionedMonoBehaviourInternal
  // [TokenAttribute] Offset: FFFFFFFF
  class IVersionedMonoBehaviourInternal {
    public:
    // public System.Void UpgradeFromUnityThread()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpgradeFromUnityThread();
  }; // Pathfinding.IVersionedMonoBehaviourInternal
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::IVersionedMonoBehaviourInternal::UpgradeFromUnityThread
// Il2CppName: UpgradeFromUnityThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::IVersionedMonoBehaviourInternal::*)()>(&Pathfinding::IVersionedMonoBehaviourInternal::UpgradeFromUnityThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IVersionedMonoBehaviourInternal*), "UpgradeFromUnityThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
