// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB_TexSet
#include "DigitalOpus/MB/Core/MB_TexSet.hpp"
// Including type: DigitalOpus.MB.Core.MB_TexSet/PipelineVariation
#include "DigitalOpus/MB/Core/MB_TexSet_PipelineVariation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB_TextureTilingTreatment
  struct MB_TextureTilingTreatment;
  // Forward declaring type: ShaderTextureProperty
  class ShaderTextureProperty;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling*, "DigitalOpus.MB.Core", "MB_TexSet/PipelineVariationSomeTexturesUseDifferentMatTiling");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB_TexSet/PipelineVariationSomeTexturesUseDifferentMatTiling
  // [TokenAttribute] Offset: FFFFFFFF
  class MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling : public ::Il2CppObject/*, public ::DigitalOpus::MB::Core::MB_TexSet::PipelineVariation*/ {
    public:
    public:
    // private DigitalOpus.MB.Core.MB_TexSet texSet
    // Size: 0x8
    // Offset: 0x10
    ::DigitalOpus::MB::Core::MB_TexSet* texSet;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB_TexSet*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::DigitalOpus::MB::Core::MB_TexSet::PipelineVariation
    operator ::DigitalOpus::MB::Core::MB_TexSet::PipelineVariation() noexcept {
      return *reinterpret_cast<::DigitalOpus::MB::Core::MB_TexSet::PipelineVariation*>(this);
    }
    // Creating conversion operator: operator ::DigitalOpus::MB::Core::MB_TexSet*
    constexpr operator ::DigitalOpus::MB::Core::MB_TexSet*() const noexcept {
      return texSet;
    }
    // Get instance field reference: private DigitalOpus.MB.Core.MB_TexSet texSet
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB_TexSet*& dyn_texSet();
    // public System.Void .ctor(DigitalOpus.MB.Core.MB_TexSet ts)
    // Offset: 0x43E3870
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling* New_ctor(::DigitalOpus::MB::Core::MB_TexSet* ts) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling*, creationType>(ts)));
    }
    // public System.Void GetRectsForTextureBakeResults(out UnityEngine.Rect allPropsUseSameTiling_encapsulatingSamplingRect, out UnityEngine.Rect propsUseDifferntTiling_obUVRect)
    // Offset: 0x43E4EE8
    void GetRectsForTextureBakeResults(ByRef<::UnityEngine::Rect> allPropsUseSameTiling_encapsulatingSamplingRect, ByRef<::UnityEngine::Rect> propsUseDifferntTiling_obUVRect);
    // public System.Void SetTilingTreatmentAndAdjustEncapsulatingSamplingRect(DigitalOpus.MB.Core.MB_TextureTilingTreatment newTilingTreatment)
    // Offset: 0x43E4F94
    void SetTilingTreatmentAndAdjustEncapsulatingSamplingRect(::DigitalOpus::MB::Core::MB_TextureTilingTreatment newTilingTreatment);
    // public UnityEngine.Rect GetMaterialTilingRectForTextureBakerResults(System.Int32 materialIndex)
    // Offset: 0x43E50A0
    ::UnityEngine::Rect GetMaterialTilingRectForTextureBakerResults(int materialIndex);
    // public System.Void AdjustResultMaterialNonTextureProperties(UnityEngine.Material resultMaterial, System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty> props)
    // Offset: 0x43E50B4
    void AdjustResultMaterialNonTextureProperties(::UnityEngine::Material* resultMaterial, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* props);
  }; // DigitalOpus.MB.Core.MB_TexSet/PipelineVariationSomeTexturesUseDifferentMatTiling
  #pragma pack(pop)
  static check_size<sizeof(MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling), 16 + sizeof(::DigitalOpus::MB::Core::MB_TexSet*)> __DigitalOpus_MB_Core_MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTilingSizeCheck;
  static_assert(sizeof(MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling::GetRectsForTextureBakeResults
// Il2CppName: GetRectsForTextureBakeResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling::*)(ByRef<::UnityEngine::Rect>, ByRef<::UnityEngine::Rect>)>(&DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling::GetRectsForTextureBakeResults)> {
  static const MethodInfo* get() {
    static auto* allPropsUseSameTiling_encapsulatingSamplingRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    static auto* propsUseDifferntTiling_obUVRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling*), "GetRectsForTextureBakeResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{allPropsUseSameTiling_encapsulatingSamplingRect, propsUseDifferntTiling_obUVRect});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling::SetTilingTreatmentAndAdjustEncapsulatingSamplingRect
// Il2CppName: SetTilingTreatmentAndAdjustEncapsulatingSamplingRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling::*)(::DigitalOpus::MB::Core::MB_TextureTilingTreatment)>(&DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling::SetTilingTreatmentAndAdjustEncapsulatingSamplingRect)> {
  static const MethodInfo* get() {
    static auto* newTilingTreatment = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB_TextureTilingTreatment")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling*), "SetTilingTreatmentAndAdjustEncapsulatingSamplingRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newTilingTreatment});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling::GetMaterialTilingRectForTextureBakerResults
// Il2CppName: GetMaterialTilingRectForTextureBakerResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling::*)(int)>(&DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling::GetMaterialTilingRectForTextureBakerResults)> {
  static const MethodInfo* get() {
    static auto* materialIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling*), "GetMaterialTilingRectForTextureBakerResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{materialIndex});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling::AdjustResultMaterialNonTextureProperties
// Il2CppName: AdjustResultMaterialNonTextureProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling::*)(::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*)>(&DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling::AdjustResultMaterialNonTextureProperties)> {
  static const MethodInfo* get() {
    static auto* resultMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* props = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ShaderTextureProperty")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling*), "AdjustResultMaterialNonTextureProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultMaterial, props});
  }
};
