// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TextShadow
  struct TextShadow;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextShadow, "UnityEngine.UIElements", "TextShadow");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.TextShadow
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextShadow/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>*/ {
    public:
    public:
    // public UnityEngine.Vector2 offset
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Vector2 offset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.Single blurRadius
    // Size: 0x4
    // Offset: 0x8
    float blurRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0xC
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Creating value type constructor for type: TextShadow
    constexpr TextShadow(::UnityEngine::Vector2 offset_ = {}, float blurRadius_ = {}, ::UnityEngine::Color color_ = {}) noexcept : offset{offset_}, blurRadius{blurRadius_}, color{color_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>
    operator ::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector2 offset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_offset();
    // Get instance field reference: public System.Single blurRadius
    [[deprecated("Use field access instead!")]] float& dyn_blurRadius();
    // Get instance field reference: public UnityEngine.Color color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_color();
    // public System.Boolean Equals(UnityEngine.UIElements.TextShadow other)
    // Offset: 0x56BE270
    bool Equals(::UnityEngine::UIElements::TextShadow other);
    // static UnityEngine.UIElements.TextShadow LerpUnclamped(UnityEngine.UIElements.TextShadow a, UnityEngine.UIElements.TextShadow b, System.Single t)
    // Offset: 0x56BE530
    static ::UnityEngine::UIElements::TextShadow LerpUnclamped(::UnityEngine::UIElements::TextShadow a, ::UnityEngine::UIElements::TextShadow b, float t);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x56BE1E0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x56BE2EC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x56BE43C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.UIElements.TextShadow
  #pragma pack(pop)
  static check_size<sizeof(TextShadow), 12 + sizeof(::UnityEngine::Color)> __UnityEngine_UIElements_TextShadowSizeCheck;
  static_assert(sizeof(TextShadow) == 0x1C);
  // static public System.Boolean op_Equality(UnityEngine.UIElements.TextShadow style1, UnityEngine.UIElements.TextShadow style2)
  // Offset: 0x56BE3C4
  bool operator ==(const ::UnityEngine::UIElements::TextShadow& style1, const ::UnityEngine::UIElements::TextShadow& style2);
  // static public System.Boolean op_Inequality(UnityEngine.UIElements.TextShadow style1, UnityEngine.UIElements.TextShadow style2)
  // Offset: 0x56BE3F4
  bool operator !=(const ::UnityEngine::UIElements::TextShadow& style1, const ::UnityEngine::UIElements::TextShadow& style2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::TextShadow::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::TextShadow::*)(::UnityEngine::UIElements::TextShadow)>(&UnityEngine::UIElements::TextShadow::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "TextShadow")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextShadow), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextShadow::LerpUnclamped
// Il2CppName: LerpUnclamped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextShadow (*)(::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, float)>(&UnityEngine::UIElements::TextShadow::LerpUnclamped)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "TextShadow")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "TextShadow")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextShadow), "LerpUnclamped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextShadow::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::TextShadow::*)(::Il2CppObject*)>(&UnityEngine::UIElements::TextShadow::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextShadow), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextShadow::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::TextShadow::*)()>(&UnityEngine::UIElements::TextShadow::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextShadow), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextShadow::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::TextShadow::*)()>(&UnityEngine::UIElements::TextShadow::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextShadow), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextShadow::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UIElements::TextShadow::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
