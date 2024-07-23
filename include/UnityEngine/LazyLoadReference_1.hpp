// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LazyLoadReference`1<T>
  template<typename T>
  struct LazyLoadReference_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::LazyLoadReference_1, "UnityEngine", "LazyLoadReference`1");
// Type namespace: UnityEngine
namespace UnityEngine {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.LazyLoadReference`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  struct LazyLoadReference_1/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 m_InstanceID
    // Size: 0x4
    // Offset: 0x0
    int m_InstanceID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LazyLoadReference_1
    constexpr LazyLoadReference_1(int m_InstanceID_ = {}) noexcept : m_InstanceID{m_InstanceID_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_InstanceID;
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 kInstanceID_None
    static int _get_kInstanceID_None() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::LazyLoadReference_1::_get_kInstanceID_None");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LazyLoadReference_1<T>>::get(), "kInstanceID_None"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 kInstanceID_None
    static void _set_kInstanceID_None(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::LazyLoadReference_1::_set_kInstanceID_None");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LazyLoadReference_1<T>>::get(), "kInstanceID_None", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 m_InstanceID
    [[deprecated("Use field access instead!")]] int& dyn_m_InstanceID() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::LazyLoadReference_1::dyn_m_InstanceID");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_InstanceID"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
  }; // UnityEngine.LazyLoadReference`1
  // Could not write size check! Type: UnityEngine.LazyLoadReference`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"