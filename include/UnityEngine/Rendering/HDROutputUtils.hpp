// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ColorGamut
  struct ColorGamut;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: HDROutputUtils
  class HDROutputUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::HDROutputUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::HDROutputUtils*, "UnityEngine.Rendering", "HDROutputUtils");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.HDROutputUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class HDROutputUtils : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Rendering::HDROutputUtils::Operation
    struct Operation;
    // Nested type: ::UnityEngine::Rendering::HDROutputUtils::ShaderKeywords
    class ShaderKeywords;
    // Nested type: ::UnityEngine::Rendering::HDROutputUtils::ShaderPropertyId
    class ShaderPropertyId;
    // static private System.Boolean GetColorSpaceForGamut(UnityEngine.ColorGamut gamut, out System.Int32 colorspace)
    // Offset: 0x525E604
    static bool GetColorSpaceForGamut(::UnityEngine::ColorGamut gamut, ByRef<int> colorspace);
    // static private System.Boolean GetColorEncodingForGamut(UnityEngine.ColorGamut gamut, out System.Int32 encoding)
    // Offset: 0x525E804
    static bool GetColorEncodingForGamut(::UnityEngine::ColorGamut gamut, ByRef<int> encoding);
    // static public System.Void ConfigureHDROutput(UnityEngine.Material material, UnityEngine.ColorGamut gamut, UnityEngine.Rendering.HDROutputUtils/Operation operations)
    // Offset: 0x525E964
    static void ConfigureHDROutput(::UnityEngine::Material* material, ::UnityEngine::ColorGamut gamut, ::UnityEngine::Rendering::HDROutputUtils::Operation operations);
  }; // UnityEngine.Rendering.HDROutputUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::HDROutputUtils::GetColorSpaceForGamut
// Il2CppName: GetColorSpaceForGamut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ColorGamut, ByRef<int>)>(&UnityEngine::Rendering::HDROutputUtils::GetColorSpaceForGamut)> {
  static const MethodInfo* get() {
    static auto* gamut = &::il2cpp_utils::GetClassFromName("UnityEngine", "ColorGamut")->byval_arg;
    static auto* colorspace = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::HDROutputUtils*), "GetColorSpaceForGamut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gamut, colorspace});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::HDROutputUtils::GetColorEncodingForGamut
// Il2CppName: GetColorEncodingForGamut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ColorGamut, ByRef<int>)>(&UnityEngine::Rendering::HDROutputUtils::GetColorEncodingForGamut)> {
  static const MethodInfo* get() {
    static auto* gamut = &::il2cpp_utils::GetClassFromName("UnityEngine", "ColorGamut")->byval_arg;
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::HDROutputUtils*), "GetColorEncodingForGamut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gamut, encoding});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput
// Il2CppName: ConfigureHDROutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::ColorGamut, ::UnityEngine::Rendering::HDROutputUtils::Operation)>(&UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput)> {
  static const MethodInfo* get() {
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* gamut = &::il2cpp_utils::GetClassFromName("UnityEngine", "ColorGamut")->byval_arg;
    static auto* operations = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "HDROutputUtils/Operation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::HDROutputUtils*), "ConfigureHDROutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{material, gamut, operations});
  }
};
