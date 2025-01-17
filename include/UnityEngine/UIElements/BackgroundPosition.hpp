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
// Including type: UnityEngine.UIElements.BackgroundPositionKeyword
#include "UnityEngine/UIElements/BackgroundPositionKeyword.hpp"
// Including type: UnityEngine.UIElements.Length
#include "UnityEngine/UIElements/Length.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: BackgroundPosition
  struct BackgroundPosition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BackgroundPosition, "UnityEngine.UIElements", "BackgroundPosition");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.BackgroundPosition
  // [TokenAttribute] Offset: FFFFFFFF
  struct BackgroundPosition/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::UIElements::BackgroundPosition>*/ {
    public:
    public:
    // public UnityEngine.UIElements.BackgroundPositionKeyword keyword
    // Size: 0x4
    // Offset: 0x0
    ::UnityEngine::UIElements::BackgroundPositionKeyword keyword;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::BackgroundPositionKeyword) == 0x4);
    // public UnityEngine.UIElements.Length offset
    // Size: 0x8
    // Offset: 0x4
    ::UnityEngine::UIElements::Length offset;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Length) == 0x8);
    public:
    // Creating value type constructor for type: BackgroundPosition
    constexpr BackgroundPosition(::UnityEngine::UIElements::BackgroundPositionKeyword keyword_ = {}, ::UnityEngine::UIElements::Length offset_ = {}) noexcept : keyword{keyword_}, offset{offset_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UIElements::BackgroundPosition>
    operator ::System::IEquatable_1<::UnityEngine::UIElements::BackgroundPosition>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UIElements::BackgroundPosition>*>(this);
    }
    // Get instance field reference: public UnityEngine.UIElements.BackgroundPositionKeyword keyword
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::BackgroundPositionKeyword& dyn_keyword();
    // Get instance field reference: public UnityEngine.UIElements.Length offset
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Length& dyn_offset();
    // public System.Void .ctor(UnityEngine.UIElements.BackgroundPositionKeyword keyword)
    // Offset: 0x5592A80
    BackgroundPosition(::UnityEngine::UIElements::BackgroundPositionKeyword keyword);
    // public System.Void .ctor(UnityEngine.UIElements.BackgroundPositionKeyword keyword, UnityEngine.UIElements.Length offset)
    // Offset: 0x5592AB8
    // ABORTED: conflicts with another method.  BackgroundPosition(::UnityEngine::UIElements::BackgroundPositionKeyword keyword, ::UnityEngine::UIElements::Length offset);
    // static UnityEngine.UIElements.BackgroundPosition Initial()
    // Offset: 0x5592AC4
    static ::UnityEngine::UIElements::BackgroundPosition Initial();
    // public System.Boolean Equals(UnityEngine.UIElements.BackgroundPosition other)
    // Offset: 0x5592BA8
    bool Equals(::UnityEngine::UIElements::BackgroundPosition other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x5592B2C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x5592BFC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x5592CE8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.UIElements.BackgroundPosition
  #pragma pack(pop)
  static check_size<sizeof(BackgroundPosition), 4 + sizeof(::UnityEngine::UIElements::Length)> __UnityEngine_UIElements_BackgroundPositionSizeCheck;
  static_assert(sizeof(BackgroundPosition) == 0xC);
  // static public System.Boolean op_Equality(UnityEngine.UIElements.BackgroundPosition style1, UnityEngine.UIElements.BackgroundPosition style2)
  // Offset: 0x5592C44
  bool operator ==(const ::UnityEngine::UIElements::BackgroundPosition& style1, const ::UnityEngine::UIElements::BackgroundPosition& style2);
  // static public System.Boolean op_Inequality(UnityEngine.UIElements.BackgroundPosition style1, UnityEngine.UIElements.BackgroundPosition style2)
  // Offset: 0x5592C94
  bool operator !=(const ::UnityEngine::UIElements::BackgroundPosition& style1, const ::UnityEngine::UIElements::BackgroundPosition& style2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::BackgroundPosition::BackgroundPosition
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::BackgroundPosition::BackgroundPosition
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::BackgroundPosition::Initial
// Il2CppName: Initial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BackgroundPosition (*)()>(&UnityEngine::UIElements::BackgroundPosition::Initial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BackgroundPosition), "Initial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BackgroundPosition::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::BackgroundPosition::*)(::UnityEngine::UIElements::BackgroundPosition)>(&UnityEngine::UIElements::BackgroundPosition::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "BackgroundPosition")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BackgroundPosition), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BackgroundPosition::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::BackgroundPosition::*)(::Il2CppObject*)>(&UnityEngine::UIElements::BackgroundPosition::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BackgroundPosition), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BackgroundPosition::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::BackgroundPosition::*)()>(&UnityEngine::UIElements::BackgroundPosition::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BackgroundPosition), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BackgroundPosition::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::BackgroundPosition::*)()>(&UnityEngine::UIElements::BackgroundPosition::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BackgroundPosition), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BackgroundPosition::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UIElements::BackgroundPosition::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
