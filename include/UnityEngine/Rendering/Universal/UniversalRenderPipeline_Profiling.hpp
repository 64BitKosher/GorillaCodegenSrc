// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.UniversalRenderPipeline
#include "UnityEngine/Rendering/Universal/UniversalRenderPipeline.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ProfilingSampler
  class ProfilingSampler;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipeline::Profiling);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipeline::Profiling*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/Profiling");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling
  // [TokenAttribute] Offset: FFFFFFFF
  class UniversalRenderPipeline::Profiling : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline::Profiling::Pipeline
    class Pipeline;
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Rendering.ProfilingSampler> s_HashSamplerCache
    static ::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::Rendering::ProfilingSampler*>* _get_s_HashSamplerCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Rendering.ProfilingSampler> s_HashSamplerCache
    static void _set_s_HashSamplerCache(::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::Rendering::ProfilingSampler*>* value);
    // Get static field: static public readonly UnityEngine.Rendering.ProfilingSampler unknownSampler
    static ::UnityEngine::Rendering::ProfilingSampler* _get_unknownSampler();
    // Set static field: static public readonly UnityEngine.Rendering.ProfilingSampler unknownSampler
    static void _set_unknownSampler(::UnityEngine::Rendering::ProfilingSampler* value);
    // static public UnityEngine.Rendering.ProfilingSampler TryGetOrAddCameraSampler(UnityEngine.Camera camera)
    // Offset: 0x52F3680
    static ::UnityEngine::Rendering::ProfilingSampler* TryGetOrAddCameraSampler(::UnityEngine::Camera* camera);
    // static private System.Void .cctor()
    // Offset: 0x52F7494
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipeline::Profiling::TryGetOrAddCameraSampler
// Il2CppName: TryGetOrAddCameraSampler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProfilingSampler* (*)(::UnityEngine::Camera*)>(&UnityEngine::Rendering::Universal::UniversalRenderPipeline::Profiling::TryGetOrAddCameraSampler)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipeline::Profiling*), "TryGetOrAddCameraSampler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipeline::Profiling::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::UniversalRenderPipeline::Profiling::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipeline::Profiling*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};