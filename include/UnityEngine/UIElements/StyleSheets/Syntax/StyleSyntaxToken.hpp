// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenType
#include "UnityEngine/UIElements/StyleSheets/Syntax/StyleSyntaxTokenType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements.StyleSheets.Syntax
namespace UnityEngine::UIElements::StyleSheets::Syntax {
  // Forward declaring type: StyleSyntaxToken
  struct StyleSyntaxToken;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken, "UnityEngine.UIElements.StyleSheets.Syntax", "StyleSyntaxToken");
// Type namespace: UnityEngine.UIElements.StyleSheets.Syntax
namespace UnityEngine::UIElements::StyleSheets::Syntax {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken
  // [TokenAttribute] Offset: FFFFFFFF
  struct StyleSyntaxToken/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenType type
    // Size: 0x4
    // Offset: 0x0
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType type;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType) == 0x4);
    // Padding between fields: type and: text
    char __padding0[0x4] = {};
    // public System.String text
    // Size: 0x8
    // Offset: 0x8
    ::StringW text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 number
    // Size: 0x4
    // Offset: 0x10
    int number;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: StyleSyntaxToken
    constexpr StyleSyntaxToken(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType type_ = {}, ::StringW text_ = {}, int number_ = {}) noexcept : type{type_}, text{text_}, number{number_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenType type
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType& dyn_type();
    // Get instance field reference: public System.String text
    [[deprecated("Use field access instead!")]] ::StringW& dyn_text();
    // Get instance field reference: public System.Int32 number
    [[deprecated("Use field access instead!")]] int& dyn_number();
    // public System.Void .ctor(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenType t)
    // Offset: 0x5604A88
    StyleSyntaxToken(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType t);
    // public System.Void .ctor(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenType type, System.String text)
    // Offset: 0x5604AAC
    StyleSyntaxToken(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType type, ::StringW text);
    // public System.Void .ctor(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenType type, System.Int32 number)
    // Offset: 0x5604AD0
    StyleSyntaxToken(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType type, int number);
  }; // UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken
  #pragma pack(pop)
  static check_size<sizeof(StyleSyntaxToken), 16 + sizeof(int)> __UnityEngine_UIElements_StyleSheets_Syntax_StyleSyntaxTokenSizeCheck;
  static_assert(sizeof(StyleSyntaxToken) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::StyleSyntaxToken
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::StyleSyntaxToken
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::StyleSyntaxToken
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
