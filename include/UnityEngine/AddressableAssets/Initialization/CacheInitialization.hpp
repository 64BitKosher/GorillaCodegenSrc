// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.Util.IInitializableObject
#include "UnityEngine/ResourceManagement/Util/IInitializableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets::Initialization
namespace UnityEngine::AddressableAssets::Initialization {
}
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // Forward declaring type: CacheInitialization
  class CacheInitialization;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::CacheInitialization);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::CacheInitialization*, "UnityEngine.AddressableAssets.Initialization", "CacheInitialization");
// Type namespace: UnityEngine.AddressableAssets.Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.Initialization.CacheInitialization
  // [TokenAttribute] Offset: FFFFFFFF
  class CacheInitialization : public ::Il2CppObject/*, public ::UnityEngine::ResourceManagement::Util::IInitializableObject*/ {
    public:
    // Nested type: ::UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp
    class CacheInitOp;
    // Nested type: ::UnityEngine::AddressableAssets::Initialization::CacheInitialization::$$c__DisplayClass1_0
    class $$c__DisplayClass1_0;
    // Creating interface conversion operator: operator ::UnityEngine::ResourceManagement::Util::IInitializableObject
    operator ::UnityEngine::ResourceManagement::Util::IInitializableObject() noexcept {
      return *reinterpret_cast<::UnityEngine::ResourceManagement::Util::IInitializableObject*>(this);
    }
    // public System.Boolean Initialize(System.String id, System.String dataStr)
    // Offset: 0x5066194
    bool Initialize(::StringW id, ::StringW dataStr);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Boolean> InitializeAsync(UnityEngine.ResourceManagement.ResourceManager rm, System.String id, System.String data)
    // Offset: 0x50662DC
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> InitializeAsync(::UnityEngine::ResourceManagement::ResourceManager* rm, ::StringW id, ::StringW data);
    // static public System.String get_RootPath()
    // Offset: 0x50664C0
    static ::StringW get_RootPath();
    // public System.Void .ctor()
    // Offset: 0x5066538
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CacheInitialization* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::Initialization::CacheInitialization::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CacheInitialization*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.Initialization.CacheInitialization
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitialization::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::Initialization::CacheInitialization::*)(::StringW, ::StringW)>(&UnityEngine::AddressableAssets::Initialization::CacheInitialization::Initialize)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dataStr = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitialization*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, dataStr});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitialization::InitializeAsync
// Il2CppName: InitializeAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (UnityEngine::AddressableAssets::Initialization::CacheInitialization::*)(::UnityEngine::ResourceManagement::ResourceManager*, ::StringW, ::StringW)>(&UnityEngine::AddressableAssets::Initialization::CacheInitialization::InitializeAsync)> {
  static const MethodInfo* get() {
    static auto* rm = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "ResourceManager")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitialization*), "InitializeAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rm, id, data});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitialization::get_RootPath
// Il2CppName: get_RootPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&UnityEngine::AddressableAssets::Initialization::CacheInitialization::get_RootPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitialization*), "get_RootPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitialization::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
