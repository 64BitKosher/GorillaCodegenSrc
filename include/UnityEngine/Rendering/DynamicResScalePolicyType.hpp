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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: DynamicResScalePolicyType
  struct DynamicResScalePolicyType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DynamicResScalePolicyType, "UnityEngine.Rendering", "DynamicResScalePolicyType");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.DynamicResScalePolicyType
  // [TokenAttribute] Offset: FFFFFFFF
  struct DynamicResScalePolicyType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DynamicResScalePolicyType
    constexpr DynamicResScalePolicyType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.DynamicResScalePolicyType ReturnsPercentage
    static constexpr const int ReturnsPercentage = 0;
    // Get static field: static public UnityEngine.Rendering.DynamicResScalePolicyType ReturnsPercentage
    static ::UnityEngine::Rendering::DynamicResScalePolicyType _get_ReturnsPercentage();
    // Set static field: static public UnityEngine.Rendering.DynamicResScalePolicyType ReturnsPercentage
    static void _set_ReturnsPercentage(::UnityEngine::Rendering::DynamicResScalePolicyType value);
    // static field const value: static public UnityEngine.Rendering.DynamicResScalePolicyType ReturnsMinMaxLerpFactor
    static constexpr const int ReturnsMinMaxLerpFactor = 1;
    // Get static field: static public UnityEngine.Rendering.DynamicResScalePolicyType ReturnsMinMaxLerpFactor
    static ::UnityEngine::Rendering::DynamicResScalePolicyType _get_ReturnsMinMaxLerpFactor();
    // Set static field: static public UnityEngine.Rendering.DynamicResScalePolicyType ReturnsMinMaxLerpFactor
    static void _set_ReturnsMinMaxLerpFactor(::UnityEngine::Rendering::DynamicResScalePolicyType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.DynamicResScalePolicyType
  #pragma pack(pop)
  static check_size<sizeof(DynamicResScalePolicyType), 0 + sizeof(int)> __UnityEngine_Rendering_DynamicResScalePolicyTypeSizeCheck;
  static_assert(sizeof(DynamicResScalePolicyType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
