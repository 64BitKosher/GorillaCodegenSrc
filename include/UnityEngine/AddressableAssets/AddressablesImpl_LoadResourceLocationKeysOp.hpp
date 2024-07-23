// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationBase_1.hpp"
// Including type: UnityEngine.AddressableAssets.Addressables/MergeMode
#include "UnityEngine/AddressableAssets/Addressables.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp*, "UnityEngine.AddressableAssets", "AddressablesImpl/LoadResourceLocationKeysOp");
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/LoadResourceLocationKeysOp
  // [TokenAttribute] Offset: FFFFFFFF
  class AddressablesImpl::LoadResourceLocationKeysOp : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> {
    public:
    public:
    // private System.Collections.IEnumerable m_Key
    // Size: 0x8
    // Offset: 0x98
    ::System::Collections::IEnumerable* m_Key;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerable*) == 0x8);
    // private UnityEngine.AddressableAssets.Addressables/MergeMode m_MergeMode
    // Size: 0x4
    // Offset: 0xA0
    ::UnityEngine::AddressableAssets::Addressables::MergeMode m_MergeMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::AddressableAssets::Addressables::MergeMode) == 0x4);
    // private System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> m_locations
    // Size: 0x8
    // Offset: 0xA8
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* m_locations;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*) == 0x8);
    // private UnityEngine.AddressableAssets.AddressablesImpl m_Addressables
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;
    // Field size check
    static_assert(sizeof(::UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // private System.Type m_ResourceType
    // Size: 0x8
    // Offset: 0xB8
    ::System::Type* m_ResourceType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.IEnumerable m_Key
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerable*& dyn_m_Key();
    // Get instance field reference: private UnityEngine.AddressableAssets.Addressables/MergeMode m_MergeMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::AddressableAssets::Addressables::MergeMode& dyn_m_MergeMode();
    // Get instance field reference: private System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> m_locations
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& dyn_m_locations();
    // Get instance field reference: private UnityEngine.AddressableAssets.AddressablesImpl m_Addressables
    [[deprecated("Use field access instead!")]] ::UnityEngine::AddressableAssets::AddressablesImpl*& dyn_m_Addressables();
    // Get instance field reference: private System.Type m_ResourceType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_m_ResourceType();
    // public System.Void Init(UnityEngine.AddressableAssets.AddressablesImpl aa, System.Type t, System.Collections.IEnumerable key, UnityEngine.AddressableAssets.Addressables/MergeMode mergeMode)
    // Offset: 0x5051CD8
    void Init(::UnityEngine::AddressableAssets::AddressablesImpl* aa, ::System::Type* t, ::System::Collections::IEnumerable* key, ::UnityEngine::AddressableAssets::Addressables::MergeMode mergeMode);
    // public System.Void .ctor()
    // Offset: 0x5051C90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::LoadResourceLocationKeysOp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::LoadResourceLocationKeysOp*, creationType>()));
    }
    // protected override System.String get_DebugName()
    // Offset: 0x50572E4
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.String AsyncOperationBase_1::get_DebugName()
    ::StringW get_DebugName();
    // protected override System.Void Execute()
    // Offset: 0x5057324
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Execute()
    void Execute();
    // protected override System.Boolean InvokeWaitForCompletion()
    // Offset: 0x5057414
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Boolean AsyncOperationBase_1::InvokeWaitForCompletion()
    bool InvokeWaitForCompletion();
  }; // UnityEngine.AddressableAssets.AddressablesImpl/LoadResourceLocationKeysOp
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::*)(::UnityEngine::AddressableAssets::AddressablesImpl*, ::System::Type*, ::System::Collections::IEnumerable*, ::UnityEngine::AddressableAssets::Addressables::MergeMode)>(&UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::Init)> {
  static const MethodInfo* get() {
    static auto* aa = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets", "AddressablesImpl")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerable")->byval_arg;
    static auto* mergeMode = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets", "Addressables/MergeMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aa, t, key, mergeMode});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::get_DebugName
// Il2CppName: get_DebugName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::*)()>(&UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::get_DebugName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp*), "get_DebugName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::*)()>(&UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::InvokeWaitForCompletion
// Il2CppName: InvokeWaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::*)()>(&UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::InvokeWaitForCompletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp*), "InvokeWaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};