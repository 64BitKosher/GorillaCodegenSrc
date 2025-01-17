// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElement
  class VisualElement;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: CanStartDragArgs
  struct CanStartDragArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CanStartDragArgs, "UnityEngine.UIElements", "CanStartDragArgs");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.CanStartDragArgs
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct CanStartDragArgs/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly UnityEngine.UIElements.VisualElement draggedElement
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::VisualElement* draggedElement;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // public readonly System.Int32 id
    // Size: 0x4
    // Offset: 0x8
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: id and: selectedIds
    char __padding1[0x4] = {};
    // public readonly System.Collections.Generic.IEnumerable`1<System.Int32> selectedIds
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::IEnumerable_1<int>* selectedIds;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerable_1<int>*) == 0x8);
    public:
    // Creating value type constructor for type: CanStartDragArgs
    constexpr CanStartDragArgs(::UnityEngine::UIElements::VisualElement* draggedElement_ = {}, int id_ = {}, ::System::Collections::Generic::IEnumerable_1<int>* selectedIds_ = {}) noexcept : draggedElement{draggedElement_}, id{id_}, selectedIds{selectedIds_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly UnityEngine.UIElements.VisualElement draggedElement
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_draggedElement();
    // Get instance field reference: public readonly System.Int32 id
    [[deprecated("Use field access instead!")]] int& dyn_id();
    // Get instance field reference: public readonly System.Collections.Generic.IEnumerable`1<System.Int32> selectedIds
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerable_1<int>*& dyn_selectedIds();
    // System.Void .ctor(UnityEngine.UIElements.VisualElement draggedElement, System.Int32 id, System.Collections.Generic.IEnumerable`1<System.Int32> selectedIds)
    // Offset: 0x563C9D0
    // ABORTED: conflicts with another method.  CanStartDragArgs(::UnityEngine::UIElements::VisualElement* draggedElement, int id, ::System::Collections::Generic::IEnumerable_1<int>* selectedIds);
  }; // UnityEngine.UIElements.CanStartDragArgs
  #pragma pack(pop)
  static check_size<sizeof(CanStartDragArgs), 16 + sizeof(::System::Collections::Generic::IEnumerable_1<int>*)> __UnityEngine_UIElements_CanStartDragArgsSizeCheck;
  static_assert(sizeof(CanStartDragArgs) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::CanStartDragArgs::CanStartDragArgs
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
