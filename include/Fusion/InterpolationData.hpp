// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.Tick
#include "Fusion/Tick.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: InterpolationData
  struct InterpolationData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::InterpolationData, "Fusion", "InterpolationData");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.InterpolationData
  // [TokenAttribute] Offset: FFFFFFFF
  struct InterpolationData/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32* From
    // Size: 0x8
    // Offset: 0x0
    int* From;
    // Field size check
    static_assert(sizeof(int*) == 0x8);
    // public Fusion.Tick FromTick
    // Size: 0x4
    // Offset: 0x8
    ::Fusion::Tick FromTick;
    // Field size check
    static_assert(sizeof(::Fusion::Tick) == 0x4);
    // Padding between fields: FromTick and: To
    char __padding1[0x4] = {};
    // public System.Int32* To
    // Size: 0x8
    // Offset: 0x10
    int* To;
    // Field size check
    static_assert(sizeof(int*) == 0x8);
    // public Fusion.Tick ToTick
    // Size: 0x4
    // Offset: 0x18
    ::Fusion::Tick ToTick;
    // Field size check
    static_assert(sizeof(::Fusion::Tick) == 0x4);
    // public System.Single Alpha
    // Size: 0x4
    // Offset: 0x1C
    float Alpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: InterpolationData
    constexpr InterpolationData(int* From_ = {}, ::Fusion::Tick FromTick_ = {}, int* To_ = {}, ::Fusion::Tick ToTick_ = {}, float Alpha_ = {}) noexcept : From{From_}, FromTick{FromTick_}, To{To_}, ToTick{ToTick_}, Alpha{Alpha_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32* From
    [[deprecated("Use field access instead!")]] int*& dyn_From();
    // Get instance field reference: public Fusion.Tick FromTick
    [[deprecated("Use field access instead!")]] ::Fusion::Tick& dyn_FromTick();
    // Get instance field reference: public System.Int32* To
    [[deprecated("Use field access instead!")]] int*& dyn_To();
    // Get instance field reference: public Fusion.Tick ToTick
    [[deprecated("Use field access instead!")]] ::Fusion::Tick& dyn_ToTick();
    // Get instance field reference: public System.Single Alpha
    [[deprecated("Use field access instead!")]] float& dyn_Alpha();
  }; // Fusion.InterpolationData
  #pragma pack(pop)
  static check_size<sizeof(InterpolationData), 28 + sizeof(float)> __Fusion_InterpolationDataSizeCheck;
  static_assert(sizeof(InterpolationData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
