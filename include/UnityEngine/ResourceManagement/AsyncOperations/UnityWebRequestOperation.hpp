// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: UnityWebRequestOperation
  class UnityWebRequestOperation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*, "UnityEngine.ResourceManagement.AsyncOperations", "UnityWebRequestOperation");
// Type namespace: UnityEngine.ResourceManagement.AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ResourceManagement.AsyncOperations.UnityWebRequestOperation
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityWebRequestOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::Networking::UnityWebRequest*> {
    public:
    public:
    // private UnityEngine.Networking.UnityWebRequest m_UWR
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::Networking::UnityWebRequest* m_UWR;
    // Field size check
    static_assert(sizeof(::UnityEngine::Networking::UnityWebRequest*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::Networking::UnityWebRequest*
    constexpr operator ::UnityEngine::Networking::UnityWebRequest*() const noexcept {
      return m_UWR;
    }
    // Get instance field reference: private UnityEngine.Networking.UnityWebRequest m_UWR
    [[deprecated("Use field access instead!")]] ::UnityEngine::Networking::UnityWebRequest*& dyn_m_UWR();
    // public System.Void .ctor(UnityEngine.Networking.UnityWebRequest webRequest)
    // Offset: 0x53425B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityWebRequestOperation* New_ctor(::UnityEngine::Networking::UnityWebRequest* webRequest) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityWebRequestOperation*, creationType>(webRequest)));
    }
    // private System.Void <Execute>b__2_0(UnityEngine.AsyncOperation request)
    // Offset: 0x53426B0
    void $Execute$b__2_0(::UnityEngine::AsyncOperation* request);
    // protected override System.Void Execute()
    // Offset: 0x5342614
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Execute()
    void Execute();
  }; // UnityEngine.ResourceManagement.AsyncOperations.UnityWebRequestOperation
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::$Execute$b__2_0
// Il2CppName: <Execute>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::*)(::UnityEngine::AsyncOperation*)>(&UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::$Execute$b__2_0)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*), "<Execute>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
