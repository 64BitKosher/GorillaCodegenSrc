// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2Int
#include "UnityEngine/Vector2Int.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BitmapFont
  class BitmapFont;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BitmapFontText
  class BitmapFontText;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BitmapFontText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BitmapFontText*, "", "BitmapFontText");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: BitmapFontText
  // [TokenAttribute] Offset: FFFFFFFF
  class BitmapFontText : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.String text
    // Size: 0x8
    // Offset: 0x20
    ::StringW text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean uppercaseOnly
    // Size: 0x1
    // Offset: 0x28
    bool uppercaseOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: uppercaseOnly and: textArea
    char __padding1[0x3] = {};
    // public UnityEngine.Vector2Int textArea
    // Size: 0x8
    // Offset: 0x2C
    ::UnityEngine::Vector2Int textArea;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2Int) == 0x8);
    // Padding between fields: textArea and: renderer
    char __padding2[0x4] = {};
    // public UnityEngine.Renderer renderer
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // public UnityEngine.Texture2D texture
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Texture2D* texture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // public UnityEngine.Material material
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public BitmapFont font
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::BitmapFont* font;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BitmapFont*) == 0x8);
    public:
    // Get instance field reference: public System.String text
    [[deprecated("Use field access instead!")]] ::StringW& dyn_text();
    // Get instance field reference: public System.Boolean uppercaseOnly
    [[deprecated("Use field access instead!")]] bool& dyn_uppercaseOnly();
    // Get instance field reference: public UnityEngine.Vector2Int textArea
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2Int& dyn_textArea();
    // Get instance field reference: public UnityEngine.Renderer renderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn_renderer();
    // Get instance field reference: public UnityEngine.Texture2D texture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_texture();
    // Get instance field reference: public UnityEngine.Material material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_material();
    // Get instance field reference: public BitmapFont font
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BitmapFont*& dyn_font();
    // private System.Void Awake()
    // Offset: 0x2974F4C
    void Awake();
    // public System.Void Render()
    // Offset: 0x297509C
    void Render();
    // public System.Void Init()
    // Offset: 0x2974F64
    void Init();
    // public System.Void .ctor()
    // Offset: 0x29750E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BitmapFontText* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BitmapFontText::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BitmapFontText*, creationType>()));
    }
  }; // BitmapFontText
  #pragma pack(pop)
  static check_size<sizeof(BitmapFontText), 80 + sizeof(::GlobalNamespace::BitmapFont*)> __GlobalNamespace_BitmapFontTextSizeCheck;
  static_assert(sizeof(BitmapFontText) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BitmapFontText::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BitmapFontText::*)()>(&GlobalNamespace::BitmapFontText::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitmapFontText*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitmapFontText::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BitmapFontText::*)()>(&GlobalNamespace::BitmapFontText::Render)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitmapFontText*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitmapFontText::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BitmapFontText::*)()>(&GlobalNamespace::BitmapFontText::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitmapFontText*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitmapFontText::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
