// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties
#include "DigitalOpus/MB/Core/MB3_TextureCombinerNonTextureProperties.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB_TexSet
  class MB_TexSet;
  // Forward declaring type: ShaderTextureProperty
  class ShaderTextureProperty;
  // Forward declaring type: MB2_EditorMethodsInterface
  class MB2_EditorMethodsInterface;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties*, "DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties/NonTextureProperties");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/NonTextureProperties
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_TextureCombinerNonTextureProperties::NonTextureProperties {
    public:
    // public System.Boolean NonTexturePropertiesAreEqual(UnityEngine.Material a, UnityEngine.Material b)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b);
    // public UnityEngine.Texture2D TintTextureWithTextureCombiner(UnityEngine.Texture2D t, DigitalOpus.MB.Core.MB_TexSet sourceMaterial, DigitalOpus.MB.Core.ShaderTextureProperty shaderPropertyName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Texture2D* TintTextureWithTextureCombiner(::UnityEngine::Texture2D* t, ::DigitalOpus::MB::Core::MB_TexSet* sourceMaterial, ::DigitalOpus::MB::Core::ShaderTextureProperty* shaderPropertyName);
    // public System.Void AdjustNonTextureProperties(UnityEngine.Material resultMat, System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty> texPropertyNames, DigitalOpus.MB.Core.MB2_EditorMethodsInterface editorMethods)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AdjustNonTextureProperties(::UnityEngine::Material* resultMat, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* texPropertyNames, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods);
    // public UnityEngine.Color GetColorForTemporaryTexture(UnityEngine.Material matIfBlender, DigitalOpus.MB.Core.ShaderTextureProperty texProperty)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Color GetColorForTemporaryTexture(::UnityEngine::Material* matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty* texProperty);
    // public UnityEngine.Color GetColorAsItWouldAppearInAtlasIfNoTexture(UnityEngine.Material matIfBlender, DigitalOpus.MB.Core.ShaderTextureProperty texProperty)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Color GetColorAsItWouldAppearInAtlasIfNoTexture(::UnityEngine::Material* matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty* texProperty);
  }; // DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/NonTextureProperties
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties::NonTexturePropertiesAreEqual
// Il2CppName: NonTexturePropertiesAreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties::NonTexturePropertiesAreEqual)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties*), "NonTexturePropertiesAreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties::TintTextureWithTextureCombiner
// Il2CppName: TintTextureWithTextureCombiner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties::*)(::UnityEngine::Texture2D*, ::DigitalOpus::MB::Core::MB_TexSet*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties::TintTextureWithTextureCombiner)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* sourceMaterial = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB_TexSet")->byval_arg;
    static auto* shaderPropertyName = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ShaderTextureProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties*), "TintTextureWithTextureCombiner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, sourceMaterial, shaderPropertyName});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties::AdjustNonTextureProperties
// Il2CppName: AdjustNonTextureProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties::*)(::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties::AdjustNonTextureProperties)> {
  static const MethodInfo* get() {
    static auto* resultMat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* texPropertyNames = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ShaderTextureProperty")})->byval_arg;
    static auto* editorMethods = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_EditorMethodsInterface")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties*), "AdjustNonTextureProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultMat, texPropertyNames, editorMethods});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties::GetColorForTemporaryTexture
// Il2CppName: GetColorForTemporaryTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties::GetColorForTemporaryTexture)> {
  static const MethodInfo* get() {
    static auto* matIfBlender = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* texProperty = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ShaderTextureProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties*), "GetColorForTemporaryTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{matIfBlender, texProperty});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties::GetColorAsItWouldAppearInAtlasIfNoTexture
// Il2CppName: GetColorAsItWouldAppearInAtlasIfNoTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties::GetColorAsItWouldAppearInAtlasIfNoTexture)> {
  static const MethodInfo* get() {
    static auto* matIfBlender = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* texProperty = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ShaderTextureProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties*), "GetColorAsItWouldAppearInAtlasIfNoTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{matIfBlender, texProperty});
  }
};
