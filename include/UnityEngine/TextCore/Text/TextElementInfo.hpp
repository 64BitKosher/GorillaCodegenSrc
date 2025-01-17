// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.TextCore.Text.TextElementType
#include "UnityEngine/TextCore/Text/TextElementType.hpp"
// Including type: UnityEngine.TextCore.Text.TextVertex
#include "UnityEngine/TextCore/Text/TextVertex.hpp"
// Including type: UnityEngine.TextCore.Text.HighlightState
#include "UnityEngine/TextCore/Text/HighlightState.hpp"
// Including type: UnityEngine.TextCore.Text.FontStyles
#include "UnityEngine/TextCore/Text/FontStyles.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TextCore::Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: TextElement
  class TextElement;
  // Forward declaring type: FontAsset
  class FontAsset;
  // Forward declaring type: SpriteAsset
  class SpriteAsset;
}
// Forward declaring namespace: UnityEngine::TextCore
namespace UnityEngine::TextCore {
  // Forward declaring type: Glyph
  class Glyph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: TextElementInfo
  struct TextElementInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextElementInfo, "UnityEngine.TextCore.Text", "TextElementInfo");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Size: 0x181
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.Text.TextElementInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextElementInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Char character
    // Size: 0x2
    // Offset: 0x0
    ::Il2CppChar character;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: character and: index
    char __padding0[0x2] = {};
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x4
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.TextCore.Text.TextElementType elementType
    // Size: 0x1
    // Offset: 0x8
    ::UnityEngine::TextCore::Text::TextElementType elementType;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::TextElementType) == 0x1);
    // Padding between fields: elementType and: stringLength
    char __padding2[0x3] = {};
    // public System.Int32 stringLength
    // Size: 0x4
    // Offset: 0xC
    int stringLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.TextCore.Text.TextElement textElement
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::TextCore::Text::TextElement* textElement;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::TextElement*) == 0x8);
    // public UnityEngine.TextCore.Glyph alternativeGlyph
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::TextCore::Glyph* alternativeGlyph;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Glyph*) == 0x8);
    // public UnityEngine.TextCore.Text.FontAsset fontAsset
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::TextCore::Text::FontAsset* fontAsset;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::FontAsset*) == 0x8);
    // public UnityEngine.TextCore.Text.SpriteAsset spriteAsset
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::SpriteAsset*) == 0x8);
    // public System.Int32 spriteIndex
    // Size: 0x4
    // Offset: 0x30
    int spriteIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: spriteIndex and: material
    char __padding8[0x4] = {};
    // public UnityEngine.Material material
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public System.Int32 materialReferenceIndex
    // Size: 0x4
    // Offset: 0x40
    int materialReferenceIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean isUsingAlternateTypeface
    // Size: 0x1
    // Offset: 0x44
    bool isUsingAlternateTypeface;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isUsingAlternateTypeface and: pointSize
    char __padding11[0x3] = {};
    // public System.Single pointSize
    // Size: 0x4
    // Offset: 0x48
    float pointSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 lineNumber
    // Size: 0x4
    // Offset: 0x4C
    int lineNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 pageNumber
    // Size: 0x4
    // Offset: 0x50
    int pageNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 vertexIndex
    // Size: 0x4
    // Offset: 0x54
    int vertexIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.TextCore.Text.TextVertex vertexTopLeft
    // Size: 0x28
    // Offset: 0x58
    ::UnityEngine::TextCore::Text::TextVertex vertexTopLeft;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::TextVertex) == 0x28);
    // public UnityEngine.TextCore.Text.TextVertex vertexBottomLeft
    // Size: 0x28
    // Offset: 0x80
    ::UnityEngine::TextCore::Text::TextVertex vertexBottomLeft;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::TextVertex) == 0x28);
    // public UnityEngine.TextCore.Text.TextVertex vertexTopRight
    // Size: 0x28
    // Offset: 0xA8
    ::UnityEngine::TextCore::Text::TextVertex vertexTopRight;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::TextVertex) == 0x28);
    // public UnityEngine.TextCore.Text.TextVertex vertexBottomRight
    // Size: 0x28
    // Offset: 0xD0
    ::UnityEngine::TextCore::Text::TextVertex vertexBottomRight;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::TextVertex) == 0x28);
    // public UnityEngine.Vector3 topLeft
    // Size: 0xC
    // Offset: 0xF8
    ::UnityEngine::Vector3 topLeft;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 bottomLeft
    // Size: 0xC
    // Offset: 0x104
    ::UnityEngine::Vector3 bottomLeft;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 topRight
    // Size: 0xC
    // Offset: 0x110
    ::UnityEngine::Vector3 topRight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 bottomRight
    // Size: 0xC
    // Offset: 0x11C
    ::UnityEngine::Vector3 bottomRight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single origin
    // Size: 0x4
    // Offset: 0x128
    float origin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single ascender
    // Size: 0x4
    // Offset: 0x12C
    float ascender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single baseLine
    // Size: 0x4
    // Offset: 0x130
    float baseLine;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single descender
    // Size: 0x4
    // Offset: 0x134
    float descender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single adjustedAscender
    // Size: 0x4
    // Offset: 0x138
    float adjustedAscender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single adjustedDescender
    // Size: 0x4
    // Offset: 0x13C
    float adjustedDescender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single adjustedHorizontalAdvance
    // Size: 0x4
    // Offset: 0x140
    float adjustedHorizontalAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single xAdvance
    // Size: 0x4
    // Offset: 0x144
    float xAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single aspectRatio
    // Size: 0x4
    // Offset: 0x148
    float aspectRatio;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single scale
    // Size: 0x4
    // Offset: 0x14C
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color32 color
    // Size: 0x4
    // Offset: 0x150
    ::UnityEngine::Color32 color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // public UnityEngine.Color32 underlineColor
    // Size: 0x4
    // Offset: 0x154
    ::UnityEngine::Color32 underlineColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // public System.Int32 underlineVertexIndex
    // Size: 0x4
    // Offset: 0x158
    int underlineVertexIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Color32 strikethroughColor
    // Size: 0x4
    // Offset: 0x15C
    ::UnityEngine::Color32 strikethroughColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // public System.Int32 strikethroughVertexIndex
    // Size: 0x4
    // Offset: 0x160
    int strikethroughVertexIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Color32 highlightColor
    // Size: 0x4
    // Offset: 0x164
    ::UnityEngine::Color32 highlightColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // public UnityEngine.TextCore.Text.HighlightState highlightState
    // Size: 0x14
    // Offset: 0x168
    ::UnityEngine::TextCore::Text::HighlightState highlightState;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::HighlightState) == 0x14);
    // public UnityEngine.TextCore.Text.FontStyles style
    // Size: 0x4
    // Offset: 0x17C
    ::UnityEngine::TextCore::Text::FontStyles style;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::FontStyles) == 0x4);
    // public System.Boolean isVisible
    // Size: 0x1
    // Offset: 0x180
    bool isVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: TextElementInfo
    constexpr TextElementInfo(::Il2CppChar character_ = {}, int index_ = {}, ::UnityEngine::TextCore::Text::TextElementType elementType_ = {}, int stringLength_ = {}, ::UnityEngine::TextCore::Text::TextElement* textElement_ = {}, ::UnityEngine::TextCore::Glyph* alternativeGlyph_ = {}, ::UnityEngine::TextCore::Text::FontAsset* fontAsset_ = {}, ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset_ = {}, int spriteIndex_ = {}, ::UnityEngine::Material* material_ = {}, int materialReferenceIndex_ = {}, bool isUsingAlternateTypeface_ = {}, float pointSize_ = {}, int lineNumber_ = {}, int pageNumber_ = {}, int vertexIndex_ = {}, ::UnityEngine::TextCore::Text::TextVertex vertexTopLeft_ = {}, ::UnityEngine::TextCore::Text::TextVertex vertexBottomLeft_ = {}, ::UnityEngine::TextCore::Text::TextVertex vertexTopRight_ = {}, ::UnityEngine::TextCore::Text::TextVertex vertexBottomRight_ = {}, ::UnityEngine::Vector3 topLeft_ = {}, ::UnityEngine::Vector3 bottomLeft_ = {}, ::UnityEngine::Vector3 topRight_ = {}, ::UnityEngine::Vector3 bottomRight_ = {}, float origin_ = {}, float ascender_ = {}, float baseLine_ = {}, float descender_ = {}, float adjustedAscender_ = {}, float adjustedDescender_ = {}, float adjustedHorizontalAdvance_ = {}, float xAdvance_ = {}, float aspectRatio_ = {}, float scale_ = {}, ::UnityEngine::Color32 color_ = {}, ::UnityEngine::Color32 underlineColor_ = {}, int underlineVertexIndex_ = {}, ::UnityEngine::Color32 strikethroughColor_ = {}, int strikethroughVertexIndex_ = {}, ::UnityEngine::Color32 highlightColor_ = {}, ::UnityEngine::TextCore::Text::HighlightState highlightState_ = {}, ::UnityEngine::TextCore::Text::FontStyles style_ = {}, bool isVisible_ = {}) noexcept : character{character_}, index{index_}, elementType{elementType_}, stringLength{stringLength_}, textElement{textElement_}, alternativeGlyph{alternativeGlyph_}, fontAsset{fontAsset_}, spriteAsset{spriteAsset_}, spriteIndex{spriteIndex_}, material{material_}, materialReferenceIndex{materialReferenceIndex_}, isUsingAlternateTypeface{isUsingAlternateTypeface_}, pointSize{pointSize_}, lineNumber{lineNumber_}, pageNumber{pageNumber_}, vertexIndex{vertexIndex_}, vertexTopLeft{vertexTopLeft_}, vertexBottomLeft{vertexBottomLeft_}, vertexTopRight{vertexTopRight_}, vertexBottomRight{vertexBottomRight_}, topLeft{topLeft_}, bottomLeft{bottomLeft_}, topRight{topRight_}, bottomRight{bottomRight_}, origin{origin_}, ascender{ascender_}, baseLine{baseLine_}, descender{descender_}, adjustedAscender{adjustedAscender_}, adjustedDescender{adjustedDescender_}, adjustedHorizontalAdvance{adjustedHorizontalAdvance_}, xAdvance{xAdvance_}, aspectRatio{aspectRatio_}, scale{scale_}, color{color_}, underlineColor{underlineColor_}, underlineVertexIndex{underlineVertexIndex_}, strikethroughColor{strikethroughColor_}, strikethroughVertexIndex{strikethroughVertexIndex_}, highlightColor{highlightColor_}, highlightState{highlightState_}, style{style_}, isVisible{isVisible_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Char character
    [[deprecated("Use field access instead!")]] ::Il2CppChar& dyn_character();
    // Get instance field reference: public System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextElementType elementType
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextElementType& dyn_elementType();
    // Get instance field reference: public System.Int32 stringLength
    [[deprecated("Use field access instead!")]] int& dyn_stringLength();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextElement textElement
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextElement*& dyn_textElement();
    // Get instance field reference: public UnityEngine.TextCore.Glyph alternativeGlyph
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Glyph*& dyn_alternativeGlyph();
    // Get instance field reference: public UnityEngine.TextCore.Text.FontAsset fontAsset
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::FontAsset*& dyn_fontAsset();
    // Get instance field reference: public UnityEngine.TextCore.Text.SpriteAsset spriteAsset
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::SpriteAsset*& dyn_spriteAsset();
    // Get instance field reference: public System.Int32 spriteIndex
    [[deprecated("Use field access instead!")]] int& dyn_spriteIndex();
    // Get instance field reference: public UnityEngine.Material material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_material();
    // Get instance field reference: public System.Int32 materialReferenceIndex
    [[deprecated("Use field access instead!")]] int& dyn_materialReferenceIndex();
    // Get instance field reference: public System.Boolean isUsingAlternateTypeface
    [[deprecated("Use field access instead!")]] bool& dyn_isUsingAlternateTypeface();
    // Get instance field reference: public System.Single pointSize
    [[deprecated("Use field access instead!")]] float& dyn_pointSize();
    // Get instance field reference: public System.Int32 lineNumber
    [[deprecated("Use field access instead!")]] int& dyn_lineNumber();
    // Get instance field reference: public System.Int32 pageNumber
    [[deprecated("Use field access instead!")]] int& dyn_pageNumber();
    // Get instance field reference: public System.Int32 vertexIndex
    [[deprecated("Use field access instead!")]] int& dyn_vertexIndex();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextVertex vertexTopLeft
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextVertex& dyn_vertexTopLeft();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextVertex vertexBottomLeft
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextVertex& dyn_vertexBottomLeft();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextVertex vertexTopRight
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextVertex& dyn_vertexTopRight();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextVertex vertexBottomRight
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextVertex& dyn_vertexBottomRight();
    // Get instance field reference: public UnityEngine.Vector3 topLeft
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_topLeft();
    // Get instance field reference: public UnityEngine.Vector3 bottomLeft
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_bottomLeft();
    // Get instance field reference: public UnityEngine.Vector3 topRight
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_topRight();
    // Get instance field reference: public UnityEngine.Vector3 bottomRight
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_bottomRight();
    // Get instance field reference: public System.Single origin
    [[deprecated("Use field access instead!")]] float& dyn_origin();
    // Get instance field reference: public System.Single ascender
    [[deprecated("Use field access instead!")]] float& dyn_ascender();
    // Get instance field reference: public System.Single baseLine
    [[deprecated("Use field access instead!")]] float& dyn_baseLine();
    // Get instance field reference: public System.Single descender
    [[deprecated("Use field access instead!")]] float& dyn_descender();
    // Get instance field reference: System.Single adjustedAscender
    [[deprecated("Use field access instead!")]] float& dyn_adjustedAscender();
    // Get instance field reference: System.Single adjustedDescender
    [[deprecated("Use field access instead!")]] float& dyn_adjustedDescender();
    // Get instance field reference: System.Single adjustedHorizontalAdvance
    [[deprecated("Use field access instead!")]] float& dyn_adjustedHorizontalAdvance();
    // Get instance field reference: public System.Single xAdvance
    [[deprecated("Use field access instead!")]] float& dyn_xAdvance();
    // Get instance field reference: public System.Single aspectRatio
    [[deprecated("Use field access instead!")]] float& dyn_aspectRatio();
    // Get instance field reference: public System.Single scale
    [[deprecated("Use field access instead!")]] float& dyn_scale();
    // Get instance field reference: public UnityEngine.Color32 color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_color();
    // Get instance field reference: public UnityEngine.Color32 underlineColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_underlineColor();
    // Get instance field reference: public System.Int32 underlineVertexIndex
    [[deprecated("Use field access instead!")]] int& dyn_underlineVertexIndex();
    // Get instance field reference: public UnityEngine.Color32 strikethroughColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_strikethroughColor();
    // Get instance field reference: public System.Int32 strikethroughVertexIndex
    [[deprecated("Use field access instead!")]] int& dyn_strikethroughVertexIndex();
    // Get instance field reference: public UnityEngine.Color32 highlightColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_highlightColor();
    // Get instance field reference: public UnityEngine.TextCore.Text.HighlightState highlightState
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::HighlightState& dyn_highlightState();
    // Get instance field reference: public UnityEngine.TextCore.Text.FontStyles style
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::FontStyles& dyn_style();
    // Get instance field reference: public System.Boolean isVisible
    [[deprecated("Use field access instead!")]] bool& dyn_isVisible();
    // public override System.String ToString()
    // Offset: 0x5552494
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.TextCore.Text.TextElementInfo
  #pragma pack(pop)
  static check_size<sizeof(TextElementInfo), 384 + sizeof(bool)> __UnityEngine_TextCore_Text_TextElementInfoSizeCheck;
  static_assert(sizeof(TextElementInfo) == 0x181);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::TextElementInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TextCore::Text::TextElementInfo::*)()>(&UnityEngine::TextCore::Text::TextElementInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::TextElementInfo), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
