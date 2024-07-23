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
  // Forward declaring type: JoinType
  struct JoinType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::JoinType, "UnityEngine.Rendering.Universal", "JoinType");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.JoinType
  // [TokenAttribute] Offset: FFFFFFFF
  struct JoinType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: JoinType
    constexpr JoinType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.JoinType jtRound
    static constexpr const int jtRound = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.JoinType jtRound
    static ::UnityEngine::Rendering::Universal::JoinType _get_jtRound();
    // Set static field: static public UnityEngine.Rendering.Universal.JoinType jtRound
    static void _set_jtRound(::UnityEngine::Rendering::Universal::JoinType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.JoinType
  #pragma pack(pop)
  static check_size<sizeof(JoinType), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_JoinTypeSizeCheck;
  static_assert(sizeof(JoinType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"