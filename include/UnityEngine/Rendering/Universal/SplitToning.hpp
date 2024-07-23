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
  // Forward declaring type: ColorParameter
  class ColorParameter;
  // Forward declaring type: ClampedFloatParameter
  class ClampedFloatParameter;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: SplitToning
  class SplitToning;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::SplitToning);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::SplitToning*, "UnityEngine.Rendering.Universal", "SplitToning");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.SplitToning
  // [TokenAttribute] Offset: FFFFFFFF
  // [VolumeComponentMenuForRenderPipeline] Offset: FFFFFFFF
  class SplitToning : public ::UnityEngine::Rendering::VolumeComponent/*, public ::UnityEngine::Rendering::Universal::IPostProcessComponent*/ {
    public:
    public:
    // public UnityEngine.Rendering.ColorParameter shadows
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Rendering::ColorParameter* shadows;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ColorParameter*) == 0x8);
    // public UnityEngine.Rendering.ColorParameter highlights
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Rendering::ColorParameter* highlights;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ColorParameter*) == 0x8);
    // public UnityEngine.Rendering.ClampedFloatParameter balance
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Rendering::ClampedFloatParameter* balance;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ClampedFloatParameter*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Rendering::Universal::IPostProcessComponent
    operator ::UnityEngine::Rendering::Universal::IPostProcessComponent() noexcept {
      return *reinterpret_cast<::UnityEngine::Rendering::Universal::IPostProcessComponent*>(this);
    }
    // Get instance field reference: public UnityEngine.Rendering.ColorParameter shadows
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ColorParameter*& dyn_shadows();
    // Get instance field reference: public UnityEngine.Rendering.ColorParameter highlights
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ColorParameter*& dyn_highlights();
    // Get instance field reference: public UnityEngine.Rendering.ClampedFloatParameter balance
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ClampedFloatParameter*& dyn_balance();
    // public System.Boolean IsActive()
    // Offset: 0x52C2C34
    bool IsActive();
    // public System.Boolean IsTileCompatible()
    // Offset: 0x52C2CBC
    bool IsTileCompatible();
    // public System.Void .ctor()
    // Offset: 0x52C2CC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SplitToning* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::SplitToning::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SplitToning*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.SplitToning
  #pragma pack(pop)
  static check_size<sizeof(SplitToning), 72 + sizeof(::UnityEngine::Rendering::ClampedFloatParameter*)> __UnityEngine_Rendering_Universal_SplitToningSizeCheck;
  static_assert(sizeof(SplitToning) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::SplitToning::IsActive
// Il2CppName: IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::SplitToning::*)()>(&UnityEngine::Rendering::Universal::SplitToning::IsActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::SplitToning*), "IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::SplitToning::IsTileCompatible
// Il2CppName: IsTileCompatible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::SplitToning::*)()>(&UnityEngine::Rendering::Universal::SplitToning::IsTileCompatible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::SplitToning*), "IsTileCompatible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::SplitToning::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!