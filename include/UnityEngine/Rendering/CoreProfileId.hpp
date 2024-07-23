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
  // Forward declaring type: CoreProfileId
  struct CoreProfileId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CoreProfileId, "UnityEngine.Rendering", "CoreProfileId");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.CoreProfileId
  // [TokenAttribute] Offset: FFFFFFFF
  struct CoreProfileId/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CoreProfileId
    constexpr CoreProfileId(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.CoreProfileId BlitTextureInPotAtlas
    static constexpr const int BlitTextureInPotAtlas = 0;
    // Get static field: static public UnityEngine.Rendering.CoreProfileId BlitTextureInPotAtlas
    static ::UnityEngine::Rendering::CoreProfileId _get_BlitTextureInPotAtlas();
    // Set static field: static public UnityEngine.Rendering.CoreProfileId BlitTextureInPotAtlas
    static void _set_BlitTextureInPotAtlas(::UnityEngine::Rendering::CoreProfileId value);
    // static field const value: static public UnityEngine.Rendering.CoreProfileId APVCellStreamingUpdate
    static constexpr const int APVCellStreamingUpdate = 1;
    // Get static field: static public UnityEngine.Rendering.CoreProfileId APVCellStreamingUpdate
    static ::UnityEngine::Rendering::CoreProfileId _get_APVCellStreamingUpdate();
    // Set static field: static public UnityEngine.Rendering.CoreProfileId APVCellStreamingUpdate
    static void _set_APVCellStreamingUpdate(::UnityEngine::Rendering::CoreProfileId value);
    // static field const value: static public UnityEngine.Rendering.CoreProfileId APVScenarioBlendingUpdate
    static constexpr const int APVScenarioBlendingUpdate = 2;
    // Get static field: static public UnityEngine.Rendering.CoreProfileId APVScenarioBlendingUpdate
    static ::UnityEngine::Rendering::CoreProfileId _get_APVScenarioBlendingUpdate();
    // Set static field: static public UnityEngine.Rendering.CoreProfileId APVScenarioBlendingUpdate
    static void _set_APVScenarioBlendingUpdate(::UnityEngine::Rendering::CoreProfileId value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.CoreProfileId
  #pragma pack(pop)
  static check_size<sizeof(CoreProfileId), 0 + sizeof(int)> __UnityEngine_Rendering_CoreProfileIdSizeCheck;
  static_assert(sizeof(CoreProfileId) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
