// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSpatialAnchor
#include "GlobalNamespace/OVRSpatialAnchor.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OperationResultExtensions
  class OperationResultExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OperationResultExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OperationResultExtensions*, "", "OperationResultExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OperationResultExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class OperationResultExtensions : public ::Il2CppObject {
    public:
    // static public System.Boolean IsSuccess(OVRSpatialAnchor/OperationResult res)
    // Offset: 0x492F0E4
    static bool IsSuccess(::GlobalNamespace::OVRSpatialAnchor::OperationResult res);
    // static public System.Boolean IsError(OVRSpatialAnchor/OperationResult res)
    // Offset: 0x492F0F0
    static bool IsError(::GlobalNamespace::OVRSpatialAnchor::OperationResult res);
    // static public System.Boolean IsWarning(OVRSpatialAnchor/OperationResult res)
    // Offset: 0x492F0F8
    static bool IsWarning(::GlobalNamespace::OVRSpatialAnchor::OperationResult res);
  }; // OperationResultExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OperationResultExtensions::IsSuccess
// Il2CppName: IsSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRSpatialAnchor::OperationResult)>(&GlobalNamespace::OperationResultExtensions::IsSuccess)> {
  static const MethodInfo* get() {
    static auto* res = &::il2cpp_utils::GetClassFromName("", "OVRSpatialAnchor/OperationResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OperationResultExtensions*), "IsSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{res});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OperationResultExtensions::IsError
// Il2CppName: IsError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRSpatialAnchor::OperationResult)>(&GlobalNamespace::OperationResultExtensions::IsError)> {
  static const MethodInfo* get() {
    static auto* res = &::il2cpp_utils::GetClassFromName("", "OVRSpatialAnchor/OperationResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OperationResultExtensions*), "IsError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{res});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OperationResultExtensions::IsWarning
// Il2CppName: IsWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRSpatialAnchor::OperationResult)>(&GlobalNamespace::OperationResultExtensions::IsWarning)> {
  static const MethodInfo* get() {
    static auto* res = &::il2cpp_utils::GetClassFromName("", "OVRSpatialAnchor/OperationResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OperationResultExtensions*), "IsWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{res});
  }
};
