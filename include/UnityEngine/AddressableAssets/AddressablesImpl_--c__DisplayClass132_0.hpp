// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
// Including type: UnityEngine.SceneManagement.LoadSceneMode
#include "UnityEngine/SceneManagement/LoadSceneMode.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
#include "UnityEngine/ResourceManagement/ResourceProviders/SceneInstance.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
  // Forward declaring type: AsyncOperationHandle
  struct AsyncOperationHandle;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass132_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass132_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass132_0");
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/<>c__DisplayClass132_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AddressablesImpl::$$c__DisplayClass132_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AddressableAssets::AddressablesImpl* $$4__this;
    // Field size check
    static_assert(sizeof(::UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // public UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation key
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* key;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*) == 0x8);
    // public UnityEngine.SceneManagement.LoadSceneMode loadMode
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::SceneManagement::LoadSceneMode loadMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::SceneManagement::LoadSceneMode) == 0x4);
    // public System.Boolean activateOnLoad
    // Size: 0x1
    // Offset: 0x24
    bool activateOnLoad;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: activateOnLoad and: priority
    char __padding3[0x3] = {};
    // public System.Int32 priority
    // Size: 0x4
    // Offset: 0x28
    int priority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    [[deprecated("Use field access instead!")]] ::UnityEngine::AddressableAssets::AddressablesImpl*& dyn_$$4__this();
    // Get instance field reference: public UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation key
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& dyn_key();
    // Get instance field reference: public UnityEngine.SceneManagement.LoadSceneMode loadMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::SceneManagement::LoadSceneMode& dyn_loadMode();
    // Get instance field reference: public System.Boolean activateOnLoad
    [[deprecated("Use field access instead!")]] bool& dyn_activateOnLoad();
    // Get instance field reference: public System.Int32 priority
    [[deprecated("Use field access instead!")]] int& dyn_priority();
    // public System.Void .ctor()
    // Offset: 0x5054F74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::$$c__DisplayClass132_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass132_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::$$c__DisplayClass132_0*, creationType>()));
    }
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> <LoadSceneWithChain>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle op)
    // Offset: 0x5057C18
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> $LoadSceneWithChain$b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);
  }; // UnityEngine.AddressableAssets.AddressablesImpl/<>c__DisplayClass132_0
  #pragma pack(pop)
  static check_size<sizeof(AddressablesImpl::$$c__DisplayClass132_0), 40 + sizeof(int)> __UnityEngine_AddressableAssets_AddressablesImpl_$$c__DisplayClass132_0SizeCheck;
  static_assert(sizeof(AddressablesImpl::$$c__DisplayClass132_0) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass132_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass132_0::$LoadSceneWithChain$b__0
// Il2CppName: <LoadSceneWithChain>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass132_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass132_0::$LoadSceneWithChain$b__0)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass132_0*), "<LoadSceneWithChain>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};