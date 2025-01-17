// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UIElements.StyleValueHandle
#include "UnityEngine/UIElements/StyleValueHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: StyleSheet
  class StyleSheet;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: StyleVariable
  struct StyleVariable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleVariable, "UnityEngine.UIElements", "StyleVariable");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.StyleVariable
  // [TokenAttribute] Offset: FFFFFFFF
  struct StyleVariable/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly System.String name
    // Size: 0x8
    // Offset: 0x0
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly UnityEngine.UIElements.StyleSheet sheet
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::UIElements::StyleSheet* sheet;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::StyleSheet*) == 0x8);
    // public readonly UnityEngine.UIElements.StyleValueHandle[] handles
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> handles;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::UIElements::StyleValueHandle>) == 0x8);
    public:
    // Creating value type constructor for type: StyleVariable
    constexpr StyleVariable(::StringW name_ = {}, ::UnityEngine::UIElements::StyleSheet* sheet_ = {}, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> handles_ = ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>(static_cast<void*>(nullptr))) noexcept : name{name_}, sheet{sheet_}, handles{handles_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public readonly UnityEngine.UIElements.StyleSheet sheet
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::StyleSheet*& dyn_sheet();
    // Get instance field reference: public readonly UnityEngine.UIElements.StyleValueHandle[] handles
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>& dyn_handles();
    // public System.Void .ctor(System.String name, UnityEngine.UIElements.StyleSheet sheet, UnityEngine.UIElements.StyleValueHandle[] handles)
    // Offset: 0x56B27CC
    // ABORTED: conflicts with another method.  StyleVariable(::StringW name, ::UnityEngine::UIElements::StyleSheet* sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> handles);
    // public override System.Int32 GetHashCode()
    // Offset: 0x56B2810
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.UIElements.StyleVariable
  #pragma pack(pop)
  static check_size<sizeof(StyleVariable), 16 + sizeof(::ArrayW<::UnityEngine::UIElements::StyleValueHandle>)> __UnityEngine_UIElements_StyleVariableSizeCheck;
  static_assert(sizeof(StyleVariable) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleVariable::StyleVariable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleVariable::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::StyleVariable::*)()>(&UnityEngine::UIElements::StyleVariable::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleVariable), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
