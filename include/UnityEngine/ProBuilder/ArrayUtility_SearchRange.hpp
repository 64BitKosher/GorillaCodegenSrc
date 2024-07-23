// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.ArrayUtility
#include "UnityEngine/ProBuilder/ArrayUtility.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ArrayUtility::SearchRange, "UnityEngine.ProBuilder", "ArrayUtility/SearchRange");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.ArrayUtility/SearchRange
  // [TokenAttribute] Offset: FFFFFFFF
  struct ArrayUtility::SearchRange/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 begin
    // Size: 0x4
    // Offset: 0x0
    int begin;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 end
    // Size: 0x4
    // Offset: 0x4
    int end;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SearchRange
    constexpr SearchRange(int begin_ = {}, int end_ = {}) noexcept : begin{begin_}, end{end_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 begin
    [[deprecated("Use field access instead!")]] int& dyn_begin();
    // Get instance field reference: public System.Int32 end
    [[deprecated("Use field access instead!")]] int& dyn_end();
    // public System.Void .ctor(System.Int32 begin, System.Int32 end)
    // Offset: 0x519D38C
    // ABORTED: conflicts with another method.  SearchRange(int begin, int end);
    // public System.Boolean Valid()
    // Offset: 0x519D394
    bool Valid();
    // public System.Int32 Center()
    // Offset: 0x519D3A8
    int Center();
    // public override System.String ToString()
    // Offset: 0x519D3C0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.ProBuilder.ArrayUtility/SearchRange
  #pragma pack(pop)
  static check_size<sizeof(ArrayUtility::SearchRange), 4 + sizeof(int)> __UnityEngine_ProBuilder_ArrayUtility_SearchRangeSizeCheck;
  static_assert(sizeof(ArrayUtility::SearchRange) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ArrayUtility::SearchRange::SearchRange
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ArrayUtility::SearchRange::Valid
// Il2CppName: Valid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::ArrayUtility::SearchRange::*)()>(&UnityEngine::ProBuilder::ArrayUtility::SearchRange::Valid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ArrayUtility::SearchRange), "Valid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ArrayUtility::SearchRange::Center
// Il2CppName: Center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::ArrayUtility::SearchRange::*)()>(&UnityEngine::ProBuilder::ArrayUtility::SearchRange::Center)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ArrayUtility::SearchRange), "Center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ArrayUtility::SearchRange::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::ArrayUtility::SearchRange::*)()>(&UnityEngine::ProBuilder::ArrayUtility::SearchRange::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ArrayUtility::SearchRange), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};