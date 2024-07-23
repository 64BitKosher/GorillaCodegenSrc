// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.PostProcessUtils
#include "UnityEngine/Rendering/Universal/PostProcessUtils.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessUtils::ShaderConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessUtils::ShaderConstants*, "UnityEngine.Rendering.Universal", "PostProcessUtils/ShaderConstants");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.PostProcessUtils/ShaderConstants
  // [TokenAttribute] Offset: FFFFFFFF
  class PostProcessUtils::ShaderConstants : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Int32 _Grain_Texture
    static int _get__Grain_Texture();
    // Set static field: static public readonly System.Int32 _Grain_Texture
    static void _set__Grain_Texture(int value);
    // Get static field: static public readonly System.Int32 _Grain_Params
    static int _get__Grain_Params();
    // Set static field: static public readonly System.Int32 _Grain_Params
    static void _set__Grain_Params(int value);
    // Get static field: static public readonly System.Int32 _Grain_TilingParams
    static int _get__Grain_TilingParams();
    // Set static field: static public readonly System.Int32 _Grain_TilingParams
    static void _set__Grain_TilingParams(int value);
    // Get static field: static public readonly System.Int32 _BlueNoise_Texture
    static int _get__BlueNoise_Texture();
    // Set static field: static public readonly System.Int32 _BlueNoise_Texture
    static void _set__BlueNoise_Texture(int value);
    // Get static field: static public readonly System.Int32 _Dithering_Params
    static int _get__Dithering_Params();
    // Set static field: static public readonly System.Int32 _Dithering_Params
    static void _set__Dithering_Params(int value);
    // Get static field: static public readonly System.Int32 _SourceSize
    static int _get__SourceSize();
    // Set static field: static public readonly System.Int32 _SourceSize
    static void _set__SourceSize(int value);
    // static private System.Void .cctor()
    // Offset: 0x52D0E54
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.PostProcessUtils/ShaderConstants
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PostProcessUtils::ShaderConstants::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::PostProcessUtils::ShaderConstants::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::PostProcessUtils::ShaderConstants*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
