// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: WriteAccuracy
  struct WriteAccuracy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::WriteAccuracy, "Fusion", "WriteAccuracy");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.WriteAccuracy
  // [TokenAttribute] Offset: FFFFFFFF
  struct WriteAccuracy/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Single Value
    // Size: 0x4
    // Offset: 0x0
    float Value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: WriteAccuracy
    constexpr WriteAccuracy(float Value_ = {}) noexcept : Value{Value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return Value;
    }
    // Get instance field reference: System.Single Value
    [[deprecated("Use field access instead!")]] float& dyn_Value();
    // System.Void .ctor(System.Single value)
    // Offset: 0x2B0B214
    // ABORTED: conflicts with another method.  WriteAccuracy(float value);
  }; // Fusion.WriteAccuracy
  #pragma pack(pop)
  static check_size<sizeof(WriteAccuracy), 0 + sizeof(float)> __Fusion_WriteAccuracySizeCheck;
  static_assert(sizeof(WriteAccuracy) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::WriteAccuracy::WriteAccuracy
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
