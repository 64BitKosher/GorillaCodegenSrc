// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.INetworkSceneManager
#include "Fusion/INetworkSceneManager.hpp"
// Including type: Fusion.INetworkSceneManagerObjectResolver
#include "Fusion/INetworkSceneManagerObjectResolver.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: INetworkSceneObjectProvider
  class INetworkSceneObjectProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::INetworkSceneObjectProvider);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::INetworkSceneObjectProvider*, "Fusion", "INetworkSceneObjectProvider");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.INetworkSceneObjectProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  class INetworkSceneObjectProvider/*, public ::Fusion::INetworkSceneManager, public ::Fusion::INetworkSceneManagerObjectResolver*/ {
    public:
    // Creating interface conversion operator: operator ::Fusion::INetworkSceneManager
    operator ::Fusion::INetworkSceneManager() noexcept {
      return *reinterpret_cast<::Fusion::INetworkSceneManager*>(this);
    }
    // Creating interface conversion operator: operator ::Fusion::INetworkSceneManagerObjectResolver
    operator ::Fusion::INetworkSceneManagerObjectResolver() noexcept {
      return *reinterpret_cast<::Fusion::INetworkSceneManagerObjectResolver*>(this);
    }
  }; // Fusion.INetworkSceneObjectProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"