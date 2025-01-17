// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkRunner
#include "Fusion/NetworkRunner.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkObject
  class NetworkObject;
  // Forward declaring type: IPredictedSpawnBehaviour
  class IPredictedSpawnBehaviour;
  // Forward declaring type: IPredictedDespawnBehaviour
  class IPredictedDespawnBehaviour;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkRunner::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkRunner::$$c*, "Fusion", "NetworkRunner/<>c");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkRunner/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NetworkRunner::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Fusion.NetworkRunner/<>c <>9
    static ::Fusion::NetworkRunner::$$c* _get_$$9();
    // Set static field: static public readonly Fusion.NetworkRunner/<>c <>9
    static void _set_$$9(::Fusion::NetworkRunner::$$c* value);
    // Get static field: static public System.Action`2<Fusion.NetworkObject,Fusion.IPredictedSpawnBehaviour> <>9__150_0
    static ::System::Action_2<::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*>* _get_$$9__150_0();
    // Set static field: static public System.Action`2<Fusion.NetworkObject,Fusion.IPredictedSpawnBehaviour> <>9__150_0
    static void _set_$$9__150_0(::System::Action_2<::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*>* value);
    // Get static field: static public System.Action`2<Fusion.NetworkObject,Fusion.IPredictedSpawnBehaviour> <>9__155_0
    static ::System::Action_2<::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*>* _get_$$9__155_0();
    // Set static field: static public System.Action`2<Fusion.NetworkObject,Fusion.IPredictedSpawnBehaviour> <>9__155_0
    static void _set_$$9__155_0(::System::Action_2<::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*>* value);
    // Get static field: static public System.Action`2<Fusion.NetworkObject,Fusion.IPredictedDespawnBehaviour> <>9__155_1
    static ::System::Action_2<::Fusion::NetworkObject*, ::Fusion::IPredictedDespawnBehaviour*>* _get_$$9__155_1();
    // Set static field: static public System.Action`2<Fusion.NetworkObject,Fusion.IPredictedDespawnBehaviour> <>9__155_1
    static void _set_$$9__155_1(::System::Action_2<::Fusion::NetworkObject*, ::Fusion::IPredictedDespawnBehaviour*>* value);
    // Get static field: static public System.Action`2<Fusion.NetworkObject,Fusion.IPredictedDespawnBehaviour> <>9__184_0
    static ::System::Action_2<::Fusion::NetworkObject*, ::Fusion::IPredictedDespawnBehaviour*>* _get_$$9__184_0();
    // Set static field: static public System.Action`2<Fusion.NetworkObject,Fusion.IPredictedDespawnBehaviour> <>9__184_0
    static void _set_$$9__184_0(::System::Action_2<::Fusion::NetworkObject*, ::Fusion::IPredictedDespawnBehaviour*>* value);
    // Get static field: static public System.Action`2<Fusion.NetworkObject,Fusion.IPredictedSpawnBehaviour> <>9__197_0
    static ::System::Action_2<::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*>* _get_$$9__197_0();
    // Set static field: static public System.Action`2<Fusion.NetworkObject,Fusion.IPredictedSpawnBehaviour> <>9__197_0
    static void _set_$$9__197_0(::System::Action_2<::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*>* value);
    // Get static field: static public System.Action`2<Fusion.NetworkObject,Fusion.IPredictedSpawnBehaviour> <>9__208_1
    static ::System::Action_2<::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*>* _get_$$9__208_1();
    // Set static field: static public System.Action`2<Fusion.NetworkObject,Fusion.IPredictedSpawnBehaviour> <>9__208_1
    static void _set_$$9__208_1(::System::Action_2<::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*>* value);
    // Get static field: static public System.Action`2<Fusion.NetworkObject,Fusion.IPredictedSpawnBehaviour> <>9__368_0
    static ::System::Action_2<::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*>* _get_$$9__368_0();
    // Set static field: static public System.Action`2<Fusion.NetworkObject,Fusion.IPredictedSpawnBehaviour> <>9__368_0
    static void _set_$$9__368_0(::System::Action_2<::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*>* value);
    // Get static field: static public System.Action`2<Fusion.NetworkObject,Fusion.IPredictedSpawnBehaviour> <>9__373_0
    static ::System::Action_2<::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*>* _get_$$9__373_0();
    // Set static field: static public System.Action`2<Fusion.NetworkObject,Fusion.IPredictedSpawnBehaviour> <>9__373_0
    static void _set_$$9__373_0(::System::Action_2<::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*>* value);
    // static private System.Void .cctor()
    // Offset: 0x2B6674C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2B667B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkRunner::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkRunner::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkRunner::$$c*, creationType>()));
    }
    // System.Void <RenderInternal>b__150_0(Fusion.NetworkObject o, Fusion.IPredictedSpawnBehaviour b)
    // Offset: 0x2B667BC
    void $RenderInternal$b__150_0(::Fusion::NetworkObject* o, ::Fusion::IPredictedSpawnBehaviour* b);
    // System.Void <ExpirePredictedSpawns>b__155_0(Fusion.NetworkObject o, Fusion.IPredictedSpawnBehaviour b)
    // Offset: 0x2B6685C
    void $ExpirePredictedSpawns$b__155_0(::Fusion::NetworkObject* o, ::Fusion::IPredictedSpawnBehaviour* b);
    // System.Void <ExpirePredictedSpawns>b__155_1(Fusion.NetworkObject o, Fusion.IPredictedDespawnBehaviour b)
    // Offset: 0x2B668FC
    void $ExpirePredictedSpawns$b__155_1(::Fusion::NetworkObject* o, ::Fusion::IPredictedDespawnBehaviour* b);
    // System.Void <Despawn>b__184_0(Fusion.NetworkObject o, Fusion.IPredictedDespawnBehaviour b)
    // Offset: 0x2B6699C
    void $Despawn$b__184_0(::Fusion::NetworkObject* o, ::Fusion::IPredictedDespawnBehaviour* b);
    // System.Void <AttachActivatedByUser>b__197_0(Fusion.NetworkObject o, Fusion.IPredictedSpawnBehaviour b)
    // Offset: 0x2B66A38
    void $AttachActivatedByUser$b__197_0(::Fusion::NetworkObject* o, ::Fusion::IPredictedSpawnBehaviour* b);
    // System.Void <SpawnInternal>b__208_1(Fusion.NetworkObject o, Fusion.IPredictedSpawnBehaviour b)
    // Offset: 0x2B66AD8
    void $SpawnInternal$b__208_1(::Fusion::NetworkObject* o, ::Fusion::IPredictedSpawnBehaviour* b);
    // System.Void <Fusion.Simulation.ICallbacks.EndUpdateRemotePrefabs>b__368_0(Fusion.NetworkObject o, Fusion.IPredictedSpawnBehaviour b)
    // Offset: 0x2B66B74
    void $Fusion_Simulation_ICallbacks_EndUpdateRemotePrefabs$b__368_0(::Fusion::NetworkObject* o, ::Fusion::IPredictedSpawnBehaviour* b);
    // System.Void <Fusion.Simulation.ICallbacks.OnTick>b__373_0(Fusion.NetworkObject o, Fusion.IPredictedSpawnBehaviour b)
    // Offset: 0x2B66C14
    void $Fusion_Simulation_ICallbacks_OnTick$b__373_0(::Fusion::NetworkObject* o, ::Fusion::IPredictedSpawnBehaviour* b);
  }; // Fusion.NetworkRunner/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkRunner::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Fusion::NetworkRunner::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRunner::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkRunner::$$c::$RenderInternal$b__150_0
