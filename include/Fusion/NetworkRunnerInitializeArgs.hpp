// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: Fusion.SceneRef
#include "Fusion/SceneRef.hpp"
// Including type: Fusion.Sockets.NetAddress
#include "Fusion/Sockets/NetAddress.hpp"
// Including type: Fusion.SimulationModes
#include "Fusion/SimulationModes.hpp"
// Including type: Fusion.NetworkId
#include "Fusion/NetworkId.hpp"
// Including type: Fusion.Tick
#include "Fusion/Tick.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkProjectConfig
  class NetworkProjectConfig;
  // Forward declaring type: NetworkRunner
  class NetworkRunner;
  // Forward declaring type: INetworkObjectPool
  class INetworkObjectPool;
  // Forward declaring type: INetworkSceneManager
  class INetworkSceneManager;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkRunnerInitializeArgs
  struct NetworkRunnerInitializeArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkRunnerInitializeArgs, "Fusion", "NetworkRunnerInitializeArgs");
// Type namespace: Fusion
namespace Fusion {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.NetworkRunnerInitializeArgs
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetworkRunnerInitializeArgs/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Nullable`1<Fusion.SceneRef> Scene
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::System::Nullable_1<::Fusion::SceneRef> Scene;
    // public System.Nullable`1<Fusion.Sockets.NetAddress> Address
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Nullable_1<::Fusion::Sockets::NetAddress> Address;
    // public System.Nullable`1<Fusion.Sockets.NetAddress> PublicAddress
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<::Fusion::Sockets::NetAddress> PublicAddress;
    // public System.Nullable`1<System.Int32> PlayerCount
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    ::System::Nullable_1<int> PlayerCount;
    // public System.Nullable`1<Fusion.SimulationModes> SimulationMode
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    ::System::Nullable_1<::Fusion::SimulationModes> SimulationMode;
    // public System.Nullable`1<System.Int32> InputWordCount
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    ::System::Nullable_1<int> InputWordCount;
    // public Fusion.NetworkProjectConfig Config
    // Size: 0x8
    // Offset: 0x60
    ::Fusion::NetworkProjectConfig* Config;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkProjectConfig*) == 0x8);
    // public System.Action`1<Fusion.NetworkRunner> Initialized
    // Size: 0x8
    // Offset: 0x68
    ::System::Action_1<::Fusion::NetworkRunner*>* Initialized;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Fusion::NetworkRunner*>*) == 0x8);
    // public Fusion.INetworkObjectPool ObjectPool
    // Size: 0x8
    // Offset: 0x70
    ::Fusion::INetworkObjectPool* ObjectPool;
    // Field size check
    static_assert(sizeof(::Fusion::INetworkObjectPool*) == 0x8);
    // public Fusion.INetworkSceneManager SceneManager
    // Size: 0x8
    // Offset: 0x78
    ::Fusion::INetworkSceneManager* SceneManager;
    // Field size check
    static_assert(sizeof(::Fusion::INetworkSceneManager*) == 0x8);
    // public System.Type[] CustomCallbackInterfaces
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::System::Type*> CustomCallbackInterfaces;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // public System.Byte[] ConnectionToken
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<uint8_t> ConnectionToken;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Boolean HostMigrationEnabled
    // Size: 0x1
    // Offset: 0x90
    bool HostMigrationEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Nullable`1<Fusion.NetworkId> ResumeId
    // Size: 0xFFFFFFFF
    // Offset: 0x94
    ::System::Nullable_1<::Fusion::NetworkId> ResumeId;
    // public System.Nullable`1<Fusion.Tick> ResumeTick
    // Size: 0xFFFFFFFF
    // Offset: 0x9C
    ::System::Nullable_1<::Fusion::Tick> ResumeTick;
    // public System.Byte[] ResumeState
    // Size: 0x8
    // Offset: 0xA8
    ::ArrayW<uint8_t> ResumeState;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Action`1<Fusion.NetworkRunner> HostMigrationResume
    // Size: 0x8
    // Offset: 0xB0
    ::System::Action_1<::Fusion::NetworkRunner*>* HostMigrationResume;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Fusion::NetworkRunner*>*) == 0x8);
    public:
    // Creating value type constructor for type: NetworkRunnerInitializeArgs
    constexpr NetworkRunnerInitializeArgs(::System::Nullable_1<::Fusion::SceneRef> Scene_ = {}, ::System::Nullable_1<::Fusion::Sockets::NetAddress> Address_ = {}, ::System::Nullable_1<::Fusion::Sockets::NetAddress> PublicAddress_ = {}, ::System::Nullable_1<int> PlayerCount_ = {}, ::System::Nullable_1<::Fusion::SimulationModes> SimulationMode_ = {}, ::System::Nullable_1<int> InputWordCount_ = {}, ::Fusion::NetworkProjectConfig* Config_ = {}, ::System::Action_1<::Fusion::NetworkRunner*>* Initialized_ = {}, ::Fusion::INetworkObjectPool* ObjectPool_ = {}, ::Fusion::INetworkSceneManager* SceneManager_ = {}, ::ArrayW<::System::Type*> CustomCallbackInterfaces_ = ::ArrayW<::System::Type*>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> ConnectionToken_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), bool HostMigrationEnabled_ = {}, ::System::Nullable_1<::Fusion::NetworkId> ResumeId_ = {}, ::System::Nullable_1<::Fusion::Tick> ResumeTick_ = {}, ::ArrayW<uint8_t> ResumeState_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::System::Action_1<::Fusion::NetworkRunner*>* HostMigrationResume_ = {}) noexcept : Scene{Scene_}, Address{Address_}, PublicAddress{PublicAddress_}, PlayerCount{PlayerCount_}, SimulationMode{SimulationMode_}, InputWordCount{InputWordCount_}, Config{Config_}, Initialized{Initialized_}, ObjectPool{ObjectPool_}, SceneManager{SceneManager_}, CustomCallbackInterfaces{CustomCallbackInterfaces_}, ConnectionToken{ConnectionToken_}, HostMigrationEnabled{HostMigrationEnabled_}, ResumeId{ResumeId_}, ResumeTick{ResumeTick_}, ResumeState{ResumeState_}, HostMigrationResume{HostMigrationResume_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Nullable`1<Fusion.SceneRef> Scene
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::Fusion::SceneRef>& dyn_Scene();
    // Get instance field reference: public System.Nullable`1<Fusion.Sockets.NetAddress> Address
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::Fusion::Sockets::NetAddress>& dyn_Address();
    // Get instance field reference: public System.Nullable`1<Fusion.Sockets.NetAddress> PublicAddress
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::Fusion::Sockets::NetAddress>& dyn_PublicAddress();
    // Get instance field reference: public System.Nullable`1<System.Int32> PlayerCount
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_PlayerCount();
    // Get instance field reference: public System.Nullable`1<Fusion.SimulationModes> SimulationMode
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::Fusion::SimulationModes>& dyn_SimulationMode();
    // Get instance field reference: public System.Nullable`1<System.Int32> InputWordCount
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_InputWordCount();
    // Get instance field reference: public Fusion.NetworkProjectConfig Config
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkProjectConfig*& dyn_Config();
    // Get instance field reference: public System.Action`1<Fusion.NetworkRunner> Initialized
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Fusion::NetworkRunner*>*& dyn_Initialized();
    // Get instance field reference: public Fusion.INetworkObjectPool ObjectPool
    [[deprecated("Use field access instead!")]] ::Fusion::INetworkObjectPool*& dyn_ObjectPool();
    // Get instance field reference: public Fusion.INetworkSceneManager SceneManager
    [[deprecated("Use field access instead!")]] ::Fusion::INetworkSceneManager*& dyn_SceneManager();
    // Get instance field reference: public System.Type[] CustomCallbackInterfaces
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn_CustomCallbackInterfaces();
    // Get instance field reference: public System.Byte[] ConnectionToken
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_ConnectionToken();
    // Get instance field reference: public System.Boolean HostMigrationEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_HostMigrationEnabled();
    // Get instance field reference: public System.Nullable`1<Fusion.NetworkId> ResumeId
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::Fusion::NetworkId>& dyn_ResumeId();
    // Get instance field reference: public System.Nullable`1<Fusion.Tick> ResumeTick
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::Fusion::Tick>& dyn_ResumeTick();
    // Get instance field reference: public System.Byte[] ResumeState
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_ResumeState();
    // Get instance field reference: public System.Action`1<Fusion.NetworkRunner> HostMigrationResume
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Fusion::NetworkRunner*>*& dyn_HostMigrationResume();
    // public System.Boolean get_IsSinglePlayer()
    // Offset: 0x2B6C71C
    bool get_IsSinglePlayer();
  }; // Fusion.NetworkRunnerInitializeArgs
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkRunnerInitializeArgs::get_IsSinglePlayer
// Il2CppName: get_IsSinglePlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkRunnerInitializeArgs::*)()>(&Fusion::NetworkRunnerInitializeArgs::get_IsSinglePlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunnerInitializeArgs), "get_IsSinglePlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
