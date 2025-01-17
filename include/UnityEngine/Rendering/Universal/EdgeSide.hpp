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
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: EdgeSide
  struct EdgeSide;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::EdgeSide, "UnityEngine.Rendering.Universal", "EdgeSide");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.EdgeSide
  // [TokenAttribute] Offset: FFFFFFFF
  struct EdgeSide/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EdgeSide
    constexpr EdgeSide(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.EdgeSide esLeft
    static constexpr const int esLeft = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.EdgeSide esLeft
    static ::UnityEngine::Rendering::Universal::EdgeSide _get_esLeft();
    // Set static field: static public UnityEngine.Rendering.Universal.EdgeSide esLeft
    static void _set_esLeft(::UnityEngine::Rendering::Universal::EdgeSide value);
    // static field const value: static public UnityEngine.Rendering.Universal.EdgeSide esRight
    static constexpr const int esRight = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.EdgeSide esRight
    static ::UnityEngine::Rendering::Universal::EdgeSide _get_esRight();
    // Set static field: static public UnityEngine.Rendering.Universal.EdgeSide esRight
    static void _set_esRight(::UnityEngine::Rendering::Universal::EdgeSide value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.EdgeSide
  #pragma pack(pop)
  static check_size<sizeof(EdgeSide), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_EdgeSideSizeCheck;
  static_assert(sizeof(EdgeSide) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
