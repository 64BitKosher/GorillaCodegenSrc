// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphObjectPool.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphObjectPool/SharedObjectPoolBase");
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPoolBase
  // [TokenAttribute] Offset: FFFFFFFF
  class RenderGraphObjectPool::SharedObjectPoolBase : public ::Il2CppObject {
    public:
    // Get static field: static protected System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPoolBase> s_AllocatedPools
    static ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase*>* _get_s_AllocatedPools();
    // Set static field: static protected System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPoolBase> s_AllocatedPools
    static void _set_s_AllocatedPools(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase*>* value);
    // protected System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear();
    // static public System.Void ClearAll()
    // Offset: 0x523A8D8
    static void ClearAll();
    // protected System.Void .ctor()
    // Offset: 0x523AA50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderGraphObjectPool::SharedObjectPoolBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderGraphObjectPool::SharedObjectPoolBase*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x523AA58
    static void _cctor();
  }; // UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPoolBase
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase::*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase::ClearAll
// Il2CppName: ClearAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase::ClearAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase*), "ClearAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
