// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: StyleSheet
  class StyleSheet;
  // Forward declaring type: StyleComplexSelector
  class StyleComplexSelector;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: RuleMatcher
  struct RuleMatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RuleMatcher, "UnityEngine.UIElements", "RuleMatcher");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.RuleMatcher
  // [TokenAttribute] Offset: FFFFFFFF
  struct RuleMatcher/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.UIElements.StyleSheet sheet
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::StyleSheet* sheet;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::StyleSheet*) == 0x8);
    // public UnityEngine.UIElements.StyleComplexSelector complexSelector
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::UIElements::StyleComplexSelector* complexSelector;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::StyleComplexSelector*) == 0x8);
    public:
    // Creating value type constructor for type: RuleMatcher
    constexpr RuleMatcher(::UnityEngine::UIElements::StyleSheet* sheet_ = {}, ::UnityEngine::UIElements::StyleComplexSelector* complexSelector_ = {}) noexcept : sheet{sheet_}, complexSelector{complexSelector_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.UIElements.StyleSheet sheet
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::StyleSheet*& dyn_sheet();
    // Get instance field reference: public UnityEngine.UIElements.StyleComplexSelector complexSelector
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::StyleComplexSelector*& dyn_complexSelector();
    // public override System.String ToString()
    // Offset: 0x56C37BC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.UIElements.RuleMatcher
  #pragma pack(pop)
  static check_size<sizeof(RuleMatcher), 8 + sizeof(::UnityEngine::UIElements::StyleComplexSelector*)> __UnityEngine_UIElements_RuleMatcherSizeCheck;
  static_assert(sizeof(RuleMatcher) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::RuleMatcher::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::RuleMatcher::*)()>(&UnityEngine::UIElements::RuleMatcher::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::RuleMatcher), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
