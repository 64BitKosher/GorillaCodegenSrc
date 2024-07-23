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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: PivotLocation
  struct PivotLocation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::PivotLocation, "UnityEngine.ProBuilder", "PivotLocation");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.PivotLocation
  // [TokenAttribute] Offset: FFFFFFFF
  struct PivotLocation/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PivotLocation
    constexpr PivotLocation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.PivotLocation Center
    static constexpr const int Center = 0;
    // Get static field: static public UnityEngine.ProBuilder.PivotLocation Center
    static ::UnityEngine::ProBuilder::PivotLocation _get_Center();
    // Set static field: static public UnityEngine.ProBuilder.PivotLocation Center
    static void _set_Center(::UnityEngine::ProBuilder::PivotLocation value);
    // static field const value: static public UnityEngine.ProBuilder.PivotLocation FirstCorner
    static constexpr const int FirstCorner = 1;
    // Get static field: static public UnityEngine.ProBuilder.PivotLocation FirstCorner
    static ::UnityEngine::ProBuilder::PivotLocation _get_FirstCorner();
    // Set static field: static public UnityEngine.ProBuilder.PivotLocation FirstCorner
    static void _set_FirstCorner(::UnityEngine::ProBuilder::PivotLocation value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.ProBuilder.PivotLocation
  #pragma pack(pop)
  static check_size<sizeof(PivotLocation), 0 + sizeof(int)> __UnityEngine_ProBuilder_PivotLocationSizeCheck;
  static_assert(sizeof(PivotLocation) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"