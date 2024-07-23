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
  // Forward declaring type: CullingQueryOptions
  struct CullingQueryOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CullingQueryOptions, "UnityEngine", "CullingQueryOptions");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CullingQueryOptions
  // [TokenAttribute] Offset: FFFFFFFF
  struct CullingQueryOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CullingQueryOptions
    constexpr CullingQueryOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.CullingQueryOptions Normal
    static constexpr const int Normal = 0;
    // Get static field: static public UnityEngine.CullingQueryOptions Normal
    static ::UnityEngine::CullingQueryOptions _get_Normal();
    // Set static field: static public UnityEngine.CullingQueryOptions Normal
    static void _set_Normal(::UnityEngine::CullingQueryOptions value);
    // static field const value: static public UnityEngine.CullingQueryOptions IgnoreVisibility
    static constexpr const int IgnoreVisibility = 1;
    // Get static field: static public UnityEngine.CullingQueryOptions IgnoreVisibility
    static ::UnityEngine::CullingQueryOptions _get_IgnoreVisibility();
    // Set static field: static public UnityEngine.CullingQueryOptions IgnoreVisibility
    static void _set_IgnoreVisibility(::UnityEngine::CullingQueryOptions value);
    // static field const value: static public UnityEngine.CullingQueryOptions IgnoreDistance
    static constexpr const int IgnoreDistance = 2;
    // Get static field: static public UnityEngine.CullingQueryOptions IgnoreDistance
    static ::UnityEngine::CullingQueryOptions _get_IgnoreDistance();
    // Set static field: static public UnityEngine.CullingQueryOptions IgnoreDistance
    static void _set_IgnoreDistance(::UnityEngine::CullingQueryOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.CullingQueryOptions
  #pragma pack(pop)
  static check_size<sizeof(CullingQueryOptions), 0 + sizeof(int)> __UnityEngine_CullingQueryOptionsSizeCheck;
  static_assert(sizeof(CullingQueryOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
