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
  // Forward declaring type: ValueTuple`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  struct ValueTuple_3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Mono::ValueTuple_3, "Mono", "ValueTuple`3");
// Type namespace: Mono
namespace Mono {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.ValueTuple`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1, typename T2, typename T3>
  struct ValueTuple_3/*, public ::System::ValueType*/ {
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
    // public T3 Item3
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T3 Item3;
    public:
    // Creating value type constructor for type: ValueTuple_3
    constexpr ValueTuple_3(T1 Item1_ = {}, T2 Item2_ = {}, T3 Item3_ = {}) noexcept : Item1{Item1_}, Item2{Item2_}, Item3{Item3_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public T1 Item1
    [[deprecated("Use field access instead!")]] T1& dyn_Item1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::ValueTuple_3::dyn_Item1");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Item1"))->offset;
      return *reinterpret_cast<T1*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T2 Item2
    [[deprecated("Use field access instead!")]] T2& dyn_Item2() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::ValueTuple_3::dyn_Item2");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Item2"))->offset;
      return *reinterpret_cast<T2*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T3 Item3
    [[deprecated("Use field access instead!")]] T3& dyn_Item3() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::ValueTuple_3::dyn_Item3");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Item3"))->offset;
      return *reinterpret_cast<T3*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
  }; // Mono.ValueTuple`3
  // Could not write size check! Type: Mono.ValueTuple`3 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"