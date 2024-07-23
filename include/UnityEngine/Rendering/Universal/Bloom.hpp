// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.VolumeComponent
#include "UnityEngine/Rendering/VolumeComponent.hpp"
// Including type: UnityEngine.Rendering.Universal.IPostProcessComponent
#include "UnityEngine/Rendering/Universal/IPostProcessComponent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ClampedIntParameter
  class ClampedIntParameter;
  // Forward declaring type: MinFloatParameter
  class MinFloatParameter;
  // Forward declaring type: ClampedFloatParameter
  class ClampedFloatParameter;
  // Forward declaring type: ColorParameter
  class ColorParameter;
  // Forward declaring type: BoolParameter
  class BoolParameter;
  // Forward declaring type: TextureParameter
  class TextureParameter;
}
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DownscaleParameter
  class DownscaleParameter;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: Bloom
  class Bloom;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Bloom);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Bloom*, "UnityEngine.Rendering.Universal", "Bloom");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.Bloom
  // [TokenAttribute] Offset: FFFFFFFF
  // [VolumeComponentMenuForRenderPipeline] Offset: FFFFFFFF
  class Bloom : public ::UnityEngine::Rendering::VolumeComponent/*, public ::UnityEngine::Rendering::Universal::IPostProcessComponent*/ {
    public:
    public:
    // public UnityEngine.Rendering.ClampedIntParameter skipIterations
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Rendering::ClampedIntParameter* skipIterations;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ClampedIntParameter*) == 0x8);
    // public UnityEngine.Rendering.MinFloatParameter threshold
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Rendering::MinFloatParameter* threshold;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::MinFloatParameter*) == 0x8);
    // public UnityEngine.Rendering.MinFloatParameter intensity
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Rendering::MinFloatParameter* intensity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::MinFloatParameter*) == 0x8);
    // public UnityEngine.Rendering.ClampedFloatParameter scatter
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Rendering::ClampedFloatParameter* scatter;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ClampedFloatParameter*) == 0x8);
    // public UnityEngine.Rendering.MinFloatParameter clamp
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Rendering::MinFloatParameter* clamp;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::MinFloatParameter*) == 0x8);
    // public UnityEngine.Rendering.ColorParameter tint
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Rendering::ColorParameter* tint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ColorParameter*) == 0x8);
    // public UnityEngine.Rendering.BoolParameter highQualityFiltering
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Rendering::BoolParameter* highQualityFiltering;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::BoolParameter*) == 0x8);
    // public UnityEngine.Rendering.Universal.DownscaleParameter downscale
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::Rendering::Universal::DownscaleParameter* downscale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::DownscaleParameter*) == 0x8);
    // public UnityEngine.Rendering.ClampedIntParameter maxIterations
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::Rendering::ClampedIntParameter* maxIterations;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ClampedIntParameter*) == 0x8);
    // public UnityEngine.Rendering.TextureParameter dirtTexture
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::Rendering::TextureParameter* dirtTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::TextureParameter*) == 0x8);
    // public UnityEngine.Rendering.MinFloatParameter dirtIntensity
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::Rendering::MinFloatParameter* dirtIntensity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::MinFloatParameter*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Rendering::Universal::IPostProcessComponent
    operator ::UnityEngine::Rendering::Universal::IPostProcessComponent() noexcept {
      return *reinterpret_cast<::UnityEngine::Rendering::Universal::IPostProcessComponent*>(this);
    }
    // Get instance field reference: public UnityEngine.Rendering.ClampedIntParameter skipIterations
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ClampedIntParameter*& dyn_skipIterations();
    // Get instance field reference: public UnityEngine.Rendering.MinFloatParameter threshold
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::MinFloatParameter*& dyn_threshold();
    // Get instance field reference: public UnityEngine.Rendering.MinFloatParameter intensity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::MinFloatParameter*& dyn_intensity();
    // Get instance field reference: public UnityEngine.Rendering.ClampedFloatParameter scatter
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ClampedFloatParameter*& dyn_scatter();
    // Get instance field reference: public UnityEngine.Rendering.MinFloatParameter clamp
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::MinFloatParameter*& dyn_clamp();
    // Get instance field reference: public UnityEngine.Rendering.ColorParameter tint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ColorParameter*& dyn_tint();
    // Get instance field reference: public UnityEngine.Rendering.BoolParameter highQualityFiltering
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::BoolParameter*& dyn_highQualityFiltering();
    // Get instance field reference: public UnityEngine.Rendering.Universal.DownscaleParameter downscale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::DownscaleParameter*& dyn_downscale();
    // Get instance field reference: public UnityEngine.Rendering.ClampedIntParameter maxIterations
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ClampedIntParameter*& dyn_maxIterations();
    // Get instance field reference: public UnityEngine.Rendering.TextureParameter dirtTexture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::TextureParameter*& dyn_dirtTexture();
    // Get instance field reference: public UnityEngine.Rendering.MinFloatParameter dirtIntensity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::MinFloatParameter*& dyn_dirtIntensity();
    // public System.Boolean IsActive()
    // Offset: 0x52BBD2C
    bool IsActive();
    // public System.Boolean IsTileCompatible()
    // Offset: 0x52BBD5C
    bool IsTileCompatible();
    // public System.Void .ctor()
    // Offset: 0x52BBD64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bloom* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::Bloom::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bloom*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.Bloom
  #pragma pack(pop)
  static check_size<sizeof(Bloom), 136 + sizeof(::UnityEngine::Rendering::MinFloatParameter*)> __UnityEngine_Rendering_Universal_BloomSizeCheck;
  static_assert(sizeof(Bloom) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Bloom::IsActive
// Il2CppName: IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::Bloom::*)()>(&UnityEngine::Rendering::Universal::Bloom::IsActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Bloom*), "IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Bloom::IsTileCompatible
// Il2CppName: IsTileCompatible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::Bloom::*)()>(&UnityEngine::Rendering::Universal::Bloom::IsTileCompatible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Bloom*), "IsTileCompatible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Bloom::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
