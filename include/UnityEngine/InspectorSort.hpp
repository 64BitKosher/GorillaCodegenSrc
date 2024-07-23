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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: InspectorSort
  struct InspectorSort;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InspectorSort, "UnityEngine", "InspectorSort");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InspectorSort
  // [TokenAttribute] Offset: FFFFFFFF
  struct InspectorSort/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InspectorSort
    constexpr InspectorSort(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.InspectorSort ByName
    static constexpr const int ByName = 0;
    // Get static field: static public UnityEngine.InspectorSort ByName
    static ::UnityEngine::InspectorSort _get_ByName();
    // Set static field: static public UnityEngine.InspectorSort ByName
    static void _set_ByName(::UnityEngine::InspectorSort value);
    // static field const value: static public UnityEngine.InspectorSort ByValue
    static constexpr const int ByValue = 1;
    // Get static field: static public UnityEngine.InspectorSort ByValue
    static ::UnityEngine::InspectorSort _get_ByValue();
    // Set static field: static public UnityEngine.InspectorSort ByValue
    static void _set_ByValue(::UnityEngine::InspectorSort value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.InspectorSort
  #pragma pack(pop)
  static check_size<sizeof(InspectorSort), 0 + sizeof(int)> __UnityEngine_InspectorSortSizeCheck;
  static_assert(sizeof(InspectorSort) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"