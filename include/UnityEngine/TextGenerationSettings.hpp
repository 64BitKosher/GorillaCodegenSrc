// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.FontStyle
#include "UnityEngine/FontStyle.hpp"
// Including type: UnityEngine.TextAnchor
#include "UnityEngine/TextAnchor.hpp"
// Including type: UnityEngine.VerticalWrapMode
#include "UnityEngine/VerticalWrapMode.hpp"
// Including type: UnityEngine.HorizontalWrapMode
#include "UnityEngine/HorizontalWrapMode.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Font
  class Font;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextGenerationSettings
  struct TextGenerationSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextGenerationSettings, "UnityEngine", "TextGenerationSettings");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x59
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextGenerationSettings
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextGenerationSettings/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Font font
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Font* font;
    // Field size check
    static_assert(sizeof(::UnityEngine::Font*) == 0x8);
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x8
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Int32 fontSize
    // Size: 0x4
    // Offset: 0x18
    int fontSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single lineSpacing
    // Size: 0x4
    // Offset: 0x1C
    float lineSpacing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean richText
    // Size: 0x1
    // Offset: 0x20
    bool richText;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: richText and: scaleFactor
    char __padding4[0x3] = {};
    // public System.Single scaleFactor
    // Size: 0x4
    // Offset: 0x24
    float scaleFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.FontStyle fontStyle
    // Size: 0x4
    // Offset: 0x28
    ::UnityEngine::FontStyle fontStyle;
    // Field size check
    static_assert(sizeof(::UnityEngine::FontStyle) == 0x4);
    // public UnityEngine.TextAnchor textAnchor
    // Size: 0x4
    // Offset: 0x2C
    ::UnityEngine::TextAnchor textAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextAnchor) == 0x4);
    // public System.Boolean alignByGeometry
    // Size: 0x1
    // Offset: 0x30
    bool alignByGeometry;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean resizeTextForBestFit
    // Size: 0x1
    // Offset: 0x31
    bool resizeTextForBestFit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: resizeTextForBestFit and: resizeTextMinSize
    char __padding9[0x2] = {};
    // public System.Int32 resizeTextMinSize
    // Size: 0x4
    // Offset: 0x34
    int resizeTextMinSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 resizeTextMaxSize
    // Size: 0x4
    // Offset: 0x38
    int resizeTextMaxSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean updateBounds
    // Size: 0x1
    // Offset: 0x3C
    bool updateBounds;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: updateBounds and: verticalOverflow
    char __padding12[0x3] = {};
    // public UnityEngine.VerticalWrapMode verticalOverflow
    // Size: 0x4
    // Offset: 0x40
    ::UnityEngine::VerticalWrapMode verticalOverflow;
    // Field size check
    static_assert(sizeof(::UnityEngine::VerticalWrapMode) == 0x4);
    // public UnityEngine.HorizontalWrapMode horizontalOverflow
    // Size: 0x4
    // Offset: 0x44
    ::UnityEngine::HorizontalWrapMode horizontalOverflow;
    // Field size check
    static_assert(sizeof(::UnityEngine::HorizontalWrapMode) == 0x4);
    // public UnityEngine.Vector2 generationExtents
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Vector2 generationExtents;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 pivot
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Vector2 pivot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.Boolean generateOutOfBounds
    // Size: 0x1
    // Offset: 0x58
    bool generateOutOfBounds;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: TextGenerationSettings
    constexpr TextGenerationSettings(::UnityEngine::Font* font_ = {}, ::UnityEngine::Color color_ = {}, int fontSize_ = {}, float lineSpacing_ = {}, bool richText_ = {}, float scaleFactor_ = {}, ::UnityEngine::FontStyle fontStyle_ = {}, ::UnityEngine::TextAnchor textAnchor_ = {}, bool alignByGeometry_ = {}, bool resizeTextForBestFit_ = {}, int resizeTextMinSize_ = {}, int resizeTextMaxSize_ = {}, bool updateBounds_ = {}, ::UnityEngine::VerticalWrapMode verticalOverflow_ = {}, ::UnityEngine::HorizontalWrapMode horizontalOverflow_ = {}, ::UnityEngine::Vector2 generationExtents_ = {}, ::UnityEngine::Vector2 pivot_ = {}, bool generateOutOfBounds_ = {}) noexcept : font{font_}, color{color_}, fontSize{fontSize_}, lineSpacing{lineSpacing_}, richText{richText_}, scaleFactor{scaleFactor_}, fontStyle{fontStyle_}, textAnchor{textAnchor_}, alignByGeometry{alignByGeometry_}, resizeTextForBestFit{resizeTextForBestFit_}, resizeTextMinSize{resizeTextMinSize_}, resizeTextMaxSize{resizeTextMaxSize_}, updateBounds{updateBounds_}, verticalOverflow{verticalOverflow_}, horizontalOverflow{horizontalOverflow_}, generationExtents{generationExtents_}, pivot{pivot_}, generateOutOfBounds{generateOutOfBounds_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Font font
    [[deprecated("Use field access instead!")]] ::UnityEngine::Font*& dyn_font();
    // Get instance field reference: public UnityEngine.Color color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_color();
    // Get instance field reference: public System.Int32 fontSize
    [[deprecated("Use field access instead!")]] int& dyn_fontSize();
    // Get instance field reference: public System.Single lineSpacing
    [[deprecated("Use field access instead!")]] float& dyn_lineSpacing();
    // Get instance field reference: public System.Boolean richText
    [[deprecated("Use field access instead!")]] bool& dyn_richText();
    // Get instance field reference: public System.Single scaleFactor
    [[deprecated("Use field access instead!")]] float& dyn_scaleFactor();
    // Get instance field reference: public UnityEngine.FontStyle fontStyle
    [[deprecated("Use field access instead!")]] ::UnityEngine::FontStyle& dyn_fontStyle();
    // Get instance field reference: public UnityEngine.TextAnchor textAnchor
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextAnchor& dyn_textAnchor();
    // Get instance field reference: public System.Boolean alignByGeometry
    [[deprecated("Use field access instead!")]] bool& dyn_alignByGeometry();
    // Get instance field reference: public System.Boolean resizeTextForBestFit
    [[deprecated("Use field access instead!")]] bool& dyn_resizeTextForBestFit();
    // Get instance field reference: public System.Int32 resizeTextMinSize
    [[deprecated("Use field access instead!")]] int& dyn_resizeTextMinSize();
    // Get instance field reference: public System.Int32 resizeTextMaxSize
    [[deprecated("Use field access instead!")]] int& dyn_resizeTextMaxSize();
    // Get instance field reference: public System.Boolean updateBounds
    [[deprecated("Use field access instead!")]] bool& dyn_updateBounds();
    // Get instance field reference: public UnityEngine.VerticalWrapMode verticalOverflow
    [[deprecated("Use field access instead!")]] ::UnityEngine::VerticalWrapMode& dyn_verticalOverflow();
    // Get instance field reference: public UnityEngine.HorizontalWrapMode horizontalOverflow
    [[deprecated("Use field access instead!")]] ::UnityEngine::HorizontalWrapMode& dyn_horizontalOverflow();
    // Get instance field reference: public UnityEngine.Vector2 generationExtents
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_generationExtents();
    // Get instance field reference: public UnityEngine.Vector2 pivot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_pivot();
    // Get instance field reference: public System.Boolean generateOutOfBounds
    [[deprecated("Use field access instead!")]] bool& dyn_generateOutOfBounds();
    // private System.Boolean CompareColors(UnityEngine.Color left, UnityEngine.Color right)
    // Offset: 0x5575714
    bool CompareColors(::UnityEngine::Color left, ::UnityEngine::Color right);
    // private System.Boolean CompareVector2(UnityEngine.Vector2 left, UnityEngine.Vector2 right)
    // Offset: 0x557584C
    bool CompareVector2(::UnityEngine::Vector2 left, ::UnityEngine::Vector2 right);
    // public System.Boolean Equals(UnityEngine.TextGenerationSettings other)
    // Offset: 0x5575914
    bool Equals(::UnityEngine::TextGenerationSettings other);
  }; // UnityEngine.TextGenerationSettings
  #pragma pack(pop)
  static check_size<sizeof(TextGenerationSettings), 88 + sizeof(bool)> __UnityEngine_TextGenerationSettingsSizeCheck;
  static_assert(sizeof(TextGenerationSettings) == 0x59);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextGenerationSettings::CompareColors
// Il2CppName: CompareColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextGenerationSettings::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&UnityEngine::TextGenerationSettings::CompareColors)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextGenerationSettings), "CompareColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextGenerationSettings::CompareVector2
// Il2CppName: CompareVector2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextGenerationSettings::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&UnityEngine::TextGenerationSettings::CompareVector2)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextGenerationSettings), "CompareVector2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextGenerationSettings::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextGenerationSettings::*)(::UnityEngine::TextGenerationSettings)>(&UnityEngine::TextGenerationSettings::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextGenerationSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextGenerationSettings), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
