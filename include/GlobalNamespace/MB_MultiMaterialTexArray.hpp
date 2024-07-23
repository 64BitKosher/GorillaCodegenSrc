// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MB_TexArraySlice
  class MB_TexArraySlice;
  // Forward declaring type: MB_TexArrayForProperty
  class MB_TexArrayForProperty;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MB_MultiMaterialTexArray
  class MB_MultiMaterialTexArray;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MB_MultiMaterialTexArray);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MB_MultiMaterialTexArray*, "", "MB_MultiMaterialTexArray");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MB_MultiMaterialTexArray
  // [TokenAttribute] Offset: FFFFFFFF
  class MB_MultiMaterialTexArray : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Material combinedMaterial
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Material* combinedMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public System.Collections.Generic.List`1<MB_TexArraySlice> slices
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>* slices;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>*) == 0x8);
    // public System.Collections.Generic.List`1<MB_TexArrayForProperty> textureProperties
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArrayForProperty*>* textureProperties;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArrayForProperty*>*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Material combinedMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_combinedMaterial();
    // Get instance field reference: public System.Collections.Generic.List`1<MB_TexArraySlice> slices
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>*& dyn_slices();
    // Get instance field reference: public System.Collections.Generic.List`1<MB_TexArrayForProperty> textureProperties
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArrayForProperty*>*& dyn_textureProperties();
    // public System.Void .ctor()
    // Offset: 0x439C770
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB_MultiMaterialTexArray* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MB_MultiMaterialTexArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB_MultiMaterialTexArray*, creationType>()));
    }
  }; // MB_MultiMaterialTexArray
  #pragma pack(pop)
  static check_size<sizeof(MB_MultiMaterialTexArray), 32 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArrayForProperty*>*)> __GlobalNamespace_MB_MultiMaterialTexArraySizeCheck;
  static_assert(sizeof(MB_MultiMaterialTexArray) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MB_MultiMaterialTexArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
