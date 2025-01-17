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
// Including type: UnityEngine.UIElements.TransformOrigin
#include "UnityEngine/UIElements/TransformOrigin.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: StyleTransformOrigin
  struct StyleTransformOrigin;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleTransformOrigin, "UnityEngine.UIElements", "StyleTransformOrigin");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.StyleTransformOrigin
  // [TokenAttribute] Offset: FFFFFFFF
  struct StyleTransformOrigin/*, public ::System::ValueType, public ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TransformOrigin>, public ::System::IEquatable_1<::UnityEngine::UIElements::StyleTransformOrigin>*/ {
    public:
    public:
    // private UnityEngine.UIElements.TransformOrigin m_Value
    // Size: 0x14
    // Offset: 0x0
    ::UnityEngine::UIElements::TransformOrigin m_Value;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::TransformOrigin) == 0x14);
    // private UnityEngine.UIElements.StyleKeyword m_Keyword
    // Size: 0x4
    // Offset: 0x14
    ::UnityEngine::UIElements::StyleKeyword m_Keyword;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::StyleKeyword) == 0x4);
    public:
    // Creating value type constructor for type: StyleTransformOrigin
    constexpr StyleTransformOrigin(::UnityEngine::UIElements::TransformOrigin m_Value_ = {}, ::UnityEngine::UIElements::StyleKeyword m_Keyword_ = {}) noexcept : m_Value{m_Value_}, m_Keyword{m_Keyword_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TransformOrigin>
    operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TransformOrigin>() noexcept {
      return *reinterpret_cast<::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TransformOrigin>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleTransformOrigin>
    operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleTransformOrigin>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleTransformOrigin>*>(this);
    }
    // Get instance field reference: private UnityEngine.UIElements.TransformOrigin m_Value
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::TransformOrigin& dyn_m_Value();
    // Get instance field reference: private UnityEngine.UIElements.StyleKeyword m_Keyword
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::StyleKeyword& dyn_m_Keyword();
    // public UnityEngine.UIElements.TransformOrigin get_value()
    // Offset: 0x56AA154
    ::UnityEngine::UIElements::TransformOrigin get_value();
    // public UnityEngine.UIElements.StyleKeyword get_keyword()
    // Offset: 0x56AA194
    ::UnityEngine::UIElements::StyleKeyword get_keyword();
    // public System.Void .ctor(UnityEngine.UIElements.StyleKeyword keyword)
    // Offset: 0x56AA19C
    StyleTransformOrigin(::UnityEngine::UIElements::StyleKeyword keyword);
    // System.Void .ctor(UnityEngine.UIElements.TransformOrigin v, UnityEngine.UIElements.StyleKeyword keyword)
    // Offset: 0x56AA1A8
    // ABORTED: conflicts with another method.  StyleTransformOrigin(::UnityEngine::UIElements::TransformOrigin v, ::UnityEngine::UIElements::StyleKeyword keyword);
    // public System.Boolean Equals(UnityEngine.UIElements.StyleTransformOrigin other)
    // Offset: 0x56AA248
    bool Equals(::UnityEngine::UIElements::StyleTransformOrigin other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x56AA2D4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x56AA364
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x56AA388
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.UIElements.StyleTransformOrigin
  #pragma pack(pop)
  static check_size<sizeof(StyleTransformOrigin), 20 + sizeof(::UnityEngine::UIElements::StyleKeyword)> __UnityEngine_UIElements_StyleTransformOriginSizeCheck;
  static_assert(sizeof(StyleTransformOrigin) == 0x18);
  // static public System.Boolean op_Equality(UnityEngine.UIElements.StyleTransformOrigin lhs, UnityEngine.UIElements.StyleTransformOrigin rhs)
  // Offset: 0x56AA1C0
  bool operator ==(const ::UnityEngine::UIElements::StyleTransformOrigin& lhs, const ::UnityEngine::UIElements::StyleTransformOrigin& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTransformOrigin::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TransformOrigin (UnityEngine::UIElements::StyleTransformOrigin::*)()>(&UnityEngine::UIElements::StyleTransformOrigin::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTransformOrigin), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTransformOrigin::get_keyword
// Il2CppName: get_keyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleKeyword (UnityEngine::UIElements::StyleTransformOrigin::*)()>(&UnityEngine::UIElements::StyleTransformOrigin::get_keyword)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTransformOrigin), "get_keyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTransformOrigin::StyleTransformOrigin
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTransformOrigin::StyleTransformOrigin
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTransformOrigin::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleTransformOrigin::*)(::UnityEngine::UIElements::StyleTransformOrigin)>(&UnityEngine::UIElements::StyleTransformOrigin::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "StyleTransformOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTransformOrigin), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTransformOrigin::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleTransformOrigin::*)(::Il2CppObject*)>(&UnityEngine::UIElements::StyleTransformOrigin::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTransformOrigin), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTransformOrigin::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::StyleTransformOrigin::*)()>(&UnityEngine::UIElements::StyleTransformOrigin::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTransformOrigin), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTransformOrigin::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::StyleTransformOrigin::*)()>(&UnityEngine::UIElements::StyleTransformOrigin::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleTransformOrigin), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleTransformOrigin::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
