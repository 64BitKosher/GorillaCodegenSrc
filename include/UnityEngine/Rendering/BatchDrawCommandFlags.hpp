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
  // Forward declaring type: BatchDrawCommandFlags
  struct BatchDrawCommandFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchDrawCommandFlags, "UnityEngine.Rendering", "BatchDrawCommandFlags");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.BatchDrawCommandFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct BatchDrawCommandFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BatchDrawCommandFlags
    constexpr BatchDrawCommandFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.BatchDrawCommandFlags None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Rendering.BatchDrawCommandFlags None
    static ::UnityEngine::Rendering::BatchDrawCommandFlags _get_None();
    // Set static field: static public UnityEngine.Rendering.BatchDrawCommandFlags None
    static void _set_None(::UnityEngine::Rendering::BatchDrawCommandFlags value);
    // static field const value: static public UnityEngine.Rendering.BatchDrawCommandFlags FlipWinding
    static constexpr const int FlipWinding = 1;
    // Get static field: static public UnityEngine.Rendering.BatchDrawCommandFlags FlipWinding
    static ::UnityEngine::Rendering::BatchDrawCommandFlags _get_FlipWinding();
    // Set static field: static public UnityEngine.Rendering.BatchDrawCommandFlags FlipWinding
    static void _set_FlipWinding(::UnityEngine::Rendering::BatchDrawCommandFlags value);
    // static field const value: static public UnityEngine.Rendering.BatchDrawCommandFlags HasMotion
    static constexpr const int HasMotion = 2;
    // Get static field: static public UnityEngine.Rendering.BatchDrawCommandFlags HasMotion
    static ::UnityEngine::Rendering::BatchDrawCommandFlags _get_HasMotion();
    // Set static field: static public UnityEngine.Rendering.BatchDrawCommandFlags HasMotion
    static void _set_HasMotion(::UnityEngine::Rendering::BatchDrawCommandFlags value);
    // static field const value: static public UnityEngine.Rendering.BatchDrawCommandFlags IsLightMapped
    static constexpr const int IsLightMapped = 4;
    // Get static field: static public UnityEngine.Rendering.BatchDrawCommandFlags IsLightMapped
    static ::UnityEngine::Rendering::BatchDrawCommandFlags _get_IsLightMapped();
    // Set static field: static public UnityEngine.Rendering.BatchDrawCommandFlags IsLightMapped
    static void _set_IsLightMapped(::UnityEngine::Rendering::BatchDrawCommandFlags value);
    // static field const value: static public UnityEngine.Rendering.BatchDrawCommandFlags HasSortingPosition
    static constexpr const int HasSortingPosition = 8;
    // Get static field: static public UnityEngine.Rendering.BatchDrawCommandFlags HasSortingPosition
    static ::UnityEngine::Rendering::BatchDrawCommandFlags _get_HasSortingPosition();
    // Set static field: static public UnityEngine.Rendering.BatchDrawCommandFlags HasSortingPosition
    static void _set_HasSortingPosition(::UnityEngine::Rendering::BatchDrawCommandFlags value);
    // static field const value: static public UnityEngine.Rendering.BatchDrawCommandFlags LODCrossFade
    static constexpr const int LODCrossFade = 16;
    // Get static field: static public UnityEngine.Rendering.BatchDrawCommandFlags LODCrossFade
    static ::UnityEngine::Rendering::BatchDrawCommandFlags _get_LODCrossFade();
    // Set static field: static public UnityEngine.Rendering.BatchDrawCommandFlags LODCrossFade
    static void _set_LODCrossFade(::UnityEngine::Rendering::BatchDrawCommandFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.BatchDrawCommandFlags
  #pragma pack(pop)
  static check_size<sizeof(BatchDrawCommandFlags), 0 + sizeof(int)> __UnityEngine_Rendering_BatchDrawCommandFlagsSizeCheck;
  static_assert(sizeof(BatchDrawCommandFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
