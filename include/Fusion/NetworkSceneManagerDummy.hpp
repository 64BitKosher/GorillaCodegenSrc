// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.INetworkSceneManager
#include "Fusion/INetworkSceneManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: NetworkSceneManagerDummy
  class NetworkSceneManagerDummy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkSceneManagerDummy);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkSceneManagerDummy*, "Fusion", "NetworkSceneManagerDummy");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkSceneManagerDummy
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkSceneManagerDummy : public ::Il2CppObject/*, public ::Fusion::INetworkSceneManager*/ {
    public:
    // Creating interface conversion operator: operator ::Fusion::INetworkSceneManager
    operator ::Fusion::INetworkSceneManager() noexcept {
      return *reinterpret_cast<::Fusion::INetworkSceneManager*>(this);
    }
    // public System.Void Initialize(Fusion.NetworkRunner runner)
    // Offset: 0x2B4ECA0
    void Initialize(::Fusion::NetworkRunner* runner);
    // public System.Boolean IsReady(Fusion.NetworkRunner runner)
    // Offset: 0x2B4ECA4
    bool IsReady(::Fusion::NetworkRunner* runner);
    // public System.Void Shutdown(Fusion.NetworkRunner runner)
    // Offset: 0x2B4ECAC
    void Shutdown(::Fusion::NetworkRunner* runner);
    // public System.Void .ctor()
    // Offset: 0x2B4ECB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkSceneManagerDummy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkSceneManagerDummy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkSceneManagerDummy*, creationType>()));
    }
  }; // Fusion.NetworkSceneManagerDummy
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDummy::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkSceneManagerDummy::*)(::Fusion::NetworkRunner*)>(&Fusion::NetworkSceneManagerDummy::Initialize)> {
  static const MethodInfo* get() {
    static auto* runner = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkRunner")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerDummy*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{runner});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDummy::IsReady
// Il2CppName: IsReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkSceneManagerDummy::*)(::Fusion::NetworkRunner*)>(&Fusion::NetworkSceneManagerDummy::IsReady)> {
  static const MethodInfo* get() {
    static auto* runner = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkRunner")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerDummy*), "IsReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{runner});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDummy::Shutdown
// Il2CppName: Shutdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkSceneManagerDummy::*)(::Fusion::NetworkRunner*)>(&Fusion::NetworkSceneManagerDummy::Shutdown)> {
  static const MethodInfo* get() {
    static auto* runner = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkRunner")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerDummy*), "Shutdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{runner});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDummy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
