// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::Rendering::RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: IRenderGraphResourcePool
  class IRenderGraphResourcePool;
  // Forward declaring type: RenderGraphLogger
  class RenderGraphLogger;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: IRenderGraphResource
  class IRenderGraphResource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "IRenderGraphResource");
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
  // [TokenAttribute] Offset: FFFFFFFF
  class IRenderGraphResource : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean imported
    // Size: 0x1
    // Offset: 0x10
    bool imported;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean shared
    // Size: 0x1
    // Offset: 0x11
    bool shared;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean sharedExplicitRelease
    // Size: 0x1
    // Offset: 0x12
    bool sharedExplicitRelease;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean requestFallBack
    // Size: 0x1
    // Offset: 0x13
    bool requestFallBack;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.UInt32 writeCount
    // Size: 0x4
    // Offset: 0x14
    uint writeCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Int32 cachedHash
    // Size: 0x4
    // Offset: 0x18
    int cachedHash;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 transientPassIndex
    // Size: 0x4
    // Offset: 0x1C
    int transientPassIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 sharedResourceLastFrameUsed
    // Size: 0x4
    // Offset: 0x20
    int sharedResourceLastFrameUsed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: sharedResourceLastFrameUsed and: m_Pool
    char __padding7[0x4] = {};
    // protected UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool m_Pool
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool* m_Pool;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool*) == 0x8);
    public:
    // Get instance field reference: public System.Boolean imported
    [[deprecated("Use field access instead!")]] bool& dyn_imported();
    // Get instance field reference: public System.Boolean shared
    [[deprecated("Use field access instead!")]] bool& dyn_shared();
    // Get instance field reference: public System.Boolean sharedExplicitRelease
    [[deprecated("Use field access instead!")]] bool& dyn_sharedExplicitRelease();
    // Get instance field reference: public System.Boolean requestFallBack
    [[deprecated("Use field access instead!")]] bool& dyn_requestFallBack();
    // Get instance field reference: public System.UInt32 writeCount
    [[deprecated("Use field access instead!")]] uint& dyn_writeCount();
    // Get instance field reference: public System.Int32 cachedHash
    [[deprecated("Use field access instead!")]] int& dyn_cachedHash();
    // Get instance field reference: public System.Int32 transientPassIndex
    [[deprecated("Use field access instead!")]] int& dyn_transientPassIndex();
    // Get instance field reference: public System.Int32 sharedResourceLastFrameUsed
    [[deprecated("Use field access instead!")]] int& dyn_sharedResourceLastFrameUsed();
    // Get instance field reference: protected UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool m_Pool
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool*& dyn_m_Pool();
    // public System.Void Reset(UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool pool)
    // Offset: 0x523C684
    void Reset(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool* pool);
    // public System.String GetName()
    // Offset: 0x523C69C
    ::StringW GetName();
    // public System.Boolean IsCreated()
    // Offset: 0x523C6DC
    bool IsCreated();
    // public System.Void IncrementWriteCount()
    // Offset: 0x523C6E4
    void IncrementWriteCount();
    // public System.Boolean NeedsFallBack()
    // Offset: 0x523C6F4
    bool NeedsFallBack();
    // public System.Void CreatePooledGraphicsResource()
    // Offset: 0x523C714
    void CreatePooledGraphicsResource();
    // public System.Void CreateGraphicsResource(System.String name)
    // Offset: 0x523C718
    void CreateGraphicsResource(::StringW name);
    // public System.Void ReleasePooledGraphicsResource(System.Int32 frameIndex)
    // Offset: 0x523C71C
    void ReleasePooledGraphicsResource(int frameIndex);
    // public System.Void ReleaseGraphicsResource()
    // Offset: 0x523C720
    void ReleaseGraphicsResource();
    // public System.Void LogCreation(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger logger)
    // Offset: 0x523C724
    void LogCreation(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* logger);
    // public System.Void LogRelease(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger logger)
    // Offset: 0x523C728
    void LogRelease(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* logger);
    // public System.Void .ctor()
    // Offset: 0x523C72C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IRenderGraphResource* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IRenderGraphResource*, creationType>()));
    }
  }; // UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
  #pragma pack(pop)
  static check_size<sizeof(IRenderGraphResource), 40 + sizeof(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool*)> __UnityEngine_Experimental_Rendering_RenderGraphModule_IRenderGraphResourceSizeCheck;
  static_assert(sizeof(IRenderGraphResource) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool*)>(&UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::Reset)> {
  static const MethodInfo* get() {
    static auto* pool = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "IRenderGraphResourcePool")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pool});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::GetName
// Il2CppName: GetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::GetName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*), "GetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::IsCreated
// Il2CppName: IsCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::IsCreated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*), "IsCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::IncrementWriteCount
// Il2CppName: IncrementWriteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::IncrementWriteCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*), "IncrementWriteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::NeedsFallBack
// Il2CppName: NeedsFallBack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::NeedsFallBack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*), "NeedsFallBack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::CreatePooledGraphicsResource
// Il2CppName: CreatePooledGraphicsResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::CreatePooledGraphicsResource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*), "CreatePooledGraphicsResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::CreateGraphicsResource
// Il2CppName: CreateGraphicsResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::*)(::StringW)>(&UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::CreateGraphicsResource)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*), "CreateGraphicsResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::ReleasePooledGraphicsResource
// Il2CppName: ReleasePooledGraphicsResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::*)(int)>(&UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::ReleasePooledGraphicsResource)> {
  static const MethodInfo* get() {
    static auto* frameIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*), "ReleasePooledGraphicsResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frameIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::ReleaseGraphicsResource
// Il2CppName: ReleaseGraphicsResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::ReleaseGraphicsResource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*), "ReleaseGraphicsResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::LogCreation
// Il2CppName: LogCreation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*)>(&UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::LogCreation)> {
  static const MethodInfo* get() {
    static auto* logger = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphLogger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*), "LogCreation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logger});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::LogRelease
// Il2CppName: LogRelease
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*)>(&UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::LogRelease)> {
  static const MethodInfo* get() {
    static auto* logger = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphLogger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*), "LogRelease", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logger});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!