// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UIElements.StartDragArgs
#include "UnityEngine/UIElements/StartDragArgs.hpp"
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
  // Forward declaring type: SetupDragAndDropArgs
  struct SetupDragAndDropArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::SetupDragAndDropArgs, "UnityEngine.UIElements", "SetupDragAndDropArgs");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.SetupDragAndDropArgs
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct SetupDragAndDropArgs/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly UnityEngine.UIElements.VisualElement draggedElement
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::VisualElement* draggedElement;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // public readonly System.Collections.Generic.IEnumerable`1<System.Int32> selectedIds
    // Size: 0x8
    // Offset: 0x8
    ::System::Collections::Generic::IEnumerable_1<int>* selectedIds;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerable_1<int>*) == 0x8);
    // public readonly UnityEngine.UIElements.StartDragArgs startDragArgs
    // Size: 0x20
    // Offset: 0x10
    ::UnityEngine::UIElements::StartDragArgs startDragArgs;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::StartDragArgs) == 0x20);
    public:
    // Creating value type constructor for type: SetupDragAndDropArgs
    constexpr SetupDragAndDropArgs(::UnityEngine::UIElements::VisualElement* draggedElement_ = {}, ::System::Collections::Generic::IEnumerable_1<int>* selectedIds_ = {}, ::UnityEngine::UIElements::StartDragArgs startDragArgs_ = {}) noexcept : draggedElement{draggedElement_}, selectedIds{selectedIds_}, startDragArgs{startDragArgs_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly UnityEngine.UIElements.VisualElement draggedElement
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_draggedElement();
    // Get instance field reference: public readonly System.Collections.Generic.IEnumerable`1<System.Int32> selectedIds
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerable_1<int>*& dyn_selectedIds();
    // Get instance field reference: public readonly UnityEngine.UIElements.StartDragArgs startDragArgs
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::StartDragArgs& dyn_startDragArgs();
    // System.Void .ctor(UnityEngine.UIElements.VisualElement draggedElement, System.Collections.Generic.IEnumerable`1<System.Int32> selectedIds, UnityEngine.UIElements.StartDragArgs startDragArgs)
    // Offset: 0x563CA08
    // ABORTED: conflicts with another method.  SetupDragAndDropArgs(::UnityEngine::UIElements::VisualElement* draggedElement, ::System::Collections::Generic::IEnumerable_1<int>* selectedIds, ::UnityEngine::UIElements::StartDragArgs startDragArgs);
  }; // UnityEngine.UIElements.SetupDragAndDropArgs
  #pragma pack(pop)
  static check_size<sizeof(SetupDragAndDropArgs), 16 + sizeof(::UnityEngine::UIElements::StartDragArgs)> __UnityEngine_UIElements_SetupDragAndDropArgsSizeCheck;
  static_assert(sizeof(SetupDragAndDropArgs) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::SetupDragAndDropArgs::SetupDragAndDropArgs
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
