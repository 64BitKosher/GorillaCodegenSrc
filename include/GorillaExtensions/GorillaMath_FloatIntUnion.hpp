// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaExtensions.GorillaMath
#include "GorillaExtensions/GorillaMath.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GorillaExtensions::GorillaMath::FloatIntUnion, "GorillaExtensions", "GorillaMath/FloatIntUnion");
// Type namespace: GorillaExtensions
namespace GorillaExtensions {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: GorillaExtensions.GorillaMath/FloatIntUnion
  // [TokenAttribute] Offset: FFFFFFFF
  struct GorillaMath::FloatIntUnion/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single f
    // Size: 0x4
    // Offset: 0x0
    float f;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 tmp
    // Size: 0x4
    // Offset: 0x0
    int tmp;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FloatIntUnion
    constexpr FloatIntUnion(float f_ = {}, int tmp_ = {}) noexcept : f{f_}, tmp{tmp_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single f
    [[deprecated("Use field access instead!")]] float& dyn_f();
    // Get instance field reference: public System.Int32 tmp
    [[deprecated("Use field access instead!")]] int& dyn_tmp();
  }; // GorillaExtensions.GorillaMath/FloatIntUnion
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
