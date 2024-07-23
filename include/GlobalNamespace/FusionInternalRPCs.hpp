// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.SimulationBehaviour
#include "Fusion/SimulationBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NetworkSystemFusion
  class NetworkSystemFusion;
}
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkRunner
  class NetworkRunner;
  // Forward declaring type: PlayerRef
  struct PlayerRef;
  // Forward declaring type: SimulationMessage
  struct SimulationMessage;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FusionInternalRPCs
  class FusionInternalRPCs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FusionInternalRPCs);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FusionInternalRPCs*, "", "FusionInternalRPCs");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: FusionInternalRPCs
  // [TokenAttribute] Offset: FFFFFFFF
  class FusionInternalRPCs : public ::Fusion::SimulationBehaviour {
    public:
    // Get static field: static private NetworkSystemFusion netSys
    static ::GlobalNamespace::NetworkSystemFusion* _get_netSys();
    // Set static field: static private NetworkSystemFusion netSys
    static void _set_netSys(::GlobalNamespace::NetworkSystemFusion* value);
    // private System.Void Awake()
    // Offset: 0x289E290
    void Awake();
    // static public System.Void RPC_SendPlayerSyncProp(Fusion.NetworkRunner runner, Fusion.PlayerRef player, Fusion.PlayerRef playerData, System.String propKey, System.String propValue)
    // Offset: 0x289E394
    static void RPC_SendPlayerSyncProp(::Fusion::NetworkRunner* runner, ::Fusion::PlayerRef player, ::Fusion::PlayerRef playerData, ::StringW propKey, ::StringW propValue);
    // public System.Void .ctor()
    // Offset: 0x289E678
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FusionInternalRPCs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FusionInternalRPCs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FusionInternalRPCs*, creationType>()));
    }
    // static protected System.Void RPC_SendPlayerSyncProp@Invoker(Fusion.NetworkRunner runner, Fusion.SimulationMessage* message)
    // Offset: 0x289E680
    static void RPC_SendPlayerSyncProp@Invoker(::Fusion::NetworkRunner* runner, ::Fusion::SimulationMessage* message);
  }; // FusionInternalRPCs
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FusionInternalRPCs::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FusionInternalRPCs::*)()>(&GlobalNamespace::FusionInternalRPCs::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionInternalRPCs*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionInternalRPCs::RPC_SendPlayerSyncProp
// Il2CppName: RPC_SendPlayerSyncProp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::PlayerRef, ::StringW, ::StringW)>(&GlobalNamespace::FusionInternalRPCs::RPC_SendPlayerSyncProp)> {
  static const MethodInfo* get() {
    static auto* runner = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkRunner")->byval_arg;
    static auto* player = &::il2cpp_utils::GetClassFromName("Fusion", "PlayerRef")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("Fusion", "PlayerRef")->byval_arg;
    static auto* propKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* propValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionInternalRPCs*), "RPC_SendPlayerSyncProp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{runner, player, playerData, propKey, propValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionInternalRPCs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FusionInternalRPCs::RPC_SendPlayerSyncProp@Invoker
// Il2CppName: RPC_SendPlayerSyncProp@Invoker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessage*)>(&GlobalNamespace::FusionInternalRPCs::RPC_SendPlayerSyncProp@Invoker)> {
  static const MethodInfo* get() {
    static auto* runner = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkRunner")->byval_arg;
    static auto* message = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion", "SimulationMessage"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionInternalRPCs*), "RPC_SendPlayerSyncProp@Invoker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{runner, message});
  }
};
