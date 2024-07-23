// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BoingKit.Codec
#include "BoingKit/Codec.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BoingKit::Codec::IntFloat, "BoingKit", "Codec/IntFloat");
// Type namespace: BoingKit
namespace BoingKit {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: BoingKit.Codec/IntFloat
  // [TokenAttribute] Offset: FFFFFFFF
  struct Codec::IntFloat/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 IntValue
    // Size: 0x4
    // Offset: 0x0
    int IntValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single FloatValue
    // Size: 0x4
    // Offset: 0x0
    float FloatValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: IntFloat
    constexpr IntFloat(int IntValue_ = {}, float FloatValue_ = {}) noexcept : IntValue{IntValue_}, FloatValue{FloatValue_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 IntValue
    [[deprecated("Use field access instead!")]] int& dyn_IntValue();
    // Get instance field reference: public System.Single FloatValue
    [[deprecated("Use field access instead!")]] float& dyn_FloatValue();
  }; // BoingKit.Codec/IntFloat
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
