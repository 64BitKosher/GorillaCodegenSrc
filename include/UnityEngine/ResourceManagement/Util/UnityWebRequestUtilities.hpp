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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
  // Forward declaring type: UnityWebRequestAsyncOperation
  class UnityWebRequestAsyncOperation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::Util
namespace UnityEngine::ResourceManagement::Util {
  // Forward declaring type: UnityWebRequestResult
  class UnityWebRequestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Forward declaring type: UnityWebRequestUtilities
  class UnityWebRequestUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*, "UnityEngine.ResourceManagement.Util", "UnityWebRequestUtilities");
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Util.UnityWebRequestUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityWebRequestUtilities : public ::Il2CppObject {
    public:
    // static public System.Boolean RequestHasErrors(UnityEngine.Networking.UnityWebRequest webReq, out UnityEngine.ResourceManagement.Util.UnityWebRequestResult result)
    // Offset: 0x5331978
    static bool RequestHasErrors(::UnityEngine::Networking::UnityWebRequest* webReq, ByRef<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*> result);
    // static public System.Boolean IsAssetBundleDownloaded(UnityEngine.Networking.UnityWebRequestAsyncOperation op)
    // Offset: 0x532A9AC
    static bool IsAssetBundleDownloaded(::UnityEngine::Networking::UnityWebRequestAsyncOperation* op);
    // public System.Void .ctor()
    // Offset: 0x5331BD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityWebRequestUtilities* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityWebRequestUtilities*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.Util.UnityWebRequestUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::RequestHasErrors
// Il2CppName: RequestHasErrors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Networking::UnityWebRequest*, ByRef<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*>)>(&UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::RequestHasErrors)> {
  static const MethodInfo* get() {
    static auto* webReq = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UnityWebRequest")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Util", "UnityWebRequestResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*), "RequestHasErrors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webReq, result});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::IsAssetBundleDownloaded
// Il2CppName: IsAssetBundleDownloaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::IsAssetBundleDownloaded)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UnityWebRequestAsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*), "IsAssetBundleDownloaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!