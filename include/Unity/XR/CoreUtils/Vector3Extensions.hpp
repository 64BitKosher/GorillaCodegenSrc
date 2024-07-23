// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: Unity.XR.CoreUtils
namespace Unity::XR::CoreUtils {
  // Forward declaring type: Vector3Extensions
  class Vector3Extensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::CoreUtils::Vector3Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::Vector3Extensions*, "Unity.XR.CoreUtils", "Vector3Extensions");
// Type namespace: Unity.XR.CoreUtils
namespace Unity::XR::CoreUtils {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.CoreUtils.Vector3Extensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class Vector3Extensions : public ::Il2CppObject {
    public:
    // static public System.Single MaxComponent(UnityEngine.Vector3 vector)
    // Offset: 0x53D0580
    static float MaxComponent(::UnityEngine::Vector3 vector);
    // static public UnityEngine.Vector3 Multiply(UnityEngine.Vector3 value, UnityEngine.Vector3 scale)
    // Offset: 0x53D0594
    static ::UnityEngine::Vector3 Multiply(::UnityEngine::Vector3 value, ::UnityEngine::Vector3 scale);
    // static public UnityEngine.Vector3 Divide(UnityEngine.Vector3 value, UnityEngine.Vector3 scale)
    // Offset: 0x53D05A4
    static ::UnityEngine::Vector3 Divide(::UnityEngine::Vector3 value, ::UnityEngine::Vector3 scale);
  }; // Unity.XR.CoreUtils.Vector3Extensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::CoreUtils::Vector3Extensions::MaxComponent
// Il2CppName: MaxComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Vector3)>(&Unity::XR::CoreUtils::Vector3Extensions::MaxComponent)> {
  static const MethodInfo* get() {
    static auto* vector = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::CoreUtils::Vector3Extensions*), "MaxComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vector});
  }
};
// Writing MetadataGetter for method: Unity::XR::CoreUtils::Vector3Extensions::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&Unity::XR::CoreUtils::Vector3Extensions::Multiply)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::CoreUtils::Vector3Extensions*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, scale});
  }
};
// Writing MetadataGetter for method: Unity::XR::CoreUtils::Vector3Extensions::Divide
// Il2CppName: Divide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&Unity::XR::CoreUtils::Vector3Extensions::Divide)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::CoreUtils::Vector3Extensions*), "Divide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, scale});
  }
};