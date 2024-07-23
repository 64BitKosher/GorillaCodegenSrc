// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.AssetObject
#include "Fusion/AssetObject.hpp"
// Including type: Fusion.NetworkRunner/BuildTypes
#include "Fusion/NetworkRunner_BuildTypes.hpp"
// Including type: Fusion.NetworkProjectConfig
#include "Fusion/NetworkProjectConfig.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkPrefabSourceUnityBase
  class NetworkPrefabSourceUnityBase;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueTuple`2 because it is already included!
}
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: FileVersionInfo
  class FileVersionInfo;
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: LocalPhysicsMode
  struct LocalPhysicsMode;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkProjectConfigAsset
  class NetworkProjectConfigAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkProjectConfigAsset);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkProjectConfigAsset*, "Fusion", "NetworkProjectConfigAsset");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkProjectConfigAsset
  // [TokenAttribute] Offset: FFFFFFFF
  // [ScriptHelpAttribute] Offset: FFFFFFFF
  class NetworkProjectConfigAsset : public ::Fusion::AssetObject {
    public:
    public:
    // public Fusion.NetworkProjectConfig Config
    // Size: 0x8
    // Offset: 0x18
    ::Fusion::NetworkProjectConfig* Config;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkProjectConfig*) == 0x8);
    // public System.String[] AssembliesToWeave
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::StringW> AssembliesToWeave;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.String PrefabAssetsContainerPath
    // Size: 0x8
    // Offset: 0x28
    ::StringW PrefabAssetsContainerPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public Fusion.NetworkPrefabSourceUnityBase[] Prefabs
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::Fusion::NetworkPrefabSourceUnityBase*> Prefabs;
    // Field size check
    static_assert(sizeof(::ArrayW<::Fusion::NetworkPrefabSourceUnityBase*>) == 0x8);
    // private System.Boolean _dummy
    // Size: 0x1
    // Offset: 0x38
    bool dummy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public Fusion.NetworkProjectConfig Config
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkProjectConfig*& dyn_Config();
    // Get instance field reference: public System.String[] AssembliesToWeave
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_AssembliesToWeave();
    // Get instance field reference: public System.String PrefabAssetsContainerPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PrefabAssetsContainerPath();
    // Get instance field reference: public Fusion.NetworkPrefabSourceUnityBase[] Prefabs
    [[deprecated("Use field access instead!")]] ::ArrayW<::Fusion::NetworkPrefabSourceUnityBase*>& dyn_Prefabs();
    // Get instance field reference: private System.Boolean _dummy
    [[deprecated("Use field access instead!")]] bool& dyn__dummy();
    // static public System.ValueTuple`2<Fusion.NetworkRunner/BuildTypes,System.Diagnostics.FileVersionInfo> get_FusionVersionInfo()
    // Offset: 0x2B53DB8
    static ::System::ValueTuple_2<::Fusion::NetworkRunner::BuildTypes, ::System::Diagnostics::FileVersionInfo*> get_FusionVersionInfo();
    // static public System.String GetSerializedConfigForRelay()
    // Offset: 0x2B53DBC
    static ::StringW GetSerializedConfigForRelay();
    // static public UnityEngine.SceneManagement.LocalPhysicsMode ConvertPhysicsMode(Fusion.NetworkProjectConfig/PhysicsEngines engine)
    // Offset: 0x2B53DD0
    static ::UnityEngine::SceneManagement::LocalPhysicsMode ConvertPhysicsMode(::Fusion::NetworkProjectConfig::PhysicsEngines engine);
    // public System.Void .ctor()
    // Offset: 0x2B53DE8
    // Implemented from: Fusion.AssetObject
    // Base method: System.Void AssetObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkProjectConfigAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkProjectConfigAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkProjectConfigAsset*, creationType>()));
    }
  }; // Fusion.NetworkProjectConfigAsset
  #pragma pack(pop)
  static check_size<sizeof(NetworkProjectConfigAsset), 56 + sizeof(bool)> __Fusion_NetworkProjectConfigAssetSizeCheck;
  static_assert(sizeof(NetworkProjectConfigAsset) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkProjectConfigAsset::get_FusionVersionInfo
// Il2CppName: get_FusionVersionInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::Fusion::NetworkRunner::BuildTypes, ::System::Diagnostics::FileVersionInfo*> (*)()>(&Fusion::NetworkProjectConfigAsset::get_FusionVersionInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkProjectConfigAsset*), "get_FusionVersionInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkProjectConfigAsset::GetSerializedConfigForRelay
// Il2CppName: GetSerializedConfigForRelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Fusion::NetworkProjectConfigAsset::GetSerializedConfigForRelay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkProjectConfigAsset*), "GetSerializedConfigForRelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkProjectConfigAsset::ConvertPhysicsMode
// Il2CppName: ConvertPhysicsMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SceneManagement::LocalPhysicsMode (*)(::Fusion::NetworkProjectConfig::PhysicsEngines)>(&Fusion::NetworkProjectConfigAsset::ConvertPhysicsMode)> {
  static const MethodInfo* get() {
    static auto* engine = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkProjectConfig/PhysicsEngines")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkProjectConfigAsset*), "ConvertPhysicsMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{engine});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkProjectConfigAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
