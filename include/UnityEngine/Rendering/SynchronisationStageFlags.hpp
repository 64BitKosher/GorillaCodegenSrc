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
  // Forward declaring type: SynchronisationStageFlags
  struct SynchronisationStageFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SynchronisationStageFlags, "UnityEngine.Rendering", "SynchronisationStageFlags");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.SynchronisationStageFlags
  // [TokenAttribute] Offset: FFFFFFFF
  struct SynchronisationStageFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SynchronisationStageFlags
    constexpr SynchronisationStageFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.SynchronisationStageFlags VertexProcessing
    static constexpr const int VertexProcessing = 1;
    // Get static field: static public UnityEngine.Rendering.SynchronisationStageFlags VertexProcessing
    static ::UnityEngine::Rendering::SynchronisationStageFlags _get_VertexProcessing();
    // Set static field: static public UnityEngine.Rendering.SynchronisationStageFlags VertexProcessing
    static void _set_VertexProcessing(::UnityEngine::Rendering::SynchronisationStageFlags value);
    // static field const value: static public UnityEngine.Rendering.SynchronisationStageFlags PixelProcessing
    static constexpr const int PixelProcessing = 2;
    // Get static field: static public UnityEngine.Rendering.SynchronisationStageFlags PixelProcessing
    static ::UnityEngine::Rendering::SynchronisationStageFlags _get_PixelProcessing();
    // Set static field: static public UnityEngine.Rendering.SynchronisationStageFlags PixelProcessing
    static void _set_PixelProcessing(::UnityEngine::Rendering::SynchronisationStageFlags value);
    // static field const value: static public UnityEngine.Rendering.SynchronisationStageFlags ComputeProcessing
    static constexpr const int ComputeProcessing = 4;
    // Get static field: static public UnityEngine.Rendering.SynchronisationStageFlags ComputeProcessing
    static ::UnityEngine::Rendering::SynchronisationStageFlags _get_ComputeProcessing();
    // Set static field: static public UnityEngine.Rendering.SynchronisationStageFlags ComputeProcessing
    static void _set_ComputeProcessing(::UnityEngine::Rendering::SynchronisationStageFlags value);
    // static field const value: static public UnityEngine.Rendering.SynchronisationStageFlags AllGPUOperations
    static constexpr const int AllGPUOperations = 7;
    // Get static field: static public UnityEngine.Rendering.SynchronisationStageFlags AllGPUOperations
    static ::UnityEngine::Rendering::SynchronisationStageFlags _get_AllGPUOperations();
    // Set static field: static public UnityEngine.Rendering.SynchronisationStageFlags AllGPUOperations
    static void _set_AllGPUOperations(::UnityEngine::Rendering::SynchronisationStageFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.SynchronisationStageFlags
  #pragma pack(pop)
  static check_size<sizeof(SynchronisationStageFlags), 0 + sizeof(int)> __UnityEngine_Rendering_SynchronisationStageFlagsSizeCheck;
  static_assert(sizeof(SynchronisationStageFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
