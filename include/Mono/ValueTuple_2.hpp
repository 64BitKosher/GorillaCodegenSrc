// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Mono
namespace Mono {
  // Forward declaring type: ValueTuple`2<T1, T2>
  template<typename T1, typename T2>
  struct ValueTuple_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Mono::ValueTuple_2, "Mono", "ValueTuple`2");
// Type namespace: Mono
namespace Mono {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.ValueTuple`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1, typename T2>
  struct ValueTuple_2/*, public ::System::ValueType*/ {
    public:
    public:
    // public T1 Item1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T1 Item1;
    // public T2 Item2
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T2 Item2;
    public:
    // Creating value type constructor for type: ValueTuple_2
    constexpr ValueTuple_2(T1 Item1_ = {}, T2 Item2_ = {}) noexcept : Item1{Item1_}, Item2{Item2_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public T1 Item1
    [[deprecated("Use field access instead!")]] T1& dyn_Item1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::ValueTuple_2::dyn_Item1");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Item1"))->offset;
      return *reinterpret_cast<T1*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T2 Item2
    [[deprecated("Use field access instead!")]] T2& dyn_Item2() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::ValueTuple_2::dyn_Item2");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Item2"))->offset;
      return *reinterpret_cast<T2*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
  }; // Mono.ValueTuple`2
  // Could not write size check! Type: Mono.ValueTuple`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