// Il2CppName: <RenderInternal>b__150_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRunner::$$c::*)(::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*)>(&Fusion::NetworkRunner::$$c::$RenderInternal$b__150_0)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkObject")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Fusion", "IPredictedSpawnBehaviour")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::$$c*), "<RenderInternal>b__150_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, b});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRunner::$$c::$ExpirePredictedSpawns$b__155_0
// Il2CppName: <ExpirePredictedSpawns>b__155_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRunner::$$c::*)(::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*)>(&Fusion::NetworkRunner::$$c::$ExpirePredictedSpawns$b__155_0)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkObject")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Fusion", "IPredictedSpawnBehaviour")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::$$c*), "<ExpirePredictedSpawns>b__155_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, b});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRunner::$$c::$ExpirePredictedSpawns$b__155_1
// Il2CppName: <ExpirePredictedSpawns>b__155_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRunner::$$c::*)(::Fusion::NetworkObject*, ::Fusion::IPredictedDespawnBehaviour*)>(&Fusion::NetworkRunner::$$c::$ExpirePredictedSpawns$b__155_1)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkObject")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Fusion", "IPredictedDespawnBehaviour")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::$$c*), "<ExpirePredictedSpawns>b__155_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, b});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRunner::$$c::$Despawn$b__184_0
// Il2CppName: <Despawn>b__184_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRunner::$$c::*)(::Fusion::NetworkObject*, ::Fusion::IPredictedDespawnBehaviour*)>(&Fusion::NetworkRunner::$$c::$Despawn$b__184_0)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkObject")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Fusion", "IPredictedDespawnBehaviour")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::$$c*), "<Despawn>b__184_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, b});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRunner::$$c::$AttachActivatedByUser$b__197_0
// Il2CppName: <AttachActivatedByUser>b__197_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRunner::$$c::*)(::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*)>(&Fusion::NetworkRunner::$$c::$AttachActivatedByUser$b__197_0)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkObject")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Fusion", "IPredictedSpawnBehaviour")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::$$c*), "<AttachActivatedByUser>b__197_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, b});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRunner::$$c::$SpawnInternal$b__208_1
// Il2CppName: <SpawnInternal>b__208_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRunner::$$c::*)(::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*)>(&Fusion::NetworkRunner::$$c::$SpawnInternal$b__208_1)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkObject")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Fusion", "IPredictedSpawnBehaviour")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::$$c*), "<SpawnInternal>b__208_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, b});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRunner::$$c::$Fusion_Simulation_ICallbacks_EndUpdateRemotePrefabs$b__368_0
// Il2CppName: <Fusion.Simulation.ICallbacks.EndUpdateRemotePrefabs>b__368_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRunner::$$c::*)(::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*)>(&Fusion::NetworkRunner::$$c::$Fusion_Simulation_ICallbacks_EndUpdateRemotePrefabs$b__368_0)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkObject")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Fusion", "IPredictedSpawnBehaviour")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::$$c*), "<Fusion.Simulation.ICallbacks.EndUpdateRemotePrefabs>b__368_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, b});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRunner::$$c::$Fusion_Simulation_ICallbacks_OnTick$b__373_0
// Il2CppName: <Fusion.Simulation.ICallbacks.OnTick>b__373_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRunner::$$c::*)(::Fusion::NetworkObject*, ::Fusion::IPredictedSpawnBehaviour*)>(&Fusion::NetworkRunner::$$c::$Fusion_Simulation_ICallbacks_OnTick$b__373_0)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkObject")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Fusion", "IPredictedSpawnBehaviour")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::$$c*), "<Fusion.Simulation.ICallbacks.OnTick>b__373_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, b});
  }
};
