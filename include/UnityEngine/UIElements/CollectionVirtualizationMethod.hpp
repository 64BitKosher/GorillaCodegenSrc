// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: CollectionVirtualizationMethod
  struct CollectionVirtualizationMethod;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CollectionVirtualizationMethod, "UnityEngine.UIElements", "CollectionVirtualizationMethod");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.CollectionVirtualizationMethod
  // [TokenAttribute] Offset: FFFFFFFF
  struct CollectionVirtualizationMethod/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CollectionVirtualizationMethod
    constexpr CollectionVirtualizationMethod(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.CollectionVirtualizationMethod FixedHeight
    static constexpr const int FixedHeight = 0;
    // Get static field: static public UnityEngine.UIElements.CollectionVirtualizationMethod FixedHeight
    static ::UnityEngine::UIElements::CollectionVirtualizationMethod _get_FixedHeight();
    // Set static field: static public UnityEngine.UIElements.CollectionVirtualizationMethod FixedHeight
    static void _set_FixedHeight(::UnityEngine::UIElements::CollectionVirtualizationMethod value);
    // static field const value: static public UnityEngine.UIElements.CollectionVirtualizationMethod DynamicHeight
    static constexpr const int DynamicHeight = 1;
    // Get static field: static public UnityEngine.UIElements.CollectionVirtualizationMethod DynamicHeight
    static ::UnityEngine::UIElements::CollectionVirtualizationMethod _get_DynamicHeight();
    // Set static field: static public UnityEngine.UIElements.CollectionVirtualizationMethod DynamicHeight
    static void _set_DynamicHeight(::UnityEngine::UIElements::CollectionVirtualizationMethod value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.CollectionVirtualizationMethod
  #pragma pack(pop)
  static check_size<sizeof(CollectionVirtualizationMethod), 0 + sizeof(int)> __UnityEngine_UIElements_CollectionVirtualizationMethodSizeCheck;
  static_assert(sizeof(CollectionVirtualizationMethod) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
