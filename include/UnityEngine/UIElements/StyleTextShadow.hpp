// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UIElements.IStyleValue`1
#include "UnityEngine/UIElements/IStyleValue_1.hpp"
// Including type: UnityEngine.UIElements.TextShadow
#include "UnityEngine/UIElements/TextShadow.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: StyleTextShadow
  struct StyleTextShadow;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleTextShadow, "UnityEngine.UIElements", "StyleTextShadow");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.StyleTextShadow
  // [TokenAttribute] Offset: FFFFFFFF
  struct StyleTextShadow/*, public ::System::ValueType, public ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TextShadow>, public ::System::IEquatable_1<::UnityEngine::UIElements::StyleTextShadow>*/ {
    public:
    public:
    // private UnityEngine.UIElements.StyleKeyword m_Keyword
    // Size: 0x4
    // Offset: 0x0
    ::UnityEngine::UIElements::StyleKeyword m_Keyword;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::StyleKeyword) == 0x4);
    // private UnityEngine.UIElements.TextShadow m_Value
    // Size: 0x1C
    // Offset: 0x4
    ::UnityEngine::UIElements::TextShadow m_Value;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::TextShadow) == 0x1C);
    public:
    // Creating value type constructor for type: StyleTextShadow
    constexpr StyleTextShadow(::UnityEngine::UIElements::StyleKeyword m_Keyword_ = {}, ::UnityEngine::UIElements::TextShadow m_Value_ = {}) noexcept : m_Keyword{m_Keyword_}, m_Value{m_Value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TextShadow>
    operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TextShadow>() noexcept {
      return *reinterpret_cast<::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TextShadow>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleTextShadow>
    operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleTextShadow>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleTextShadow>*>(this);
    }
    // Get instance field reference: private UnityEngine.UIElements.StyleKeyword m_Keyword
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::StyleKeyword& dyn_m_Keyword();
    // Get instance field reference: private UnityEngine.UIElements.TextShadow m_Value
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::TextShadow& dyn_m_Value();
    // public UnityEngine.UIElements.TextShadow get_value()
    // Offset: 0x56A9EC4
    ::UnityEngine::UIElements::TextShadow get_value();
    // public UnityEngine.UIElements.StyleKeyword get_keyword()
    // Offset: 0x56A9F08
    ::UnityEngine::UIElements::StyleKeyword get_keyword();
    // public System.Void .ctor(UnityEngine.UIElements.StyleKeyword keyword)
    // Offset: 0x56A9F10
    StyleTextShadow(::UnityEngine::UIElements::StyleKeyword keyword);
    // System.Void .ctor(UnityEngine.UIElements.TextShadow v, UnityEngine.UIElements.StyleKeyword keyword)
    // Offset: 0x56A9F28
    StyleTextShadow(::UnityEngine::UIElements::TextShadow v, ::UnityEngine::UIElements::StyleKeyword keyword);
    // public System.Boolean Equals(UnityEngine.UIElements.StyleTextShadow other)
    // Offset: 0x56A9FC8
    bool Equals(::UnityEngine::UIElements::StyleTextShadow other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x56A9FFC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x56AA08C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x56AA0D4
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.UIElements.StyleTextShadow
  #pragma pack(pop)
  static check_size<sizeof(StyleTextShadow), 4 + sizeof(::UnityEngine::UIElements::TextShadow)> __UnityEngine_UIElements_StyleTextShadowSizeCheck;
  static_assert(sizeof(StyleTextShadow) == 0x20);
  // static public System.Boolean op_Equality(UnityEngine.UIElements.StyleTextShadow lhs, UnityEngine.UIElements.StyleTextShadow rhs)
  // Offset: 0x56A9F48
  bool operator ==(const ::UnityEngine::UIElements::StyleTextShadow& lhs, const ::UnityEngine::UIElements::StyleTextShadow& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTextShadow::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextShadow (UnityEngine::UIElements::StyleTextShadow::*)()>(&UnityEngine::UIElements::StyleTextShadow::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTextShadow), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTextShadow::get_keyword
// Il2CppName: get_keyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleKeyword (UnityEngine::UIElements::StyleTextShadow::*)()>(&UnityEngine::UIElements::StyleTextShadow::get_keyword)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTextShadow), "get_keyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTextShadow::StyleTextShadow
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTextShadow::StyleTextShadow
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTextShadow::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleTextShadow::*)(::UnityEngine::UIElements::StyleTextShadow)>(&UnityEngine::UIElements::StyleTextShadow::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "StyleTextShadow")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTextShadow), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTextShadow::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleTextShadow::*)(::Il2CppObject*)>(&UnityEngine::UIElements::StyleTextShadow::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTextShadow), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTextShadow::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::StyleTextShadow::*)()>(&UnityEngine::UIElements::StyleTextShadow::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTextShadow), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTextShadow::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::StyleTextShadow::*)()>(&UnityEngine::UIElements::StyleTextShadow::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTextShadow), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTextShadow::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
