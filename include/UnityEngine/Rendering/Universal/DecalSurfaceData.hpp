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
  // Forward declaring type: DecalSurfaceData
  struct DecalSurfaceData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalSurfaceData, "UnityEngine.Rendering.Universal", "DecalSurfaceData");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DecalSurfaceData
  // [TokenAttribute] Offset: FFFFFFFF
  struct DecalSurfaceData/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DecalSurfaceData
    constexpr DecalSurfaceData(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.DecalSurfaceData Albedo
    static constexpr const int Albedo = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.DecalSurfaceData Albedo
    static ::UnityEngine::Rendering::Universal::DecalSurfaceData _get_Albedo();
    // Set static field: static public UnityEngine.Rendering.Universal.DecalSurfaceData Albedo
    static void _set_Albedo(::UnityEngine::Rendering::Universal::DecalSurfaceData value);
    // static field const value: static public UnityEngine.Rendering.Universal.DecalSurfaceData AlbedoNormal
    static constexpr const int AlbedoNormal = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.DecalSurfaceData AlbedoNormal
    static ::UnityEngine::Rendering::Universal::DecalSurfaceData _get_AlbedoNormal();
    // Set static field: static public UnityEngine.Rendering.Universal.DecalSurfaceData AlbedoNormal
    static void _set_AlbedoNormal(::UnityEngine::Rendering::Universal::DecalSurfaceData value);
    // static field const value: static public UnityEngine.Rendering.Universal.DecalSurfaceData AlbedoNormalMAOS
    static constexpr const int AlbedoNormalMAOS = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.DecalSurfaceData AlbedoNormalMAOS
    static ::UnityEngine::Rendering::Universal::DecalSurfaceData _get_AlbedoNormalMAOS();
    // Set static field: static public UnityEngine.Rendering.Universal.DecalSurfaceData AlbedoNormalMAOS
    static void _set_AlbedoNormalMAOS(::UnityEngine::Rendering::Universal::DecalSurfaceData value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.DecalSurfaceData
  #pragma pack(pop)
  static check_size<sizeof(DecalSurfaceData), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_DecalSurfaceDataSizeCheck;
  static_assert(sizeof(DecalSurfaceData) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"