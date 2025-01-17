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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MB_TextureArrayReference
  class MB_TextureArrayReference;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MB_TexArrayForProperty
  class MB_TexArrayForProperty;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MB_TexArrayForProperty);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MB_TexArrayForProperty*, "", "MB_TexArrayForProperty");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MB_TexArrayForProperty
  // [TokenAttribute] Offset: FFFFFFFF
  class MB_TexArrayForProperty : public ::Il2CppObject {
    public:
    public:
    // public System.String texPropertyName
    // Size: 0x8
    // Offset: 0x10
    ::StringW texPropertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public MB_TextureArrayReference[] formats
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::MB_TextureArrayReference*> formats;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MB_TextureArrayReference*>) == 0x8);
    public:
    // Get instance field reference: public System.String texPropertyName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_texPropertyName();
    // Get instance field reference: public MB_TextureArrayReference[] formats
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MB_TextureArrayReference*>& dyn_formats();
    // public System.Void .ctor(System.String name, MB_TextureArrayReference[] texRefs)
    // Offset: 0x439C6D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB_TexArrayForProperty* New_ctor(::StringW name, ::ArrayW<::GlobalNamespace::MB_TextureArrayReference*> texRefs) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MB_TexArrayForProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB_TexArrayForProperty*, creationType>(name, texRefs)));
    }
  }; // MB_TexArrayForProperty
  #pragma pack(pop)
  static check_size<sizeof(MB_TexArrayForProperty), 24 + sizeof(::ArrayW<::GlobalNamespace::MB_TextureArrayReference*>)> __GlobalNamespace_MB_TexArrayForPropertySizeCheck;
  static_assert(sizeof(MB_TexArrayForProperty) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MB_TexArrayForProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
