// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CastHelper`1<T>
  template<typename T>
  struct CastHelper_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::CastHelper_1, "UnityEngine", "CastHelper`1");
// Type namespace: UnityEngine
namespace UnityEngine {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.CastHelper`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  struct CastHelper_1/*, public ::System::ValueType*/ {
    public:
    public:
    // public T t
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T t;
    // public System.IntPtr onePointerFurtherThanT
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr onePointerFurtherThanT;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: CastHelper_1
    constexpr CastHelper_1(T t_ = {}, ::System::IntPtr onePointerFurtherThanT_ = {}) noexcept : t{t_}, onePointerFurtherThanT{onePointerFurtherThanT_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public T t
    [[deprecated("Use field access instead!")]] T& dyn_t() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::CastHelper_1::dyn_t");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "t"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.IntPtr onePointerFurtherThanT
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_onePointerFurtherThanT() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::CastHelper_1::dyn_onePointerFurtherThanT");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "onePointerFurtherThanT"))->offset;
      return *reinterpret_cast<::System::IntPtr*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
  }; // UnityEngine.CastHelper`1
  // Could not write size check! Type: UnityEngine.CastHelper`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
