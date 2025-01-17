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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: UnityLayer
  struct UnityLayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityLayer, "", "UnityLayer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityLayer
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnityLayer/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UnityLayer
    constexpr UnityLayer(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityLayer Default
    static constexpr const int Default = 0;
    // Get static field: static public UnityLayer Default
    static ::GlobalNamespace::UnityLayer _get_Default();
    // Set static field: static public UnityLayer Default
    static void _set_Default(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer TransparentFX
    static constexpr const int TransparentFX = 1;
    // Get static field: static public UnityLayer TransparentFX
    static ::GlobalNamespace::UnityLayer _get_TransparentFX();
    // Set static field: static public UnityLayer TransparentFX
    static void _set_TransparentFX(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer IgnoreRaycast
    static constexpr const int IgnoreRaycast = 2;
    // Get static field: static public UnityLayer IgnoreRaycast
    static ::GlobalNamespace::UnityLayer _get_IgnoreRaycast();
    // Set static field: static public UnityLayer IgnoreRaycast
    static void _set_IgnoreRaycast(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer Zone
    static constexpr const int Zone = 3;
    // Get static field: static public UnityLayer Zone
    static ::GlobalNamespace::UnityLayer _get_Zone();
    // Set static field: static public UnityLayer Zone
    static void _set_Zone(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer Water
    static constexpr const int Water = 4;
    // Get static field: static public UnityLayer Water
    static ::GlobalNamespace::UnityLayer _get_Water();
    // Set static field: static public UnityLayer Water
    static void _set_Water(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer UI
    static constexpr const int UI = 5;
    // Get static field: static public UnityLayer UI
    static ::GlobalNamespace::UnityLayer _get_UI();
    // Set static field: static public UnityLayer UI
    static void _set_UI(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer TempRainInCityPleaseFixSomebody
    static constexpr const int TempRainInCityPleaseFixSomebody = 7;
    // Get static field: static public UnityLayer TempRainInCityPleaseFixSomebody
    static ::GlobalNamespace::UnityLayer _get_TempRainInCityPleaseFixSomebody();
    // Set static field: static public UnityLayer TempRainInCityPleaseFixSomebody
    static void _set_TempRainInCityPleaseFixSomebody(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer GorillaBodyCollider
    static constexpr const int GorillaBodyCollider = 8;
    // Get static field: static public UnityLayer GorillaBodyCollider
    static ::GlobalNamespace::UnityLayer _get_GorillaBodyCollider();
    // Set static field: static public UnityLayer GorillaBodyCollider
    static void _set_GorillaBodyCollider(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer GorillaObject
    static constexpr const int GorillaObject = 9;
    // Get static field: static public UnityLayer GorillaObject
    static ::GlobalNamespace::UnityLayer _get_GorillaObject();
    // Set static field: static public UnityLayer GorillaObject
    static void _set_GorillaObject(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer GorillaHand
    static constexpr const int GorillaHand = 10;
    // Get static field: static public UnityLayer GorillaHand
    static ::GlobalNamespace::UnityLayer _get_GorillaHand();
    // Set static field: static public UnityLayer GorillaHand
    static void _set_GorillaHand(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer GorillaTrigger
    static constexpr const int GorillaTrigger = 11;
    // Get static field: static public UnityLayer GorillaTrigger
    static ::GlobalNamespace::UnityLayer _get_GorillaTrigger();
    // Set static field: static public UnityLayer GorillaTrigger
    static void _set_GorillaTrigger(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer MetaReportScreen
    static constexpr const int MetaReportScreen = 12;
    // Get static field: static public UnityLayer MetaReportScreen
    static ::GlobalNamespace::UnityLayer _get_MetaReportScreen();
    // Set static field: static public UnityLayer MetaReportScreen
    static void _set_MetaReportScreen(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer GorillaHead
    static constexpr const int GorillaHead = 13;
    // Get static field: static public UnityLayer GorillaHead
    static ::GlobalNamespace::UnityLayer _get_GorillaHead();
    // Set static field: static public UnityLayer GorillaHead
    static void _set_GorillaHead(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer GorillaTagCollider
    static constexpr const int GorillaTagCollider = 14;
    // Get static field: static public UnityLayer GorillaTagCollider
    static ::GlobalNamespace::UnityLayer _get_GorillaTagCollider();
    // Set static field: static public UnityLayer GorillaTagCollider
    static void _set_GorillaTagCollider(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer GorillaBoundary
    static constexpr const int GorillaBoundary = 15;
    // Get static field: static public UnityLayer GorillaBoundary
    static ::GlobalNamespace::UnityLayer _get_GorillaBoundary();
    // Set static field: static public UnityLayer GorillaBoundary
    static void _set_GorillaBoundary(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer GorillaSpectator
    static constexpr const int GorillaSpectator = 16;
    // Get static field: static public UnityLayer GorillaSpectator
    static ::GlobalNamespace::UnityLayer _get_GorillaSpectator();
    // Set static field: static public UnityLayer GorillaSpectator
    static void _set_GorillaSpectator(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer GorillaInteractable
    static constexpr const int GorillaInteractable = 18;
    // Get static field: static public UnityLayer GorillaInteractable
    static ::GlobalNamespace::UnityLayer _get_GorillaInteractable();
    // Set static field: static public UnityLayer GorillaInteractable
    static void _set_GorillaInteractable(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer GorillaParticle
    static constexpr const int GorillaParticle = 20;
    // Get static field: static public UnityLayer GorillaParticle
    static ::GlobalNamespace::UnityLayer _get_GorillaParticle();
    // Set static field: static public UnityLayer GorillaParticle
    static void _set_GorillaParticle(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer GorillaCosmetics
    static constexpr const int GorillaCosmetics = 21;
    // Get static field: static public UnityLayer GorillaCosmetics
    static ::GlobalNamespace::UnityLayer _get_GorillaCosmetics();
    // Set static field: static public UnityLayer GorillaCosmetics
    static void _set_GorillaCosmetics(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer MirrorOnly
    static constexpr const int MirrorOnly = 22;
    // Get static field: static public UnityLayer MirrorOnly
    static ::GlobalNamespace::UnityLayer _get_MirrorOnly();
    // Set static field: static public UnityLayer MirrorOnly
    static void _set_MirrorOnly(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer GorillaThrowable
    static constexpr const int GorillaThrowable = 23;
    // Get static field: static public UnityLayer GorillaThrowable
    static ::GlobalNamespace::UnityLayer _get_GorillaThrowable();
    // Set static field: static public UnityLayer GorillaThrowable
    static void _set_GorillaThrowable(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer GorillaCosmeticParticle
    static constexpr const int GorillaCosmeticParticle = 25;
    // Get static field: static public UnityLayer GorillaCosmeticParticle
    static ::GlobalNamespace::UnityLayer _get_GorillaCosmeticParticle();
    // Set static field: static public UnityLayer GorillaCosmeticParticle
    static void _set_GorillaCosmeticParticle(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer NoMirror
    static constexpr const int NoMirror = 27;
    // Get static field: static public UnityLayer NoMirror
    static ::GlobalNamespace::UnityLayer _get_NoMirror();
    // Set static field: static public UnityLayer NoMirror
    static void _set_NoMirror(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer GorillaSlingshotCollider
    static constexpr const int GorillaSlingshotCollider = 28;
    // Get static field: static public UnityLayer GorillaSlingshotCollider
    static ::GlobalNamespace::UnityLayer _get_GorillaSlingshotCollider();
    // Set static field: static public UnityLayer GorillaSlingshotCollider
    static void _set_GorillaSlingshotCollider(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer RopeSwing
    static constexpr const int RopeSwing = 29;
    // Get static field: static public UnityLayer RopeSwing
    static ::GlobalNamespace::UnityLayer _get_RopeSwing();
    // Set static field: static public UnityLayer RopeSwing
    static void _set_RopeSwing(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer Prop
    static constexpr const int Prop = 30;
    // Get static field: static public UnityLayer Prop
    static ::GlobalNamespace::UnityLayer _get_Prop();
    // Set static field: static public UnityLayer Prop
    static void _set_Prop(::GlobalNamespace::UnityLayer value);
    // static field const value: static public UnityLayer Bake
    static constexpr const int Bake = 31;
    // Get static field: static public UnityLayer Bake
    static ::GlobalNamespace::UnityLayer _get_Bake();
    // Set static field: static public UnityLayer Bake
    static void _set_Bake(::GlobalNamespace::UnityLayer value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityLayer
  #pragma pack(pop)
  static check_size<sizeof(UnityLayer), 0 + sizeof(int)> __GlobalNamespace_UnityLayerSizeCheck;
  static_assert(sizeof(UnityLayer) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
