// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphResourceRegistry.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: DynamicArray`1<T>
  template<typename T>
  class DynamicArray_1;
}
// Forward declaring namespace: UnityEngine::Experimental::Rendering::RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: IRenderGraphResource
  class IRenderGraphResource;
  // Forward declaring type: IRenderGraphResourcePool
  class IRenderGraphResourcePool;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphResourceRegistry/RenderGraphResourcesData");
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData
  // [TokenAttribute] Offset: FFFFFFFF
  class RenderGraphResourceRegistry::RenderGraphResourcesData : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource> resourceArray
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*>* resourceArray;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*>*) == 0x8);
    // public System.Int32 sharedResourcesCount
    // Size: 0x4
    // Offset: 0x18
    int sharedResourcesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: sharedResourcesCount and: pool
    char __padding1[0x4] = {};
    // public UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool pool
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool* pool;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool*) == 0x8);
    // public UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback createResourceCallback
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ResourceCallback* createResourceCallback;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ResourceCallback*) == 0x8);
    // public UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback releaseResourceCallback
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ResourceCallback* releaseResourceCallback;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ResourceCallback*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource> resourceArray
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*>*& dyn_resourceArray();
    // Get instance field reference: public System.Int32 sharedResourcesCount
    [[deprecated("Use field access instead!")]] int& dyn_sharedResourcesCount();
    // Get instance field reference: public UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool pool
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool*& dyn_pool();
    // Get instance field reference: public UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback createResourceCallback
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ResourceCallback*& dyn_createResourceCallback();
    // Get instance field reference: public UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback releaseResourceCallback
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ResourceCallback*& dyn_releaseResourceCallback();
    // public System.Void Clear(System.Boolean onException, System.Int32 frameIndex)
    // Offset: 0x523C390
    void Clear(bool onException, int frameIndex);
    // public System.Void Cleanup()
    // Offset: 0x523C434
    void Cleanup();
    // public System.Void PurgeUnusedGraphicsResources(System.Int32 frameIndex)
    // Offset: 0x523C414
    void PurgeUnusedGraphicsResources(int frameIndex);
    // public System.Int32 AddNewRenderGraphResource(out ResType outRes, System.Boolean pooledResource)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class ResType>
    int AddNewRenderGraphResource(ByRef<ResType> outRes, bool pooledResource) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<ResType>, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData::AddNewRenderGraphResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddNewRenderGraphResource", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ResType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<ResType&>(), ::il2cpp_utils::ExtractType(pooledResource)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ResType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___generic__method, byref(outRes), pooledResource);
    }
    // public System.Void .ctor()
    // Offset: 0x523B7C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderGraphResourceRegistry::RenderGraphResourcesData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderGraphResourceRegistry::RenderGraphResourcesData*, creationType>()));
    }
  }; // UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData
  #pragma pack(pop)
  static check_size<sizeof(RenderGraphResourceRegistry::RenderGraphResourcesData), 48 + sizeof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ResourceCallback*)> __UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourceRegistry_RenderGraphResourcesDataSizeCheck;
  static_assert(sizeof(RenderGraphResourceRegistry::RenderGraphResourcesData) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData::*)(bool, int)>(&UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData::Clear)> {
  static const MethodInfo* get() {
    static auto* onException = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* frameIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onException, frameIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData::*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData::PurgeUnusedGraphicsResources
// Il2CppName: PurgeUnusedGraphicsResources
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData::*)(int)>(&UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData::PurgeUnusedGraphicsResources)> {
  static const MethodInfo* get() {
    static auto* frameIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData*), "PurgeUnusedGraphicsResources", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frameIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData::AddNewRenderGraphResource
// Il2CppName: AddNewRenderGraphResource
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourcesData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
