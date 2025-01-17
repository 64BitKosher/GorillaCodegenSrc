// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.ScriptableRendererFeature
#include "UnityEngine/Rendering/Universal/ScriptableRendererFeature.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::Rendering::Universal
namespace UnityEngine::Experimental::Rendering::Universal {
  // Forward declaring type: RenderObjectsPass
  class RenderObjectsPass;
}
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: ScriptableRenderer
  class ScriptableRenderer;
  // Forward declaring type: RenderingData
  struct RenderingData;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Rendering.Universal
namespace UnityEngine::Experimental::Rendering::Universal {
  // Forward declaring type: RenderObjects
  class RenderObjects;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::Universal::RenderObjects);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::Universal::RenderObjects*, "UnityEngine.Experimental.Rendering.Universal", "RenderObjects");
// Type namespace: UnityEngine.Experimental.Rendering.Universal
namespace UnityEngine::Experimental::Rendering::Universal {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Rendering.Universal.RenderObjects
  // [TokenAttribute] Offset: FFFFFFFF
  // [TooltipAttribute] Offset: FFFFFFFF
  // [ExcludeFromPresetAttribute] Offset: FFFFFFFF
  class RenderObjects : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
    public:
    // Writing base type padding for base size: 0x19 to desired offset: 0x20
    char ___base_padding[0x7] = {};
    // Nested type: ::UnityEngine::Experimental::Rendering::Universal::RenderObjects::RenderObjectsSettings
    class RenderObjectsSettings;
    // Nested type: ::UnityEngine::Experimental::Rendering::Universal::RenderObjects::FilterSettings
    class FilterSettings;
    // Nested type: ::UnityEngine::Experimental::Rendering::Universal::RenderObjects::CustomCameraSettings
    class CustomCameraSettings;
    public:
    // public UnityEngine.Experimental.Rendering.Universal.RenderObjects/RenderObjectsSettings settings
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Experimental::Rendering::Universal::RenderObjects::RenderObjectsSettings* settings;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::Universal::RenderObjects::RenderObjectsSettings*) == 0x8);
    // private UnityEngine.Experimental.Rendering.Universal.RenderObjectsPass renderObjectsPass
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass* renderObjectsPass;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Experimental.Rendering.Universal.RenderObjects/RenderObjectsSettings settings
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::Universal::RenderObjects::RenderObjectsSettings*& dyn_settings();
    // Get instance field reference: private UnityEngine.Experimental.Rendering.Universal.RenderObjectsPass renderObjectsPass
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*& dyn_renderObjectsPass();
    // public override System.Void Create()
    // Offset: 0x526BE0C
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRendererFeature
    // Base method: System.Void ScriptableRendererFeature::Create()
    void Create();
    // public override System.Void AddRenderPasses(UnityEngine.Rendering.Universal.ScriptableRenderer renderer, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x526C030
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRendererFeature
    // Base method: System.Void ScriptableRendererFeature::AddRenderPasses(UnityEngine.Rendering.Universal.ScriptableRenderer renderer, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // override System.Boolean SupportsNativeRenderPass()
    // Offset: 0x526C054
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRendererFeature
    // Base method: System.Boolean ScriptableRendererFeature::SupportsNativeRenderPass()
    bool SupportsNativeRenderPass();
    // public System.Void .ctor()
    // Offset: 0x526C05C
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRendererFeature
    // Base method: System.Void ScriptableRendererFeature::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderObjects* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::Universal::RenderObjects::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderObjects*, creationType>()));
    }
  }; // UnityEngine.Experimental.Rendering.Universal.RenderObjects
  #pragma pack(pop)
  static check_size<sizeof(RenderObjects), 40 + sizeof(::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*)> __UnityEngine_Experimental_Rendering_Universal_RenderObjectsSizeCheck;
  static_assert(sizeof(RenderObjects) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::Universal::RenderObjects::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::Universal::RenderObjects::*)()>(&UnityEngine::Experimental::Rendering::Universal::RenderObjects::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::Universal::RenderObjects*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::Universal::RenderObjects::AddRenderPasses
// Il2CppName: AddRenderPasses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::Universal::RenderObjects::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Experimental::Rendering::Universal::RenderObjects::AddRenderPasses)> {
  static const MethodInfo* get() {
    static auto* renderer = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "ScriptableRenderer")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::Universal::RenderObjects*), "AddRenderPasses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderer, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::Universal::RenderObjects::SupportsNativeRenderPass
// Il2CppName: SupportsNativeRenderPass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::Rendering::Universal::RenderObjects::*)()>(&UnityEngine::Experimental::Rendering::Universal::RenderObjects::SupportsNativeRenderPass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::Universal::RenderObjects*), "SupportsNativeRenderPass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::Universal::RenderObjects::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
