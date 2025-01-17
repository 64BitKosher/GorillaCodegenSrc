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
  // Forward declaring type: ShaderPathID
  struct ShaderPathID;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShaderPathID, "UnityEngine.Rendering.Universal", "ShaderPathID");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.ShaderPathID
  // [TokenAttribute] Offset: FFFFFFFF
  struct ShaderPathID/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ShaderPathID
    constexpr ShaderPathID(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.ShaderPathID Lit
    static constexpr const int Lit = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.ShaderPathID Lit
    static ::UnityEngine::Rendering::Universal::ShaderPathID _get_Lit();
    // Set static field: static public UnityEngine.Rendering.Universal.ShaderPathID Lit
    static void _set_Lit(::UnityEngine::Rendering::Universal::ShaderPathID value);
    // static field const value: static public UnityEngine.Rendering.Universal.ShaderPathID SimpleLit
    static constexpr const int SimpleLit = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.ShaderPathID SimpleLit
    static ::UnityEngine::Rendering::Universal::ShaderPathID _get_SimpleLit();
    // Set static field: static public UnityEngine.Rendering.Universal.ShaderPathID SimpleLit
    static void _set_SimpleLit(::UnityEngine::Rendering::Universal::ShaderPathID value);
    // static field const value: static public UnityEngine.Rendering.Universal.ShaderPathID Unlit
    static constexpr const int Unlit = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.ShaderPathID Unlit
    static ::UnityEngine::Rendering::Universal::ShaderPathID _get_Unlit();
    // Set static field: static public UnityEngine.Rendering.Universal.ShaderPathID Unlit
    static void _set_Unlit(::UnityEngine::Rendering::Universal::ShaderPathID value);
    // static field const value: static public UnityEngine.Rendering.Universal.ShaderPathID TerrainLit
    static constexpr const int TerrainLit = 3;
    // Get static field: static public UnityEngine.Rendering.Universal.ShaderPathID TerrainLit
    static ::UnityEngine::Rendering::Universal::ShaderPathID _get_TerrainLit();
    // Set static field: static public UnityEngine.Rendering.Universal.ShaderPathID TerrainLit
    static void _set_TerrainLit(::UnityEngine::Rendering::Universal::ShaderPathID value);
    // static field const value: static public UnityEngine.Rendering.Universal.ShaderPathID ParticlesLit
    static constexpr const int ParticlesLit = 4;
    // Get static field: static public UnityEngine.Rendering.Universal.ShaderPathID ParticlesLit
    static ::UnityEngine::Rendering::Universal::ShaderPathID _get_ParticlesLit();
    // Set static field: static public UnityEngine.Rendering.Universal.ShaderPathID ParticlesLit
    static void _set_ParticlesLit(::UnityEngine::Rendering::Universal::ShaderPathID value);
    // static field const value: static public UnityEngine.Rendering.Universal.ShaderPathID ParticlesSimpleLit
    static constexpr const int ParticlesSimpleLit = 5;
    // Get static field: static public UnityEngine.Rendering.Universal.ShaderPathID ParticlesSimpleLit
    static ::UnityEngine::Rendering::Universal::ShaderPathID _get_ParticlesSimpleLit();
    // Set static field: static public UnityEngine.Rendering.Universal.ShaderPathID ParticlesSimpleLit
    static void _set_ParticlesSimpleLit(::UnityEngine::Rendering::Universal::ShaderPathID value);
    // static field const value: static public UnityEngine.Rendering.Universal.ShaderPathID ParticlesUnlit
    static constexpr const int ParticlesUnlit = 6;
    // Get static field: static public UnityEngine.Rendering.Universal.ShaderPathID ParticlesUnlit
    static ::UnityEngine::Rendering::Universal::ShaderPathID _get_ParticlesUnlit();
    // Set static field: static public UnityEngine.Rendering.Universal.ShaderPathID ParticlesUnlit
    static void _set_ParticlesUnlit(::UnityEngine::Rendering::Universal::ShaderPathID value);
    // static field const value: static public UnityEngine.Rendering.Universal.ShaderPathID BakedLit
    static constexpr const int BakedLit = 7;
    // Get static field: static public UnityEngine.Rendering.Universal.ShaderPathID BakedLit
    static ::UnityEngine::Rendering::Universal::ShaderPathID _get_BakedLit();
    // Set static field: static public UnityEngine.Rendering.Universal.ShaderPathID BakedLit
    static void _set_BakedLit(::UnityEngine::Rendering::Universal::ShaderPathID value);
    // static field const value: static public UnityEngine.Rendering.Universal.ShaderPathID SpeedTree7
    static constexpr const int SpeedTree7 = 8;
    // Get static field: static public UnityEngine.Rendering.Universal.ShaderPathID SpeedTree7
    static ::UnityEngine::Rendering::Universal::ShaderPathID _get_SpeedTree7();
    // Set static field: static public UnityEngine.Rendering.Universal.ShaderPathID SpeedTree7
    static void _set_SpeedTree7(::UnityEngine::Rendering::Universal::ShaderPathID value);
    // static field const value: static public UnityEngine.Rendering.Universal.ShaderPathID SpeedTree7Billboard
    static constexpr const int SpeedTree7Billboard = 9;
    // Get static field: static public UnityEngine.Rendering.Universal.ShaderPathID SpeedTree7Billboard
    static ::UnityEngine::Rendering::Universal::ShaderPathID _get_SpeedTree7Billboard();
    // Set static field: static public UnityEngine.Rendering.Universal.ShaderPathID SpeedTree7Billboard
    static void _set_SpeedTree7Billboard(::UnityEngine::Rendering::Universal::ShaderPathID value);
    // static field const value: static public UnityEngine.Rendering.Universal.ShaderPathID SpeedTree8
    static constexpr const int SpeedTree8 = 10;
    // Get static field: static public UnityEngine.Rendering.Universal.ShaderPathID SpeedTree8
    static ::UnityEngine::Rendering::Universal::ShaderPathID _get_SpeedTree8();
    // Set static field: static public UnityEngine.Rendering.Universal.ShaderPathID SpeedTree8
    static void _set_SpeedTree8(::UnityEngine::Rendering::Universal::ShaderPathID value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.ShaderPathID
  #pragma pack(pop)
  static check_size<sizeof(ShaderPathID), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_ShaderPathIDSizeCheck;
  static_assert(sizeof(ShaderPathID) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
