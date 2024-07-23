// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.PluginContractKey
#include "PlayFab/PluginContractKey.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: IPlayFabPlugin
  class IPlayFabPlugin;
  // Forward declaring type: ITransportPlugin
  class ITransportPlugin;
}
// Completed forward declares
// Type namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: PluginManager
  class PluginManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::PluginManager);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::PluginManager*, "PlayFab", "PluginManager");
// Type namespace: PlayFab
namespace PlayFab {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.PluginManager
  // [TokenAttribute] Offset: FFFFFFFF
  class PluginManager : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.Dictionary`2<PlayFab.PluginContractKey,PlayFab.IPlayFabPlugin> plugins
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::PlayFab::PluginContractKey, ::PlayFab::IPlayFabPlugin*>* plugins;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::PlayFab::PluginContractKey, ::PlayFab::IPlayFabPlugin*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::Dictionary_2<::PlayFab::PluginContractKey, ::PlayFab::IPlayFabPlugin*>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<::PlayFab::PluginContractKey, ::PlayFab::IPlayFabPlugin*>*() const noexcept {
      return plugins;
    }
    // Get static field: static private readonly PlayFab.PluginManager Instance
    static ::PlayFab::PluginManager* _get_Instance();
    // Set static field: static private readonly PlayFab.PluginManager Instance
    static void _set_Instance(::PlayFab::PluginManager* value);
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<PlayFab.PluginContractKey,PlayFab.IPlayFabPlugin> plugins
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::PlayFab::PluginContractKey, ::PlayFab::IPlayFabPlugin*>*& dyn_plugins();
    // private System.Void .ctor()
    // Offset: 0x4AFBC94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PluginManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::PluginManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PluginManager*, creationType>()));
    }
    // static public T GetPlugin(PlayFab.PluginContract contract, System.String instanceName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T GetPlugin(::PlayFab::PluginContract contract, ::StringW instanceName) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::PlayFab::IPlayFabPlugin>);
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::PluginManager::GetPlugin");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("PlayFab", "PluginManager", "GetPlugin", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(contract), ::il2cpp_utils::ExtractType(instanceName)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, contract, instanceName);
    }
    // static public System.Void SetPlugin(PlayFab.IPlayFabPlugin plugin, PlayFab.PluginContract contract, System.String instanceName)
    // Offset: 0x4AFBD44
    static void SetPlugin(::PlayFab::IPlayFabPlugin* plugin, ::PlayFab::PluginContract contract, ::StringW instanceName);
    // private PlayFab.IPlayFabPlugin GetPluginInternal(PlayFab.PluginContract contract, System.String instanceName)
    // Offset: 0x4AFBEB4
    ::PlayFab::IPlayFabPlugin* GetPluginInternal(::PlayFab::PluginContract contract, ::StringW instanceName);
    // private System.Void SetPluginInternal(PlayFab.IPlayFabPlugin plugin, PlayFab.PluginContract contract, System.String instanceName)
    // Offset: 0x4AFBDC4
    void SetPluginInternal(::PlayFab::IPlayFabPlugin* plugin, ::PlayFab::PluginContract contract, ::StringW instanceName);
    // private PlayFab.IPlayFabPlugin CreatePlugin()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::PlayFab::IPlayFabPlugin* CreatePlugin() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::PlayFab::IPlayFabPlugin>);
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::PluginManager::CreatePlugin");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreatePlugin", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::PlayFab::IPlayFabPlugin*, false>(this, ___generic__method);
    }
    // private PlayFab.ITransportPlugin CreatePlayFabTransportPlugin()
    // Offset: 0x4AFC014
    ::PlayFab::ITransportPlugin* CreatePlayFabTransportPlugin();
    // static private System.Void .cctor()
    // Offset: 0x4AFC0C4
    static void _cctor();
  }; // PlayFab.PluginManager
  #pragma pack(pop)
  static check_size<sizeof(PluginManager), 16 + sizeof(::System::Collections::Generic::Dictionary_2<::PlayFab::PluginContractKey, ::PlayFab::IPlayFabPlugin*>*)> __PlayFab_PluginManagerSizeCheck;
  static_assert(sizeof(PluginManager) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::PluginManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PlayFab::PluginManager::GetPlugin
// Il2CppName: GetPlugin
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: PlayFab::PluginManager::SetPlugin
// Il2CppName: SetPlugin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PlayFab::IPlayFabPlugin*, ::PlayFab::PluginContract, ::StringW)>(&PlayFab::PluginManager::SetPlugin)> {
  static const MethodInfo* get() {
    static auto* plugin = &::il2cpp_utils::GetClassFromName("PlayFab", "IPlayFabPlugin")->byval_arg;
    static auto* contract = &::il2cpp_utils::GetClassFromName("PlayFab", "PluginContract")->byval_arg;
    static auto* instanceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PluginManager*), "SetPlugin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{plugin, contract, instanceName});
  }
};
// Writing MetadataGetter for method: PlayFab::PluginManager::GetPluginInternal
// Il2CppName: GetPluginInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PlayFab::IPlayFabPlugin* (PlayFab::PluginManager::*)(::PlayFab::PluginContract, ::StringW)>(&PlayFab::PluginManager::GetPluginInternal)> {
  static const MethodInfo* get() {
    static auto* contract = &::il2cpp_utils::GetClassFromName("PlayFab", "PluginContract")->byval_arg;
    static auto* instanceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PluginManager*), "GetPluginInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{contract, instanceName});
  }
};
// Writing MetadataGetter for method: PlayFab::PluginManager::SetPluginInternal
// Il2CppName: SetPluginInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::PluginManager::*)(::PlayFab::IPlayFabPlugin*, ::PlayFab::PluginContract, ::StringW)>(&PlayFab::PluginManager::SetPluginInternal)> {
  static const MethodInfo* get() {
    static auto* plugin = &::il2cpp_utils::GetClassFromName("PlayFab", "IPlayFabPlugin")->byval_arg;
    static auto* contract = &::il2cpp_utils::GetClassFromName("PlayFab", "PluginContract")->byval_arg;
    static auto* instanceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PluginManager*), "SetPluginInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{plugin, contract, instanceName});
  }
};
// Writing MetadataGetter for method: PlayFab::PluginManager::CreatePlugin
// Il2CppName: CreatePlugin
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: PlayFab::PluginManager::CreatePlayFabTransportPlugin
// Il2CppName: CreatePlayFabTransportPlugin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PlayFab::ITransportPlugin* (PlayFab::PluginManager::*)()>(&PlayFab::PluginManager::CreatePlayFabTransportPlugin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PluginManager*), "CreatePlayFabTransportPlugin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::PluginManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PlayFab::PluginManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PluginManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
