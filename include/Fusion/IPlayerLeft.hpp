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
  // Forward declaring type: PlayerRef
  struct PlayerRef;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: IPlayerLeft
  class IPlayerLeft;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::IPlayerLeft);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::IPlayerLeft*, "Fusion", "IPlayerLeft");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.IPlayerLeft
  // [TokenAttribute] Offset: FFFFFFFF
  class IPlayerLeft {
    public:
    // public System.Void PlayerLeft(Fusion.PlayerRef player)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void PlayerLeft(::Fusion::PlayerRef player);
  }; // Fusion.IPlayerLeft
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::IPlayerLeft::PlayerLeft
// Il2CppName: PlayerLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::IPlayerLeft::*)(::Fusion::PlayerRef)>(&Fusion::IPlayerLeft::PlayerLeft)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("Fusion", "PlayerRef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::IPlayerLeft*), "PlayerLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};