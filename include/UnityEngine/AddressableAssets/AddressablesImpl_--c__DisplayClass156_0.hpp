// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
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
NEED_NO_BOX(::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass156_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass156_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass156_0");
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/<>c__DisplayClass156_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AddressablesImpl::$$c__DisplayClass156_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AddressableAssets::AddressablesImpl* $$4__this;
    // Field size check
    static_assert(sizeof(::UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // public System.Collections.Generic.IEnumerable`1<System.String> catalogIds
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::IEnumerable_1<::StringW>* catalogIds;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerable_1<::StringW>*) == 0x8);
    // public System.Boolean forceSingleThreading
    // Size: 0x1
    // Offset: 0x20
    bool forceSingleThreading;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    [[deprecated("Use field access instead!")]] ::UnityEngine::AddressableAssets::AddressablesImpl*& dyn_$$4__this();
    // Get instance field reference: public System.Collections.Generic.IEnumerable`1<System.String> catalogIds
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerable_1<::StringW>*& dyn_catalogIds();
    // Get instance field reference: public System.Boolean forceSingleThreading
    [[deprecated("Use field access instead!")]] bool& dyn_forceSingleThreading();
    // public System.Void .ctor()
    // Offset: 0x5056F5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::$$c__DisplayClass156_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass156_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::$$c__DisplayClass156_0*, creationType>()));
    }
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Boolean> <CleanBundleCacheWithChain>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle op)
    // Offset: 0x5057E78
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> $CleanBundleCacheWithChain$b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);
  }; // UnityEngine.AddressableAssets.AddressablesImpl/<>c__DisplayClass156_0
  #pragma pack(pop)
  static check_size<sizeof(AddressablesImpl::$$c__DisplayClass156_0), 32 + sizeof(bool)> __UnityEngine_AddressableAssets_AddressablesImpl_$$c__DisplayClass156_0SizeCheck;
  static_assert(sizeof(AddressablesImpl::$$c__DisplayClass156_0) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass156_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass156_0::$CleanBundleCacheWithChain$b__0
// Il2CppName: <CleanBundleCacheWithChain>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass156_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass156_0::$CleanBundleCacheWithChain$b__0)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass156_0*), "<CleanBundleCacheWithChain>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};