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
// Including type: UnityEngine.UIElements.Translate
#include "UnityEngine/UIElements/Translate.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: StyleTranslate
  struct StyleTranslate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleTranslate, "UnityEngine.UIElements", "StyleTranslate");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.StyleTranslate
  // [TokenAttribute] Offset: FFFFFFFF
  struct StyleTranslate/*, public ::System::ValueType, public ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Translate>, public ::System::IEquatable_1<::UnityEngine::UIElements::StyleTranslate>*/ {
    public:
    public:
    // private UnityEngine.UIElements.Translate m_Value
    // Size: 0x15
    // Offset: 0x0
    ::UnityEngine::UIElements::Translate m_Value;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Translate) == 0x15);
    // Padding between fields: m_Value and: m_Keyword
    char __padding0[0x3] = {};
    // private UnityEngine.UIElements.StyleKeyword m_Keyword
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::UIElements::StyleKeyword m_Keyword;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::StyleKeyword) == 0x4);
    public:
    // Creating value type constructor for type: StyleTranslate
    constexpr StyleTranslate(::UnityEngine::UIElements::Translate m_Value_ = {}, ::UnityEngine::UIElements::StyleKeyword m_Keyword_ = {}) noexcept : m_Value{m_Value_}, m_Keyword{m_Keyword_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Translate>
    operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Translate>() noexcept {
      return *reinterpret_cast<::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Translate>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleTranslate>
    operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleTranslate>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleTranslate>*>(this);
    }
    // Get instance field reference: private UnityEngine.UIElements.Translate m_Value
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Translate& dyn_m_Value();
    // Get instance field reference: private UnityEngine.UIElements.StyleKeyword m_Keyword
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::StyleKeyword& dyn_m_Keyword();
    // public UnityEngine.UIElements.Translate get_value()
    // Offset: 0x56A9BDC
    ::UnityEngine::UIElements::Translate get_value();
    // public UnityEngine.UIElements.StyleKeyword get_keyword()
    // Offset: 0x56A9C1C
    ::UnityEngine::UIElements::StyleKeyword get_keyword();
    // public System.Void .ctor(UnityEngine.UIElements.Translate v)
    // Offset: 0x56A9C24
    StyleTranslate(::UnityEngine::UIElements::Translate v);
    // public System.Void .ctor(UnityEngine.UIElements.StyleKeyword keyword)
    // Offset: 0x56A9C68
    StyleTranslate(::UnityEngine::UIElements::StyleKeyword keyword);
    // System.Void .ctor(UnityEngine.UIElements.Translate v, UnityEngine.UIElements.StyleKeyword keyword)
    // Offset: 0x56A9C50
    // ABORTED: conflicts with another method.  StyleTranslate(::UnityEngine::UIElements::Translate v, ::UnityEngine::UIElements::StyleKeyword keyword);
    // public System.Boolean Equals(UnityEngine.UIElements.StyleTranslate other)
    // Offset: 0x56A9D34
    bool Equals(::UnityEngine::UIElements::StyleTranslate other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x56A9D78
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x56A9E18
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x56A9E3C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.UIElements.StyleTranslate
  #pragma pack(pop)
  static check_size<sizeof(StyleTranslate), 24 + sizeof(::UnityEngine::UIElements::StyleKeyword)> __UnityEngine_UIElements_StyleTranslateSizeCheck;
  static_assert(sizeof(StyleTranslate) == 0x1C);
  // static public System.Boolean op_Equality(UnityEngine.UIElements.StyleTranslate lhs, UnityEngine.UIElements.StyleTranslate rhs)
  // Offset: 0x56A9C78
  bool operator ==(const ::UnityEngine::UIElements::StyleTranslate& lhs, const ::UnityEngine::UIElements::StyleTranslate& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTranslate::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Translate (UnityEngine::UIElements::StyleTranslate::*)()>(&UnityEngine::UIElements::StyleTranslate::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTranslate), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTranslate::get_keyword
// Il2CppName: get_keyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleKeyword (UnityEngine::UIElements::StyleTranslate::*)()>(&UnityEngine::UIElements::StyleTranslate::get_keyword)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTranslate), "get_keyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTranslate::StyleTranslate
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTranslate::StyleTranslate
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTranslate::StyleTranslate
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTranslate::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleTranslate::*)(::UnityEngine::UIElements::StyleTranslate)>(&UnityEngine::UIElements::StyleTranslate::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "StyleTranslate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTranslate), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTranslate::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleTranslate::*)(::Il2CppObject*)>(&UnityEngine::UIElements::StyleTranslate::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTranslate), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTranslate::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::StyleTranslate::*)()>(&UnityEngine::UIElements::StyleTranslate::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTranslate), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTranslate::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::StyleTranslate::*)()>(&UnityEngine::UIElements::StyleTranslate::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTranslate), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTranslate::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
